#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_prov_process_pending.h"



static domain_prov_process_pending_t *domain_prov_process_pending_create_internal(
    char *_ops_version,
    char *response_text,
    char *protocol,
    char *response_code,
    char *action,
    char *object,
    char *is_success,
    domain_prov_process_pending_attributes_t *attributes
    ) {
    domain_prov_process_pending_t *domain_prov_process_pending_local_var = malloc(sizeof(domain_prov_process_pending_t));
    if (!domain_prov_process_pending_local_var) {
        return NULL;
    }
    memset(domain_prov_process_pending_local_var, 0, sizeof(domain_prov_process_pending_t));
    domain_prov_process_pending_local_var->_library_owned = 1;
    domain_prov_process_pending_local_var->_ops_version = _ops_version;
    domain_prov_process_pending_local_var->response_text = response_text;
    domain_prov_process_pending_local_var->protocol = protocol;
    domain_prov_process_pending_local_var->response_code = response_code;
    domain_prov_process_pending_local_var->action = action;
    domain_prov_process_pending_local_var->object = object;
    domain_prov_process_pending_local_var->is_success = is_success;
    domain_prov_process_pending_local_var->attributes = attributes;
    return domain_prov_process_pending_local_var;
}

__attribute__((deprecated)) domain_prov_process_pending_t *domain_prov_process_pending_create(
    char *_ops_version,
    char *response_text,
    char *protocol,
    char *response_code,
    char *action,
    char *object,
    char *is_success,
    domain_prov_process_pending_attributes_t *attributes
    ) {
    domain_prov_process_pending_t *result = domain_prov_process_pending_create_internal (
        _ops_version,
        response_text,
        protocol,
        response_code,
        action,
        object,
        is_success,
        attributes
        );
    if (!result) {
    }
    return result;
}

void domain_prov_process_pending_free(domain_prov_process_pending_t *domain_prov_process_pending) {
    if(NULL == domain_prov_process_pending){
        return ;
    }
    if(domain_prov_process_pending->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_prov_process_pending_free");
        return ;
    }
    listEntry_t *listEntry;
    if (domain_prov_process_pending->_ops_version) {
        free(domain_prov_process_pending->_ops_version);
        domain_prov_process_pending->_ops_version = NULL;
    }
    if (domain_prov_process_pending->response_text) {
        free(domain_prov_process_pending->response_text);
        domain_prov_process_pending->response_text = NULL;
    }
    if (domain_prov_process_pending->protocol) {
        free(domain_prov_process_pending->protocol);
        domain_prov_process_pending->protocol = NULL;
    }
    if (domain_prov_process_pending->response_code) {
        free(domain_prov_process_pending->response_code);
        domain_prov_process_pending->response_code = NULL;
    }
    if (domain_prov_process_pending->action) {
        free(domain_prov_process_pending->action);
        domain_prov_process_pending->action = NULL;
    }
    if (domain_prov_process_pending->object) {
        free(domain_prov_process_pending->object);
        domain_prov_process_pending->object = NULL;
    }
    if (domain_prov_process_pending->is_success) {
        free(domain_prov_process_pending->is_success);
        domain_prov_process_pending->is_success = NULL;
    }
    if (domain_prov_process_pending->attributes) {
        domain_prov_process_pending_attributes_free(domain_prov_process_pending->attributes);
        domain_prov_process_pending->attributes = NULL;
    }
    free(domain_prov_process_pending);
}

