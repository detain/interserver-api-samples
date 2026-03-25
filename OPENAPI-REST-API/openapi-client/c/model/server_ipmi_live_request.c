#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server_ipmi_live_request.h"



static server_ipmi_live_request_t *server_ipmi_live_request_create_internal(
    char *ip,
    int *asset
    ) {
    server_ipmi_live_request_t *server_ipmi_live_request_local_var = malloc(sizeof(server_ipmi_live_request_t));
    if (!server_ipmi_live_request_local_var) {
        return NULL;
    }
    memset(server_ipmi_live_request_local_var, 0, sizeof(server_ipmi_live_request_t));
    server_ipmi_live_request_local_var->_library_owned = 1;
    server_ipmi_live_request_local_var->ip = ip;
    server_ipmi_live_request_local_var->asset = asset;
    return server_ipmi_live_request_local_var;
}

__attribute__((deprecated)) server_ipmi_live_request_t *server_ipmi_live_request_create(
    char *ip,
    int *asset
    ) {
    int *asset_copy = NULL;
    if (asset) {
        asset_copy = malloc(sizeof(int));
        if (asset_copy) *asset_copy = *asset;
    }
    server_ipmi_live_request_t *result = server_ipmi_live_request_create_internal (
        ip,
        asset_copy
        );
    if (!result) {
        free(asset_copy);
    }
    return result;
}

void server_ipmi_live_request_free(server_ipmi_live_request_t *server_ipmi_live_request) {
    if(NULL == server_ipmi_live_request){
        return ;
    }
    if(server_ipmi_live_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "server_ipmi_live_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (server_ipmi_live_request->ip) {
        free(server_ipmi_live_request->ip);
        server_ipmi_live_request->ip = NULL;
    }
    if (server_ipmi_live_request->asset) {
        free(server_ipmi_live_request->asset);
        server_ipmi_live_request->asset = NULL;
    }
    free(server_ipmi_live_request);
}

cJSON *server_ipmi_live_request_convertToJSON(server_ipmi_live_request_t *server_ipmi_live_request) {
    cJSON *item = cJSON_CreateObject();

    // server_ipmi_live_request->ip
    if (!server_ipmi_live_request->ip) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "ip", server_ipmi_live_request->ip) == NULL) {
    goto fail; //String
    }


    // server_ipmi_live_request->asset
    if(server_ipmi_live_request->asset) {
    if(cJSON_AddNumberToObject(item, "asset", *server_ipmi_live_request->asset) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

server_ipmi_live_request_t *server_ipmi_live_request_parseFromJSON(cJSON *server_ipmi_live_requestJSON){

    server_ipmi_live_request_t *server_ipmi_live_request_local_var = NULL;

    char *ip_local_str = NULL;

    // define the local variable for server_ipmi_live_request->asset
    int *asset_local_var = NULL;

    // server_ipmi_live_request->ip
    cJSON *ip = cJSON_GetObjectItemCaseSensitive(server_ipmi_live_requestJSON, "ip");
    if (cJSON_IsNull(ip)) {
        ip = NULL;
    }
    if (!ip) {
        goto end;
    }

    
    if(!cJSON_IsString(ip))
    {
    goto end; //String
    }

    // server_ipmi_live_request->asset
    cJSON *asset = cJSON_GetObjectItemCaseSensitive(server_ipmi_live_requestJSON, "asset");
    if (cJSON_IsNull(asset)) {
        asset = NULL;
    }
    if (asset) { 
    if(!cJSON_IsNumber(asset))
    {
    goto end; //Numeric
    }
    asset_local_var = malloc(sizeof(int));
    if(!asset_local_var)
    {
        goto end;
    }
    *asset_local_var = asset->valuedouble;
    }


    if (ip && !cJSON_IsNull(ip)) ip_local_str = strdup(ip->valuestring);

    server_ipmi_live_request_local_var = server_ipmi_live_request_create_internal (
        ip_local_str,
        asset_local_var
        );

    if (!server_ipmi_live_request_local_var) {
        goto end;
    }

    return server_ipmi_live_request_local_var;
end:
    if (ip_local_str) {
        free(ip_local_str);
        ip_local_str = NULL;
    }
    if (asset_local_var) {
        free(asset_local_var);
        asset_local_var = NULL;
    }
    return NULL;

}
