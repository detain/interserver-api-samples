#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_all_info.h"



static domain_all_info_t *domain_all_info_create_internal(
    char *_ops_version,
    domain_all_info_attributes_t *attributes,
    char *object,
    char *protocol,
    char *response_text,
    char *response_code,
    char *action,
    char *is_success
    ) {
    domain_all_info_t *domain_all_info_local_var = malloc(sizeof(domain_all_info_t));
    if (!domain_all_info_local_var) {
        return NULL;
    }
    domain_all_info_local_var->_ops_version = _ops_version;
    domain_all_info_local_var->attributes = attributes;
    domain_all_info_local_var->object = object;
    domain_all_info_local_var->protocol = protocol;
    domain_all_info_local_var->response_text = response_text;
    domain_all_info_local_var->response_code = response_code;
    domain_all_info_local_var->action = action;
    domain_all_info_local_var->is_success = is_success;

    domain_all_info_local_var->_library_owned = 1;
    return domain_all_info_local_var;
}

__attribute__((deprecated)) domain_all_info_t *domain_all_info_create(
    char *_ops_version,
    domain_all_info_attributes_t *attributes,
    char *object,
    char *protocol,
    char *response_text,
    char *response_code,
    char *action,
    char *is_success
    ) {
    return domain_all_info_create_internal (
        _ops_version,
        attributes,
        object,
        protocol,
        response_text,
        response_code,
        action,
        is_success
        );
}

void domain_all_info_free(domain_all_info_t *domain_all_info) {
    if(NULL == domain_all_info){
        return ;
    }
    if(domain_all_info->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_all_info_free");
        return ;
    }
    listEntry_t *listEntry;
    if (domain_all_info->_ops_version) {
        free(domain_all_info->_ops_version);
        domain_all_info->_ops_version = NULL;
    }
    if (domain_all_info->attributes) {
        domain_all_info_attributes_free(domain_all_info->attributes);
        domain_all_info->attributes = NULL;
    }
    if (domain_all_info->object) {
        free(domain_all_info->object);
        domain_all_info->object = NULL;
    }
    if (domain_all_info->protocol) {
        free(domain_all_info->protocol);
        domain_all_info->protocol = NULL;
    }
    if (domain_all_info->response_text) {
        free(domain_all_info->response_text);
        domain_all_info->response_text = NULL;
    }
    if (domain_all_info->response_code) {
        free(domain_all_info->response_code);
        domain_all_info->response_code = NULL;
    }
    if (domain_all_info->action) {
        free(domain_all_info->action);
        domain_all_info->action = NULL;
    }
    if (domain_all_info->is_success) {
        free(domain_all_info->is_success);
        domain_all_info->is_success = NULL;
    }
    free(domain_all_info);
}

