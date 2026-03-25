#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server_ipmi_power_request.h"


char* server_ipmi_power_request_action_ToString(interserver_management_api_server_ipmi_power_request_ACTION_e action) {
    char* actionArray[] =  { "NULL", "cycle", "reset", "on", "off", "soft" };
    return actionArray[action];
}

interserver_management_api_server_ipmi_power_request_ACTION_e server_ipmi_power_request_action_FromString(char* action){
    int stringToReturn = 0;
    char *actionArray[] =  { "NULL", "cycle", "reset", "on", "off", "soft" };
    size_t sizeofArray = sizeof(actionArray) / sizeof(actionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(action, actionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static server_ipmi_power_request_t *server_ipmi_power_request_create_internal(
    interserver_management_api_server_ipmi_power_request_ACTION_e action,
    int *asset
    ) {
    server_ipmi_power_request_t *server_ipmi_power_request_local_var = malloc(sizeof(server_ipmi_power_request_t));
    if (!server_ipmi_power_request_local_var) {
        return NULL;
    }
    memset(server_ipmi_power_request_local_var, 0, sizeof(server_ipmi_power_request_t));
    server_ipmi_power_request_local_var->_library_owned = 1;
    server_ipmi_power_request_local_var->action = action;
    server_ipmi_power_request_local_var->asset = asset;
    return server_ipmi_power_request_local_var;
}

__attribute__((deprecated)) server_ipmi_power_request_t *server_ipmi_power_request_create(
    interserver_management_api_server_ipmi_power_request_ACTION_e action,
    int *asset
    ) {
    int *asset_copy = NULL;
    if (asset) {
        asset_copy = malloc(sizeof(int));
        if (asset_copy) *asset_copy = *asset;
    }
    server_ipmi_power_request_t *result = server_ipmi_power_request_create_internal (
        action,
        asset_copy
        );
    if (!result) {
        free(asset_copy);
    }
    return result;
}

void server_ipmi_power_request_free(server_ipmi_power_request_t *server_ipmi_power_request) {
    if(NULL == server_ipmi_power_request){
        return ;
    }
    if(server_ipmi_power_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "server_ipmi_power_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (server_ipmi_power_request->asset) {
        free(server_ipmi_power_request->asset);
        server_ipmi_power_request->asset = NULL;
    }
    free(server_ipmi_power_request);
}

cJSON *server_ipmi_power_request_convertToJSON(server_ipmi_power_request_t *server_ipmi_power_request) {
    cJSON *item = cJSON_CreateObject();

    // server_ipmi_power_request->action
    if (interserver_management_api_server_ipmi_power_request_ACTION_NULL == server_ipmi_power_request->action) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "action", server_ipmi_power_request_action_ToString(server_ipmi_power_request->action)) == NULL)
    {
    goto fail; //Enum
    }


    // server_ipmi_power_request->asset
    if(server_ipmi_power_request->asset) {
    if(cJSON_AddNumberToObject(item, "asset", *server_ipmi_power_request->asset) == NULL) {
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

server_ipmi_power_request_t *server_ipmi_power_request_parseFromJSON(cJSON *server_ipmi_power_requestJSON){

    server_ipmi_power_request_t *server_ipmi_power_request_local_var = NULL;

    // define the local variable for server_ipmi_power_request->asset
    int *asset_local_var = NULL;

    // server_ipmi_power_request->action
    cJSON *action = cJSON_GetObjectItemCaseSensitive(server_ipmi_power_requestJSON, "action");
    if (cJSON_IsNull(action)) {
        action = NULL;
    }
    if (!action) {
        goto end;
    }

    interserver_management_api_server_ipmi_power_request_ACTION_e actionVariable;
    
    if(!cJSON_IsString(action))
    {
    goto end; //Enum
    }
    actionVariable = server_ipmi_power_request_action_FromString(action->valuestring);

    // server_ipmi_power_request->asset
    cJSON *asset = cJSON_GetObjectItemCaseSensitive(server_ipmi_power_requestJSON, "asset");
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



    server_ipmi_power_request_local_var = server_ipmi_power_request_create_internal (
        actionVariable,
        asset_local_var
        );

    if (!server_ipmi_power_request_local_var) {
        goto end;
    }

    return server_ipmi_power_request_local_var;
end:
    if (asset_local_var) {
        free(asset_local_var);
        asset_local_var = NULL;
    }
    return NULL;

}
