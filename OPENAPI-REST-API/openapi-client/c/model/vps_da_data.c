#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_da_data.h"



static vps_da_data_t *vps_da_data_create_internal(
    vps_da_license_t *free
    ) {
    vps_da_data_t *vps_da_data_local_var = malloc(sizeof(vps_da_data_t));
    if (!vps_da_data_local_var) {
        return NULL;
    }
    memset(vps_da_data_local_var, 0, sizeof(vps_da_data_t));
    vps_da_data_local_var->_library_owned = 1;
    vps_da_data_local_var->free = free;
    return vps_da_data_local_var;
}

__attribute__((deprecated)) vps_da_data_t *vps_da_data_create(
    vps_da_license_t *free
    ) {
    vps_da_data_t *result = vps_da_data_create_internal (
        free
        );
    if (!result) {
    }
    return result;
}

void vps_da_data_free(vps_da_data_t *vps_da_data) {
    if(NULL == vps_da_data){
        return ;
    }
    if(vps_da_data->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_da_data_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_da_data->free) {
        vps_da_license_free(vps_da_data->free);
        vps_da_data->free = NULL;
    }
    free(vps_da_data);
}

cJSON *vps_da_data_convertToJSON(vps_da_data_t *vps_da_data) {
    cJSON *item = cJSON_CreateObject();

    // vps_da_data->free
    if(vps_da_data->free) {
    cJSON *free_local_JSON = vps_da_license_convertToJSON(vps_da_data->free);
    if(free_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "free", free_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

vps_da_data_t *vps_da_data_parseFromJSON(cJSON *vps_da_dataJSON){

    vps_da_data_t *vps_da_data_local_var = NULL;

    // define the local variable for vps_da_data->free
    vps_da_license_t *free_local_nonprim = NULL;

    // vps_da_data->free
    cJSON *free = cJSON_GetObjectItemCaseSensitive(vps_da_dataJSON, "free");
    if (cJSON_IsNull(free)) {
        free = NULL;
    }
    if (free) { 
    free_local_nonprim = vps_da_license_parseFromJSON(free); //nonprimitive
    }



    vps_da_data_local_var = vps_da_data_create_internal (
        free ? free_local_nonprim : NULL
        );

    if (!vps_da_data_local_var) {
        goto end;
    }

    return vps_da_data_local_var;
end:
    if (free_local_nonprim) {
        vps_da_license_free(free_local_nonprim);
        free_local_nonprim = NULL;
    }
    return NULL;

}
