#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "text_response.h"



static text_response_t *text_response_create_internal(
    char *text,
    char *message
    ) {
    text_response_t *text_response_local_var = malloc(sizeof(text_response_t));
    if (!text_response_local_var) {
        return NULL;
    }
    text_response_local_var->text = text;
    text_response_local_var->message = message;

    text_response_local_var->_library_owned = 1;
    return text_response_local_var;
}

__attribute__((deprecated)) text_response_t *text_response_create(
    char *text,
    char *message
    ) {
    return text_response_create_internal (
        text,
        message
        );
}

void text_response_free(text_response_t *text_response) {
    if(NULL == text_response){
        return ;
    }
    if(text_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "text_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (text_response->text) {
        free(text_response->text);
        text_response->text = NULL;
    }
    if (text_response->message) {
        free(text_response->message);
        text_response->message = NULL;
    }
    free(text_response);
}

cJSON *text_response_convertToJSON(text_response_t *text_response) {
    cJSON *item = cJSON_CreateObject();

    // text_response->text
    if(text_response->text) {
    if(cJSON_AddStringToObject(item, "text", text_response->text) == NULL) {
    goto fail; //String
    }
    }


    // text_response->message
    if(text_response->message) {
    if(cJSON_AddStringToObject(item, "message", text_response->message) == NULL) {
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

text_response_t *text_response_parseFromJSON(cJSON *text_responseJSON){

    text_response_t *text_response_local_var = NULL;

    // text_response->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(text_responseJSON, "text");
    if (cJSON_IsNull(text)) {
        text = NULL;
    }
    if (text) { 
    if(!cJSON_IsString(text) && !cJSON_IsNull(text))
    {
    goto end; //String
    }
    }

    // text_response->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(text_responseJSON, "message");
    if (cJSON_IsNull(message)) {
        message = NULL;
    }
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }


    text_response_local_var = text_response_create_internal (
        text && !cJSON_IsNull(text) ? strdup(text->valuestring) : NULL,
        message && !cJSON_IsNull(message) ? strdup(message->valuestring) : NULL
        );

    return text_response_local_var;
end:
    return NULL;

}
