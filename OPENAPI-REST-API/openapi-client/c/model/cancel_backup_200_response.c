#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cancel_backup_200_response.h"



static cancel_backup_200_response_t *cancel_backup_200_response_create_internal(
    int success,
    char *text
    ) {
    cancel_backup_200_response_t *cancel_backup_200_response_local_var = malloc(sizeof(cancel_backup_200_response_t));
    if (!cancel_backup_200_response_local_var) {
        return NULL;
    }
    cancel_backup_200_response_local_var->success = success;
    cancel_backup_200_response_local_var->text = text;

    cancel_backup_200_response_local_var->_library_owned = 1;
    return cancel_backup_200_response_local_var;
}

__attribute__((deprecated)) cancel_backup_200_response_t *cancel_backup_200_response_create(
    int success,
    char *text
    ) {
    return cancel_backup_200_response_create_internal (
        success,
        text
        );
}

void cancel_backup_200_response_free(cancel_backup_200_response_t *cancel_backup_200_response) {
    if(NULL == cancel_backup_200_response){
        return ;
    }
    if(cancel_backup_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cancel_backup_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cancel_backup_200_response->text) {
        free(cancel_backup_200_response->text);
        cancel_backup_200_response->text = NULL;
    }
    free(cancel_backup_200_response);
}

cJSON *cancel_backup_200_response_convertToJSON(cancel_backup_200_response_t *cancel_backup_200_response) {
    cJSON *item = cJSON_CreateObject();

    // cancel_backup_200_response->success
    if (!cancel_backup_200_response->success) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "success", cancel_backup_200_response->success) == NULL) {
    goto fail; //Bool
    }


    // cancel_backup_200_response->text
    if (!cancel_backup_200_response->text) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "text", cancel_backup_200_response->text) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

cancel_backup_200_response_t *cancel_backup_200_response_parseFromJSON(cJSON *cancel_backup_200_responseJSON){

    cancel_backup_200_response_t *cancel_backup_200_response_local_var = NULL;

    // cancel_backup_200_response->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(cancel_backup_200_responseJSON, "success");
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

    // cancel_backup_200_response->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(cancel_backup_200_responseJSON, "text");
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


    cancel_backup_200_response_local_var = cancel_backup_200_response_create_internal (
        success->valueint,
        strdup(text->valuestring)
        );

    return cancel_backup_200_response_local_var;
end:
    return NULL;

}
