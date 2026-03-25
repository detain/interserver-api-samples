#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "login_submission_example.h"



static login_submission_example_t *login_submission_example_create_internal(
    char *login,
    char *passwd,
    char *remember,
    login_submission_example_g_recaptcha_response_t *g_recaptcha_response,
    char *tfa
    ) {
    login_submission_example_t *login_submission_example_local_var = malloc(sizeof(login_submission_example_t));
    if (!login_submission_example_local_var) {
        return NULL;
    }
    memset(login_submission_example_local_var, 0, sizeof(login_submission_example_t));
    login_submission_example_local_var->_library_owned = 1;
    login_submission_example_local_var->login = login;
    login_submission_example_local_var->passwd = passwd;
    login_submission_example_local_var->remember = remember;
    login_submission_example_local_var->g_recaptcha_response = g_recaptcha_response;
    login_submission_example_local_var->tfa = tfa;
    return login_submission_example_local_var;
}

__attribute__((deprecated)) login_submission_example_t *login_submission_example_create(
    char *login,
    char *passwd,
    char *remember,
    login_submission_example_g_recaptcha_response_t *g_recaptcha_response,
    char *tfa
    ) {
    login_submission_example_t *result = login_submission_example_create_internal (
        login,
        passwd,
        remember,
        g_recaptcha_response,
        tfa
        );
    if (!result) {
    }
    return result;
}

void login_submission_example_free(login_submission_example_t *login_submission_example) {
    if(NULL == login_submission_example){
        return ;
    }
    if(login_submission_example->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "login_submission_example_free");
        return ;
    }
    listEntry_t *listEntry;
    if (login_submission_example->login) {
        free(login_submission_example->login);
        login_submission_example->login = NULL;
    }
    if (login_submission_example->passwd) {
        free(login_submission_example->passwd);
        login_submission_example->passwd = NULL;
    }
    if (login_submission_example->remember) {
        free(login_submission_example->remember);
        login_submission_example->remember = NULL;
    }
    if (login_submission_example->g_recaptcha_response) {
        login_submission_example_g_recaptcha_response_free(login_submission_example->g_recaptcha_response);
        login_submission_example->g_recaptcha_response = NULL;
    }
    if (login_submission_example->tfa) {
        free(login_submission_example->tfa);
        login_submission_example->tfa = NULL;
    }
    free(login_submission_example);
}

cJSON *login_submission_example_convertToJSON(login_submission_example_t *login_submission_example) {
    cJSON *item = cJSON_CreateObject();

    // login_submission_example->login
    if (!login_submission_example->login) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "login", login_submission_example->login) == NULL) {
    goto fail; //String
    }


    // login_submission_example->passwd
    if (!login_submission_example->passwd) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "passwd", login_submission_example->passwd) == NULL) {
    goto fail; //String
    }


    // login_submission_example->remember
    if(login_submission_example->remember) {
    if(cJSON_AddStringToObject(item, "remember", login_submission_example->remember) == NULL) {
    goto fail; //String
    }
    }


    // login_submission_example->g_recaptcha_response
    if(login_submission_example->g_recaptcha_response) {
    cJSON *g_recaptcha_response_local_JSON = login_submission_example_g_recaptcha_response_convertToJSON(login_submission_example->g_recaptcha_response);
    if(g_recaptcha_response_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "g-recaptcha-response", g_recaptcha_response_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // login_submission_example->tfa
    if(login_submission_example->tfa) {
    if(cJSON_AddStringToObject(item, "tfa", login_submission_example->tfa) == NULL) {
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

login_submission_example_t *login_submission_example_parseFromJSON(cJSON *login_submission_exampleJSON){

    login_submission_example_t *login_submission_example_local_var = NULL;

    char *login_local_str = NULL;

    char *passwd_local_str = NULL;

    char *remember_local_str = NULL;

    // define the local variable for login_submission_example->g_recaptcha_response
    login_submission_example_g_recaptcha_response_t *g_recaptcha_response_local_nonprim = NULL;

    char *tfa_local_str = NULL;

    // login_submission_example->login
    cJSON *login = cJSON_GetObjectItemCaseSensitive(login_submission_exampleJSON, "login");
    if (cJSON_IsNull(login)) {
        login = NULL;
    }
    if (!login) {
        goto end;
    }

    
    if(!cJSON_IsString(login))
    {
    goto end; //String
    }

    // login_submission_example->passwd
    cJSON *passwd = cJSON_GetObjectItemCaseSensitive(login_submission_exampleJSON, "passwd");
    if (cJSON_IsNull(passwd)) {
        passwd = NULL;
    }
    if (!passwd) {
        goto end;
    }

    
    if(!cJSON_IsString(passwd))
    {
    goto end; //String
    }

    // login_submission_example->remember
    cJSON *remember = cJSON_GetObjectItemCaseSensitive(login_submission_exampleJSON, "remember");
    if (cJSON_IsNull(remember)) {
        remember = NULL;
    }
    if (remember) { 
    if(!cJSON_IsString(remember) && !cJSON_IsNull(remember))
    {
    goto end; //String
    }
    }

    // login_submission_example->g_recaptcha_response
    cJSON *g_recaptcha_response = cJSON_GetObjectItemCaseSensitive(login_submission_exampleJSON, "g-recaptcha-response");
    if (cJSON_IsNull(g_recaptcha_response)) {
        g_recaptcha_response = NULL;
    }
    if (g_recaptcha_response) { 
    g_recaptcha_response_local_nonprim = login_submission_example_g_recaptcha_response_parseFromJSON(g_recaptcha_response); //nonprimitive
    }

    // login_submission_example->tfa
    cJSON *tfa = cJSON_GetObjectItemCaseSensitive(login_submission_exampleJSON, "tfa");
    if (cJSON_IsNull(tfa)) {
        tfa = NULL;
    }
    if (tfa) { 
    if(!cJSON_IsString(tfa) && !cJSON_IsNull(tfa))
    {
    goto end; //String
    }
    }


    if (login && !cJSON_IsNull(login)) login_local_str = strdup(login->valuestring);
    if (passwd && !cJSON_IsNull(passwd)) passwd_local_str = strdup(passwd->valuestring);
    if (remember && !cJSON_IsNull(remember)) remember_local_str = strdup(remember->valuestring);
    if (tfa && !cJSON_IsNull(tfa)) tfa_local_str = strdup(tfa->valuestring);

    login_submission_example_local_var = login_submission_example_create_internal (
        login_local_str,
        passwd_local_str,
        remember_local_str,
        g_recaptcha_response ? g_recaptcha_response_local_nonprim : NULL,
        tfa_local_str
        );

    if (!login_submission_example_local_var) {
        goto end;
    }

    return login_submission_example_local_var;
end:
    if (login_local_str) {
        free(login_local_str);
        login_local_str = NULL;
    }
    if (passwd_local_str) {
        free(passwd_local_str);
        passwd_local_str = NULL;
    }
    if (remember_local_str) {
        free(remember_local_str);
        remember_local_str = NULL;
    }
    if (g_recaptcha_response_local_nonprim) {
        login_submission_example_g_recaptcha_response_free(g_recaptcha_response_local_nonprim);
        g_recaptcha_response_local_nonprim = NULL;
    }
    if (tfa_local_str) {
        free(tfa_local_str);
        tfa_local_str = NULL;
    }
    return NULL;

}
