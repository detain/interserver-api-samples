#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhosting_cancel_200_response.h"



static webhosting_cancel_200_response_t *webhosting_cancel_200_response_create_internal(
    int *success,
    char *text
    ) {
    webhosting_cancel_200_response_t *webhosting_cancel_200_response_local_var = malloc(sizeof(webhosting_cancel_200_response_t));
    if (!webhosting_cancel_200_response_local_var) {
        return NULL;
    }
    memset(webhosting_cancel_200_response_local_var, 0, sizeof(webhosting_cancel_200_response_t));
    webhosting_cancel_200_response_local_var->_library_owned = 1;
    webhosting_cancel_200_response_local_var->success = success;
    webhosting_cancel_200_response_local_var->text = text;
    return webhosting_cancel_200_response_local_var;
}

__attribute__((deprecated)) webhosting_cancel_200_response_t *webhosting_cancel_200_response_create(
    int *success,
    char *text
    ) {
    int *success_copy = NULL;
    if (success) {
        success_copy = malloc(sizeof(int));
        if (success_copy) *success_copy = *success;
    }
    webhosting_cancel_200_response_t *result = webhosting_cancel_200_response_create_internal (
        success_copy,
        text
        );
    if (!result) {
        free(success_copy);
    }
    return result;
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
    if (webhosting_cancel_200_response->success) {
        free(webhosting_cancel_200_response->success);
        webhosting_cancel_200_response->success = NULL;
    }
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
    if(cJSON_AddBoolToObject(item, "success", *webhosting_cancel_200_response->success) == NULL) {
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

    // define the local variable for webhosting_cancel_200_response->success
    int *success_local_var = NULL;

    char *text_local_str = NULL;

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
    success_local_var = malloc(sizeof(int));
    if(!success_local_var)
    {
        goto end;
    }
    *success_local_var = success->valueint;

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


    if (text && !cJSON_IsNull(text)) text_local_str = strdup(text->valuestring);

    webhosting_cancel_200_response_local_var = webhosting_cancel_200_response_create_internal (
        success_local_var,
        text_local_str
        );

    if (!webhosting_cancel_200_response_local_var) {
        goto end;
    }

    return webhosting_cancel_200_response_local_var;
end:
    if (success_local_var) {
        free(success_local_var);
        success_local_var = NULL;
    }
    if (text_local_str) {
        free(text_local_str);
        text_local_str = NULL;
    }
    return NULL;

}
