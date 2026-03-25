#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "post_oauth_callback_200_response.h"



static post_oauth_callback_200_response_t *post_oauth_callback_200_response_create_internal(
    int *login,
    int *signup,
    int *linked,
    int *account_id,
    char *error_code
    ) {
    post_oauth_callback_200_response_t *post_oauth_callback_200_response_local_var = malloc(sizeof(post_oauth_callback_200_response_t));
    if (!post_oauth_callback_200_response_local_var) {
        return NULL;
    }
    memset(post_oauth_callback_200_response_local_var, 0, sizeof(post_oauth_callback_200_response_t));
    post_oauth_callback_200_response_local_var->_library_owned = 1;
    post_oauth_callback_200_response_local_var->login = login;
    post_oauth_callback_200_response_local_var->signup = signup;
    post_oauth_callback_200_response_local_var->linked = linked;
    post_oauth_callback_200_response_local_var->account_id = account_id;
    post_oauth_callback_200_response_local_var->error_code = error_code;
    return post_oauth_callback_200_response_local_var;
}

__attribute__((deprecated)) post_oauth_callback_200_response_t *post_oauth_callback_200_response_create(
    int *login,
    int *signup,
    int *linked,
    int *account_id,
    char *error_code
    ) {
    int *login_copy = NULL;
    if (login) {
        login_copy = malloc(sizeof(int));
        if (login_copy) *login_copy = *login;
    }
    int *signup_copy = NULL;
    if (signup) {
        signup_copy = malloc(sizeof(int));
        if (signup_copy) *signup_copy = *signup;
    }
    int *linked_copy = NULL;
    if (linked) {
        linked_copy = malloc(sizeof(int));
        if (linked_copy) *linked_copy = *linked;
    }
    int *account_id_copy = NULL;
    if (account_id) {
        account_id_copy = malloc(sizeof(int));
        if (account_id_copy) *account_id_copy = *account_id;
    }
    post_oauth_callback_200_response_t *result = post_oauth_callback_200_response_create_internal (
        login_copy,
        signup_copy,
        linked_copy,
        account_id_copy,
        error_code
        );
    if (!result) {
        free(login_copy);
        free(signup_copy);
        free(linked_copy);
        free(account_id_copy);
    }
    return result;
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
    if (post_oauth_callback_200_response->login) {
        free(post_oauth_callback_200_response->login);
        post_oauth_callback_200_response->login = NULL;
    }
    if (post_oauth_callback_200_response->signup) {
        free(post_oauth_callback_200_response->signup);
        post_oauth_callback_200_response->signup = NULL;
    }
    if (post_oauth_callback_200_response->linked) {
        free(post_oauth_callback_200_response->linked);
        post_oauth_callback_200_response->linked = NULL;
    }
    if (post_oauth_callback_200_response->account_id) {
        free(post_oauth_callback_200_response->account_id);
        post_oauth_callback_200_response->account_id = NULL;
    }
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
    if(cJSON_AddBoolToObject(item, "login", *post_oauth_callback_200_response->login) == NULL) {
    goto fail; //Bool
    }
    }


    // post_oauth_callback_200_response->signup
    if(post_oauth_callback_200_response->signup) {
    if(cJSON_AddBoolToObject(item, "signup", *post_oauth_callback_200_response->signup) == NULL) {
    goto fail; //Bool
    }
    }


    // post_oauth_callback_200_response->linked
    if(post_oauth_callback_200_response->linked) {
    if(cJSON_AddBoolToObject(item, "linked", *post_oauth_callback_200_response->linked) == NULL) {
    goto fail; //Bool
    }
    }


    // post_oauth_callback_200_response->account_id
    if(post_oauth_callback_200_response->account_id) {
    if(cJSON_AddNumberToObject(item, "account_id", *post_oauth_callback_200_response->account_id) == NULL) {
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

    // define the local variable for post_oauth_callback_200_response->login
    int *login_local_var = NULL;

    // define the local variable for post_oauth_callback_200_response->signup
    int *signup_local_var = NULL;

    // define the local variable for post_oauth_callback_200_response->linked
    int *linked_local_var = NULL;

    // define the local variable for post_oauth_callback_200_response->account_id
    int *account_id_local_var = NULL;

    char *error_code_local_str = NULL;

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
    login_local_var = malloc(sizeof(int));
    if(!login_local_var)
    {
        goto end;
    }
    *login_local_var = login->valueint;
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
    signup_local_var = malloc(sizeof(int));
    if(!signup_local_var)
    {
        goto end;
    }
    *signup_local_var = signup->valueint;
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
    linked_local_var = malloc(sizeof(int));
    if(!linked_local_var)
    {
        goto end;
    }
    *linked_local_var = linked->valueint;
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
    account_id_local_var = malloc(sizeof(int));
    if(!account_id_local_var)
    {
        goto end;
    }
    *account_id_local_var = account_id->valuedouble;
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


    if (error_code && !cJSON_IsNull(error_code)) error_code_local_str = strdup(error_code->valuestring);

    post_oauth_callback_200_response_local_var = post_oauth_callback_200_response_create_internal (
        login_local_var,
        signup_local_var,
        linked_local_var,
        account_id_local_var,
        error_code_local_str
        );

    if (!post_oauth_callback_200_response_local_var) {
        goto end;
    }

    return post_oauth_callback_200_response_local_var;
end:
    if (login_local_var) {
        free(login_local_var);
        login_local_var = NULL;
    }
    if (signup_local_var) {
        free(signup_local_var);
        signup_local_var = NULL;
    }
    if (linked_local_var) {
        free(linked_local_var);
        linked_local_var = NULL;
    }
    if (account_id_local_var) {
        free(account_id_local_var);
        account_id_local_var = NULL;
    }
    if (error_code_local_str) {
        free(error_code_local_str);
        error_code_local_str = NULL;
    }
    return NULL;

}
