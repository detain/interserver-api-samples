#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "region.h"



static region_t *region_create_internal(
    int region_id,
    char *region_name
    ) {
    region_t *region_local_var = malloc(sizeof(region_t));
    if (!region_local_var) {
        return NULL;
    }
    region_local_var->region_id = region_id;
    region_local_var->region_name = region_name;

    region_local_var->_library_owned = 1;
    return region_local_var;
}

__attribute__((deprecated)) region_t *region_create(
    int region_id,
    char *region_name
    ) {
    return region_create_internal (
        region_id,
        region_name
        );
}

void region_free(region_t *region) {
    if(NULL == region){
        return ;
    }
    if(region->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "region_free");
        return ;
    }
    listEntry_t *listEntry;
    if (region->region_name) {
        free(region->region_name);
        region->region_name = NULL;
    }
    free(region);
}

cJSON *region_convertToJSON(region_t *region) {
    cJSON *item = cJSON_CreateObject();

    // region->region_id
    if(region->region_id) {
    if(cJSON_AddNumberToObject(item, "region_id", region->region_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // region->region_name
    if(region->region_name) {
    if(cJSON_AddStringToObject(item, "region_name", region->region_name) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

region_t *region_parseFromJSON(cJSON *regionJSON){

    region_t *region_local_var = NULL;

    // region->region_id
    cJSON *region_id = cJSON_GetObjectItemCaseSensitive(regionJSON, "region_id");
    if (cJSON_IsNull(region_id)) {
        region_id = NULL;
    }
    if (region_id) { 
    if(!cJSON_IsNumber(region_id))
    {
    goto end; //Numeric
    }
    }

    // region->region_name
    cJSON *region_name = cJSON_GetObjectItemCaseSensitive(regionJSON, "region_name");
    if (cJSON_IsNull(region_name)) {
        region_name = NULL;
    }
    if (region_name) { 
    if(!cJSON_IsString(region_name) && !cJSON_IsNull(region_name))
    {
    goto end; //String
    }
    }


    region_local_var = region_create_internal (
        region_id ? region_id->valuedouble : 0,
        region_name && !cJSON_IsNull(region_name) ? strdup(region_name->valuestring) : NULL
        );

    return region_local_var;
end:
    return NULL;

}
