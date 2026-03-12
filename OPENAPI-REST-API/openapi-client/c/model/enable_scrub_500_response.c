#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "enable_scrub_500_response.h"



static enable_scrub_500_response_t *enable_scrub_500_response_create_internal(
    int success,
    char *text
    ) {
    enable_scrub_500_response_t *enable_scrub_500_response_local_var = malloc(sizeof(enable_scrub_500_response_t));
    if (!enable_scrub_500_response_local_var) {
        return NULL;
    }
    enable_scrub_500_response_local_var->success = success;
    enable_scrub_500_response_local_var->text = text;

    enable_scrub_500_response_local_var->_library_owned = 1;
    return enable_scrub_500_response_local_var;
}

__attribute__((deprecated)) enable_scrub_500_response_t *enable_scrub_500_response_create(
    int success,
    char *text
    ) {
    return enable_scrub_500_response_create_internal (
        success,
        text
        );
}

void enable_scrub_500_response_free(enable_scrub_500_response_t *enable_scrub_500_response) {
    if(NULL == enable_scrub_500_response){
        return ;
    }
    if(enable_scrub_500_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "enable_scrub_500_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (enable_scrub_500_response->text) {
        free(enable_scrub_500_response->text);
        enable_scrub_500_response->text = NULL;
    }
    free(enable_scrub_500_response);
}

cJSON *enable_scrub_500_response_convertToJSON(enable_scrub_500_response_t *enable_scrub_500_response) {
    cJSON *item = cJSON_CreateObject();

    // enable_scrub_500_response->success
    if (!enable_scrub_500_response->success) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "success", enable_scrub_500_response->success) == NULL) {
    goto fail; //Bool
    }


    // enable_scrub_500_response->text
    if (!enable_scrub_500_response->text) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "text", enable_scrub_500_response->text) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

enable_scrub_500_response_t *enable_scrub_500_response_parseFromJSON(cJSON *enable_scrub_500_responseJSON){

    enable_scrub_500_response_t *enable_scrub_500_response_local_var = NULL;

    // enable_scrub_500_response->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(enable_scrub_500_responseJSON, "success");
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

    // enable_scrub_500_response->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(enable_scrub_500_responseJSON, "text");
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


    enable_scrub_500_response_local_var = enable_scrub_500_response_create_internal (
        success->valueint,
        strdup(text->valuestring)
        );

    return enable_scrub_500_response_local_var;
end:
    return NULL;

}
