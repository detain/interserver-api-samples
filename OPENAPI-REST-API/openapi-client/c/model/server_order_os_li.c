#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server_order_os_li.h"



static server_order_os_li_t *server_order_os_li_create_internal(
    server_order_os_t *_51
    ) {
    server_order_os_li_t *server_order_os_li_local_var = malloc(sizeof(server_order_os_li_t));
    if (!server_order_os_li_local_var) {
        return NULL;
    }
    server_order_os_li_local_var->_51 = _51;

    server_order_os_li_local_var->_library_owned = 1;
    return server_order_os_li_local_var;
}

__attribute__((deprecated)) server_order_os_li_t *server_order_os_li_create(
    server_order_os_t *_51
    ) {
    return server_order_os_li_create_internal (
        _51
        );
}

void server_order_os_li_free(server_order_os_li_t *server_order_os_li) {
    if(NULL == server_order_os_li){
        return ;
    }
    if(server_order_os_li->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "server_order_os_li_free");
        return ;
    }
    listEntry_t *listEntry;
    if (server_order_os_li->_51) {
        server_order_os_free(server_order_os_li->_51);
        server_order_os_li->_51 = NULL;
    }
    free(server_order_os_li);
}

cJSON *server_order_os_li_convertToJSON(server_order_os_li_t *server_order_os_li) {
    cJSON *item = cJSON_CreateObject();

    // server_order_os_li->_51
    if(server_order_os_li->_51) {
    cJSON *_51_local_JSON = server_order_os_convertToJSON(server_order_os_li->_51);
    if(_51_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "51", _51_local_JSON);
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

server_order_os_li_t *server_order_os_li_parseFromJSON(cJSON *server_order_os_liJSON){

    server_order_os_li_t *server_order_os_li_local_var = NULL;

    // define the local variable for server_order_os_li->_51
    server_order_os_t *_51_local_nonprim = NULL;

    // server_order_os_li->_51
    cJSON *_51 = cJSON_GetObjectItemCaseSensitive(server_order_os_liJSON, "51");
    if (cJSON_IsNull(_51)) {
        _51 = NULL;
    }
    if (_51) { 
    _51_local_nonprim = server_order_os_parseFromJSON(_51); //nonprimitive
    }


    server_order_os_li_local_var = server_order_os_li_create_internal (
        _51 ? _51_local_nonprim : NULL
        );

    return server_order_os_li_local_var;
end:
    if (_51_local_nonprim) {
        server_order_os_free(_51_local_nonprim);
        _51_local_nonprim = NULL;
    }
    return NULL;

}
