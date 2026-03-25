#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "enable_scrub_200_response.h"



static enable_scrub_200_response_t *enable_scrub_200_response_create_internal(
    int *success,
    char *text
    ) {
    enable_scrub_200_response_t *enable_scrub_200_response_local_var = malloc(sizeof(enable_scrub_200_response_t));
    if (!enable_scrub_200_response_local_var) {
        return NULL;
    }
    memset(enable_scrub_200_response_local_var, 0, sizeof(enable_scrub_200_response_t));
    enable_scrub_200_response_local_var->_library_owned = 1;
    enable_scrub_200_response_local_var->success = success;
    enable_scrub_200_response_local_var->text = text;
    return enable_scrub_200_response_local_var;
}

__attribute__((deprecated)) enable_scrub_200_response_t *enable_scrub_200_response_create(
    int *success,
    char *text
    ) {
    int *success_copy = NULL;
    if (success) {
        success_copy = malloc(sizeof(int));
        if (success_copy) *success_copy = *success;
    }
    enable_scrub_200_response_t *result = enable_scrub_200_response_create_internal (
        success_copy,
        text
        );
    if (!result) {
        free(success_copy);
    }
    return result;
}

void enable_scrub_200_response_free(enable_scrub_200_response_t *enable_scrub_200_response) {
    if(NULL == enable_scrub_200_response){
        return ;
    }
    if(enable_scrub_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "enable_scrub_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (enable_scrub_200_response->success) {
        free(enable_scrub_200_response->success);
        enable_scrub_200_response->success = NULL;
    }
    if (enable_scrub_200_response->text) {
        free(enable_scrub_200_response->text);
        enable_scrub_200_response->text = NULL;
    }
    free(enable_scrub_200_response);
}

cJSON *enable_scrub_200_response_convertToJSON(enable_scrub_200_response_t *enable_scrub_200_response) {
    cJSON *item = cJSON_CreateObject();

    // enable_scrub_200_response->success
    if (!enable_scrub_200_response->success) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "success", *enable_scrub_200_response->success) == NULL) {
    goto fail; //Bool
    }


    // enable_scrub_200_response->text
    if (!enable_scrub_200_response->text) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "text", enable_scrub_200_response->text) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

enable_scrub_200_response_t *enable_scrub_200_response_parseFromJSON(cJSON *enable_scrub_200_responseJSON){

    enable_scrub_200_response_t *enable_scrub_200_response_local_var = NULL;

    // define the local variable for enable_scrub_200_response->success
    int *success_local_var = NULL;

    char *text_local_str = NULL;

    // enable_scrub_200_response->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(enable_scrub_200_responseJSON, "success");
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

    // enable_scrub_200_response->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(enable_scrub_200_responseJSON, "text");
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

    enable_scrub_200_response_local_var = enable_scrub_200_response_create_internal (
        success_local_var,
        text_local_str
        );

    if (!enable_scrub_200_response_local_var) {
        goto end;
    }

    return enable_scrub_200_response_local_var;
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
