#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "websites_order_packges.h"



static websites_order_packges_t *websites_order_packges_create_internal(
    websites_order_packages_info_t *_11440
    ) {
    websites_order_packges_t *websites_order_packges_local_var = malloc(sizeof(websites_order_packges_t));
    if (!websites_order_packges_local_var) {
        return NULL;
    }
    memset(websites_order_packges_local_var, 0, sizeof(websites_order_packges_t));
    websites_order_packges_local_var->_library_owned = 1;
    websites_order_packges_local_var->_11440 = _11440;
    return websites_order_packges_local_var;
}

__attribute__((deprecated)) websites_order_packges_t *websites_order_packges_create(
    websites_order_packages_info_t *_11440
    ) {
    websites_order_packges_t *result = websites_order_packges_create_internal (
        _11440
        );
    if (!result) {
    }
    return result;
}

void websites_order_packges_free(websites_order_packges_t *websites_order_packges) {
    if(NULL == websites_order_packges){
        return ;
    }
    if(websites_order_packges->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "websites_order_packges_free");
        return ;
    }
    listEntry_t *listEntry;
    if (websites_order_packges->_11440) {
        websites_order_packages_info_free(websites_order_packges->_11440);
        websites_order_packges->_11440 = NULL;
    }
    free(websites_order_packges);
}

cJSON *websites_order_packges_convertToJSON(websites_order_packges_t *websites_order_packges) {
    cJSON *item = cJSON_CreateObject();

    // websites_order_packges->_11440
    if (!websites_order_packges->_11440) {
        goto fail;
    }
    cJSON *_11440_local_JSON = websites_order_packages_info_convertToJSON(websites_order_packges->_11440);
    if(_11440_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "11440", _11440_local_JSON);
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

websites_order_packges_t *websites_order_packges_parseFromJSON(cJSON *websites_order_packgesJSON){

    websites_order_packges_t *websites_order_packges_local_var = NULL;

    // define the local variable for websites_order_packges->_11440
    websites_order_packages_info_t *_11440_local_nonprim = NULL;

    // websites_order_packges->_11440
    cJSON *_11440 = cJSON_GetObjectItemCaseSensitive(websites_order_packgesJSON, "11440");
    if (cJSON_IsNull(_11440)) {
        _11440 = NULL;
    }
    if (!_11440) {
        goto end;
    }

    
    _11440_local_nonprim = websites_order_packages_info_parseFromJSON(_11440); //nonprimitive



    websites_order_packges_local_var = websites_order_packges_create_internal (
        _11440_local_nonprim
        );

    if (!websites_order_packges_local_var) {
        goto end;
    }

    return websites_order_packges_local_var;
end:
    if (_11440_local_nonprim) {
        websites_order_packages_info_free(_11440_local_nonprim);
        _11440_local_nonprim = NULL;
    }
    return NULL;

}
