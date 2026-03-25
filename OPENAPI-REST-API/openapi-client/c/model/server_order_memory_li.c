#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server_order_memory_li.h"



static server_order_memory_li_t *server_order_memory_li_create_internal(
    server_order_memory_li_254_t *_254
    ) {
    server_order_memory_li_t *server_order_memory_li_local_var = malloc(sizeof(server_order_memory_li_t));
    if (!server_order_memory_li_local_var) {
        return NULL;
    }
    memset(server_order_memory_li_local_var, 0, sizeof(server_order_memory_li_t));
    server_order_memory_li_local_var->_library_owned = 1;
    server_order_memory_li_local_var->_254 = _254;
    return server_order_memory_li_local_var;
}

__attribute__((deprecated)) server_order_memory_li_t *server_order_memory_li_create(
    server_order_memory_li_254_t *_254
    ) {
    server_order_memory_li_t *result = server_order_memory_li_create_internal (
        _254
        );
    if (!result) {
    }
    return result;
}

void server_order_memory_li_free(server_order_memory_li_t *server_order_memory_li) {
    if(NULL == server_order_memory_li){
        return ;
    }
    if(server_order_memory_li->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "server_order_memory_li_free");
        return ;
    }
    listEntry_t *listEntry;
    if (server_order_memory_li->_254) {
        server_order_memory_li_254_free(server_order_memory_li->_254);
        server_order_memory_li->_254 = NULL;
    }
    free(server_order_memory_li);
}

cJSON *server_order_memory_li_convertToJSON(server_order_memory_li_t *server_order_memory_li) {
    cJSON *item = cJSON_CreateObject();

    // server_order_memory_li->_254
    if(server_order_memory_li->_254) {
    cJSON *_254_local_JSON = server_order_memory_li_254_convertToJSON(server_order_memory_li->_254);
    if(_254_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "254", _254_local_JSON);
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

server_order_memory_li_t *server_order_memory_li_parseFromJSON(cJSON *server_order_memory_liJSON){

    server_order_memory_li_t *server_order_memory_li_local_var = NULL;

    // define the local variable for server_order_memory_li->_254
    server_order_memory_li_254_t *_254_local_nonprim = NULL;

    // server_order_memory_li->_254
    cJSON *_254 = cJSON_GetObjectItemCaseSensitive(server_order_memory_liJSON, "254");
    if (cJSON_IsNull(_254)) {
        _254 = NULL;
    }
    if (_254) { 
    _254_local_nonprim = server_order_memory_li_254_parseFromJSON(_254); //nonprimitive
    }



    server_order_memory_li_local_var = server_order_memory_li_create_internal (
        _254 ? _254_local_nonprim : NULL
        );

    if (!server_order_memory_li_local_var) {
        goto end;
    }

    return server_order_memory_li_local_var;
end:
    if (_254_local_nonprim) {
        server_order_memory_li_254_free(_254_local_nonprim);
        _254_local_nonprim = NULL;
    }
    return NULL;

}
