#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "login_submission_example_g_recaptcha_response_dep.h"



static login_submission_example_g_recaptcha_response_dep_t *login_submission_example_g_recaptcha_response_dep_create_internal(
    int *w,
    int *n
    ) {
    login_submission_example_g_recaptcha_response_dep_t *login_submission_example_g_recaptcha_response_dep_local_var = malloc(sizeof(login_submission_example_g_recaptcha_response_dep_t));
    if (!login_submission_example_g_recaptcha_response_dep_local_var) {
        return NULL;
    }
    memset(login_submission_example_g_recaptcha_response_dep_local_var, 0, sizeof(login_submission_example_g_recaptcha_response_dep_t));
    login_submission_example_g_recaptcha_response_dep_local_var->_library_owned = 1;
    login_submission_example_g_recaptcha_response_dep_local_var->w = w;
    login_submission_example_g_recaptcha_response_dep_local_var->n = n;
    return login_submission_example_g_recaptcha_response_dep_local_var;
}

__attribute__((deprecated)) login_submission_example_g_recaptcha_response_dep_t *login_submission_example_g_recaptcha_response_dep_create(
    int *w,
    int *n
    ) {
    int *w_copy = NULL;
    if (w) {
        w_copy = malloc(sizeof(int));
        if (w_copy) *w_copy = *w;
    }
    int *n_copy = NULL;
    if (n) {
        n_copy = malloc(sizeof(int));
        if (n_copy) *n_copy = *n;
    }
    login_submission_example_g_recaptcha_response_dep_t *result = login_submission_example_g_recaptcha_response_dep_create_internal (
        w_copy,
        n_copy
        );
    if (!result) {
        free(w_copy);
        free(n_copy);
    }
    return result;
}

void login_submission_example_g_recaptcha_response_dep_free(login_submission_example_g_recaptcha_response_dep_t *login_submission_example_g_recaptcha_response_dep) {
    if(NULL == login_submission_example_g_recaptcha_response_dep){
        return ;
    }
    if(login_submission_example_g_recaptcha_response_dep->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "login_submission_example_g_recaptcha_response_dep_free");
        return ;
    }
    listEntry_t *listEntry;
    if (login_submission_example_g_recaptcha_response_dep->w) {
        free(login_submission_example_g_recaptcha_response_dep->w);
        login_submission_example_g_recaptcha_response_dep->w = NULL;
    }
    if (login_submission_example_g_recaptcha_response_dep->n) {
        free(login_submission_example_g_recaptcha_response_dep->n);
        login_submission_example_g_recaptcha_response_dep->n = NULL;
    }
    free(login_submission_example_g_recaptcha_response_dep);
}

cJSON *login_submission_example_g_recaptcha_response_dep_convertToJSON(login_submission_example_g_recaptcha_response_dep_t *login_submission_example_g_recaptcha_response_dep) {
    cJSON *item = cJSON_CreateObject();

    // login_submission_example_g_recaptcha_response_dep->w
    if(login_submission_example_g_recaptcha_response_dep->w) {
    if(cJSON_AddNumberToObject(item, "w", *login_submission_example_g_recaptcha_response_dep->w) == NULL) {
    goto fail; //Numeric
    }
    }


    // login_submission_example_g_recaptcha_response_dep->n
    if(login_submission_example_g_recaptcha_response_dep->n) {
    if(cJSON_AddNumberToObject(item, "n", *login_submission_example_g_recaptcha_response_dep->n) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

login_submission_example_g_recaptcha_response_dep_t *login_submission_example_g_recaptcha_response_dep_parseFromJSON(cJSON *login_submission_example_g_recaptcha_response_depJSON){

    login_submission_example_g_recaptcha_response_dep_t *login_submission_example_g_recaptcha_response_dep_local_var = NULL;

    // define the local variable for login_submission_example_g_recaptcha_response_dep->w
    int *w_local_var = NULL;

    // define the local variable for login_submission_example_g_recaptcha_response_dep->n
    int *n_local_var = NULL;

    // login_submission_example_g_recaptcha_response_dep->w
    cJSON *w = cJSON_GetObjectItemCaseSensitive(login_submission_example_g_recaptcha_response_depJSON, "w");
    if (cJSON_IsNull(w)) {
        w = NULL;
    }
    if (w) { 
    if(!cJSON_IsNumber(w))
    {
    goto end; //Numeric
    }
    w_local_var = malloc(sizeof(int));
    if(!w_local_var)
    {
        goto end;
    }
    *w_local_var = w->valuedouble;
    }

    // login_submission_example_g_recaptcha_response_dep->n
    cJSON *n = cJSON_GetObjectItemCaseSensitive(login_submission_example_g_recaptcha_response_depJSON, "n");
    if (cJSON_IsNull(n)) {
        n = NULL;
    }
    if (n) { 
    if(!cJSON_IsNumber(n))
    {
    goto end; //Numeric
    }
    n_local_var = malloc(sizeof(int));
    if(!n_local_var)
    {
        goto end;
    }
    *n_local_var = n->valuedouble;
    }



    login_submission_example_g_recaptcha_response_dep_local_var = login_submission_example_g_recaptcha_response_dep_create_internal (
        w_local_var,
        n_local_var
        );

    if (!login_submission_example_g_recaptcha_response_dep_local_var) {
        goto end;
    }

    return login_submission_example_g_recaptcha_response_dep_local_var;
end:
    if (w_local_var) {
        free(w_local_var);
        w_local_var = NULL;
    }
    if (n_local_var) {
        free(n_local_var);
        n_local_var = NULL;
    }
    return NULL;

}
