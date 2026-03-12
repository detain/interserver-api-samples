#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ssl_cancel_200_response.h"



static ssl_cancel_200_response_t *ssl_cancel_200_response_create_internal(
    int success,
    char *text
    ) {
    ssl_cancel_200_response_t *ssl_cancel_200_response_local_var = malloc(sizeof(ssl_cancel_200_response_t));
    if (!ssl_cancel_200_response_local_var) {
        return NULL;
    }
    ssl_cancel_200_response_local_var->success = success;
    ssl_cancel_200_response_local_var->text = text;

    ssl_cancel_200_response_local_var->_library_owned = 1;
    return ssl_cancel_200_response_local_var;
}

__attribute__((deprecated)) ssl_cancel_200_response_t *ssl_cancel_200_response_create(
    int success,
    char *text
    ) {
    return ssl_cancel_200_response_create_internal (
        success,
        text
        );
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
    if(cJSON_AddBoolToObject(item, "success", ssl_cancel_200_response->success) == NULL) {
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


    ssl_cancel_200_response_local_var = ssl_cancel_200_response_create_internal (
        success->valueint,
        strdup(text->valuestring)
        );

    return ssl_cancel_200_response_local_var;
end:
    return NULL;

}
