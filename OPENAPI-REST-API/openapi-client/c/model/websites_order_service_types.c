#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "websites_order_service_types.h"



static websites_order_service_types_t *websites_order_service_types_create_internal(
    websites_order_service_types_t *_11447
    ) {
    websites_order_service_types_t *websites_order_service_types_local_var = malloc(sizeof(websites_order_service_types_t));
    if (!websites_order_service_types_local_var) {
        return NULL;
    }
    websites_order_service_types_local_var->_11447 = _11447;

    websites_order_service_types_local_var->_library_owned = 1;
    return websites_order_service_types_local_var;
}

__attribute__((deprecated)) websites_order_service_types_t *websites_order_service_types_create(
    websites_order_service_types_t *_11447
    ) {
    return websites_order_service_types_create_internal (
        _11447
        );
}

void websites_order_service_types_free(websites_order_service_types_t *websites_order_service_types) {
    if(NULL == websites_order_service_types){
        return ;
    }
    if(websites_order_service_types->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "websites_order_service_types_free");
        return ;
    }
    listEntry_t *listEntry;
    if (websites_order_service_types->_11447) {
        websites_order_service_types_free(websites_order_service_types->_11447);
        websites_order_service_types->_11447 = NULL;
    }
    free(websites_order_service_types);
}

cJSON *websites_order_service_types_convertToJSON(websites_order_service_types_t *websites_order_service_types) {
    cJSON *item = cJSON_CreateObject();

    // websites_order_service_types->_11447
    if (!websites_order_service_types->_11447) {
        goto fail;
    }
    cJSON *_11447_local_JSON = websites_order_service_types_convertToJSON(websites_order_service_types->_11447);
    if(_11447_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "11447", _11447_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

websites_order_service_types_t *websites_order_service_types_parseFromJSON(cJSON *websites_order_service_typesJSON){

    websites_order_service_types_t *websites_order_service_types_local_var = NULL;

    // define the local variable for websites_order_service_types->_11447
    websites_order_service_types_t *_11447_local_nonprim = NULL;

    // websites_order_service_types->_11447
    cJSON *_11447 = cJSON_GetObjectItemCaseSensitive(websites_order_service_typesJSON, "11447");
    if (cJSON_IsNull(_11447)) {
        _11447 = NULL;
    }
    if (!_11447) {
        goto end;
    }

    
    _11447_local_nonprim = websites_order_service_types_parseFromJSON(_11447); //nonprimitive


    websites_order_service_types_local_var = websites_order_service_types_create_internal (
        _11447_local_nonprim
        );

    return websites_order_service_types_local_var;
end:
    if (_11447_local_nonprim) {
        websites_order_service_types_free(_11447_local_nonprim);
        _11447_local_nonprim = NULL;
    }
    return NULL;

}
