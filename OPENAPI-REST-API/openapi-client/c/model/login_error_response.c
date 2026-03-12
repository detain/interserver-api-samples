#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "login_error_response.h"



static login_error_response_t *login_error_response_create_internal(
    char *message,
    char *field
    ) {
    login_error_response_t *login_error_response_local_var = malloc(sizeof(login_error_response_t));
    if (!login_error_response_local_var) {
        return NULL;
    }
    login_error_response_local_var->message = message;
    login_error_response_local_var->field = field;

    login_error_response_local_var->_library_owned = 1;
    return login_error_response_local_var;
}

__attribute__((deprecated)) login_error_response_t *login_error_response_create(
    char *message,
    char *field
    ) {
    return login_error_response_create_internal (
        message,
        field
        );
}

void login_error_response_free(login_error_response_t *login_error_response) {
    if(NULL == login_error_response){
        return ;
    }
    if(login_error_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "login_error_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (login_error_response->message) {
        free(login_error_response->message);
        login_error_response->message = NULL;
    }
    if (login_error_response->field) {
        free(login_error_response->field);
        login_error_response->field = NULL;
    }
    free(login_error_response);
}

cJSON *login_error_response_convertToJSON(login_error_response_t *login_error_response) {
    cJSON *item = cJSON_CreateObject();

    // login_error_response->message
    if(login_error_response->message) {
    if(cJSON_AddStringToObject(item, "message", login_error_response->message) == NULL) {
    goto fail; //String
    }
    }


    // login_error_response->field
    if(login_error_response->field) {
    if(cJSON_AddStringToObject(item, "field", login_error_response->field) == NULL) {
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

login_error_response_t *login_error_response_parseFromJSON(cJSON *login_error_responseJSON){

    login_error_response_t *login_error_response_local_var = NULL;

    // login_error_response->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(login_error_responseJSON, "message");
    if (cJSON_IsNull(message)) {
        message = NULL;
    }
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }

    // login_error_response->field
    cJSON *field = cJSON_GetObjectItemCaseSensitive(login_error_responseJSON, "field");
    if (cJSON_IsNull(field)) {
        field = NULL;
    }
    if (field) { 
    if(!cJSON_IsString(field) && !cJSON_IsNull(field))
    {
    goto end; //String
    }
    }


    login_error_response_local_var = login_error_response_create_internal (
        message && !cJSON_IsNull(message) ? strdup(message->valuestring) : NULL,
        field && !cJSON_IsNull(field) ? strdup(field->valuestring) : NULL
        );

    return login_error_response_local_var;
end:
    return NULL;

}
