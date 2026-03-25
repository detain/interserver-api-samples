#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server_order_cp_li.h"



static server_order_cp_li_t *server_order_cp_li_create_internal(
    server_order_control_panel_t *_9
    ) {
    server_order_cp_li_t *server_order_cp_li_local_var = malloc(sizeof(server_order_cp_li_t));
    if (!server_order_cp_li_local_var) {
        return NULL;
    }
    memset(server_order_cp_li_local_var, 0, sizeof(server_order_cp_li_t));
    server_order_cp_li_local_var->_library_owned = 1;
    server_order_cp_li_local_var->_9 = _9;
    return server_order_cp_li_local_var;
}

__attribute__((deprecated)) server_order_cp_li_t *server_order_cp_li_create(
    server_order_control_panel_t *_9
    ) {
    server_order_cp_li_t *result = server_order_cp_li_create_internal (
        _9
        );
    if (!result) {
    }
    return result;
}

void server_order_cp_li_free(server_order_cp_li_t *server_order_cp_li) {
    if(NULL == server_order_cp_li){
        return ;
    }
    if(server_order_cp_li->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "server_order_cp_li_free");
        return ;
    }
    listEntry_t *listEntry;
    if (server_order_cp_li->_9) {
        server_order_control_panel_free(server_order_cp_li->_9);
        server_order_cp_li->_9 = NULL;
    }
    free(server_order_cp_li);
}

cJSON *server_order_cp_li_convertToJSON(server_order_cp_li_t *server_order_cp_li) {
    cJSON *item = cJSON_CreateObject();

    // server_order_cp_li->_9
    if(server_order_cp_li->_9) {
    cJSON *_9_local_JSON = server_order_control_panel_convertToJSON(server_order_cp_li->_9);
    if(_9_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "9", _9_local_JSON);
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

server_order_cp_li_t *server_order_cp_li_parseFromJSON(cJSON *server_order_cp_liJSON){

    server_order_cp_li_t *server_order_cp_li_local_var = NULL;

    // define the local variable for server_order_cp_li->_9
    server_order_control_panel_t *_9_local_nonprim = NULL;

    // server_order_cp_li->_9
    cJSON *_9 = cJSON_GetObjectItemCaseSensitive(server_order_cp_liJSON, "9");
    if (cJSON_IsNull(_9)) {
        _9 = NULL;
    }
    if (_9) { 
    _9_local_nonprim = server_order_control_panel_parseFromJSON(_9); //nonprimitive
    }



    server_order_cp_li_local_var = server_order_cp_li_create_internal (
        _9 ? _9_local_nonprim : NULL
        );

    if (!server_order_cp_li_local_var) {
        goto end;
    }

    return server_order_cp_li_local_var;
end:
    if (_9_local_nonprim) {
        server_order_control_panel_free(_9_local_nonprim);
        _9_local_nonprim = NULL;
    }
    return NULL;

}
