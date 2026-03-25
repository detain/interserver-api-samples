#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server_network_info.h"



static server_network_info_t *server_network_info_create_internal(
    list_t *vlans,
    list_t *vlans6,
    server_network_info_assets_t *assets,
    server_network_info_switchports_t *switchports
    ) {
    server_network_info_t *server_network_info_local_var = malloc(sizeof(server_network_info_t));
    if (!server_network_info_local_var) {
        return NULL;
    }
    memset(server_network_info_local_var, 0, sizeof(server_network_info_t));
    server_network_info_local_var->_library_owned = 1;
    server_network_info_local_var->vlans = vlans;
    server_network_info_local_var->vlans6 = vlans6;
    server_network_info_local_var->assets = assets;
    server_network_info_local_var->switchports = switchports;
    return server_network_info_local_var;
}

__attribute__((deprecated)) server_network_info_t *server_network_info_create(
    list_t *vlans,
    list_t *vlans6,
    server_network_info_assets_t *assets,
    server_network_info_switchports_t *switchports
    ) {
    server_network_info_t *result = server_network_info_create_internal (
        vlans,
        vlans6,
        assets,
        switchports
        );
    if (!result) {
    }
    return result;
}

void server_network_info_free(server_network_info_t *server_network_info) {
    if(NULL == server_network_info){
        return ;
    }
    if(server_network_info->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "server_network_info_free");
        return ;
    }
    listEntry_t *listEntry;
    if (server_network_info->vlans) {
        list_ForEach(listEntry, server_network_info->vlans) {
            free(listEntry->data);
        }
        list_freeList(server_network_info->vlans);
        server_network_info->vlans = NULL;
    }
    if (server_network_info->vlans6) {
        list_ForEach(listEntry, server_network_info->vlans6) {
            free(listEntry->data);
        }
        list_freeList(server_network_info->vlans6);
        server_network_info->vlans6 = NULL;
    }
    if (server_network_info->assets) {
        server_network_info_assets_free(server_network_info->assets);
        server_network_info->assets = NULL;
    }
    if (server_network_info->switchports) {
        server_network_info_switchports_free(server_network_info->switchports);
        server_network_info->switchports = NULL;
    }
    free(server_network_info);
}

cJSON *server_network_info_convertToJSON(server_network_info_t *server_network_info) {
    cJSON *item = cJSON_CreateObject();

    // server_network_info->vlans
    if (!server_network_info->vlans) {
        goto fail;
    }
    cJSON *vlans = cJSON_AddArrayToObject(item, "vlans");
    if(vlans == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *vlansListEntry;
    list_ForEach(vlansListEntry, server_network_info->vlans) {
    if(cJSON_AddStringToObject(vlans, "", vlansListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // server_network_info->vlans6
    if (!server_network_info->vlans6) {
        goto fail;
    }
    cJSON *vlans6 = cJSON_AddArrayToObject(item, "vlans6");
    if(vlans6 == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *vlans6ListEntry;
    list_ForEach(vlans6ListEntry, server_network_info->vlans6) {
    if(cJSON_AddStringToObject(vlans6, "", vlans6ListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // server_network_info->assets
    if (!server_network_info->assets) {
        goto fail;
    }
    cJSON *assets_local_JSON = server_network_info_assets_convertToJSON(server_network_info->assets);
    if(assets_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "assets", assets_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // server_network_info->switchports
    if (!server_network_info->switchports) {
        goto fail;
    }
    cJSON *switchports_local_JSON = server_network_info_switchports_convertToJSON(server_network_info->switchports);
    if(switchports_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "switchports", switchports_local_JSON);
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

server_network_info_t *server_network_info_parseFromJSON(cJSON *server_network_infoJSON){

    server_network_info_t *server_network_info_local_var = NULL;

    // define the local list for server_network_info->vlans
    list_t *vlansList = NULL;

    // define the local list for server_network_info->vlans6
    list_t *vlans6List = NULL;

    // define the local variable for server_network_info->assets
    server_network_info_assets_t *assets_local_nonprim = NULL;

    // define the local variable for server_network_info->switchports
    server_network_info_switchports_t *switchports_local_nonprim = NULL;

    // server_network_info->vlans
    cJSON *vlans = cJSON_GetObjectItemCaseSensitive(server_network_infoJSON, "vlans");
    if (cJSON_IsNull(vlans)) {
        vlans = NULL;
    }
    if (!vlans) {
        goto end;
    }

    
    cJSON *vlans_local = NULL;
    if(!cJSON_IsArray(vlans)) {
        goto end;//primitive container
    }
    vlansList = list_createList();

    cJSON_ArrayForEach(vlans_local, vlans)
    {
        if(!cJSON_IsString(vlans_local))
        {
            goto end;
        }
        list_addElement(vlansList , strdup(vlans_local->valuestring));
    }

    // server_network_info->vlans6
    cJSON *vlans6 = cJSON_GetObjectItemCaseSensitive(server_network_infoJSON, "vlans6");
    if (cJSON_IsNull(vlans6)) {
        vlans6 = NULL;
    }
    if (!vlans6) {
        goto end;
    }

    
    cJSON *vlans6_local = NULL;
    if(!cJSON_IsArray(vlans6)) {
        goto end;//primitive container
    }
    vlans6List = list_createList();

    cJSON_ArrayForEach(vlans6_local, vlans6)
    {
        if(!cJSON_IsString(vlans6_local))
        {
            goto end;
        }
        list_addElement(vlans6List , strdup(vlans6_local->valuestring));
    }

    // server_network_info->assets
    cJSON *assets = cJSON_GetObjectItemCaseSensitive(server_network_infoJSON, "assets");
    if (cJSON_IsNull(assets)) {
        assets = NULL;
    }
    if (!assets) {
        goto end;
    }

    
    assets_local_nonprim = server_network_info_assets_parseFromJSON(assets); //nonprimitive

    // server_network_info->switchports
    cJSON *switchports = cJSON_GetObjectItemCaseSensitive(server_network_infoJSON, "switchports");
    if (cJSON_IsNull(switchports)) {
        switchports = NULL;
    }
    if (!switchports) {
        goto end;
    }

    
    switchports_local_nonprim = server_network_info_switchports_parseFromJSON(switchports); //nonprimitive



    server_network_info_local_var = server_network_info_create_internal (
        vlansList,
        vlans6List,
        assets_local_nonprim,
        switchports_local_nonprim
        );

    if (!server_network_info_local_var) {
        goto end;
    }

    return server_network_info_local_var;
end:
    if (vlansList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, vlansList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(vlansList);
        vlansList = NULL;
    }
    if (vlans6List) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, vlans6List) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(vlans6List);
        vlans6List = NULL;
    }
    if (assets_local_nonprim) {
        server_network_info_assets_free(assets_local_nonprim);
        assets_local_nonprim = NULL;
    }
    if (switchports_local_nonprim) {
        server_network_info_switchports_free(switchports_local_nonprim);
        switchports_local_nonprim = NULL;
    }
    return NULL;

}
