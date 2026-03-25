#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server_switchport.h"



static server_switchport_t *server_switchport_create_internal(
    int *switchport_id,
    char *switch_id,
    char *_switch,
    char *port,
    char *blade,
    char *justport,
    char *graph_id,
    int *asset_id,
    list_t *vlans,
    list_t *vlans6
    ) {
    server_switchport_t *server_switchport_local_var = malloc(sizeof(server_switchport_t));
    if (!server_switchport_local_var) {
        return NULL;
    }
    memset(server_switchport_local_var, 0, sizeof(server_switchport_t));
    server_switchport_local_var->_library_owned = 1;
    server_switchport_local_var->switchport_id = switchport_id;
    server_switchport_local_var->switch_id = switch_id;
    server_switchport_local_var->_switch = _switch;
    server_switchport_local_var->port = port;
    server_switchport_local_var->blade = blade;
    server_switchport_local_var->justport = justport;
    server_switchport_local_var->graph_id = graph_id;
    server_switchport_local_var->asset_id = asset_id;
    server_switchport_local_var->vlans = vlans;
    server_switchport_local_var->vlans6 = vlans6;
    return server_switchport_local_var;
}

__attribute__((deprecated)) server_switchport_t *server_switchport_create(
    int *switchport_id,
    char *switch_id,
    char *_switch,
    char *port,
    char *blade,
    char *justport,
    char *graph_id,
    int *asset_id,
    list_t *vlans,
    list_t *vlans6
    ) {
    int *switchport_id_copy = NULL;
    if (switchport_id) {
        switchport_id_copy = malloc(sizeof(int));
        if (switchport_id_copy) *switchport_id_copy = *switchport_id;
    }
    int *asset_id_copy = NULL;
    if (asset_id) {
        asset_id_copy = malloc(sizeof(int));
        if (asset_id_copy) *asset_id_copy = *asset_id;
    }
    server_switchport_t *result = server_switchport_create_internal (
        switchport_id_copy,
        switch_id,
        _switch,
        port,
        blade,
        justport,
        graph_id,
        asset_id_copy,
        vlans,
        vlans6
        );
    if (!result) {
        free(switchport_id_copy);
        free(asset_id_copy);
    }
    return result;
}

void server_switchport_free(server_switchport_t *server_switchport) {
    if(NULL == server_switchport){
        return ;
    }
    if(server_switchport->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "server_switchport_free");
        return ;
    }
    listEntry_t *listEntry;
    if (server_switchport->switchport_id) {
        free(server_switchport->switchport_id);
        server_switchport->switchport_id = NULL;
    }
    if (server_switchport->switch_id) {
        free(server_switchport->switch_id);
        server_switchport->switch_id = NULL;
    }
    if (server_switchport->_switch) {
        free(server_switchport->_switch);
        server_switchport->_switch = NULL;
    }
    if (server_switchport->port) {
        free(server_switchport->port);
        server_switchport->port = NULL;
    }
    if (server_switchport->blade) {
        free(server_switchport->blade);
        server_switchport->blade = NULL;
    }
    if (server_switchport->justport) {
        free(server_switchport->justport);
        server_switchport->justport = NULL;
    }
    if (server_switchport->graph_id) {
        free(server_switchport->graph_id);
        server_switchport->graph_id = NULL;
    }
    if (server_switchport->asset_id) {
        free(server_switchport->asset_id);
        server_switchport->asset_id = NULL;
    }
    if (server_switchport->vlans) {
        list_ForEach(listEntry, server_switchport->vlans) {
            free(listEntry->data);
        }
        list_freeList(server_switchport->vlans);
        server_switchport->vlans = NULL;
    }
    if (server_switchport->vlans6) {
        list_ForEach(listEntry, server_switchport->vlans6) {
            free(listEntry->data);
        }
        list_freeList(server_switchport->vlans6);
        server_switchport->vlans6 = NULL;
    }
    free(server_switchport);
}

