#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "login_success_response.h"



static login_success_response_t *login_success_response_create_internal(
    char *session_id,
    int *account_id,
    char *account_lid,
    char *ima,
    char *gravatar
    ) {
    login_success_response_t *login_success_response_local_var = malloc(sizeof(login_success_response_t));
    if (!login_success_response_local_var) {
        return NULL;
    }
    memset(login_success_response_local_var, 0, sizeof(login_success_response_t));
    login_success_response_local_var->_library_owned = 1;
    login_success_response_local_var->session_id = session_id;
    login_success_response_local_var->account_id = account_id;
    login_success_response_local_var->account_lid = account_lid;
    login_success_response_local_var->ima = ima;
    login_success_response_local_var->gravatar = gravatar;
    return login_success_response_local_var;
}

__attribute__((deprecated)) login_success_response_t *login_success_response_create(
    char *session_id,
    int *account_id,
    char *account_lid,
    char *ima,
    char *gravatar
    ) {
    int *account_id_copy = NULL;
    if (account_id) {
        account_id_copy = malloc(sizeof(int));
        if (account_id_copy) *account_id_copy = *account_id;
    }
    login_success_response_t *result = login_success_response_create_internal (
        session_id,
        account_id_copy,
        account_lid,
        ima,
        gravatar
        );
    if (!result) {
        free(account_id_copy);
    }
    return result;
}

void login_success_response_free(login_success_response_t *login_success_response) {
    if(NULL == login_success_response){
        return ;
    }
    if(login_success_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "login_success_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (login_success_response->session_id) {
        free(login_success_response->session_id);
        login_success_response->session_id = NULL;
    }
    if (login_success_response->account_id) {
        free(login_success_response->account_id);
        login_success_response->account_id = NULL;
    }
    if (login_success_response->account_lid) {
        free(login_success_response->account_lid);
        login_success_response->account_lid = NULL;
    }
    if (login_success_response->ima) {
        free(login_success_response->ima);
        login_success_response->ima = NULL;
    }
    if (login_success_response->gravatar) {
        free(login_success_response->gravatar);
        login_success_response->gravatar = NULL;
    }
    free(login_success_response);
}

cJSON *login_success_response_convertToJSON(login_success_response_t *login_success_response) {
    cJSON *item = cJSON_CreateObject();

    // login_success_response->session_id
    if(login_success_response->session_id) {
    if(cJSON_AddStringToObject(item, "sessionId", login_success_response->session_id) == NULL) {
    goto fail; //String
    }
    }


    // login_success_response->account_id
    if(login_success_response->account_id) {
    if(cJSON_AddNumberToObject(item, "account_id", *login_success_response->account_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // login_success_response->account_lid
    if(login_success_response->account_lid) {
    if(cJSON_AddStringToObject(item, "account_lid", login_success_response->account_lid) == NULL) {
    goto fail; //String
    }
    }


    // login_success_response->ima
    if(login_success_response->ima) {
    if(cJSON_AddStringToObject(item, "ima", login_success_response->ima) == NULL) {
    goto fail; //String
    }
    }


    // login_success_response->gravatar
    if(login_success_response->gravatar) {
    if(cJSON_AddStringToObject(item, "gravatar", login_success_response->gravatar) == NULL) {
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

login_success_response_t *login_success_response_parseFromJSON(cJSON *login_success_responseJSON){

    login_success_response_t *login_success_response_local_var = NULL;

    char *session_id_local_str = NULL;

    // define the local variable for login_success_response->account_id
    int *account_id_local_var = NULL;

    char *account_lid_local_str = NULL;

    char *ima_local_str = NULL;

    char *gravatar_local_str = NULL;

    // login_success_response->session_id
    cJSON *session_id = cJSON_GetObjectItemCaseSensitive(login_success_responseJSON, "sessionId");
    if (cJSON_IsNull(session_id)) {
        session_id = NULL;
    }
    if (session_id) { 
    if(!cJSON_IsString(session_id) && !cJSON_IsNull(session_id))
    {
    goto end; //String
    }
    }

    // login_success_response->account_id
    cJSON *account_id = cJSON_GetObjectItemCaseSensitive(login_success_responseJSON, "account_id");
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

    // login_success_response->account_lid
    cJSON *account_lid = cJSON_GetObjectItemCaseSensitive(login_success_responseJSON, "account_lid");
    if (cJSON_IsNull(account_lid)) {
        account_lid = NULL;
    }
    if (account_lid) { 
    if(!cJSON_IsString(account_lid) && !cJSON_IsNull(account_lid))
    {
    goto end; //String
    }
    }

    // login_success_response->ima
    cJSON *ima = cJSON_GetObjectItemCaseSensitive(login_success_responseJSON, "ima");
    if (cJSON_IsNull(ima)) {
        ima = NULL;
    }
    if (ima) { 
    if(!cJSON_IsString(ima) && !cJSON_IsNull(ima))
    {
    goto end; //String
    }
    }

    // login_success_response->gravatar
    cJSON *gravatar = cJSON_GetObjectItemCaseSensitive(login_success_responseJSON, "gravatar");
    if (cJSON_IsNull(gravatar)) {
        gravatar = NULL;
    }
    if (gravatar) { 
    if(!cJSON_IsString(gravatar) && !cJSON_IsNull(gravatar))
    {
    goto end; //String
    }
    }


    if (session_id && !cJSON_IsNull(session_id)) session_id_local_str = strdup(session_id->valuestring);
    if (account_lid && !cJSON_IsNull(account_lid)) account_lid_local_str = strdup(account_lid->valuestring);
    if (ima && !cJSON_IsNull(ima)) ima_local_str = strdup(ima->valuestring);
    if (gravatar && !cJSON_IsNull(gravatar)) gravatar_local_str = strdup(gravatar->valuestring);

    login_success_response_local_var = login_success_response_create_internal (
        session_id_local_str,
        account_id_local_var,
        account_lid_local_str,
        ima_local_str,
        gravatar_local_str
        );

    if (!login_success_response_local_var) {
        goto end;
    }

    return login_success_response_local_var;
end:
    if (session_id_local_str) {
        free(session_id_local_str);
        session_id_local_str = NULL;
    }
    if (account_id_local_var) {
        free(account_id_local_var);
        account_id_local_var = NULL;
    }
    if (account_lid_local_str) {
        free(account_lid_local_str);
        account_lid_local_str = NULL;
    }
    if (ima_local_str) {
        free(ima_local_str);
        ima_local_str = NULL;
    }
    if (gravatar_local_str) {
        free(gravatar_local_str);
        gravatar_local_str = NULL;
    }
    return NULL;

}
