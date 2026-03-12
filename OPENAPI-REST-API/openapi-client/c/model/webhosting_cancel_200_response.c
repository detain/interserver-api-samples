#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhosting_cancel_200_response.h"



static webhosting_cancel_200_response_t *webhosting_cancel_200_response_create_internal(
    int success,
    char *text
    ) {
    webhosting_cancel_200_response_t *webhosting_cancel_200_response_local_var = malloc(sizeof(webhosting_cancel_200_response_t));
    if (!webhosting_cancel_200_response_local_var) {
        return NULL;
    }
    webhosting_cancel_200_response_local_var->success = success;
    webhosting_cancel_200_response_local_var->text = text;

    webhosting_cancel_200_response_local_var->_library_owned = 1;
    return webhosting_cancel_200_response_local_var;
}

__attribute__((deprecated)) webhosting_cancel_200_response_t *webhosting_cancel_200_response_create(
    int success,
    char *text
    ) {
    return webhosting_cancel_200_response_create_internal (
        success,
        text
        );
}

void webhosting_cancel_200_response_free(webhosting_cancel_200_response_t *webhosting_cancel_200_response) {
    if(NULL == webhosting_cancel_200_response){
        return ;
    }
    if(webhosting_cancel_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "webhosting_cancel_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (webhosting_cancel_200_response->text) {
        free(webhosting_cancel_200_response->text);
        webhosting_cancel_200_response->text = NULL;
    }
    free(webhosting_cancel_200_response);
}

cJSON *webhosting_cancel_200_response_convertToJSON(webhosting_cancel_200_response_t *webhosting_cancel_200_response) {
    cJSON *item = cJSON_CreateObject();

    // webhosting_cancel_200_response->success
    if (!webhosting_cancel_200_response->success) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "success", webhosting_cancel_200_response->success) == NULL) {
    goto fail; //Bool
    }


    // webhosting_cancel_200_response->text
    if (!webhosting_cancel_200_response->text) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "text", webhosting_cancel_200_response->text) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

webhosting_cancel_200_response_t *webhosting_cancel_200_response_parseFromJSON(cJSON *webhosting_cancel_200_responseJSON){

    webhosting_cancel_200_response_t *webhosting_cancel_200_response_local_var = NULL;

    // webhosting_cancel_200_response->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(webhosting_cancel_200_responseJSON, "success");
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

    // webhosting_cancel_200_response->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(webhosting_cancel_200_responseJSON, "text");
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


    webhosting_cancel_200_response_local_var = webhosting_cancel_200_response_create_internal (
        success->valueint,
        strdup(text->valuestring)
        );

    return webhosting_cancel_200_response_local_var;
end:
    return NULL;

}
