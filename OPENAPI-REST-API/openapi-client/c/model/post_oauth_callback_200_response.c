#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "post_oauth_callback_200_response.h"



static post_oauth_callback_200_response_t *post_oauth_callback_200_response_create_internal(
    int login,
    int signup,
    int linked,
    int account_id,
    char *error_code
    ) {
    post_oauth_callback_200_response_t *post_oauth_callback_200_response_local_var = malloc(sizeof(post_oauth_callback_200_response_t));
    if (!post_oauth_callback_200_response_local_var) {
        return NULL;
    }
    post_oauth_callback_200_response_local_var->login = login;
    post_oauth_callback_200_response_local_var->signup = signup;
    post_oauth_callback_200_response_local_var->linked = linked;
    post_oauth_callback_200_response_local_var->account_id = account_id;
    post_oauth_callback_200_response_local_var->error_code = error_code;

    post_oauth_callback_200_response_local_var->_library_owned = 1;
    return post_oauth_callback_200_response_local_var;
}

__attribute__((deprecated)) post_oauth_callback_200_response_t *post_oauth_callback_200_response_create(
    int login,
    int signup,
    int linked,
    int account_id,
    char *error_code
    ) {
    return post_oauth_callback_200_response_create_internal (
        login,
        signup,
        linked,
        account_id,
        error_code
        );
}

void post_oauth_callback_200_response_free(post_oauth_callback_200_response_t *post_oauth_callback_200_response) {
    if(NULL == post_oauth_callback_200_response){
        return ;
    }
    if(post_oauth_callback_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "post_oauth_callback_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (post_oauth_callback_200_response->error_code) {
        free(post_oauth_callback_200_response->error_code);
        post_oauth_callback_200_response->error_code = NULL;
    }
    free(post_oauth_callback_200_response);
}

cJSON *post_oauth_callback_200_response_convertToJSON(post_oauth_callback_200_response_t *post_oauth_callback_200_response) {
    cJSON *item = cJSON_CreateObject();

    // post_oauth_callback_200_response->login
    if(post_oauth_callback_200_response->login) {
    if(cJSON_AddBoolToObject(item, "login", post_oauth_callback_200_response->login) == NULL) {
    goto fail; //Bool
    }
    }


    // post_oauth_callback_200_response->signup
    if(post_oauth_callback_200_response->signup) {
    if(cJSON_AddBoolToObject(item, "signup", post_oauth_callback_200_response->signup) == NULL) {
    goto fail; //Bool
    }
    }


    // post_oauth_callback_200_response->linked
    if(post_oauth_callback_200_response->linked) {
    if(cJSON_AddBoolToObject(item, "linked", post_oauth_callback_200_response->linked) == NULL) {
    goto fail; //Bool
    }
    }


    // post_oauth_callback_200_response->account_id
    if(post_oauth_callback_200_response->account_id) {
    if(cJSON_AddNumberToObject(item, "account_id", post_oauth_callback_200_response->account_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // post_oauth_callback_200_response->error_code
    if(post_oauth_callback_200_response->error_code) {
    if(cJSON_AddStringToObject(item, "error_code", post_oauth_callback_200_response->error_code) == NULL) {
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

post_oauth_callback_200_response_t *post_oauth_callback_200_response_parseFromJSON(cJSON *post_oauth_callback_200_responseJSON){

    post_oauth_callback_200_response_t *post_oauth_callback_200_response_local_var = NULL;

    // post_oauth_callback_200_response->login
    cJSON *login = cJSON_GetObjectItemCaseSensitive(post_oauth_callback_200_responseJSON, "login");
    if (cJSON_IsNull(login)) {
        login = NULL;
    }
    if (login) { 
    if(!cJSON_IsBool(login))
    {
    goto end; //Bool
    }
    }

    // post_oauth_callback_200_response->signup
    cJSON *signup = cJSON_GetObjectItemCaseSensitive(post_oauth_callback_200_responseJSON, "signup");
    if (cJSON_IsNull(signup)) {
        signup = NULL;
    }
    if (signup) { 
    if(!cJSON_IsBool(signup))
    {
    goto end; //Bool
    }
    }

    // post_oauth_callback_200_response->linked
    cJSON *linked = cJSON_GetObjectItemCaseSensitive(post_oauth_callback_200_responseJSON, "linked");
    if (cJSON_IsNull(linked)) {
        linked = NULL;
    }
    if (linked) { 
    if(!cJSON_IsBool(linked))
    {
    goto end; //Bool
    }
    }

    // post_oauth_callback_200_response->account_id
    cJSON *account_id = cJSON_GetObjectItemCaseSensitive(post_oauth_callback_200_responseJSON, "account_id");
    if (cJSON_IsNull(account_id)) {
        account_id = NULL;
    }
    if (account_id) { 
    if(!cJSON_IsNumber(account_id))
    {
    goto end; //Numeric
    }
    }

    // post_oauth_callback_200_response->error_code
    cJSON *error_code = cJSON_GetObjectItemCaseSensitive(post_oauth_callback_200_responseJSON, "error_code");
    if (cJSON_IsNull(error_code)) {
        error_code = NULL;
    }
    if (error_code) { 
    if(!cJSON_IsString(error_code) && !cJSON_IsNull(error_code))
    {
    goto end; //String
    }
    }


    post_oauth_callback_200_response_local_var = post_oauth_callback_200_response_create_internal (
        login ? login->valueint : 0,
        signup ? signup->valueint : 0,
        linked ? linked->valueint : 0,
        account_id ? account_id->valuedouble : 0,
        error_code && !cJSON_IsNull(error_code) ? strdup(error_code->valuestring) : NULL
        );

    return post_oauth_callback_200_response_local_var;
end:
    return NULL;

}
