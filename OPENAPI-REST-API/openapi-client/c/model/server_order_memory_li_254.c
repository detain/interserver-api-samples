#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server_order_memory_li_254.h"



static server_order_memory_li_254_t *server_order_memory_li_254_create_internal(
    server_order_memory_t *_65
    ) {
    server_order_memory_li_254_t *server_order_memory_li_254_local_var = malloc(sizeof(server_order_memory_li_254_t));
    if (!server_order_memory_li_254_local_var) {
        return NULL;
    }
    server_order_memory_li_254_local_var->_65 = _65;

    server_order_memory_li_254_local_var->_library_owned = 1;
    return server_order_memory_li_254_local_var;
}

__attribute__((deprecated)) server_order_memory_li_254_t *server_order_memory_li_254_create(
    server_order_memory_t *_65
    ) {
    return server_order_memory_li_254_create_internal (
        _65
        );
}

void server_order_memory_li_254_free(server_order_memory_li_254_t *server_order_memory_li_254) {
    if(NULL == server_order_memory_li_254){
        return ;
    }
    if(server_order_memory_li_254->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "server_order_memory_li_254_free");
        return ;
    }
    listEntry_t *listEntry;
    if (server_order_memory_li_254->_65) {
        server_order_memory_free(server_order_memory_li_254->_65);
        server_order_memory_li_254->_65 = NULL;
    }
    free(server_order_memory_li_254);
}

cJSON *server_order_memory_li_254_convertToJSON(server_order_memory_li_254_t *server_order_memory_li_254) {
    cJSON *item = cJSON_CreateObject();

    // server_order_memory_li_254->_65
    if(server_order_memory_li_254->_65) {
    cJSON *_65_local_JSON = server_order_memory_convertToJSON(server_order_memory_li_254->_65);
    if(_65_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "65", _65_local_JSON);
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

server_order_memory_li_254_t *server_order_memory_li_254_parseFromJSON(cJSON *server_order_memory_li_254JSON){

    server_order_memory_li_254_t *server_order_memory_li_254_local_var = NULL;

    // define the local variable for server_order_memory_li_254->_65
    server_order_memory_t *_65_local_nonprim = NULL;

    // server_order_memory_li_254->_65
    cJSON *_65 = cJSON_GetObjectItemCaseSensitive(server_order_memory_li_254JSON, "65");
    if (cJSON_IsNull(_65)) {
        _65 = NULL;
    }
    if (_65) { 
    _65_local_nonprim = server_order_memory_parseFromJSON(_65); //nonprimitive
    }


    server_order_memory_li_254_local_var = server_order_memory_li_254_create_internal (
        _65 ? _65_local_nonprim : NULL
        );

    return server_order_memory_li_254_local_var;
end:
    if (_65_local_nonprim) {
        server_order_memory_free(_65_local_nonprim);
        _65_local_nonprim = NULL;
    }
    return NULL;

}
