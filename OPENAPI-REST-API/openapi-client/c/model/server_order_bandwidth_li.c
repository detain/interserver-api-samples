#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server_order_bandwidth_li.h"



static server_order_bandwidth_li_t *server_order_bandwidth_li_create_internal(
    server_order_bandwidth_t *_15
    ) {
    server_order_bandwidth_li_t *server_order_bandwidth_li_local_var = malloc(sizeof(server_order_bandwidth_li_t));
    if (!server_order_bandwidth_li_local_var) {
        return NULL;
    }
    memset(server_order_bandwidth_li_local_var, 0, sizeof(server_order_bandwidth_li_t));
    server_order_bandwidth_li_local_var->_library_owned = 1;
    server_order_bandwidth_li_local_var->_15 = _15;
    return server_order_bandwidth_li_local_var;
}

__attribute__((deprecated)) server_order_bandwidth_li_t *server_order_bandwidth_li_create(
    server_order_bandwidth_t *_15
    ) {
    server_order_bandwidth_li_t *result = server_order_bandwidth_li_create_internal (
        _15
        );
    if (!result) {
    }
    return result;
}

void server_order_bandwidth_li_free(server_order_bandwidth_li_t *server_order_bandwidth_li) {
    if(NULL == server_order_bandwidth_li){
        return ;
    }
    if(server_order_bandwidth_li->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "server_order_bandwidth_li_free");
        return ;
    }
    listEntry_t *listEntry;
    if (server_order_bandwidth_li->_15) {
        server_order_bandwidth_free(server_order_bandwidth_li->_15);
        server_order_bandwidth_li->_15 = NULL;
    }
    free(server_order_bandwidth_li);
}

cJSON *server_order_bandwidth_li_convertToJSON(server_order_bandwidth_li_t *server_order_bandwidth_li) {
    cJSON *item = cJSON_CreateObject();

    // server_order_bandwidth_li->_15
    if(server_order_bandwidth_li->_15) {
    cJSON *_15_local_JSON = server_order_bandwidth_convertToJSON(server_order_bandwidth_li->_15);
    if(_15_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "15", _15_local_JSON);
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

server_order_bandwidth_li_t *server_order_bandwidth_li_parseFromJSON(cJSON *server_order_bandwidth_liJSON){

    server_order_bandwidth_li_t *server_order_bandwidth_li_local_var = NULL;

    // define the local variable for server_order_bandwidth_li->_15
    server_order_bandwidth_t *_15_local_nonprim = NULL;

    // server_order_bandwidth_li->_15
    cJSON *_15 = cJSON_GetObjectItemCaseSensitive(server_order_bandwidth_liJSON, "15");
    if (cJSON_IsNull(_15)) {
        _15 = NULL;
    }
    if (_15) { 
    _15_local_nonprim = server_order_bandwidth_parseFromJSON(_15); //nonprimitive
    }



    server_order_bandwidth_li_local_var = server_order_bandwidth_li_create_internal (
        _15 ? _15_local_nonprim : NULL
        );

    if (!server_order_bandwidth_li_local_var) {
        goto end;
    }

    return server_order_bandwidth_li_local_var;
end:
    if (_15_local_nonprim) {
        server_order_bandwidth_free(_15_local_nonprim);
        _15_local_nonprim = NULL;
    }
    return NULL;

}
