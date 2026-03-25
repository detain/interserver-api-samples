#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "quickservers_cancel_200_response.h"



static quickservers_cancel_200_response_t *quickservers_cancel_200_response_create_internal(
    int *success,
    char *text
    ) {
    quickservers_cancel_200_response_t *quickservers_cancel_200_response_local_var = malloc(sizeof(quickservers_cancel_200_response_t));
    if (!quickservers_cancel_200_response_local_var) {
        return NULL;
    }
    memset(quickservers_cancel_200_response_local_var, 0, sizeof(quickservers_cancel_200_response_t));
    quickservers_cancel_200_response_local_var->_library_owned = 1;
    quickservers_cancel_200_response_local_var->success = success;
    quickservers_cancel_200_response_local_var->text = text;
    return quickservers_cancel_200_response_local_var;
}

__attribute__((deprecated)) quickservers_cancel_200_response_t *quickservers_cancel_200_response_create(
    int *success,
    char *text
    ) {
    int *success_copy = NULL;
    if (success) {
        success_copy = malloc(sizeof(int));
        if (success_copy) *success_copy = *success;
    }
    quickservers_cancel_200_response_t *result = quickservers_cancel_200_response_create_internal (
        success_copy,
        text
        );
    if (!result) {
        free(success_copy);
    }
    return result;
}

void quickservers_cancel_200_response_free(quickservers_cancel_200_response_t *quickservers_cancel_200_response) {
    if(NULL == quickservers_cancel_200_response){
        return ;
    }
    if(quickservers_cancel_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "quickservers_cancel_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (quickservers_cancel_200_response->success) {
        free(quickservers_cancel_200_response->success);
        quickservers_cancel_200_response->success = NULL;
    }
    if (quickservers_cancel_200_response->text) {
        free(quickservers_cancel_200_response->text);
        quickservers_cancel_200_response->text = NULL;
    }
    free(quickservers_cancel_200_response);
}

cJSON *quickservers_cancel_200_response_convertToJSON(quickservers_cancel_200_response_t *quickservers_cancel_200_response) {
    cJSON *item = cJSON_CreateObject();

    // quickservers_cancel_200_response->success
    if (!quickservers_cancel_200_response->success) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "success", *quickservers_cancel_200_response->success) == NULL) {
    goto fail; //Bool
    }


    // quickservers_cancel_200_response->text
    if (!quickservers_cancel_200_response->text) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "text", quickservers_cancel_200_response->text) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

quickservers_cancel_200_response_t *quickservers_cancel_200_response_parseFromJSON(cJSON *quickservers_cancel_200_responseJSON){

    quickservers_cancel_200_response_t *quickservers_cancel_200_response_local_var = NULL;

    // define the local variable for quickservers_cancel_200_response->success
    int *success_local_var = NULL;

    char *text_local_str = NULL;

    // quickservers_cancel_200_response->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(quickservers_cancel_200_responseJSON, "success");
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

    // quickservers_cancel_200_response->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(quickservers_cancel_200_responseJSON, "text");
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

    quickservers_cancel_200_response_local_var = quickservers_cancel_200_response_create_internal (
        success_local_var,
        text_local_str
        );

    if (!quickservers_cancel_200_response_local_var) {
        goto end;
    }

    return quickservers_cancel_200_response_local_var;
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
