#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "login_submission_example_g_recaptcha_response_dep.h"



static login_submission_example_g_recaptcha_response_dep_t *login_submission_example_g_recaptcha_response_dep_create_internal(
    int w,
    int n
    ) {
    login_submission_example_g_recaptcha_response_dep_t *login_submission_example_g_recaptcha_response_dep_local_var = malloc(sizeof(login_submission_example_g_recaptcha_response_dep_t));
    if (!login_submission_example_g_recaptcha_response_dep_local_var) {
        return NULL;
    }
    login_submission_example_g_recaptcha_response_dep_local_var->w = w;
    login_submission_example_g_recaptcha_response_dep_local_var->n = n;

    login_submission_example_g_recaptcha_response_dep_local_var->_library_owned = 1;
    return login_submission_example_g_recaptcha_response_dep_local_var;
}

__attribute__((deprecated)) login_submission_example_g_recaptcha_response_dep_t *login_submission_example_g_recaptcha_response_dep_create(
    int w,
    int n
    ) {
    return login_submission_example_g_recaptcha_response_dep_create_internal (
        w,
        n
        );
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
    free(login_submission_example_g_recaptcha_response_dep);
}

cJSON *login_submission_example_g_recaptcha_response_dep_convertToJSON(login_submission_example_g_recaptcha_response_dep_t *login_submission_example_g_recaptcha_response_dep) {
    cJSON *item = cJSON_CreateObject();

    // login_submission_example_g_recaptcha_response_dep->w
    if(login_submission_example_g_recaptcha_response_dep->w) {
    if(cJSON_AddNumberToObject(item, "w", login_submission_example_g_recaptcha_response_dep->w) == NULL) {
    goto fail; //Numeric
    }
    }


    // login_submission_example_g_recaptcha_response_dep->n
    if(login_submission_example_g_recaptcha_response_dep->n) {
    if(cJSON_AddNumberToObject(item, "n", login_submission_example_g_recaptcha_response_dep->n) == NULL) {
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
    }


    login_submission_example_g_recaptcha_response_dep_local_var = login_submission_example_g_recaptcha_response_dep_create_internal (
        w ? w->valuedouble : 0,
        n ? n->valuedouble : 0
        );

    return login_submission_example_g_recaptcha_response_dep_local_var;
end:
    return NULL;

}
