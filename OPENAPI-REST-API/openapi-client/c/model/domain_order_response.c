#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_order_response.h"



static domain_order_response_t *domain_order_response_create_internal(
    char *_ops_version,
    char *protocol,
    char *is_success,
    char *action,
    domain_order_response_attributes_t *attributes,
    char *response_text,
    char *object,
    char *response_code
    ) {
    domain_order_response_t *domain_order_response_local_var = malloc(sizeof(domain_order_response_t));
    if (!domain_order_response_local_var) {
        return NULL;
    }
    domain_order_response_local_var->_ops_version = _ops_version;
    domain_order_response_local_var->protocol = protocol;
    domain_order_response_local_var->is_success = is_success;
    domain_order_response_local_var->action = action;
    domain_order_response_local_var->attributes = attributes;
    domain_order_response_local_var->response_text = response_text;
    domain_order_response_local_var->object = object;
    domain_order_response_local_var->response_code = response_code;

    domain_order_response_local_var->_library_owned = 1;
    return domain_order_response_local_var;
}

__attribute__((deprecated)) domain_order_response_t *domain_order_response_create(
    char *_ops_version,
    char *protocol,
    char *is_success,
    char *action,
    domain_order_response_attributes_t *attributes,
    char *response_text,
    char *object,
    char *response_code
    ) {
    return domain_order_response_create_internal (
        _ops_version,
        protocol,
        is_success,
        action,
        attributes,
        response_text,
        object,
        response_code
        );
}

