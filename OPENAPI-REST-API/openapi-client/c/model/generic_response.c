#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "generic_response.h"



static generic_response_t *generic_response_create_internal(
    char *status,
    char *text
    ) {
    generic_response_t *generic_response_local_var = malloc(sizeof(generic_response_t));
    if (!generic_response_local_var) {
        return NULL;
    }
    generic_response_local_var->status = status;
    generic_response_local_var->text = text;

    generic_response_local_var->_library_owned = 1;
    return generic_response_local_var;
}

__attribute__((deprecated)) generic_response_t *generic_response_create(
    char *status,
    char *text
    ) {
    return generic_response_create_internal (
        status,
        text
        );
}

void generic_response_free(generic_response_t *generic_response) {
    if(NULL == generic_response){
        return ;
    }
    if(generic_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "generic_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (generic_response->status) {
        free(generic_response->status);
        generic_response->status = NULL;
    }
    if (generic_response->text) {
        free(generic_response->text);
        generic_response->text = NULL;
    }
    free(generic_response);
}

cJSON *generic_response_convertToJSON(generic_response_t *generic_response) {
    cJSON *item = cJSON_CreateObject();

    // generic_response->status
    if (!generic_response->status) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "status", generic_response->status) == NULL) {
    goto fail; //String
    }


    // generic_response->text
    if (!generic_response->text) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "text", generic_response->text) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

generic_response_t *generic_response_parseFromJSON(cJSON *generic_responseJSON){

    generic_response_t *generic_response_local_var = NULL;

    // generic_response->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(generic_responseJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (!status) {
        goto end;
    }

    
    if(!cJSON_IsString(status))
    {
    goto end; //String
    }

    // generic_response->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(generic_responseJSON, "text");
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


    generic_response_local_var = generic_response_create_internal (
        strdup(status->valuestring),
        strdup(text->valuestring)
        );

    return generic_response_local_var;
end:
    return NULL;

}
