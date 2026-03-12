#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "patch_oauth_two_factor_request.h"



static patch_oauth_two_factor_request_t *patch_oauth_two_factor_request_create_internal(
    int account_id,
    char *code
    ) {
    patch_oauth_two_factor_request_t *patch_oauth_two_factor_request_local_var = malloc(sizeof(patch_oauth_two_factor_request_t));
    if (!patch_oauth_two_factor_request_local_var) {
        return NULL;
    }
    patch_oauth_two_factor_request_local_var->account_id = account_id;
    patch_oauth_two_factor_request_local_var->code = code;

    patch_oauth_two_factor_request_local_var->_library_owned = 1;
    return patch_oauth_two_factor_request_local_var;
}

__attribute__((deprecated)) patch_oauth_two_factor_request_t *patch_oauth_two_factor_request_create(
    int account_id,
    char *code
    ) {
    return patch_oauth_two_factor_request_create_internal (
        account_id,
        code
        );
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
    if(cJSON_AddNumberToObject(item, "account_id", patch_oauth_two_factor_request->account_id) == NULL) {
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


    patch_oauth_two_factor_request_local_var = patch_oauth_two_factor_request_create_internal (
        account_id->valuedouble,
        strdup(code->valuestring)
        );

    return patch_oauth_two_factor_request_local_var;
end:
    return NULL;

}
