#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "patch_oauth_two_factor_request.h"



static patch_oauth_two_factor_request_t *patch_oauth_two_factor_request_create_internal(
    int *account_id,
    char *code
    ) {
    patch_oauth_two_factor_request_t *patch_oauth_two_factor_request_local_var = malloc(sizeof(patch_oauth_two_factor_request_t));
    if (!patch_oauth_two_factor_request_local_var) {
        return NULL;
    }
    memset(patch_oauth_two_factor_request_local_var, 0, sizeof(patch_oauth_two_factor_request_t));
    patch_oauth_two_factor_request_local_var->_library_owned = 1;
    patch_oauth_two_factor_request_local_var->account_id = account_id;
    patch_oauth_two_factor_request_local_var->code = code;
    return patch_oauth_two_factor_request_local_var;
}

__attribute__((deprecated)) patch_oauth_two_factor_request_t *patch_oauth_two_factor_request_create(
    int *account_id,
    char *code
    ) {
    int *account_id_copy = NULL;
    if (account_id) {
        account_id_copy = malloc(sizeof(int));
        if (account_id_copy) *account_id_copy = *account_id;
    }
    patch_oauth_two_factor_request_t *result = patch_oauth_two_factor_request_create_internal (
        account_id_copy,
        code
        );
    if (!result) {
        free(account_id_copy);
    }
    return result;
}

void patch_oauth_two_factor_request_free(patch_oauth_two_factor_request_t *patch_oauth_two_factor_request) {
    if(NULL == patch_oauth_two_factor_request){
        return ;
    }
    if(patch_oauth_two_factor_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "patch_oauth_two_factor_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (patch_oauth_two_factor_request->account_id) {
        free(patch_oauth_two_factor_request->account_id);
        patch_oauth_two_factor_request->account_id = NULL;
    }
    if (patch_oauth_two_factor_request->code) {
        free(patch_oauth_two_factor_request->code);
        patch_oauth_two_factor_request->code = NULL;
    }
    free(patch_oauth_two_factor_request);
}

cJSON *patch_oauth_two_factor_request_convertToJSON(patch_oauth_two_factor_request_t *patch_oauth_two_factor_request) {
    cJSON *item = cJSON_CreateObject();

    // patch_oauth_two_factor_request->account_id
    if (!patch_oauth_two_factor_request->account_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "account_id", *patch_oauth_two_factor_request->account_id) == NULL) {
    goto fail; //Numeric
    }


    // patch_oauth_two_factor_request->code
    if (!patch_oauth_two_factor_request->code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "code", patch_oauth_two_factor_request->code) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

patch_oauth_two_factor_request_t *patch_oauth_two_factor_request_parseFromJSON(cJSON *patch_oauth_two_factor_requestJSON){

    patch_oauth_two_factor_request_t *patch_oauth_two_factor_request_local_var = NULL;

    // define the local variable for patch_oauth_two_factor_request->account_id
    int *account_id_local_var = NULL;

    char *code_local_str = NULL;

    // patch_oauth_two_factor_request->account_id
    cJSON *account_id = cJSON_GetObjectItemCaseSensitive(patch_oauth_two_factor_requestJSON, "account_id");
    if (cJSON_IsNull(account_id)) {
        account_id = NULL;
    }
    if (!account_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(account_id))
    {
    goto end; //Numeric
    }
    account_id_local_var = malloc(sizeof(int));
    if(!account_id_local_var)
    {
        goto end;
    }
    *account_id_local_var = account_id->valuedouble;

    // patch_oauth_two_factor_request->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(patch_oauth_two_factor_requestJSON, "code");
    if (cJSON_IsNull(code)) {
        code = NULL;
    }
    if (!code) {
        goto end;
    }

    
    if(!cJSON_IsString(code))
    {
    goto end; //String
    }


    if (code && !cJSON_IsNull(code)) code_local_str = strdup(code->valuestring);

    patch_oauth_two_factor_request_local_var = patch_oauth_two_factor_request_create_internal (
        account_id_local_var,
        code_local_str
        );

    if (!patch_oauth_two_factor_request_local_var) {
        goto end;
    }

    return patch_oauth_two_factor_request_local_var;
end:
    if (account_id_local_var) {
        free(account_id_local_var);
        account_id_local_var = NULL;
    }
    if (code_local_str) {
        free(code_local_str);
        code_local_str = NULL;
    }
    return NULL;

}
