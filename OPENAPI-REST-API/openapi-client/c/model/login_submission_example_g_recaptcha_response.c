#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "login_submission_example_g_recaptcha_response.h"



static login_submission_example_g_recaptcha_response_t *login_submission_example_g_recaptcha_response_create_internal(
    int *__v_is_shallow,
    login_submission_example_g_recaptcha_response_dep_t *dep,
    int *__v_is_ref,
    char *_raw_value,
    char *_value
    ) {
    login_submission_example_g_recaptcha_response_t *login_submission_example_g_recaptcha_response_local_var = malloc(sizeof(login_submission_example_g_recaptcha_response_t));
    if (!login_submission_example_g_recaptcha_response_local_var) {
        return NULL;
    }
    memset(login_submission_example_g_recaptcha_response_local_var, 0, sizeof(login_submission_example_g_recaptcha_response_t));
    login_submission_example_g_recaptcha_response_local_var->_library_owned = 1;
    login_submission_example_g_recaptcha_response_local_var->__v_is_shallow = __v_is_shallow;
    login_submission_example_g_recaptcha_response_local_var->dep = dep;
    login_submission_example_g_recaptcha_response_local_var->__v_is_ref = __v_is_ref;
    login_submission_example_g_recaptcha_response_local_var->_raw_value = _raw_value;
    login_submission_example_g_recaptcha_response_local_var->_value = _value;
    return login_submission_example_g_recaptcha_response_local_var;
}

__attribute__((deprecated)) login_submission_example_g_recaptcha_response_t *login_submission_example_g_recaptcha_response_create(
    int *__v_is_shallow,
    login_submission_example_g_recaptcha_response_dep_t *dep,
    int *__v_is_ref,
    char *_raw_value,
    char *_value
    ) {
    int *__v_is_shallow_copy = NULL;
    if (__v_is_shallow) {
        __v_is_shallow_copy = malloc(sizeof(int));
        if (__v_is_shallow_copy) *__v_is_shallow_copy = *__v_is_shallow;
    }
    int *__v_is_ref_copy = NULL;
    if (__v_is_ref) {
        __v_is_ref_copy = malloc(sizeof(int));
        if (__v_is_ref_copy) *__v_is_ref_copy = *__v_is_ref;
    }
    login_submission_example_g_recaptcha_response_t *result = login_submission_example_g_recaptcha_response_create_internal (
        __v_is_shallow_copy,
        dep,
        __v_is_ref_copy,
        _raw_value,
        _value
        );
    if (!result) {
        free(__v_is_shallow_copy);
        free(__v_is_ref_copy);
    }
    return result;
}

void login_submission_example_g_recaptcha_response_free(login_submission_example_g_recaptcha_response_t *login_submission_example_g_recaptcha_response) {
    if(NULL == login_submission_example_g_recaptcha_response){
        return ;
    }
    if(login_submission_example_g_recaptcha_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "login_submission_example_g_recaptcha_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (login_submission_example_g_recaptcha_response->__v_is_shallow) {
        free(login_submission_example_g_recaptcha_response->__v_is_shallow);
        login_submission_example_g_recaptcha_response->__v_is_shallow = NULL;
    }
    if (login_submission_example_g_recaptcha_response->dep) {
        login_submission_example_g_recaptcha_response_dep_free(login_submission_example_g_recaptcha_response->dep);
        login_submission_example_g_recaptcha_response->dep = NULL;
    }
    if (login_submission_example_g_recaptcha_response->__v_is_ref) {
        free(login_submission_example_g_recaptcha_response->__v_is_ref);
        login_submission_example_g_recaptcha_response->__v_is_ref = NULL;
    }
    if (login_submission_example_g_recaptcha_response->_raw_value) {
        free(login_submission_example_g_recaptcha_response->_raw_value);
        login_submission_example_g_recaptcha_response->_raw_value = NULL;
    }
    if (login_submission_example_g_recaptcha_response->_value) {
        free(login_submission_example_g_recaptcha_response->_value);
        login_submission_example_g_recaptcha_response->_value = NULL;
    }
    free(login_submission_example_g_recaptcha_response);
}