void domain_order_response_free(domain_order_response_t *domain_order_response) {
    if(NULL == domain_order_response){
        return ;
    }
    if(domain_order_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_order_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (domain_order_response->_ops_version) {
        free(domain_order_response->_ops_version);
        domain_order_response->_ops_version = NULL;
    }
    if (domain_order_response->protocol) {
        free(domain_order_response->protocol);
        domain_order_response->protocol = NULL;
    }
    if (domain_order_response->is_success) {
        free(domain_order_response->is_success);
        domain_order_response->is_success = NULL;
    }
    if (domain_order_response->action) {
        free(domain_order_response->action);
        domain_order_response->action = NULL;
    }
    if (domain_order_response->attributes) {
        domain_order_response_attributes_free(domain_order_response->attributes);
        domain_order_response->attributes = NULL;
    }
    if (domain_order_response->response_text) {
        free(domain_order_response->response_text);
        domain_order_response->response_text = NULL;
    }
    if (domain_order_response->object) {
        free(domain_order_response->object);
        domain_order_response->object = NULL;
    }
    if (domain_order_response->response_code) {
        free(domain_order_response->response_code);
        domain_order_response->response_code = NULL;
    }
    free(domain_order_response);
}

cJSON *domain_order_response_convertToJSON(domain_order_response_t *domain_order_response) {
    cJSON *item = cJSON_CreateObject();

    // domain_order_response->_ops_version
    if(domain_order_response->_ops_version) {
    if(cJSON_AddStringToObject(item, "_OPS_version", domain_order_response->_ops_version) == NULL) {
    goto fail; //String
    }
    }


    // domain_order_response->protocol
    if(domain_order_response->protocol) {
    if(cJSON_AddStringToObject(item, "protocol", domain_order_response->protocol) == NULL) {
    goto fail; //String
    }
    }


    // domain_order_response->is_success
    if(domain_order_response->is_success) {
    if(cJSON_AddStringToObject(item, "is_success", domain_order_response->is_success) == NULL) {
    goto fail; //String
    }
    }


    // domain_order_response->action
    if(domain_order_response->action) {
    if(cJSON_AddStringToObject(item, "action", domain_order_response->action) == NULL) {
    goto fail; //String
    }
    }


    // domain_order_response->attributes
    if(domain_order_response->attributes) {
    cJSON *attributes_local_JSON = domain_order_response_attributes_convertToJSON(domain_order_response->attributes);
    if(attributes_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "attributes", attributes_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // domain_order_response->response_text
    if(domain_order_response->response_text) {
    if(cJSON_AddStringToObject(item, "response_text", domain_order_response->response_text) == NULL) {
    goto fail; //String
    }
    }


    // domain_order_response->object
    if(domain_order_response->object) {
    if(cJSON_AddStringToObject(item, "object", domain_order_response->object) == NULL) {
    goto fail; //String
    }
    }


    // domain_order_response->response_code
    if(domain_order_response->response_code) {
    if(cJSON_AddStringToObject(item, "response_code", domain_order_response->response_code) == NULL) {
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

domain_order_response_t *domain_order_response_parseFromJSON(cJSON *domain_order_responseJSON){

    domain_order_response_t *domain_order_response_local_var = NULL;

    // define the local variable for domain_order_response->attributes
    domain_order_response_attributes_t *attributes_local_nonprim = NULL;

    // domain_order_response->_ops_version
    cJSON *_ops_version = cJSON_GetObjectItemCaseSensitive(domain_order_responseJSON, "_OPS_version");
    if (cJSON_IsNull(_ops_version)) {
        _ops_version = NULL;
    }
    if (_ops_version) { 
    if(!cJSON_IsString(_ops_version) && !cJSON_IsNull(_ops_version))
    {
    goto end; //String
    }
    }

    // domain_order_response->protocol
    cJSON *protocol = cJSON_GetObjectItemCaseSensitive(domain_order_responseJSON, "protocol");
    if (cJSON_IsNull(protocol)) {
        protocol = NULL;
    }
    if (protocol) { 
    if(!cJSON_IsString(protocol) && !cJSON_IsNull(protocol))
    {
    goto end; //String
    }
    }

    // domain_order_response->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(domain_order_responseJSON, "is_success");
    if (cJSON_IsNull(is_success)) {
        is_success = NULL;
    }
    if (is_success) { 
    if(!cJSON_IsString(is_success) && !cJSON_IsNull(is_success))
    {
    goto end; //String
    }
    }

    // domain_order_response->action
    cJSON *action = cJSON_GetObjectItemCaseSensitive(domain_order_responseJSON, "action");
    if (cJSON_IsNull(action)) {
        action = NULL;
    }
    if (action) { 
    if(!cJSON_IsString(action) && !cJSON_IsNull(action))
    {
    goto end; //String
    }
    }

    // domain_order_response->attributes
    cJSON *attributes = cJSON_GetObjectItemCaseSensitive(domain_order_responseJSON, "attributes");
    if (cJSON_IsNull(attributes)) {
        attributes = NULL;
    }
    if (attributes) { 
    attributes_local_nonprim = domain_order_response_attributes_parseFromJSON(attributes); //nonprimitive
    }

    // domain_order_response->response_text
    cJSON *response_text = cJSON_GetObjectItemCaseSensitive(domain_order_responseJSON, "response_text");
    if (cJSON_IsNull(response_text)) {
        response_text = NULL;
    }
    if (response_text) { 
    if(!cJSON_IsString(response_text) && !cJSON_IsNull(response_text))
    {
    goto end; //String
    }
    }

    // domain_order_response->object
    cJSON *object = cJSON_GetObjectItemCaseSensitive(domain_order_responseJSON, "object");
    if (cJSON_IsNull(object)) {
        object = NULL;
    }
    if (object) { 
    if(!cJSON_IsString(object) && !cJSON_IsNull(object))
    {
    goto end; //String
    }
    }

    // domain_order_response->response_code
    cJSON *response_code = cJSON_GetObjectItemCaseSensitive(domain_order_responseJSON, "response_code");
    if (cJSON_IsNull(response_code)) {
        response_code = NULL;
    }
    if (response_code) { 
    if(!cJSON_IsString(response_code) && !cJSON_IsNull(response_code))
    {
    goto end; //String
    }
    }


    domain_order_response_local_var = domain_order_response_create_internal (
        _ops_version && !cJSON_IsNull(_ops_version) ? strdup(_ops_version->valuestring) : NULL,
        protocol && !cJSON_IsNull(protocol) ? strdup(protocol->valuestring) : NULL,
        is_success && !cJSON_IsNull(is_success) ? strdup(is_success->valuestring) : NULL,
        action && !cJSON_IsNull(action) ? strdup(action->valuestring) : NULL,
        attributes ? attributes_local_nonprim : NULL,
        response_text && !cJSON_IsNull(response_text) ? strdup(response_text->valuestring) : NULL,
        object && !cJSON_IsNull(object) ? strdup(object->valuestring) : NULL,
        response_code && !cJSON_IsNull(response_code) ? strdup(response_code->valuestring) : NULL
        );

    return domain_order_response_local_var;
end:
    if (attributes_local_nonprim) {
        domain_order_response_attributes_free(attributes_local_nonprim);
        attributes_local_nonprim = NULL;
    }
    return NULL;

}
