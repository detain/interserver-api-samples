#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "backup_login_response.h"



static backup_login_response_t *backup_login_response_create_internal(
    int success,
    char *text
    ) {
    backup_login_response_t *backup_login_response_local_var = malloc(sizeof(backup_login_response_t));
    if (!backup_login_response_local_var) {
        return NULL;
    }
    backup_login_response_local_var->success = success;
    backup_login_response_local_var->text = text;

    backup_login_response_local_var->_library_owned = 1;
    return backup_login_response_local_var;
}

__attribute__((deprecated)) backup_login_response_t *backup_login_response_create(
    int success,
    char *text
    ) {
    return backup_login_response_create_internal (
        success,
        text
        );
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
    if(cJSON_AddBoolToObject(item, "success", backup_login_response->success) == NULL) {
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


    backup_login_response_local_var = backup_login_response_create_internal (
        success ? success->valueint : 0,
        text && !cJSON_IsNull(text) ? strdup(text->valuestring) : NULL
        );

    return backup_login_response_local_var;
end:
    return NULL;

}
