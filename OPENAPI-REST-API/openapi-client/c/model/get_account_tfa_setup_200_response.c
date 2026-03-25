#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "get_account_tfa_setup_200_response.h"



static get_account_tfa_setup_200_response_t *get_account_tfa_setup_200_response_create_internal(
    char *_2fa_google_key,
    char *_2fa_google_split
    ) {
    get_account_tfa_setup_200_response_t *get_account_tfa_setup_200_response_local_var = malloc(sizeof(get_account_tfa_setup_200_response_t));
    if (!get_account_tfa_setup_200_response_local_var) {
        return NULL;
    }
    memset(get_account_tfa_setup_200_response_local_var, 0, sizeof(get_account_tfa_setup_200_response_t));
    get_account_tfa_setup_200_response_local_var->_library_owned = 1;
    get_account_tfa_setup_200_response_local_var->_2fa_google_key = _2fa_google_key;
    get_account_tfa_setup_200_response_local_var->_2fa_google_split = _2fa_google_split;
    return get_account_tfa_setup_200_response_local_var;
}

__attribute__((deprecated)) get_account_tfa_setup_200_response_t *get_account_tfa_setup_200_response_create(
    char *_2fa_google_key,
    char *_2fa_google_split
    ) {
    get_account_tfa_setup_200_response_t *result = get_account_tfa_setup_200_response_create_internal (
        _2fa_google_key,
        _2fa_google_split
        );
    if (!result) {
    }
    return result;
}

void get_account_tfa_setup_200_response_free(get_account_tfa_setup_200_response_t *get_account_tfa_setup_200_response) {
    if(NULL == get_account_tfa_setup_200_response){
        return ;
    }
    if(get_account_tfa_setup_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "get_account_tfa_setup_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (get_account_tfa_setup_200_response->_2fa_google_key) {
        free(get_account_tfa_setup_200_response->_2fa_google_key);
        get_account_tfa_setup_200_response->_2fa_google_key = NULL;
    }
    if (get_account_tfa_setup_200_response->_2fa_google_split) {
        free(get_account_tfa_setup_200_response->_2fa_google_split);
        get_account_tfa_setup_200_response->_2fa_google_split = NULL;
    }
    free(get_account_tfa_setup_200_response);
}

cJSON *get_account_tfa_setup_200_response_convertToJSON(get_account_tfa_setup_200_response_t *get_account_tfa_setup_200_response) {
    cJSON *item = cJSON_CreateObject();

    // get_account_tfa_setup_200_response->_2fa_google_key
    if(get_account_tfa_setup_200_response->_2fa_google_key) {
    if(cJSON_AddStringToObject(item, "2fa_google_key", get_account_tfa_setup_200_response->_2fa_google_key) == NULL) {
    goto fail; //String
    }
    }


    // get_account_tfa_setup_200_response->_2fa_google_split
    if(get_account_tfa_setup_200_response->_2fa_google_split) {
    if(cJSON_AddStringToObject(item, "2fa_google_split", get_account_tfa_setup_200_response->_2fa_google_split) == NULL) {
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

get_account_tfa_setup_200_response_t *get_account_tfa_setup_200_response_parseFromJSON(cJSON *get_account_tfa_setup_200_responseJSON){

    get_account_tfa_setup_200_response_t *get_account_tfa_setup_200_response_local_var = NULL;

    char *_2fa_google_key_local_str = NULL;

    char *_2fa_google_split_local_str = NULL;

    // get_account_tfa_setup_200_response->_2fa_google_key
    cJSON *_2fa_google_key = cJSON_GetObjectItemCaseSensitive(get_account_tfa_setup_200_responseJSON, "2fa_google_key");
    if (cJSON_IsNull(_2fa_google_key)) {
        _2fa_google_key = NULL;
    }
    if (_2fa_google_key) { 
    if(!cJSON_IsString(_2fa_google_key) && !cJSON_IsNull(_2fa_google_key))
    {
    goto end; //String
    }
    }

    // get_account_tfa_setup_200_response->_2fa_google_split
    cJSON *_2fa_google_split = cJSON_GetObjectItemCaseSensitive(get_account_tfa_setup_200_responseJSON, "2fa_google_split");
    if (cJSON_IsNull(_2fa_google_split)) {
        _2fa_google_split = NULL;
    }
    if (_2fa_google_split) { 
    if(!cJSON_IsString(_2fa_google_split) && !cJSON_IsNull(_2fa_google_split))
    {
    goto end; //String
    }
    }


    if (_2fa_google_key && !cJSON_IsNull(_2fa_google_key)) _2fa_google_key_local_str = strdup(_2fa_google_key->valuestring);
    if (_2fa_google_split && !cJSON_IsNull(_2fa_google_split)) _2fa_google_split_local_str = strdup(_2fa_google_split->valuestring);

    get_account_tfa_setup_200_response_local_var = get_account_tfa_setup_200_response_create_internal (
        _2fa_google_key_local_str,
        _2fa_google_split_local_str
        );

    if (!get_account_tfa_setup_200_response_local_var) {
        goto end;
    }

    return get_account_tfa_setup_200_response_local_var;
end:
    if (_2fa_google_key_local_str) {
        free(_2fa_google_key_local_str);
        _2fa_google_key_local_str = NULL;
    }
    if (_2fa_google_split_local_str) {
        free(_2fa_google_split_local_str);
        _2fa_google_split_local_str = NULL;
    }
    return NULL;

}
