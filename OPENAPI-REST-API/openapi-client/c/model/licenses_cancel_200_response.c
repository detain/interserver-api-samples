#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "licenses_cancel_200_response.h"



static licenses_cancel_200_response_t *licenses_cancel_200_response_create_internal(
    int *success,
    char *text
    ) {
    licenses_cancel_200_response_t *licenses_cancel_200_response_local_var = malloc(sizeof(licenses_cancel_200_response_t));
    if (!licenses_cancel_200_response_local_var) {
        return NULL;
    }
    memset(licenses_cancel_200_response_local_var, 0, sizeof(licenses_cancel_200_response_t));
    licenses_cancel_200_response_local_var->_library_owned = 1;
    licenses_cancel_200_response_local_var->success = success;
    licenses_cancel_200_response_local_var->text = text;
    return licenses_cancel_200_response_local_var;
}

__attribute__((deprecated)) licenses_cancel_200_response_t *licenses_cancel_200_response_create(
    int *success,
    char *text
    ) {
    int *success_copy = NULL;
    if (success) {
        success_copy = malloc(sizeof(int));
        if (success_copy) *success_copy = *success;
    }
    licenses_cancel_200_response_t *result = licenses_cancel_200_response_create_internal (
        success_copy,
        text
        );
    if (!result) {
        free(success_copy);
    }
    return result;
}

void licenses_cancel_200_response_free(licenses_cancel_200_response_t *licenses_cancel_200_response) {
    if(NULL == licenses_cancel_200_response){
        return ;
    }
    if(licenses_cancel_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "licenses_cancel_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (licenses_cancel_200_response->success) {
        free(licenses_cancel_200_response->success);
        licenses_cancel_200_response->success = NULL;
    }
    if (licenses_cancel_200_response->text) {
        free(licenses_cancel_200_response->text);
        licenses_cancel_200_response->text = NULL;
    }
    free(licenses_cancel_200_response);
}

cJSON *licenses_cancel_200_response_convertToJSON(licenses_cancel_200_response_t *licenses_cancel_200_response) {
    cJSON *item = cJSON_CreateObject();

    // licenses_cancel_200_response->success
    if (!licenses_cancel_200_response->success) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "success", *licenses_cancel_200_response->success) == NULL) {
    goto fail; //Bool
    }


    // licenses_cancel_200_response->text
    if (!licenses_cancel_200_response->text) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "text", licenses_cancel_200_response->text) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

licenses_cancel_200_response_t *licenses_cancel_200_response_parseFromJSON(cJSON *licenses_cancel_200_responseJSON){

    licenses_cancel_200_response_t *licenses_cancel_200_response_local_var = NULL;

    // define the local variable for licenses_cancel_200_response->success
    int *success_local_var = NULL;

    char *text_local_str = NULL;

    // licenses_cancel_200_response->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(licenses_cancel_200_responseJSON, "success");
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

    // licenses_cancel_200_response->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(licenses_cancel_200_responseJSON, "text");
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

    licenses_cancel_200_response_local_var = licenses_cancel_200_response_create_internal (
        success_local_var,
        text_local_str
        );

    if (!licenses_cancel_200_response_local_var) {
        goto end;
    }

    return licenses_cancel_200_response_local_var;
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
