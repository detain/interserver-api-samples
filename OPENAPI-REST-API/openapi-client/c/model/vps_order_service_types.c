#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_order_service_types.h"



static vps_order_service_types_t *vps_order_service_types_create_internal(
    vps_order_service_types_32_t *_32
    ) {
    vps_order_service_types_t *vps_order_service_types_local_var = malloc(sizeof(vps_order_service_types_t));
    if (!vps_order_service_types_local_var) {
        return NULL;
    }
    vps_order_service_types_local_var->_32 = _32;

    vps_order_service_types_local_var->_library_owned = 1;
    return vps_order_service_types_local_var;
}

__attribute__((deprecated)) vps_order_service_types_t *vps_order_service_types_create(
    vps_order_service_types_32_t *_32
    ) {
    return vps_order_service_types_create_internal (
        _32
        );
}

void vps_order_service_types_free(vps_order_service_types_t *vps_order_service_types) {
    if(NULL == vps_order_service_types){
        return ;
    }
    if(vps_order_service_types->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_order_service_types_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_order_service_types->_32) {
        vps_order_service_types_32_free(vps_order_service_types->_32);
        vps_order_service_types->_32 = NULL;
    }
    free(vps_order_service_types);
}

cJSON *vps_order_service_types_convertToJSON(vps_order_service_types_t *vps_order_service_types) {
    cJSON *item = cJSON_CreateObject();

    // vps_order_service_types->_32
    if(vps_order_service_types->_32) {
    cJSON *_32_local_JSON = vps_order_service_types_32_convertToJSON(vps_order_service_types->_32);
    if(_32_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "32", _32_local_JSON);
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

vps_order_service_types_t *vps_order_service_types_parseFromJSON(cJSON *vps_order_service_typesJSON){

    vps_order_service_types_t *vps_order_service_types_local_var = NULL;

    // define the local variable for vps_order_service_types->_32
    vps_order_service_types_32_t *_32_local_nonprim = NULL;

    // vps_order_service_types->_32
    cJSON *_32 = cJSON_GetObjectItemCaseSensitive(vps_order_service_typesJSON, "32");
    if (cJSON_IsNull(_32)) {
        _32 = NULL;
    }
    if (_32) { 
    _32_local_nonprim = vps_order_service_types_32_parseFromJSON(_32); //nonprimitive
    }


    vps_order_service_types_local_var = vps_order_service_types_create_internal (
        _32 ? _32_local_nonprim : NULL
        );

    return vps_order_service_types_local_var;
end:
    if (_32_local_nonprim) {
        vps_order_service_types_32_free(_32_local_nonprim);
        _32_local_nonprim = NULL;
    }
    return NULL;

}
