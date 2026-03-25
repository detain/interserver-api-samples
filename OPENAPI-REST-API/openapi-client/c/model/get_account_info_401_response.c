#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "get_account_info_401_response.h"



static get_account_info_401_response_t *get_account_info_401_response_create_internal(
    int *code,
    char *message
    ) {
    get_account_info_401_response_t *get_account_info_401_response_local_var = malloc(sizeof(get_account_info_401_response_t));
    if (!get_account_info_401_response_local_var) {
        return NULL;
    }
    memset(get_account_info_401_response_local_var, 0, sizeof(get_account_info_401_response_t));
    get_account_info_401_response_local_var->_library_owned = 1;
    get_account_info_401_response_local_var->code = code;
    get_account_info_401_response_local_var->message = message;
    return get_account_info_401_response_local_var;
}

__attribute__((deprecated)) get_account_info_401_response_t *get_account_info_401_response_create(
    int *code,
    char *message
    ) {
    int *code_copy = NULL;
    if (code) {
        code_copy = malloc(sizeof(int));
        if (code_copy) *code_copy = *code;
    }
    get_account_info_401_response_t *result = get_account_info_401_response_create_internal (
        code_copy,
        message
        );
    if (!result) {
        free(code_copy);
    }
    return result;
}

void get_account_info_401_response_free(get_account_info_401_response_t *get_account_info_401_response) {
    if(NULL == get_account_info_401_response){
        return ;
    }
    if(get_account_info_401_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "get_account_info_401_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (get_account_info_401_response->code) {
        free(get_account_info_401_response->code);
        get_account_info_401_response->code = NULL;
    }
    if (get_account_info_401_response->message) {
        free(get_account_info_401_response->message);
        get_account_info_401_response->message = NULL;
    }
    free(get_account_info_401_response);
}

cJSON *get_account_info_401_response_convertToJSON(get_account_info_401_response_t *get_account_info_401_response) {
    cJSON *item = cJSON_CreateObject();

    // get_account_info_401_response->code
    if (!get_account_info_401_response->code) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "code", *get_account_info_401_response->code) == NULL) {
    goto fail; //Numeric
    }


    // get_account_info_401_response->message
    if (!get_account_info_401_response->message) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "message", get_account_info_401_response->message) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

get_account_info_401_response_t *get_account_info_401_response_parseFromJSON(cJSON *get_account_info_401_responseJSON){

    get_account_info_401_response_t *get_account_info_401_response_local_var = NULL;

    // define the local variable for get_account_info_401_response->code
    int *code_local_var = NULL;

    char *message_local_str = NULL;

    // get_account_info_401_response->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(get_account_info_401_responseJSON, "code");
    if (cJSON_IsNull(code)) {
        code = NULL;
    }
    if (!code) {
        goto end;
    }

    
    if(!cJSON_IsNumber(code))
    {
    goto end; //Numeric
    }
    code_local_var = malloc(sizeof(int));
    if(!code_local_var)
    {
        goto end;
    }
    *code_local_var = code->valuedouble;

    // get_account_info_401_response->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(get_account_info_401_responseJSON, "message");
    if (cJSON_IsNull(message)) {
        message = NULL;
    }
    if (!message) {
        goto end;
    }

    
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }


    if (message && !cJSON_IsNull(message)) message_local_str = strdup(message->valuestring);

    get_account_info_401_response_local_var = get_account_info_401_response_create_internal (
        code_local_var,
        message_local_str
        );

    if (!get_account_info_401_response_local_var) {
        goto end;
    }

    return get_account_info_401_response_local_var;
end:
    if (code_local_var) {
        free(code_local_var);
        code_local_var = NULL;
    }
    if (message_local_str) {
        free(message_local_str);
        message_local_str = NULL;
    }
    return NULL;

}
