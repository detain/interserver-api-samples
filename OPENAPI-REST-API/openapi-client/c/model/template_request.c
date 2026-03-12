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
    template_request_local_var->_template = _template;
    template_request_local_var->local_password = local_password;
    template_request_local_var->password = password;

    template_request_local_var->_library_owned = 1;
    return template_request_local_var;
}

__attribute__((deprecated)) template_request_t *template_request_create(
    char *_template,
    char *local_password,
    char *password
    ) {
    return template_request_create_internal (
        _template,
        local_password,
        password
        );
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


    template_request_local_var = template_request_create_internal (
        strdup(_template->valuestring),
        strdup(local_password->valuestring),
        password && !cJSON_IsNull(password) ? strdup(password->valuestring) : NULL
        );

    return template_request_local_var;
end:
    return NULL;

}
