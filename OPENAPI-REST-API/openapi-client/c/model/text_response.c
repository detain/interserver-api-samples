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
    memset(text_response_local_var, 0, sizeof(text_response_t));
    text_response_local_var->_library_owned = 1;
    text_response_local_var->text = text;
    text_response_local_var->message = message;
    return text_response_local_var;
}

__attribute__((deprecated)) text_response_t *text_response_create(
    char *text,
    char *message
    ) {
    text_response_t *result = text_response_create_internal (
        text,
        message
        );
    if (!result) {
    }
    return result;
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

    char *text_local_str = NULL;

    char *message_local_str = NULL;

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


    if (text && !cJSON_IsNull(text)) text_local_str = strdup(text->valuestring);
    if (message && !cJSON_IsNull(message)) message_local_str = strdup(message->valuestring);

    text_response_local_var = text_response_create_internal (
        text_local_str,
        message_local_str
        );

    if (!text_response_local_var) {
        goto end;
    }

    return text_response_local_var;
end:
    if (text_local_str) {
        free(text_local_str);
        text_local_str = NULL;
    }
    if (message_local_str) {
        free(message_local_str);
        message_local_str = NULL;
    }
    return NULL;

}