cJSON *login_submission_example_g_recaptcha_response_convertToJSON(login_submission_example_g_recaptcha_response_t *login_submission_example_g_recaptcha_response) {
    cJSON *item = cJSON_CreateObject();

    // login_submission_example_g_recaptcha_response->__v_is_shallow
    if(login_submission_example_g_recaptcha_response->__v_is_shallow) {
    if(cJSON_AddBoolToObject(item, "__v_isShallow", *login_submission_example_g_recaptcha_response->__v_is_shallow) == NULL) {
    goto fail; //Bool
    }
    }


    // login_submission_example_g_recaptcha_response->dep
    if(login_submission_example_g_recaptcha_response->dep) {
    cJSON *dep_local_JSON = login_submission_example_g_recaptcha_response_dep_convertToJSON(login_submission_example_g_recaptcha_response->dep);
    if(dep_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "dep", dep_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // login_submission_example_g_recaptcha_response->__v_is_ref
    if(login_submission_example_g_recaptcha_response->__v_is_ref) {
    if(cJSON_AddBoolToObject(item, "__v_isRef", *login_submission_example_g_recaptcha_response->__v_is_ref) == NULL) {
    goto fail; //Bool
    }
    }


    // login_submission_example_g_recaptcha_response->_raw_value
    if(login_submission_example_g_recaptcha_response->_raw_value) {
    if(cJSON_AddStringToObject(item, "_rawValue", login_submission_example_g_recaptcha_response->_raw_value) == NULL) {
    goto fail; //String
    }
    }


    // login_submission_example_g_recaptcha_response->_value
    if(login_submission_example_g_recaptcha_response->_value) {
    if(cJSON_AddStringToObject(item, "_value", login_submission_example_g_recaptcha_response->_value) == NULL) {
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

login_submission_example_g_recaptcha_response_t *login_submission_example_g_recaptcha_response_parseFromJSON(cJSON *login_submission_example_g_recaptcha_responseJSON){

    login_submission_example_g_recaptcha_response_t *login_submission_example_g_recaptcha_response_local_var = NULL;

    // define the local variable for login_submission_example_g_recaptcha_response->__v_is_shallow
    int *__v_is_shallow_local_var = NULL;

    // define the local variable for login_submission_example_g_recaptcha_response->dep
    login_submission_example_g_recaptcha_response_dep_t *dep_local_nonprim = NULL;

    // define the local variable for login_submission_example_g_recaptcha_response->__v_is_ref
    int *__v_is_ref_local_var = NULL;

    char *_raw_value_local_str = NULL;

    char *_value_local_str = NULL;

    // login_submission_example_g_recaptcha_response->__v_is_shallow
    cJSON *__v_is_shallow = cJSON_GetObjectItemCaseSensitive(login_submission_example_g_recaptcha_responseJSON, "__v_isShallow");
    if (cJSON_IsNull(__v_is_shallow)) {
        __v_is_shallow = NULL;
    }
    if (__v_is_shallow) { 
    if(!cJSON_IsBool(__v_is_shallow))
    {
    goto end; //Bool
    }
    __v_is_shallow_local_var = malloc(sizeof(int));
    if(!__v_is_shallow_local_var)
    {
        goto end;
    }
    *__v_is_shallow_local_var = __v_is_shallow->valueint;
    }

    // login_submission_example_g_recaptcha_response->dep
    cJSON *dep = cJSON_GetObjectItemCaseSensitive(login_submission_example_g_recaptcha_responseJSON, "dep");
    if (cJSON_IsNull(dep)) {
        dep = NULL;
    }
    if (dep) { 
    dep_local_nonprim = login_submission_example_g_recaptcha_response_dep_parseFromJSON(dep); //nonprimitive
    }

    // login_submission_example_g_recaptcha_response->__v_is_ref
    cJSON *__v_is_ref = cJSON_GetObjectItemCaseSensitive(login_submission_example_g_recaptcha_responseJSON, "__v_isRef");
    if (cJSON_IsNull(__v_is_ref)) {
        __v_is_ref = NULL;
    }
    if (__v_is_ref) { 
    if(!cJSON_IsBool(__v_is_ref))
    {
    goto end; //Bool
    }
    __v_is_ref_local_var = malloc(sizeof(int));
    if(!__v_is_ref_local_var)
    {
        goto end;
    }
    *__v_is_ref_local_var = __v_is_ref->valueint;
    }

    // login_submission_example_g_recaptcha_response->_raw_value
    cJSON *_raw_value = cJSON_GetObjectItemCaseSensitive(login_submission_example_g_recaptcha_responseJSON, "_rawValue");
    if (cJSON_IsNull(_raw_value)) {
        _raw_value = NULL;
    }
    if (_raw_value) { 
    if(!cJSON_IsString(_raw_value) && !cJSON_IsNull(_raw_value))
    {
    goto end; //String
    }
    }

    // login_submission_example_g_recaptcha_response->_value
    cJSON *_value = cJSON_GetObjectItemCaseSensitive(login_submission_example_g_recaptcha_responseJSON, "_value");
    if (cJSON_IsNull(_value)) {
        _value = NULL;
    }
    if (_value) { 
    if(!cJSON_IsString(_value) && !cJSON_IsNull(_value))
    {
    goto end; //String
    }
    }


    if (_raw_value && !cJSON_IsNull(_raw_value)) _raw_value_local_str = strdup(_raw_value->valuestring);
    if (_value && !cJSON_IsNull(_value)) _value_local_str = strdup(_value->valuestring);

    login_submission_example_g_recaptcha_response_local_var = login_submission_example_g_recaptcha_response_create_internal (
        __v_is_shallow_local_var,
        dep ? dep_local_nonprim : NULL,
        __v_is_ref_local_var,
        _raw_value_local_str,
        _value_local_str
        );

    if (!login_submission_example_g_recaptcha_response_local_var) {
        goto end;
    }

    return login_submission_example_g_recaptcha_response_local_var;
end:
    if (__v_is_shallow_local_var) {
        free(__v_is_shallow_local_var);
        __v_is_shallow_local_var = NULL;
    }
    if (dep_local_nonprim) {
        login_submission_example_g_recaptcha_response_dep_free(dep_local_nonprim);
        dep_local_nonprim = NULL;
    }
    if (__v_is_ref_local_var) {
        free(__v_is_ref_local_var);
        __v_is_ref_local_var = NULL;
    }
    if (_raw_value_local_str) {
        free(_raw_value_local_str);
        _raw_value_local_str = NULL;
    }
    if (_value_local_str) {
        free(_value_local_str);
        _value_local_str = NULL;
    }
    return NULL;

}
