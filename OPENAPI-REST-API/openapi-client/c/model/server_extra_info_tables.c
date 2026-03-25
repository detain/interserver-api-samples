#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server_extra_info_tables.h"



static server_extra_info_tables_t *server_extra_info_tables_create_internal(
    server_assets_t *assets
    ) {
    server_extra_info_tables_t *server_extra_info_tables_local_var = malloc(sizeof(server_extra_info_tables_t));
    if (!server_extra_info_tables_local_var) {
        return NULL;
    }
    memset(server_extra_info_tables_local_var, 0, sizeof(server_extra_info_tables_t));
    server_extra_info_tables_local_var->_library_owned = 1;
    server_extra_info_tables_local_var->assets = assets;
    return server_extra_info_tables_local_var;
}

__attribute__((deprecated)) server_extra_info_tables_t *server_extra_info_tables_create(
    server_assets_t *assets
    ) {
    server_extra_info_tables_t *result = server_extra_info_tables_create_internal (
        assets
        );
    if (!result) {
    }
    return result;
}

void server_extra_info_tables_free(server_extra_info_tables_t *server_extra_info_tables) {
    if(NULL == server_extra_info_tables){
        return ;
    }
    if(server_extra_info_tables->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "server_extra_info_tables_free");
        return ;
    }
    listEntry_t *listEntry;
    if (server_extra_info_tables->assets) {
        server_assets_free(server_extra_info_tables->assets);
        server_extra_info_tables->assets = NULL;
    }
    free(server_extra_info_tables);
}

cJSON *server_extra_info_tables_convertToJSON(server_extra_info_tables_t *server_extra_info_tables) {
    cJSON *item = cJSON_CreateObject();

    // server_extra_info_tables->assets
    if (!server_extra_info_tables->assets) {
        goto fail;
    }
    cJSON *assets_local_JSON = server_assets_convertToJSON(server_extra_info_tables->assets);
    if(assets_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "assets", assets_local_JSON);
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

server_extra_info_tables_t *server_extra_info_tables_parseFromJSON(cJSON *server_extra_info_tablesJSON){

    server_extra_info_tables_t *server_extra_info_tables_local_var = NULL;

    // define the local variable for server_extra_info_tables->assets
    server_assets_t *assets_local_nonprim = NULL;

    // server_extra_info_tables->assets
    cJSON *assets = cJSON_GetObjectItemCaseSensitive(server_extra_info_tablesJSON, "assets");
    if (cJSON_IsNull(assets)) {
        assets = NULL;
    }
    if (!assets) {
        goto end;
    }

    
    assets_local_nonprim = server_assets_parseFromJSON(assets); //nonprimitive



    server_extra_info_tables_local_var = server_extra_info_tables_create_internal (
        assets_local_nonprim
        );

    if (!server_extra_info_tables_local_var) {
        goto end;
    }

    return server_extra_info_tables_local_var;
end:
    if (assets_local_nonprim) {
        server_assets_free(assets_local_nonprim);
        assets_local_nonprim = NULL;
    }
    return NULL;

}