cJSON *domain_prov_process_pending_convertToJSON(domain_prov_process_pending_t *domain_prov_process_pending) {
    cJSON *item = cJSON_CreateObject();

    // domain_prov_process_pending->_ops_version
    if(domain_prov_process_pending->_ops_version) {
    if(cJSON_AddStringToObject(item, "_OPS_version", domain_prov_process_pending->_ops_version) == NULL) {
    goto fail; //String
    }
    }


    // domain_prov_process_pending->response_text
    if(domain_prov_process_pending->response_text) {
    if(cJSON_AddStringToObject(item, "response_text", domain_prov_process_pending->response_text) == NULL) {
    goto fail; //String
    }
    }


    // domain_prov_process_pending->protocol
    if(domain_prov_process_pending->protocol) {
    if(cJSON_AddStringToObject(item, "protocol", domain_prov_process_pending->protocol) == NULL) {
    goto fail; //String
    }
    }


    // domain_prov_process_pending->response_code
    if(domain_prov_process_pending->response_code) {
    if(cJSON_AddStringToObject(item, "response_code", domain_prov_process_pending->response_code) == NULL) {
    goto fail; //String
    }
    }


    // domain_prov_process_pending->action
    if(domain_prov_process_pending->action) {
    if(cJSON_AddStringToObject(item, "action", domain_prov_process_pending->action) == NULL) {
    goto fail; //String
    }
    }


    // domain_prov_process_pending->object
    if(domain_prov_process_pending->object) {
    if(cJSON_AddStringToObject(item, "object", domain_prov_process_pending->object) == NULL) {
    goto fail; //String
    }
    }


    // domain_prov_process_pending->is_success
    if(domain_prov_process_pending->is_success) {
    if(cJSON_AddStringToObject(item, "is_success", domain_prov_process_pending->is_success) == NULL) {
    goto fail; //String
    }
    }


    // domain_prov_process_pending->attributes
    if(domain_prov_process_pending->attributes) {
    cJSON *attributes_local_JSON = domain_prov_process_pending_attributes_convertToJSON(domain_prov_process_pending->attributes);
    if(attributes_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "attributes", attributes_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

domain_prov_process_pending_t *domain_prov_process_pending_parseFromJSON(cJSON *domain_prov_process_pendingJSON){

    domain_prov_process_pending_t *domain_prov_process_pending_local_var = NULL;

    char *_ops_version_local_str = NULL;

    char *response_text_local_str = NULL;

    char *protocol_local_str = NULL;

    char *response_code_local_str = NULL;

    char *action_local_str = NULL;

    char *object_local_str = NULL;

    char *is_success_local_str = NULL;

    // define the local variable for domain_prov_process_pending->attributes
    domain_prov_process_pending_attributes_t *attributes_local_nonprim = NULL;

    // domain_prov_process_pending->_ops_version
    cJSON *_ops_version = cJSON_GetObjectItemCaseSensitive(domain_prov_process_pendingJSON, "_OPS_version");
    if (cJSON_IsNull(_ops_version)) {
        _ops_version = NULL;
    }
    if (_ops_version) { 
    if(!cJSON_IsString(_ops_version) && !cJSON_IsNull(_ops_version))
    {
    goto end; //String
    }
    }

    // domain_prov_process_pending->response_text
    cJSON *response_text = cJSON_GetObjectItemCaseSensitive(domain_prov_process_pendingJSON, "response_text");
    if (cJSON_IsNull(response_text)) {
        response_text = NULL;
    }
    if (response_text) { 
    if(!cJSON_IsString(response_text) && !cJSON_IsNull(response_text))
    {
    goto end; //String
    }
    }

    // domain_prov_process_pending->protocol
    cJSON *protocol = cJSON_GetObjectItemCaseSensitive(domain_prov_process_pendingJSON, "protocol");
    if (cJSON_IsNull(protocol)) {
        protocol = NULL;
    }
    if (protocol) { 
    if(!cJSON_IsString(protocol) && !cJSON_IsNull(protocol))
    {
    goto end; //String
    }
    }

    // domain_prov_process_pending->response_code
    cJSON *response_code = cJSON_GetObjectItemCaseSensitive(domain_prov_process_pendingJSON, "response_code");
    if (cJSON_IsNull(response_code)) {
        response_code = NULL;
    }
    if (response_code) { 
    if(!cJSON_IsString(response_code) && !cJSON_IsNull(response_code))
    {
    goto end; //String
    }
    }

    // domain_prov_process_pending->action
    cJSON *action = cJSON_GetObjectItemCaseSensitive(domain_prov_process_pendingJSON, "action");
    if (cJSON_IsNull(action)) {
        action = NULL;
    }
    if (action) { 
    if(!cJSON_IsString(action) && !cJSON_IsNull(action))
    {
    goto end; //String
    }
    }

    // domain_prov_process_pending->object
    cJSON *object = cJSON_GetObjectItemCaseSensitive(domain_prov_process_pendingJSON, "object");
    if (cJSON_IsNull(object)) {
        object = NULL;
    }
    if (object) { 
    if(!cJSON_IsString(object) && !cJSON_IsNull(object))
    {
    goto end; //String
    }
    }

    // domain_prov_process_pending->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(domain_prov_process_pendingJSON, "is_success");
    if (cJSON_IsNull(is_success)) {
        is_success = NULL;
    }
    if (is_success) { 
    if(!cJSON_IsString(is_success) && !cJSON_IsNull(is_success))
    {
    goto end; //String
    }
    }

    // domain_prov_process_pending->attributes
    cJSON *attributes = cJSON_GetObjectItemCaseSensitive(domain_prov_process_pendingJSON, "attributes");
    if (cJSON_IsNull(attributes)) {
        attributes = NULL;
    }
    if (attributes) { 
    attributes_local_nonprim = domain_prov_process_pending_attributes_parseFromJSON(attributes); //nonprimitive
    }


    if (_ops_version && !cJSON_IsNull(_ops_version)) _ops_version_local_str = strdup(_ops_version->valuestring);
    if (response_text && !cJSON_IsNull(response_text)) response_text_local_str = strdup(response_text->valuestring);
    if (protocol && !cJSON_IsNull(protocol)) protocol_local_str = strdup(protocol->valuestring);
    if (response_code && !cJSON_IsNull(response_code)) response_code_local_str = strdup(response_code->valuestring);
    if (action && !cJSON_IsNull(action)) action_local_str = strdup(action->valuestring);
    if (object && !cJSON_IsNull(object)) object_local_str = strdup(object->valuestring);
    if (is_success && !cJSON_IsNull(is_success)) is_success_local_str = strdup(is_success->valuestring);

    domain_prov_process_pending_local_var = domain_prov_process_pending_create_internal (
        _ops_version_local_str,
        response_text_local_str,
        protocol_local_str,
        response_code_local_str,
        action_local_str,
        object_local_str,
        is_success_local_str,
        attributes ? attributes_local_nonprim : NULL
        );

    if (!domain_prov_process_pending_local_var) {
        goto end;
    }

    return domain_prov_process_pending_local_var;
end:
    if (_ops_version_local_str) {
        free(_ops_version_local_str);
        _ops_version_local_str = NULL;
    }
    if (response_text_local_str) {
        free(response_text_local_str);
        response_text_local_str = NULL;
    }
    if (protocol_local_str) {
        free(protocol_local_str);
        protocol_local_str = NULL;
    }
    if (response_code_local_str) {
        free(response_code_local_str);
        response_code_local_str = NULL;
    }
    if (action_local_str) {
        free(action_local_str);
        action_local_str = NULL;
    }
    if (object_local_str) {
        free(object_local_str);
        object_local_str = NULL;
    }
    if (is_success_local_str) {
        free(is_success_local_str);
        is_success_local_str = NULL;
    }
    if (attributes_local_nonprim) {
        domain_prov_process_pending_attributes_free(attributes_local_nonprim);
        attributes_local_nonprim = NULL;
    }
    return NULL;

}
