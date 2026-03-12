#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_cp_data.h"



static vps_cp_data_t *vps_cp_data_create_internal(
    char *name,
    int cost
    ) {
    vps_cp_data_t *vps_cp_data_local_var = malloc(sizeof(vps_cp_data_t));
    if (!vps_cp_data_local_var) {
        return NULL;
    }
    vps_cp_data_local_var->name = name;
    vps_cp_data_local_var->cost = cost;

    vps_cp_data_local_var->_library_owned = 1;
    return vps_cp_data_local_var;
}

__attribute__((deprecated)) vps_cp_data_t *vps_cp_data_create(
    char *name,
    int cost
    ) {
    return vps_cp_data_create_internal (
        name,
        cost
        );
}

void vps_cp_data_free(vps_cp_data_t *vps_cp_data) {
    if(NULL == vps_cp_data){
        return ;
    }
    if(vps_cp_data->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_cp_data_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_cp_data->name) {
        free(vps_cp_data->name);
        vps_cp_data->name = NULL;
    }
    free(vps_cp_data);
}

cJSON *vps_cp_data_convertToJSON(vps_cp_data_t *vps_cp_data) {
    cJSON *item = cJSON_CreateObject();

    // vps_cp_data->name
    if(vps_cp_data->name) {
    if(cJSON_AddStringToObject(item, "name", vps_cp_data->name) == NULL) {
    goto fail; //String
    }
    }


    // vps_cp_data->cost
    if(vps_cp_data->cost) {
    if(cJSON_AddNumberToObject(item, "cost", vps_cp_data->cost) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

vps_cp_data_t *vps_cp_data_parseFromJSON(cJSON *vps_cp_dataJSON){

    vps_cp_data_t *vps_cp_data_local_var = NULL;

    // vps_cp_data->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(vps_cp_dataJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // vps_cp_data->cost
    cJSON *cost = cJSON_GetObjectItemCaseSensitive(vps_cp_dataJSON, "cost");
    if (cJSON_IsNull(cost)) {
        cost = NULL;
    }
    if (cost) { 
    if(!cJSON_IsNumber(cost))
    {
    goto end; //Numeric
    }
    }


    vps_cp_data_local_var = vps_cp_data_create_internal (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        cost ? cost->valuedouble : 0
        );

    return vps_cp_data_local_var;
end:
    return NULL;

}
