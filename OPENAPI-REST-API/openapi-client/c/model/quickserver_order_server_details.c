#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "quickserver_order_server_details.h"



static quickserver_order_server_details_t *quickserver_order_server_details_create_internal(
    quickserver_order_server_details381_t *_381
    ) {
    quickserver_order_server_details_t *quickserver_order_server_details_local_var = malloc(sizeof(quickserver_order_server_details_t));
    if (!quickserver_order_server_details_local_var) {
        return NULL;
    }
    memset(quickserver_order_server_details_local_var, 0, sizeof(quickserver_order_server_details_t));
    quickserver_order_server_details_local_var->_library_owned = 1;
    quickserver_order_server_details_local_var->_381 = _381;
    return quickserver_order_server_details_local_var;
}

__attribute__((deprecated)) quickserver_order_server_details_t *quickserver_order_server_details_create(
    quickserver_order_server_details381_t *_381
    ) {
    quickserver_order_server_details_t *result = quickserver_order_server_details_create_internal (
        _381
        );
    if (!result) {
    }
    return result;
}

void quickserver_order_server_details_free(quickserver_order_server_details_t *quickserver_order_server_details) {
    if(NULL == quickserver_order_server_details){
        return ;
    }
    if(quickserver_order_server_details->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "quickserver_order_server_details_free");
        return ;
    }
    listEntry_t *listEntry;
    if (quickserver_order_server_details->_381) {
        quickserver_order_server_details381_free(quickserver_order_server_details->_381);
        quickserver_order_server_details->_381 = NULL;
    }
    free(quickserver_order_server_details);
}

cJSON *quickserver_order_server_details_convertToJSON(quickserver_order_server_details_t *quickserver_order_server_details) {
    cJSON *item = cJSON_CreateObject();

    // quickserver_order_server_details->_381
    if(quickserver_order_server_details->_381) {
    cJSON *_381_local_JSON = quickserver_order_server_details381_convertToJSON(quickserver_order_server_details->_381);
    if(_381_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "381", _381_local_JSON);
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

quickserver_order_server_details_t *quickserver_order_server_details_parseFromJSON(cJSON *quickserver_order_server_detailsJSON){

    quickserver_order_server_details_t *quickserver_order_server_details_local_var = NULL;

    // define the local variable for quickserver_order_server_details->_381
    quickserver_order_server_details381_t *_381_local_nonprim = NULL;

    // quickserver_order_server_details->_381
    cJSON *_381 = cJSON_GetObjectItemCaseSensitive(quickserver_order_server_detailsJSON, "381");
    if (cJSON_IsNull(_381)) {
        _381 = NULL;
    }
    if (_381) { 
    _381_local_nonprim = quickserver_order_server_details381_parseFromJSON(_381); //nonprimitive
    }



    quickserver_order_server_details_local_var = quickserver_order_server_details_create_internal (
        _381 ? _381_local_nonprim : NULL
        );

    if (!quickserver_order_server_details_local_var) {
        goto end;
    }

    return quickserver_order_server_details_local_var;
end:
    if (_381_local_nonprim) {
        quickserver_order_server_details381_free(_381_local_nonprim);
        _381_local_nonprim = NULL;
    }
    return NULL;

}
