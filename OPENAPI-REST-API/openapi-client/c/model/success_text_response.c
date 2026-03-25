#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "success_text_response.h"



static success_text_response_t *success_text_response_create_internal(
    int *success,
    char *text,
    char *action
    ) {
    success_text_response_t *success_text_response_local_var = malloc(sizeof(success_text_response_t));
    if (!success_text_response_local_var) {
        return NULL;
    }
    memset(success_text_response_local_var, 0, sizeof(success_text_response_t));
    success_text_response_local_var->_library_owned = 1;
    success_text_response_local_var->success = success;
    success_text_response_local_var->text = text;
    success_text_response_local_var->action = action;
    return success_text_response_local_var;
}

__attribute__((deprecated)) success_text_response_t *success_text_response_create(
    int *success,
    char *text,
    char *action
    ) {
    int *success_copy = NULL;
    if (success) {
        success_copy = malloc(sizeof(int));
        if (success_copy) *success_copy = *success;
    }
    success_text_response_t *result = success_text_response_create_internal (
        success_copy,
        text,
        action
        );
    if (!result) {
        free(success_copy);
    }
    return result;
}

void success_text_response_free(success_text_response_t *success_text_response) {
    if(NULL == success_text_response){
        return ;
    }
    if(success_text_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "success_text_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (success_text_response->success) {
        free(success_text_response->success);
        success_text_response->success = NULL;
    }
    if (success_text_response->text) {
        free(success_text_response->text);
        success_text_response->text = NULL;
    }
    if (success_text_response->action) {
        free(success_text_response->action);
        success_text_response->action = NULL;
    }
    free(success_text_response);
}

cJSON *success_text_response_convertToJSON(success_text_response_t *success_text_response) {
    cJSON *item = cJSON_CreateObject();

    // success_text_response->success
    if (!success_text_response->success) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "success", *success_text_response->success) == NULL) {
    goto fail; //Bool
    }


    // success_text_response->text
    if(success_text_response->text) {
    if(cJSON_AddStringToObject(item, "text", success_text_response->text) == NULL) {
    goto fail; //String
    }
    }


    // success_text_response->action
    if(success_text_response->action) {
    if(cJSON_AddStringToObject(item, "action", success_text_response->action) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

success_text_response_t *success_text_response_parseFromJSON(cJSON *success_text_responseJSON){

    success_text_response_t *success_text_response_local_var = NULL;

    // define the local variable for success_text_response->success
    int *success_local_var = NULL;

    char *text_local_str = NULL;

    char *action_local_str = NULL;

    // success_text_response->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(success_text_responseJSON, "success");
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

    // success_text_response->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(success_text_responseJSON, "text");
    if (cJSON_IsNull(text)) {
        text = NULL;
    }
    if (text) { 
    if(!cJSON_IsString(text) && !cJSON_IsNull(text))
    {
    goto end; //String
    }
    }

    // success_text_response->action
    cJSON *action = cJSON_GetObjectItemCaseSensitive(success_text_responseJSON, "action");
    if (cJSON_IsNull(action)) {
        action = NULL;
    }
    if (action) { 
    if(!cJSON_IsString(action) && !cJSON_IsNull(action))
    {
    goto end; //String
    }
    }


    if (text && !cJSON_IsNull(text)) text_local_str = strdup(text->valuestring);
    if (action && !cJSON_IsNull(action)) action_local_str = strdup(action->valuestring);

    success_text_response_local_var = success_text_response_create_internal (
        success_local_var,
        text_local_str,
        action_local_str
        );

    if (!success_text_response_local_var) {
        goto end;
    }

    return success_text_response_local_var;
end:
    if (success_local_var) {
        free(success_local_var);
        success_local_var = NULL;
    }
    if (text_local_str) {
        free(text_local_str);
        text_local_str = NULL;
    }
    if (action_local_str) {
        free(action_local_str);
        action_local_str = NULL;
    }
    return NULL;

}
