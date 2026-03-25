#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_cp_data.h"



static vps_cp_data_t *vps_cp_data_create_internal(
    char *name,
    int *cost
    ) {
    vps_cp_data_t *vps_cp_data_local_var = malloc(sizeof(vps_cp_data_t));
    if (!vps_cp_data_local_var) {
        return NULL;
    }
    memset(vps_cp_data_local_var, 0, sizeof(vps_cp_data_t));
    vps_cp_data_local_var->_library_owned = 1;
    vps_cp_data_local_var->name = name;
    vps_cp_data_local_var->cost = cost;
    return vps_cp_data_local_var;
}

__attribute__((deprecated)) vps_cp_data_t *vps_cp_data_create(
    char *name,
    int *cost
    ) {
    int *cost_copy = NULL;
    if (cost) {
        cost_copy = malloc(sizeof(int));
        if (cost_copy) *cost_copy = *cost;
    }
    vps_cp_data_t *result = vps_cp_data_create_internal (
        name,
        cost_copy
        );
    if (!result) {
        free(cost_copy);
    }
    return result;
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
    if (vps_cp_data->cost) {
        free(vps_cp_data->cost);
        vps_cp_data->cost = NULL;
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
    if(cJSON_AddNumberToObject(item, "cost", *vps_cp_data->cost) == NULL) {
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

    char *name_local_str = NULL;

    // define the local variable for vps_cp_data->cost
    int *cost_local_var = NULL;

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
    cost_local_var = malloc(sizeof(int));
    if(!cost_local_var)
    {
        goto end;
    }
    *cost_local_var = cost->valuedouble;
    }


    if (name && !cJSON_IsNull(name)) name_local_str = strdup(name->valuestring);

    vps_cp_data_local_var = vps_cp_data_create_internal (
        name_local_str,
        cost_local_var
        );

    if (!vps_cp_data_local_var) {
        goto end;
    }

    return vps_cp_data_local_var;
end:
    if (name_local_str) {
        free(name_local_str);
        name_local_str = NULL;
    }
    if (cost_local_var) {
        free(cost_local_var);
        cost_local_var = NULL;
    }
    return NULL;

}
