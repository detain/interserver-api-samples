#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "delete_filter_400_response.h"



static delete_filter_400_response_t *delete_filter_400_response_create_internal(
    int *success,
    char *text
    ) {
    delete_filter_400_response_t *delete_filter_400_response_local_var = malloc(sizeof(delete_filter_400_response_t));
    if (!delete_filter_400_response_local_var) {
        return NULL;
    }
    memset(delete_filter_400_response_local_var, 0, sizeof(delete_filter_400_response_t));
    delete_filter_400_response_local_var->_library_owned = 1;
    delete_filter_400_response_local_var->success = success;
    delete_filter_400_response_local_var->text = text;
    return delete_filter_400_response_local_var;
}

__attribute__((deprecated)) delete_filter_400_response_t *delete_filter_400_response_create(
    int *success,
    char *text
    ) {
    int *success_copy = NULL;
    if (success) {
        success_copy = malloc(sizeof(int));
        if (success_copy) *success_copy = *success;
    }
    delete_filter_400_response_t *result = delete_filter_400_response_create_internal (
        success_copy,
        text
        );
    if (!result) {
        free(success_copy);
    }
    return result;
}

void delete_filter_400_response_free(delete_filter_400_response_t *delete_filter_400_response) {
    if(NULL == delete_filter_400_response){
        return ;
    }
    if(delete_filter_400_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "delete_filter_400_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (delete_filter_400_response->success) {
        free(delete_filter_400_response->success);
        delete_filter_400_response->success = NULL;
    }
    if (delete_filter_400_response->text) {
        free(delete_filter_400_response->text);
        delete_filter_400_response->text = NULL;
    }
    free(delete_filter_400_response);
}

cJSON *delete_filter_400_response_convertToJSON(delete_filter_400_response_t *delete_filter_400_response) {
    cJSON *item = cJSON_CreateObject();

    // delete_filter_400_response->success
    if(delete_filter_400_response->success) {
    if(cJSON_AddBoolToObject(item, "success", *delete_filter_400_response->success) == NULL) {
    goto fail; //Bool
    }
    }


    // delete_filter_400_response->text
    if(delete_filter_400_response->text) {
    if(cJSON_AddStringToObject(item, "text", delete_filter_400_response->text) == NULL) {
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

delete_filter_400_response_t *delete_filter_400_response_parseFromJSON(cJSON *delete_filter_400_responseJSON){

    delete_filter_400_response_t *delete_filter_400_response_local_var = NULL;

    // define the local variable for delete_filter_400_response->success
    int *success_local_var = NULL;

    char *text_local_str = NULL;

    // delete_filter_400_response->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(delete_filter_400_responseJSON, "success");
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

    // delete_filter_400_response->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(delete_filter_400_responseJSON, "text");
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

    delete_filter_400_response_local_var = delete_filter_400_response_create_internal (
        success_local_var,
        text_local_str
        );

    if (!delete_filter_400_response_local_var) {
        goto end;
    }

    return delete_filter_400_response_local_var;
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
