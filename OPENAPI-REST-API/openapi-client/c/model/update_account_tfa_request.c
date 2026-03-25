#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "update_account_tfa_request.h"



static update_account_tfa_request_t *update_account_tfa_request_create_internal(
    char *_2fa_google_code
    ) {
    update_account_tfa_request_t *update_account_tfa_request_local_var = malloc(sizeof(update_account_tfa_request_t));
    if (!update_account_tfa_request_local_var) {
        return NULL;
    }
    memset(update_account_tfa_request_local_var, 0, sizeof(update_account_tfa_request_t));
    update_account_tfa_request_local_var->_library_owned = 1;
    update_account_tfa_request_local_var->_2fa_google_code = _2fa_google_code;
    return update_account_tfa_request_local_var;
}

__attribute__((deprecated)) update_account_tfa_request_t *update_account_tfa_request_create(
    char *_2fa_google_code
    ) {
    update_account_tfa_request_t *result = update_account_tfa_request_create_internal (
        _2fa_google_code
        );
    if (!result) {
    }
    return result;
}

void update_account_tfa_request_free(update_account_tfa_request_t *update_account_tfa_request) {
    if(NULL == update_account_tfa_request){
        return ;
    }
    if(update_account_tfa_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "update_account_tfa_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (update_account_tfa_request->_2fa_google_code) {
        free(update_account_tfa_request->_2fa_google_code);
        update_account_tfa_request->_2fa_google_code = NULL;
    }
    free(update_account_tfa_request);
}

cJSON *update_account_tfa_request_convertToJSON(update_account_tfa_request_t *update_account_tfa_request) {
    cJSON *item = cJSON_CreateObject();

    // update_account_tfa_request->_2fa_google_code
    if (!update_account_tfa_request->_2fa_google_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "2fa_google_code", update_account_tfa_request->_2fa_google_code) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

update_account_tfa_request_t *update_account_tfa_request_parseFromJSON(cJSON *update_account_tfa_requestJSON){

    update_account_tfa_request_t *update_account_tfa_request_local_var = NULL;

    char *_2fa_google_code_local_str = NULL;

    // update_account_tfa_request->_2fa_google_code
    cJSON *_2fa_google_code = cJSON_GetObjectItemCaseSensitive(update_account_tfa_requestJSON, "2fa_google_code");
    if (cJSON_IsNull(_2fa_google_code)) {
        _2fa_google_code = NULL;
    }
    if (!_2fa_google_code) {
        goto end;
    }

    
    if(!cJSON_IsString(_2fa_google_code))
    {
    goto end; //String
    }


    if (_2fa_google_code && !cJSON_IsNull(_2fa_google_code)) _2fa_google_code_local_str = strdup(_2fa_google_code->valuestring);

    update_account_tfa_request_local_var = update_account_tfa_request_create_internal (
        _2fa_google_code_local_str
        );

    if (!update_account_tfa_request_local_var) {
        goto end;
    }

    return update_account_tfa_request_local_var;
end:
    if (_2fa_google_code_local_str) {
        free(_2fa_google_code_local_str);
        _2fa_google_code_local_str = NULL;
    }
    return NULL;

}
