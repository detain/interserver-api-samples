#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "servers_cancel_200_response.h"



static servers_cancel_200_response_t *servers_cancel_200_response_create_internal(
    int success,
    char *text
    ) {
    servers_cancel_200_response_t *servers_cancel_200_response_local_var = malloc(sizeof(servers_cancel_200_response_t));
    if (!servers_cancel_200_response_local_var) {
        return NULL;
    }
    servers_cancel_200_response_local_var->success = success;
    servers_cancel_200_response_local_var->text = text;

    servers_cancel_200_response_local_var->_library_owned = 1;
    return servers_cancel_200_response_local_var;
}

__attribute__((deprecated)) servers_cancel_200_response_t *servers_cancel_200_response_create(
    int success,
    char *text
    ) {
    return servers_cancel_200_response_create_internal (
        success,
        text
        );
}

void servers_cancel_200_response_free(servers_cancel_200_response_t *servers_cancel_200_response) {
    if(NULL == servers_cancel_200_response){
        return ;
    }
    if(servers_cancel_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "servers_cancel_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (servers_cancel_200_response->text) {
        free(servers_cancel_200_response->text);
        servers_cancel_200_response->text = NULL;
    }
    free(servers_cancel_200_response);
}

cJSON *servers_cancel_200_response_convertToJSON(servers_cancel_200_response_t *servers_cancel_200_response) {
    cJSON *item = cJSON_CreateObject();

    // servers_cancel_200_response->success
    if (!servers_cancel_200_response->success) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "success", servers_cancel_200_response->success) == NULL) {
    goto fail; //Bool
    }


    // servers_cancel_200_response->text
    if (!servers_cancel_200_response->text) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "text", servers_cancel_200_response->text) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

servers_cancel_200_response_t *servers_cancel_200_response_parseFromJSON(cJSON *servers_cancel_200_responseJSON){

    servers_cancel_200_response_t *servers_cancel_200_response_local_var = NULL;

    // servers_cancel_200_response->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(servers_cancel_200_responseJSON, "success");
    if (cJSON_IsNull(success)) {
        success = NULL;
    }
    if (!success) {
        goto end;
    }

    
    if(!cJSON_IsBool(success))
    {
    goto end; //Bool
    }

    // servers_cancel_200_response->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(servers_cancel_200_responseJSON, "text");
    if (cJSON_IsNull(text)) {
        text = NULL;
    }
    if (!text) {
        goto end;
    }

    
    if(!cJSON_IsString(text))
    {
    goto end; //String
    }


    servers_cancel_200_response_local_var = servers_cancel_200_response_create_internal (
        success->valueint,
        strdup(text->valuestring)
        );

    return servers_cancel_200_response_local_var;
end:
    return NULL;

}
