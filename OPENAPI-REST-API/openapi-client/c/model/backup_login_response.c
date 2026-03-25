#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "backup_login_response.h"



static backup_login_response_t *backup_login_response_create_internal(
    int *success,
    char *text
    ) {
    backup_login_response_t *backup_login_response_local_var = malloc(sizeof(backup_login_response_t));
    if (!backup_login_response_local_var) {
        return NULL;
    }
    memset(backup_login_response_local_var, 0, sizeof(backup_login_response_t));
    backup_login_response_local_var->_library_owned = 1;
    backup_login_response_local_var->success = success;
    backup_login_response_local_var->text = text;
    return backup_login_response_local_var;
}

__attribute__((deprecated)) backup_login_response_t *backup_login_response_create(
    int *success,
    char *text
    ) {
    int *success_copy = NULL;
    if (success) {
        success_copy = malloc(sizeof(int));
        if (success_copy) *success_copy = *success;
    }
    backup_login_response_t *result = backup_login_response_create_internal (
        success_copy,
        text
        );
    if (!result) {
        free(success_copy);
    }
    return result;
}

void backup_login_response_free(backup_login_response_t *backup_login_response) {
    if(NULL == backup_login_response){
        return ;
    }
    if(backup_login_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "backup_login_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (backup_login_response->success) {
        free(backup_login_response->success);
        backup_login_response->success = NULL;
    }
    if (backup_login_response->text) {
        free(backup_login_response->text);
        backup_login_response->text = NULL;
    }
    free(backup_login_response);
}

cJSON *backup_login_response_convertToJSON(backup_login_response_t *backup_login_response) {
    cJSON *item = cJSON_CreateObject();

    // backup_login_response->success
    if(backup_login_response->success) {
    if(cJSON_AddBoolToObject(item, "success", *backup_login_response->success) == NULL) {
    goto fail; //Bool
    }
    }


    // backup_login_response->text
    if(backup_login_response->text) {
    if(cJSON_AddStringToObject(item, "text", backup_login_response->text) == NULL) {
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

backup_login_response_t *backup_login_response_parseFromJSON(cJSON *backup_login_responseJSON){

    backup_login_response_t *backup_login_response_local_var = NULL;

    // define the local variable for backup_login_response->success
    int *success_local_var = NULL;

    char *text_local_str = NULL;

    // backup_login_response->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(backup_login_responseJSON, "success");
    if (cJSON_IsNull(success)) {
        success = NULL;
    }
    if (success) { 
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
    }

    // backup_login_response->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(backup_login_responseJSON, "text");
    if (cJSON_IsNull(text)) {
        text = NULL;
    }
    if (text) { 
    if(!cJSON_IsString(text) && !cJSON_IsNull(text))
    {
    goto end; //String
    }
    }


    if (text && !cJSON_IsNull(text)) text_local_str = strdup(text->valuestring);

    backup_login_response_local_var = backup_login_response_create_internal (
        success_local_var,
        text_local_str
        );

    if (!backup_login_response_local_var) {
        goto end;
    }

    return backup_login_response_local_var;
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
