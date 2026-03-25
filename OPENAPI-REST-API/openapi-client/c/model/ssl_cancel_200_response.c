#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ssl_cancel_200_response.h"



static ssl_cancel_200_response_t *ssl_cancel_200_response_create_internal(
    int *success,
    char *text
    ) {
    ssl_cancel_200_response_t *ssl_cancel_200_response_local_var = malloc(sizeof(ssl_cancel_200_response_t));
    if (!ssl_cancel_200_response_local_var) {
        return NULL;
    }
    memset(ssl_cancel_200_response_local_var, 0, sizeof(ssl_cancel_200_response_t));
    ssl_cancel_200_response_local_var->_library_owned = 1;
    ssl_cancel_200_response_local_var->success = success;
    ssl_cancel_200_response_local_var->text = text;
    return ssl_cancel_200_response_local_var;
}

__attribute__((deprecated)) ssl_cancel_200_response_t *ssl_cancel_200_response_create(
    int *success,
    char *text
    ) {
    int *success_copy = NULL;
    if (success) {
        success_copy = malloc(sizeof(int));
        if (success_copy) *success_copy = *success;
    }
    ssl_cancel_200_response_t *result = ssl_cancel_200_response_create_internal (
        success_copy,
        text
        );
    if (!result) {
        free(success_copy);
    }
    return result;
}

void ssl_cancel_200_response_free(ssl_cancel_200_response_t *ssl_cancel_200_response) {
    if(NULL == ssl_cancel_200_response){
        return ;
    }
    if(ssl_cancel_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ssl_cancel_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ssl_cancel_200_response->success) {
        free(ssl_cancel_200_response->success);
        ssl_cancel_200_response->success = NULL;
    }
    if (ssl_cancel_200_response->text) {
        free(ssl_cancel_200_response->text);
        ssl_cancel_200_response->text = NULL;
    }
    free(ssl_cancel_200_response);
}

cJSON *ssl_cancel_200_response_convertToJSON(ssl_cancel_200_response_t *ssl_cancel_200_response) {
    cJSON *item = cJSON_CreateObject();

    // ssl_cancel_200_response->success
    if (!ssl_cancel_200_response->success) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "success", *ssl_cancel_200_response->success) == NULL) {
    goto fail; //Bool
    }


    // ssl_cancel_200_response->text
    if (!ssl_cancel_200_response->text) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "text", ssl_cancel_200_response->text) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ssl_cancel_200_response_t *ssl_cancel_200_response_parseFromJSON(cJSON *ssl_cancel_200_responseJSON){

    ssl_cancel_200_response_t *ssl_cancel_200_response_local_var = NULL;

    // define the local variable for ssl_cancel_200_response->success
    int *success_local_var = NULL;

    char *text_local_str = NULL;

    // ssl_cancel_200_response->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(ssl_cancel_200_responseJSON, "success");
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

    // ssl_cancel_200_response->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(ssl_cancel_200_responseJSON, "text");
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

    ssl_cancel_200_response_local_var = ssl_cancel_200_response_create_internal (
        success_local_var,
        text_local_str
        );

    if (!ssl_cancel_200_response_local_var) {
        goto end;
    }

    return ssl_cancel_200_response_local_var;
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
