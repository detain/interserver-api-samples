#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "region.h"



static region_t *region_create_internal(
    int *region_id,
    char *region_name
    ) {
    region_t *region_local_var = malloc(sizeof(region_t));
    if (!region_local_var) {
        return NULL;
    }
    memset(region_local_var, 0, sizeof(region_t));
    region_local_var->_library_owned = 1;
    region_local_var->region_id = region_id;
    region_local_var->region_name = region_name;
    return region_local_var;
}

__attribute__((deprecated)) region_t *region_create(
    int *region_id,
    char *region_name
    ) {
    int *region_id_copy = NULL;
    if (region_id) {
        region_id_copy = malloc(sizeof(int));
        if (region_id_copy) *region_id_copy = *region_id;
    }
    region_t *result = region_create_internal (
        region_id_copy,
        region_name
        );
    if (!result) {
        free(region_id_copy);
    }
    return result;
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
    if (region->region_id) {
        free(region->region_id);
        region->region_id = NULL;
    }
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
    if(cJSON_AddNumberToObject(item, "region_id", *region->region_id) == NULL) {
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

    // define the local variable for region->region_id
    int *region_id_local_var = NULL;

    char *region_name_local_str = NULL;

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
    region_id_local_var = malloc(sizeof(int));
    if(!region_id_local_var)
    {
        goto end;
    }
    *region_id_local_var = region_id->valuedouble;
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


    if (region_name && !cJSON_IsNull(region_name)) region_name_local_str = strdup(region_name->valuestring);

    region_local_var = region_create_internal (
        region_id_local_var,
        region_name_local_str
        );

    if (!region_local_var) {
        goto end;
    }

    return region_local_var;
end:
    if (region_id_local_var) {
        free(region_id_local_var);
        region_id_local_var = NULL;
    }
    if (region_name_local_str) {
        free(region_name_local_str);
        region_name_local_str = NULL;
    }
    return NULL;

}
