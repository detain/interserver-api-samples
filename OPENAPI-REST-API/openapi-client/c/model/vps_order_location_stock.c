#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_order_location_stock.h"



static vps_order_location_stock_t *vps_order_location_stock_create_internal(
    vps_order_location_stock_1_t *_1
    ) {
    vps_order_location_stock_t *vps_order_location_stock_local_var = malloc(sizeof(vps_order_location_stock_t));
    if (!vps_order_location_stock_local_var) {
        return NULL;
    }
    memset(vps_order_location_stock_local_var, 0, sizeof(vps_order_location_stock_t));
    vps_order_location_stock_local_var->_library_owned = 1;
    vps_order_location_stock_local_var->_1 = _1;
    return vps_order_location_stock_local_var;
}

__attribute__((deprecated)) vps_order_location_stock_t *vps_order_location_stock_create(
    vps_order_location_stock_1_t *_1
    ) {
    vps_order_location_stock_t *result = vps_order_location_stock_create_internal (
        _1
        );
    if (!result) {
    }
    return result;
}

void vps_order_location_stock_free(vps_order_location_stock_t *vps_order_location_stock) {
    if(NULL == vps_order_location_stock){
        return ;
    }
    if(vps_order_location_stock->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_order_location_stock_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_order_location_stock->_1) {
        vps_order_location_stock_1_free(vps_order_location_stock->_1);
        vps_order_location_stock->_1 = NULL;
    }
    free(vps_order_location_stock);
}

cJSON *vps_order_location_stock_convertToJSON(vps_order_location_stock_t *vps_order_location_stock) {
    cJSON *item = cJSON_CreateObject();

    // vps_order_location_stock->_1
    if(vps_order_location_stock->_1) {
    cJSON *_1_local_JSON = vps_order_location_stock_1_convertToJSON(vps_order_location_stock->_1);
    if(_1_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "1", _1_local_JSON);
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

vps_order_location_stock_t *vps_order_location_stock_parseFromJSON(cJSON *vps_order_location_stockJSON){

    vps_order_location_stock_t *vps_order_location_stock_local_var = NULL;

    // define the local variable for vps_order_location_stock->_1
    vps_order_location_stock_1_t *_1_local_nonprim = NULL;

    // vps_order_location_stock->_1
    cJSON *_1 = cJSON_GetObjectItemCaseSensitive(vps_order_location_stockJSON, "1");
    if (cJSON_IsNull(_1)) {
        _1 = NULL;
    }
    if (_1) { 
    _1_local_nonprim = vps_order_location_stock_1_parseFromJSON(_1); //nonprimitive
    }



    vps_order_location_stock_local_var = vps_order_location_stock_create_internal (
        _1 ? _1_local_nonprim : NULL
        );

    if (!vps_order_location_stock_local_var) {
        goto end;
    }

    return vps_order_location_stock_local_var;
end:
    if (_1_local_nonprim) {
        vps_order_location_stock_1_free(_1_local_nonprim);
        _1_local_nonprim = NULL;
    }
    return NULL;

}
