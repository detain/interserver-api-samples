#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server_network_info_assets.h"



static server_network_info_assets_t *server_network_info_assets_create_internal(
    server_asset_t *_3497
    ) {
    server_network_info_assets_t *server_network_info_assets_local_var = malloc(sizeof(server_network_info_assets_t));
    if (!server_network_info_assets_local_var) {
        return NULL;
    }
    server_network_info_assets_local_var->_3497 = _3497;

    server_network_info_assets_local_var->_library_owned = 1;
    return server_network_info_assets_local_var;
}

__attribute__((deprecated)) server_network_info_assets_t *server_network_info_assets_create(
    server_asset_t *_3497
    ) {
    return server_network_info_assets_create_internal (
        _3497
        );
}

void server_network_info_assets_free(server_network_info_assets_t *server_network_info_assets) {
    if(NULL == server_network_info_assets){
        return ;
    }
    if(server_network_info_assets->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "server_network_info_assets_free");
        return ;
    }
    listEntry_t *listEntry;
    if (server_network_info_assets->_3497) {
        server_asset_free(server_network_info_assets->_3497);
        server_network_info_assets->_3497 = NULL;
    }
    free(server_network_info_assets);
}

cJSON *server_network_info_assets_convertToJSON(server_network_info_assets_t *server_network_info_assets) {
    cJSON *item = cJSON_CreateObject();

    // server_network_info_assets->_3497
    if (!server_network_info_assets->_3497) {
        goto fail;
    }
    cJSON *_3497_local_JSON = server_asset_convertToJSON(server_network_info_assets->_3497);
    if(_3497_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "3497", _3497_local_JSON);
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

server_network_info_assets_t *server_network_info_assets_parseFromJSON(cJSON *server_network_info_assetsJSON){

    server_network_info_assets_t *server_network_info_assets_local_var = NULL;

    // define the local variable for server_network_info_assets->_3497
    server_asset_t *_3497_local_nonprim = NULL;

    // server_network_info_assets->_3497
    cJSON *_3497 = cJSON_GetObjectItemCaseSensitive(server_network_info_assetsJSON, "3497");
    if (cJSON_IsNull(_3497)) {
        _3497 = NULL;
    }
    if (!_3497) {
        goto end;
    }

    
    _3497_local_nonprim = server_asset_parseFromJSON(_3497); //nonprimitive


    server_network_info_assets_local_var = server_network_info_assets_create_internal (
        _3497_local_nonprim
        );

    return server_network_info_assets_local_var;
end:
    if (_3497_local_nonprim) {
        server_asset_free(_3497_local_nonprim);
        _3497_local_nonprim = NULL;
    }
    return NULL;

}
