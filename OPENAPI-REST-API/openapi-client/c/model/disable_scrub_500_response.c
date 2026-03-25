#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "disable_scrub_500_response.h"



static disable_scrub_500_response_t *disable_scrub_500_response_create_internal(
    int *success,
    char *text
    ) {
    disable_scrub_500_response_t *disable_scrub_500_response_local_var = malloc(sizeof(disable_scrub_500_response_t));
    if (!disable_scrub_500_response_local_var) {
        return NULL;
    }
    memset(disable_scrub_500_response_local_var, 0, sizeof(disable_scrub_500_response_t));
    disable_scrub_500_response_local_var->_library_owned = 1;
    disable_scrub_500_response_local_var->success = success;
    disable_scrub_500_response_local_var->text = text;
    return disable_scrub_500_response_local_var;
}

__attribute__((deprecated)) disable_scrub_500_response_t *disable_scrub_500_response_create(
    int *success,
    char *text
    ) {
    int *success_copy = NULL;
    if (success) {
        success_copy = malloc(sizeof(int));
        if (success_copy) *success_copy = *success;
    }
    disable_scrub_500_response_t *result = disable_scrub_500_response_create_internal (
        success_copy,
        text
        );
    if (!result) {
        free(success_copy);
    }
    return result;
}

void disable_scrub_500_response_free(disable_scrub_500_response_t *disable_scrub_500_response) {
    if(NULL == disable_scrub_500_response){
        return ;
    }
    if(disable_scrub_500_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "disable_scrub_500_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (disable_scrub_500_response->success) {
        free(disable_scrub_500_response->success);
        disable_scrub_500_response->success = NULL;
    }
    if (disable_scrub_500_response->text) {
        free(disable_scrub_500_response->text);
        disable_scrub_500_response->text = NULL;
    }
    free(disable_scrub_500_response);
}

cJSON *disable_scrub_500_response_convertToJSON(disable_scrub_500_response_t *disable_scrub_500_response) {
    cJSON *item = cJSON_CreateObject();

    // disable_scrub_500_response->success
    if (!disable_scrub_500_response->success) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "success", *disable_scrub_500_response->success) == NULL) {
    goto fail; //Bool
    }


    // disable_scrub_500_response->text
    if (!disable_scrub_500_response->text) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "text", disable_scrub_500_response->text) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

disable_scrub_500_response_t *disable_scrub_500_response_parseFromJSON(cJSON *disable_scrub_500_responseJSON){

    disable_scrub_500_response_t *disable_scrub_500_response_local_var = NULL;

    // define the local variable for disable_scrub_500_response->success
    int *success_local_var = NULL;

    char *text_local_str = NULL;

    // disable_scrub_500_response->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(disable_scrub_500_responseJSON, "success");
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

    // disable_scrub_500_response->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(disable_scrub_500_responseJSON, "text");
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

    disable_scrub_500_response_local_var = disable_scrub_500_response_create_internal (
        success_local_var,
        text_local_str
        );

    if (!disable_scrub_500_response_local_var) {
        goto end;
    }

    return disable_scrub_500_response_local_var;
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
