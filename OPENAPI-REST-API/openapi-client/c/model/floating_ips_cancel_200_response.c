#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "floating_ips_cancel_200_response.h"



static floating_ips_cancel_200_response_t *floating_ips_cancel_200_response_create_internal(
    int success,
    char *text
    ) {
    floating_ips_cancel_200_response_t *floating_ips_cancel_200_response_local_var = malloc(sizeof(floating_ips_cancel_200_response_t));
    if (!floating_ips_cancel_200_response_local_var) {
        return NULL;
    }
    floating_ips_cancel_200_response_local_var->success = success;
    floating_ips_cancel_200_response_local_var->text = text;

    floating_ips_cancel_200_response_local_var->_library_owned = 1;
    return floating_ips_cancel_200_response_local_var;
}

__attribute__((deprecated)) floating_ips_cancel_200_response_t *floating_ips_cancel_200_response_create(
    int success,
    char *text
    ) {
    return floating_ips_cancel_200_response_create_internal (
        success,
        text
        );
}

void floating_ips_cancel_200_response_free(floating_ips_cancel_200_response_t *floating_ips_cancel_200_response) {
    if(NULL == floating_ips_cancel_200_response){
        return ;
    }
    if(floating_ips_cancel_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "floating_ips_cancel_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (floating_ips_cancel_200_response->text) {
        free(floating_ips_cancel_200_response->text);
        floating_ips_cancel_200_response->text = NULL;
    }
    free(floating_ips_cancel_200_response);
}

cJSON *floating_ips_cancel_200_response_convertToJSON(floating_ips_cancel_200_response_t *floating_ips_cancel_200_response) {
    cJSON *item = cJSON_CreateObject();

    // floating_ips_cancel_200_response->success
    if (!floating_ips_cancel_200_response->success) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "success", floating_ips_cancel_200_response->success) == NULL) {
    goto fail; //Bool
    }


    // floating_ips_cancel_200_response->text
    if (!floating_ips_cancel_200_response->text) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "text", floating_ips_cancel_200_response->text) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

floating_ips_cancel_200_response_t *floating_ips_cancel_200_response_parseFromJSON(cJSON *floating_ips_cancel_200_responseJSON){

    floating_ips_cancel_200_response_t *floating_ips_cancel_200_response_local_var = NULL;

    // floating_ips_cancel_200_response->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(floating_ips_cancel_200_responseJSON, "success");
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

    // floating_ips_cancel_200_response->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(floating_ips_cancel_200_responseJSON, "text");
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


    floating_ips_cancel_200_response_local_var = floating_ips_cancel_200_response_create_internal (
        success->valueint,
        strdup(text->valuestring)
        );

    return floating_ips_cancel_200_response_local_var;
end:
    return NULL;

}
