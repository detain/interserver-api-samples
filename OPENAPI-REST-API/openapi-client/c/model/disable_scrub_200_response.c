#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "disable_scrub_200_response.h"



static disable_scrub_200_response_t *disable_scrub_200_response_create_internal(
    int success,
    char *text
    ) {
    disable_scrub_200_response_t *disable_scrub_200_response_local_var = malloc(sizeof(disable_scrub_200_response_t));
    if (!disable_scrub_200_response_local_var) {
        return NULL;
    }
    disable_scrub_200_response_local_var->success = success;
    disable_scrub_200_response_local_var->text = text;

    disable_scrub_200_response_local_var->_library_owned = 1;
    return disable_scrub_200_response_local_var;
}

__attribute__((deprecated)) disable_scrub_200_response_t *disable_scrub_200_response_create(
    int success,
    char *text
    ) {
    return disable_scrub_200_response_create_internal (
        success,
        text
        );
}

void disable_scrub_200_response_free(disable_scrub_200_response_t *disable_scrub_200_response) {
    if(NULL == disable_scrub_200_response){
        return ;
    }
    if(disable_scrub_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "disable_scrub_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (disable_scrub_200_response->text) {
        free(disable_scrub_200_response->text);
        disable_scrub_200_response->text = NULL;
    }
    free(disable_scrub_200_response);
}

cJSON *disable_scrub_200_response_convertToJSON(disable_scrub_200_response_t *disable_scrub_200_response) {
    cJSON *item = cJSON_CreateObject();

    // disable_scrub_200_response->success
    if (!disable_scrub_200_response->success) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "success", disable_scrub_200_response->success) == NULL) {
    goto fail; //Bool
    }


    // disable_scrub_200_response->text
    if (!disable_scrub_200_response->text) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "text", disable_scrub_200_response->text) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

disable_scrub_200_response_t *disable_scrub_200_response_parseFromJSON(cJSON *disable_scrub_200_responseJSON){

    disable_scrub_200_response_t *disable_scrub_200_response_local_var = NULL;

    // disable_scrub_200_response->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(disable_scrub_200_responseJSON, "success");
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

    // disable_scrub_200_response->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(disable_scrub_200_responseJSON, "text");
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


    disable_scrub_200_response_local_var = disable_scrub_200_response_create_internal (
        success->valueint,
        strdup(text->valuestring)
        );

    return disable_scrub_200_response_local_var;
end:
    return NULL;

}
