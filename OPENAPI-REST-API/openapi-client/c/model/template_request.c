#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "template_request.h"



static template_request_t *template_request_create_internal(
    char *_template,
    char *local_password,
    char *password
    ) {
    template_request_t *template_request_local_var = malloc(sizeof(template_request_t));
    if (!template_request_local_var) {
        return NULL;
    }
    memset(template_request_local_var, 0, sizeof(template_request_t));
    template_request_local_var->_library_owned = 1;
    template_request_local_var->_template = _template;
    template_request_local_var->local_password = local_password;
    template_request_local_var->password = password;
    return template_request_local_var;
}

__attribute__((deprecated)) template_request_t *template_request_create(
    char *_template,
    char *local_password,
    char *password
    ) {
    template_request_t *result = template_request_create_internal (
        _template,
        local_password,
        password
        );
    if (!result) {
    }
    return result;
}

void template_request_free(template_request_t *template_request) {
    if(NULL == template_request){
        return ;
    }
    if(template_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "template_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (template_request->_template) {
        free(template_request->_template);
        template_request->_template = NULL;
    }
    if (template_request->local_password) {
        free(template_request->local_password);
        template_request->local_password = NULL;
    }
    if (template_request->password) {
        free(template_request->password);
        template_request->password = NULL;
    }
    free(template_request);
}

cJSON *template_request_convertToJSON(template_request_t *template_request) {
    cJSON *item = cJSON_CreateObject();

    // template_request->_template
    if (!template_request->_template) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "template", template_request->_template) == NULL) {
    goto fail; //String
    }


    // template_request->local_password
    if (!template_request->local_password) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "localPassword", template_request->local_password) == NULL) {
    goto fail; //String
    }


    // template_request->password
    if(template_request->password) {
    if(cJSON_AddStringToObject(item, "password", template_request->password) == NULL) {
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

template_request_t *template_request_parseFromJSON(cJSON *template_requestJSON){

    template_request_t *template_request_local_var = NULL;

    char *_template_local_str = NULL;

    char *local_password_local_str = NULL;

    char *password_local_str = NULL;

    // template_request->_template
    cJSON *_template = cJSON_GetObjectItemCaseSensitive(template_requestJSON, "template");
    if (cJSON_IsNull(_template)) {
        _template = NULL;
    }
    if (!_template) {
        goto end;
    }

    
    if(!cJSON_IsString(_template))
    {
    goto end; //String
    }

    // template_request->local_password
    cJSON *local_password = cJSON_GetObjectItemCaseSensitive(template_requestJSON, "localPassword");
    if (cJSON_IsNull(local_password)) {
        local_password = NULL;
    }
    if (!local_password) {
        goto end;
    }

    
    if(!cJSON_IsString(local_password))
    {
    goto end; //String
    }

    // template_request->password
    cJSON *password = cJSON_GetObjectItemCaseSensitive(template_requestJSON, "password");
    if (cJSON_IsNull(password)) {
        password = NULL;
    }
    if (password) { 
    if(!cJSON_IsString(password) && !cJSON_IsNull(password))
    {
    goto end; //String
    }
    }


    if (_template && !cJSON_IsNull(_template)) _template_local_str = strdup(_template->valuestring);
    if (local_password && !cJSON_IsNull(local_password)) local_password_local_str = strdup(local_password->valuestring);
    if (password && !cJSON_IsNull(password)) password_local_str = strdup(password->valuestring);

    template_request_local_var = template_request_create_internal (
        _template_local_str,
        local_password_local_str,
        password_local_str
        );

    if (!template_request_local_var) {
        goto end;
    }

    return template_request_local_var;
end:
    if (_template_local_str) {
        free(_template_local_str);
        _template_local_str = NULL;
    }
    if (local_password_local_str) {
        free(local_password_local_str);
        local_password_local_str = NULL;
    }
    if (password_local_str) {
        free(password_local_str);
        password_local_str = NULL;
    }
    return NULL;

}
