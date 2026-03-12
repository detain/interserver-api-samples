#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server_network_info_switchports.h"



static server_network_info_switchports_t *server_network_info_switchports_create_internal(
    server_switchport_t *_10414
    ) {
    server_network_info_switchports_t *server_network_info_switchports_local_var = malloc(sizeof(server_network_info_switchports_t));
    if (!server_network_info_switchports_local_var) {
        return NULL;
    }
    server_network_info_switchports_local_var->_10414 = _10414;

    server_network_info_switchports_local_var->_library_owned = 1;
    return server_network_info_switchports_local_var;
}

__attribute__((deprecated)) server_network_info_switchports_t *server_network_info_switchports_create(
    server_switchport_t *_10414
    ) {
    return server_network_info_switchports_create_internal (
        _10414
        );
}

void server_network_info_switchports_free(server_network_info_switchports_t *server_network_info_switchports) {
    if(NULL == server_network_info_switchports){
        return ;
    }
    if(server_network_info_switchports->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "server_network_info_switchports_free");
        return ;
    }
    listEntry_t *listEntry;
    if (server_network_info_switchports->_10414) {
        server_switchport_free(server_network_info_switchports->_10414);
        server_network_info_switchports->_10414 = NULL;
    }
    free(server_network_info_switchports);
}

cJSON *server_network_info_switchports_convertToJSON(server_network_info_switchports_t *server_network_info_switchports) {
    cJSON *item = cJSON_CreateObject();

    // server_network_info_switchports->_10414
    if (!server_network_info_switchports->_10414) {
        goto fail;
    }
    cJSON *_10414_local_JSON = server_switchport_convertToJSON(server_network_info_switchports->_10414);
    if(_10414_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "10414", _10414_local_JSON);
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

server_network_info_switchports_t *server_network_info_switchports_parseFromJSON(cJSON *server_network_info_switchportsJSON){

    server_network_info_switchports_t *server_network_info_switchports_local_var = NULL;

    // define the local variable for server_network_info_switchports->_10414
    server_switchport_t *_10414_local_nonprim = NULL;

    // server_network_info_switchports->_10414
    cJSON *_10414 = cJSON_GetObjectItemCaseSensitive(server_network_info_switchportsJSON, "10414");
    if (cJSON_IsNull(_10414)) {
        _10414 = NULL;
    }
    if (!_10414) {
        goto end;
    }

    
    _10414_local_nonprim = server_switchport_parseFromJSON(_10414); //nonprimitive


    server_network_info_switchports_local_var = server_network_info_switchports_create_internal (
        _10414_local_nonprim
        );

    return server_network_info_switchports_local_var;
end:
    if (_10414_local_nonprim) {
        server_switchport_free(_10414_local_nonprim);
        _10414_local_nonprim = NULL;
    }
    return NULL;

}