cJSON *domain_all_info_convertToJSON(domain_all_info_t *domain_all_info) {
    cJSON *item = cJSON_CreateObject();

    // domain_all_info->_ops_version
    if(domain_all_info->_ops_version) {
    if(cJSON_AddStringToObject(item, "_OPS_version", domain_all_info->_ops_version) == NULL) {
    goto fail; //String
    }
    }


    // domain_all_info->attributes
    if(domain_all_info->attributes) {
    cJSON *attributes_local_JSON = domain_all_info_attributes_convertToJSON(domain_all_info->attributes);
    if(attributes_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "attributes", attributes_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // domain_all_info->object
    if(domain_all_info->object) {
    if(cJSON_AddStringToObject(item, "object", domain_all_info->object) == NULL) {
    goto fail; //String
    }
    }


    // domain_all_info->protocol
    if(domain_all_info->protocol) {
    if(cJSON_AddStringToObject(item, "protocol", domain_all_info->protocol) == NULL) {
    goto fail; //String
    }
    }


    // domain_all_info->response_text
    if(domain_all_info->response_text) {
    if(cJSON_AddStringToObject(item, "response_text", domain_all_info->response_text) == NULL) {
    goto fail; //String
    }
    }


    // domain_all_info->response_code
    if(domain_all_info->response_code) {
    if(cJSON_AddStringToObject(item, "response_code", domain_all_info->response_code) == NULL) {
    goto fail; //String
    }
    }


    // domain_all_info->action
    if(domain_all_info->action) {
    if(cJSON_AddStringToObject(item, "action", domain_all_info->action) == NULL) {
    goto fail; //String
    }
    }


    // domain_all_info->is_success
    if(domain_all_info->is_success) {
    if(cJSON_AddStringToObject(item, "is_success", domain_all_info->is_success) == NULL) {
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

domain_all_info_t *domain_all_info_parseFromJSON(cJSON *domain_all_infoJSON){

    domain_all_info_t *domain_all_info_local_var = NULL;

    // define the local variable for domain_all_info->attributes
    domain_all_info_attributes_t *attributes_local_nonprim = NULL;

    // domain_all_info->_ops_version
    cJSON *_ops_version = cJSON_GetObjectItemCaseSensitive(domain_all_infoJSON, "_OPS_version");
    if (cJSON_IsNull(_ops_version)) {
        _ops_version = NULL;
    }
    if (_ops_version) { 
    if(!cJSON_IsString(_ops_version) && !cJSON_IsNull(_ops_version))
    {
    goto end; //String
    }
    }

    // domain_all_info->attributes
    cJSON *attributes = cJSON_GetObjectItemCaseSensitive(domain_all_infoJSON, "attributes");
    if (cJSON_IsNull(attributes)) {
        attributes = NULL;
    }
    if (attributes) { 
    attributes_local_nonprim = domain_all_info_attributes_parseFromJSON(attributes); //nonprimitive
    }

    // domain_all_info->object
    cJSON *object = cJSON_GetObjectItemCaseSensitive(domain_all_infoJSON, "object");
    if (cJSON_IsNull(object)) {
        object = NULL;
    }
    if (object) { 
    if(!cJSON_IsString(object) && !cJSON_IsNull(object))
    {
    goto end; //String
    }
    }

    // domain_all_info->protocol
    cJSON *protocol = cJSON_GetObjectItemCaseSensitive(domain_all_infoJSON, "protocol");
    if (cJSON_IsNull(protocol)) {
        protocol = NULL;
    }
    if (protocol) { 
    if(!cJSON_IsString(protocol) && !cJSON_IsNull(protocol))
    {
    goto end; //String
    }
    }

    // domain_all_info->response_text
    cJSON *response_text = cJSON_GetObjectItemCaseSensitive(domain_all_infoJSON, "response_text");
    if (cJSON_IsNull(response_text)) {
        response_text = NULL;
    }
    if (response_text) { 
    if(!cJSON_IsString(response_text) && !cJSON_IsNull(response_text))
    {
    goto end; //String
    }
    }

    // domain_all_info->response_code
    cJSON *response_code = cJSON_GetObjectItemCaseSensitive(domain_all_infoJSON, "response_code");
    if (cJSON_IsNull(response_code)) {
        response_code = NULL;
    }
    if (response_code) { 
    if(!cJSON_IsString(response_code) && !cJSON_IsNull(response_code))
    {
    goto end; //String
    }
    }

    // domain_all_info->action
    cJSON *action = cJSON_GetObjectItemCaseSensitive(domain_all_infoJSON, "action");
    if (cJSON_IsNull(action)) {
        action = NULL;
    }
    if (action) { 
    if(!cJSON_IsString(action) && !cJSON_IsNull(action))
    {
    goto end; //String
    }
    }

    // domain_all_info->is_success
    cJSON *is_success = cJSON_GetObjectItemCaseSensitive(domain_all_infoJSON, "is_success");
    if (cJSON_IsNull(is_success)) {
        is_success = NULL;
    }
    if (is_success) { 
    if(!cJSON_IsString(is_success) && !cJSON_IsNull(is_success))
    {
    goto end; //String
    }
    }


    domain_all_info_local_var = domain_all_info_create_internal (
        _ops_version && !cJSON_IsNull(_ops_version) ? strdup(_ops_version->valuestring) : NULL,
        attributes ? attributes_local_nonprim : NULL,
        object && !cJSON_IsNull(object) ? strdup(object->valuestring) : NULL,
        protocol && !cJSON_IsNull(protocol) ? strdup(protocol->valuestring) : NULL,
        response_text && !cJSON_IsNull(response_text) ? strdup(response_text->valuestring) : NULL,
        response_code && !cJSON_IsNull(response_code) ? strdup(response_code->valuestring) : NULL,
        action && !cJSON_IsNull(action) ? strdup(action->valuestring) : NULL,
        is_success && !cJSON_IsNull(is_success) ? strdup(is_success->valuestring) : NULL
        );

    return domain_all_info_local_var;
end:
    if (attributes_local_nonprim) {
        domain_all_info_attributes_free(attributes_local_nonprim);
        attributes_local_nonprim = NULL;
    }
    return NULL;

}
