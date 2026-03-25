#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "floating_ips_cancel_200_response.h"



static floating_ips_cancel_200_response_t *floating_ips_cancel_200_response_create_internal(
    int *success,
    char *text
    ) {
    floating_ips_cancel_200_response_t *floating_ips_cancel_200_response_local_var = malloc(sizeof(floating_ips_cancel_200_response_t));
    if (!floating_ips_cancel_200_response_local_var) {
        return NULL;
    }
    memset(floating_ips_cancel_200_response_local_var, 0, sizeof(floating_ips_cancel_200_response_t));
    floating_ips_cancel_200_response_local_var->_library_owned = 1;
    floating_ips_cancel_200_response_local_var->success = success;
    floating_ips_cancel_200_response_local_var->text = text;
    return floating_ips_cancel_200_response_local_var;
}

__attribute__((deprecated)) floating_ips_cancel_200_response_t *floating_ips_cancel_200_response_create(
    int *success,
    char *text
    ) {
    int *success_copy = NULL;
    if (success) {
        success_copy = malloc(sizeof(int));
        if (success_copy) *success_copy = *success;
    }
    floating_ips_cancel_200_response_t *result = floating_ips_cancel_200_response_create_internal (
        success_copy,
        text
        );
    if (!result) {
        free(success_copy);
    }
    return result;
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
    if (floating_ips_cancel_200_response->success) {
        free(floating_ips_cancel_200_response->success);
        floating_ips_cancel_200_response->success = NULL;
    }
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
    if(cJSON_AddBoolToObject(item, "success", *floating_ips_cancel_200_response->success) == NULL) {
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

    // define the local variable for floating_ips_cancel_200_response->success
    int *success_local_var = NULL;

    char *text_local_str = NULL;

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
    success_local_var = malloc(sizeof(int));
    if(!success_local_var)
    {
        goto end;
    }
    *success_local_var = success->valueint;

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


    if (text && !cJSON_IsNull(text)) text_local_str = strdup(text->valuestring);

    floating_ips_cancel_200_response_local_var = floating_ips_cancel_200_response_create_internal (
        success_local_var,
        text_local_str
        );

    if (!floating_ips_cancel_200_response_local_var) {
        goto end;
    }

    return floating_ips_cancel_200_response_local_var;
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
