#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mail_cancel_200_response.h"



static mail_cancel_200_response_t *mail_cancel_200_response_create_internal(
    int *success,
    char *text
    ) {
    mail_cancel_200_response_t *mail_cancel_200_response_local_var = malloc(sizeof(mail_cancel_200_response_t));
    if (!mail_cancel_200_response_local_var) {
        return NULL;
    }
    memset(mail_cancel_200_response_local_var, 0, sizeof(mail_cancel_200_response_t));
    mail_cancel_200_response_local_var->_library_owned = 1;
    mail_cancel_200_response_local_var->success = success;
    mail_cancel_200_response_local_var->text = text;
    return mail_cancel_200_response_local_var;
}

__attribute__((deprecated)) mail_cancel_200_response_t *mail_cancel_200_response_create(
    int *success,
    char *text
    ) {
    int *success_copy = NULL;
    if (success) {
        success_copy = malloc(sizeof(int));
        if (success_copy) *success_copy = *success;
    }
    mail_cancel_200_response_t *result = mail_cancel_200_response_create_internal (
        success_copy,
        text
        );
    if (!result) {
        free(success_copy);
    }
    return result;
}

void mail_cancel_200_response_free(mail_cancel_200_response_t *mail_cancel_200_response) {
    if(NULL == mail_cancel_200_response){
        return ;
    }
    if(mail_cancel_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "mail_cancel_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (mail_cancel_200_response->success) {
        free(mail_cancel_200_response->success);
        mail_cancel_200_response->success = NULL;
    }
    if (mail_cancel_200_response->text) {
        free(mail_cancel_200_response->text);
        mail_cancel_200_response->text = NULL;
    }
    free(mail_cancel_200_response);
}

cJSON *mail_cancel_200_response_convertToJSON(mail_cancel_200_response_t *mail_cancel_200_response) {
    cJSON *item = cJSON_CreateObject();

    // mail_cancel_200_response->success
    if (!mail_cancel_200_response->success) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "success", *mail_cancel_200_response->success) == NULL) {
    goto fail; //Bool
    }


    // mail_cancel_200_response->text
    if (!mail_cancel_200_response->text) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "text", mail_cancel_200_response->text) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

mail_cancel_200_response_t *mail_cancel_200_response_parseFromJSON(cJSON *mail_cancel_200_responseJSON){

    mail_cancel_200_response_t *mail_cancel_200_response_local_var = NULL;

    // define the local variable for mail_cancel_200_response->success
    int *success_local_var = NULL;

    char *text_local_str = NULL;

    // mail_cancel_200_response->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(mail_cancel_200_responseJSON, "success");
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

    // mail_cancel_200_response->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(mail_cancel_200_responseJSON, "text");
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

    mail_cancel_200_response_local_var = mail_cancel_200_response_create_internal (
        success_local_var,
        text_local_str
        );

    if (!mail_cancel_200_response_local_var) {
        goto end;
    }

    return mail_cancel_200_response_local_var;
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
