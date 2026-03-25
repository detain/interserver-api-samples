#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cancel_domain_200_response.h"



static cancel_domain_200_response_t *cancel_domain_200_response_create_internal(
    int *success,
    char *text
    ) {
    cancel_domain_200_response_t *cancel_domain_200_response_local_var = malloc(sizeof(cancel_domain_200_response_t));
    if (!cancel_domain_200_response_local_var) {
        return NULL;
    }
    memset(cancel_domain_200_response_local_var, 0, sizeof(cancel_domain_200_response_t));
    cancel_domain_200_response_local_var->_library_owned = 1;
    cancel_domain_200_response_local_var->success = success;
    cancel_domain_200_response_local_var->text = text;
    return cancel_domain_200_response_local_var;
}

__attribute__((deprecated)) cancel_domain_200_response_t *cancel_domain_200_response_create(
    int *success,
    char *text
    ) {
    int *success_copy = NULL;
    if (success) {
        success_copy = malloc(sizeof(int));
        if (success_copy) *success_copy = *success;
    }
    cancel_domain_200_response_t *result = cancel_domain_200_response_create_internal (
        success_copy,
        text
        );
    if (!result) {
        free(success_copy);
    }
    return result;
}

void cancel_domain_200_response_free(cancel_domain_200_response_t *cancel_domain_200_response) {
    if(NULL == cancel_domain_200_response){
        return ;
    }
    if(cancel_domain_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cancel_domain_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cancel_domain_200_response->success) {
        free(cancel_domain_200_response->success);
        cancel_domain_200_response->success = NULL;
    }
    if (cancel_domain_200_response->text) {
        free(cancel_domain_200_response->text);
        cancel_domain_200_response->text = NULL;
    }
    free(cancel_domain_200_response);
}

cJSON *cancel_domain_200_response_convertToJSON(cancel_domain_200_response_t *cancel_domain_200_response) {
    cJSON *item = cJSON_CreateObject();

    // cancel_domain_200_response->success
    if (!cancel_domain_200_response->success) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "success", *cancel_domain_200_response->success) == NULL) {
    goto fail; //Bool
    }


    // cancel_domain_200_response->text
    if (!cancel_domain_200_response->text) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "text", cancel_domain_200_response->text) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

cancel_domain_200_response_t *cancel_domain_200_response_parseFromJSON(cJSON *cancel_domain_200_responseJSON){

    cancel_domain_200_response_t *cancel_domain_200_response_local_var = NULL;

    // define the local variable for cancel_domain_200_response->success
    int *success_local_var = NULL;

    char *text_local_str = NULL;

    // cancel_domain_200_response->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(cancel_domain_200_responseJSON, "success");
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

    // cancel_domain_200_response->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(cancel_domain_200_responseJSON, "text");
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

    cancel_domain_200_response_local_var = cancel_domain_200_response_create_internal (
        success_local_var,
        text_local_str
        );

    if (!cancel_domain_200_response_local_var) {
        goto end;
    }

    return cancel_domain_200_response_local_var;
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