cJSON *server_switchport_convertToJSON(server_switchport_t *server_switchport) {
    cJSON *item = cJSON_CreateObject();

    // server_switchport->switchport_id
    if (!server_switchport->switchport_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "switchport_id", *server_switchport->switchport_id) == NULL) {
    goto fail; //Numeric
    }


    // server_switchport->switch_id
    if (!server_switchport->switch_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "switch_id", server_switchport->switch_id) == NULL) {
    goto fail; //String
    }


    // server_switchport->_switch
    if (!server_switchport->_switch) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "switch", server_switchport->_switch) == NULL) {
    goto fail; //String
    }


    // server_switchport->port
    if (!server_switchport->port) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "port", server_switchport->port) == NULL) {
    goto fail; //String
    }


    // server_switchport->blade
    if (!server_switchport->blade) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "blade", server_switchport->blade) == NULL) {
    goto fail; //String
    }


    // server_switchport->justport
    if (!server_switchport->justport) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "justport", server_switchport->justport) == NULL) {
    goto fail; //String
    }


    // server_switchport->graph_id
    if (!server_switchport->graph_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "graph_id", server_switchport->graph_id) == NULL) {
    goto fail; //String
    }


    // server_switchport->asset_id
    if (!server_switchport->asset_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "asset_id", *server_switchport->asset_id) == NULL) {
    goto fail; //Numeric
    }


    // server_switchport->vlans
    if(server_switchport->vlans) {
    cJSON *vlans = cJSON_AddArrayToObject(item, "vlans");
    if(vlans == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *vlansListEntry;
    list_ForEach(vlansListEntry, server_switchport->vlans) {
    if(cJSON_AddStringToObject(vlans, "", vlansListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // server_switchport->vlans6
    if(server_switchport->vlans6) {
    cJSON *vlans6 = cJSON_AddArrayToObject(item, "vlans6");
    if(vlans6 == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *vlans6ListEntry;
    list_ForEach(vlans6ListEntry, server_switchport->vlans6) {
    if(cJSON_AddStringToObject(vlans6, "", vlans6ListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

server_switchport_t *server_switchport_parseFromJSON(cJSON *server_switchportJSON){

    server_switchport_t *server_switchport_local_var = NULL;

    // define the local variable for server_switchport->switchport_id
    int *switchport_id_local_var = NULL;

    char *switch_id_local_str = NULL;

    char *_switch_local_str = NULL;

    char *port_local_str = NULL;

    char *blade_local_str = NULL;

    char *justport_local_str = NULL;

    char *graph_id_local_str = NULL;

    // define the local variable for server_switchport->asset_id
    int *asset_id_local_var = NULL;

    // define the local list for server_switchport->vlans
    list_t *vlansList = NULL;

    // define the local list for server_switchport->vlans6
    list_t *vlans6List = NULL;

    // server_switchport->switchport_id
    cJSON *switchport_id = cJSON_GetObjectItemCaseSensitive(server_switchportJSON, "switchport_id");
    if (cJSON_IsNull(switchport_id)) {
        switchport_id = NULL;
    }
    if (!switchport_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(switchport_id))
    {
    goto end; //Numeric
    }
    switchport_id_local_var = malloc(sizeof(int));
    if(!switchport_id_local_var)
    {
        goto end;
    }
    *switchport_id_local_var = switchport_id->valuedouble;

    // server_switchport->switch_id
    cJSON *switch_id = cJSON_GetObjectItemCaseSensitive(server_switchportJSON, "switch_id");
    if (cJSON_IsNull(switch_id)) {
        switch_id = NULL;
    }
    if (!switch_id) {
        goto end;
    }

    
    if(!cJSON_IsString(switch_id))
    {
    goto end; //String
    }

    // server_switchport->_switch
    cJSON *_switch = cJSON_GetObjectItemCaseSensitive(server_switchportJSON, "switch");
    if (cJSON_IsNull(_switch)) {
        _switch = NULL;
    }
    if (!_switch) {
        goto end;
    }

    
    if(!cJSON_IsString(_switch))
    {
    goto end; //String
    }

    // server_switchport->port
    cJSON *port = cJSON_GetObjectItemCaseSensitive(server_switchportJSON, "port");
    if (cJSON_IsNull(port)) {
        port = NULL;
    }
    if (!port) {
        goto end;
    }

    
    if(!cJSON_IsString(port))
    {
    goto end; //String
    }

    // server_switchport->blade
    cJSON *blade = cJSON_GetObjectItemCaseSensitive(server_switchportJSON, "blade");
    if (cJSON_IsNull(blade)) {
        blade = NULL;
    }
    if (!blade) {
        goto end;
    }

    
    if(!cJSON_IsString(blade))
    {
    goto end; //String
    }

    // server_switchport->justport
    cJSON *justport = cJSON_GetObjectItemCaseSensitive(server_switchportJSON, "justport");
    if (cJSON_IsNull(justport)) {
        justport = NULL;
    }
    if (!justport) {
        goto end;
    }

    
    if(!cJSON_IsString(justport))
    {
    goto end; //String
    }

    // server_switchport->graph_id
    cJSON *graph_id = cJSON_GetObjectItemCaseSensitive(server_switchportJSON, "graph_id");
    if (cJSON_IsNull(graph_id)) {
        graph_id = NULL;
    }
    if (!graph_id) {
        goto end;
    }

    
    if(!cJSON_IsString(graph_id))
    {
    goto end; //String
    }

    // server_switchport->asset_id
    cJSON *asset_id = cJSON_GetObjectItemCaseSensitive(server_switchportJSON, "asset_id");
    if (cJSON_IsNull(asset_id)) {
        asset_id = NULL;
    }
    if (!asset_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(asset_id))
    {
    goto end; //Numeric
    }
    asset_id_local_var = malloc(sizeof(int));
    if(!asset_id_local_var)
    {
        goto end;
    }
    *asset_id_local_var = asset_id->valuedouble;

    // server_switchport->vlans
    cJSON *vlans = cJSON_GetObjectItemCaseSensitive(server_switchportJSON, "vlans");
    if (cJSON_IsNull(vlans)) {
        vlans = NULL;
    }
    if (vlans) { 
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
    }

    // server_switchport->vlans6
    cJSON *vlans6 = cJSON_GetObjectItemCaseSensitive(server_switchportJSON, "vlans6");
    if (cJSON_IsNull(vlans6)) {
        vlans6 = NULL;
    }
    if (vlans6) { 
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
    }


    if (switch_id && !cJSON_IsNull(switch_id)) switch_id_local_str = strdup(switch_id->valuestring);
    if (_switch && !cJSON_IsNull(_switch)) _switch_local_str = strdup(_switch->valuestring);
    if (port && !cJSON_IsNull(port)) port_local_str = strdup(port->valuestring);
    if (blade && !cJSON_IsNull(blade)) blade_local_str = strdup(blade->valuestring);
    if (justport && !cJSON_IsNull(justport)) justport_local_str = strdup(justport->valuestring);
    if (graph_id && !cJSON_IsNull(graph_id)) graph_id_local_str = strdup(graph_id->valuestring);

    server_switchport_local_var = server_switchport_create_internal (
        switchport_id_local_var,
        switch_id_local_str,
        _switch_local_str,
        port_local_str,
        blade_local_str,
        justport_local_str,
        graph_id_local_str,
        asset_id_local_var,
        vlans ? vlansList : NULL,
        vlans6 ? vlans6List : NULL
        );

    if (!server_switchport_local_var) {
        goto end;
    }

    return server_switchport_local_var;
end:
    if (switchport_id_local_var) {
        free(switchport_id_local_var);
        switchport_id_local_var = NULL;
    }
    if (switch_id_local_str) {
        free(switch_id_local_str);
        switch_id_local_str = NULL;
    }
    if (_switch_local_str) {
        free(_switch_local_str);
        _switch_local_str = NULL;
    }
    if (port_local_str) {
        free(port_local_str);
        port_local_str = NULL;
    }
    if (blade_local_str) {
        free(blade_local_str);
        blade_local_str = NULL;
    }
    if (justport_local_str) {
        free(justport_local_str);
        justport_local_str = NULL;
    }
    if (graph_id_local_str) {
        free(graph_id_local_str);
        graph_id_local_str = NULL;
    }
    if (asset_id_local_var) {
        free(asset_id_local_var);
        asset_id_local_var = NULL;
    }
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
    return NULL;

}
