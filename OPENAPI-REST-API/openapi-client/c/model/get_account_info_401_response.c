#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "get_account_info_401_response.h"



static get_account_info_401_response_t *get_account_info_401_response_create_internal(
    int code,
    char *message
    ) {
    get_account_info_401_response_t *get_account_info_401_response_local_var = malloc(sizeof(get_account_info_401_response_t));
    if (!get_account_info_401_response_local_var) {
        return NULL;
    }
    get_account_info_401_response_local_var->code = code;
    get_account_info_401_response_local_var->message = message;

    get_account_info_401_response_local_var->_library_owned = 1;
    return get_account_info_401_response_local_var;
}

__attribute__((deprecated)) get_account_info_401_response_t *get_account_info_401_response_create(
    int code,
    char *message
    ) {
    return get_account_info_401_response_create_internal (
        code,
        message
        );
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
    if(cJSON_AddNumberToObject(item, "code", get_account_info_401_response->code) == NULL) {
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


    get_account_info_401_response_local_var = get_account_info_401_response_create_internal (
        code->valuedouble,
        strdup(message->valuestring)
        );

    return get_account_info_401_response_local_var;
end:
    return NULL;

}
