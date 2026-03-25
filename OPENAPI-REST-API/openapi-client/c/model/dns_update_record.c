#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dns_update_record.h"



static dns_update_record_t *dns_update_record_create_internal(
    char *name,
    interserver_management_api_dns_record_type__e type,
    char *content,
    char *ttl,
    char *prio,
    char *disabled,
    char *ordername,
    char *auth
    ) {
    dns_update_record_t *dns_update_record_local_var = malloc(sizeof(dns_update_record_t));
    if (!dns_update_record_local_var) {
        return NULL;
    }
    memset(dns_update_record_local_var, 0, sizeof(dns_update_record_t));
    dns_update_record_local_var->_library_owned = 1;
    dns_update_record_local_var->name = name;
    dns_update_record_local_var->type = type;
    dns_update_record_local_var->content = content;
    dns_update_record_local_var->ttl = ttl;
    dns_update_record_local_var->prio = prio;
    dns_update_record_local_var->disabled = disabled;
    dns_update_record_local_var->ordername = ordername;
    dns_update_record_local_var->auth = auth;
    return dns_update_record_local_var;
}

__attribute__((deprecated)) dns_update_record_t *dns_update_record_create(
    char *name,
    interserver_management_api_dns_record_type__e type,
    char *content,
    char *ttl,
    char *prio,
    char *disabled,
    char *ordername,
    char *auth
    ) {
    dns_update_record_t *result = dns_update_record_create_internal (
        name,
        type,
        content,
        ttl,
        prio,
        disabled,
        ordername,
        auth
        );
    if (!result) {
    }
    return result;
}

void dns_update_record_free(dns_update_record_t *dns_update_record) {
    if(NULL == dns_update_record){
        return ;
    }
    if(dns_update_record->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "dns_update_record_free");
        return ;
    }
    listEntry_t *listEntry;
    if (dns_update_record->name) {
        free(dns_update_record->name);
        dns_update_record->name = NULL;
    }
    if (dns_update_record->content) {
        free(dns_update_record->content);
        dns_update_record->content = NULL;
    }
    if (dns_update_record->ttl) {
        free(dns_update_record->ttl);
        dns_update_record->ttl = NULL;
    }
    if (dns_update_record->prio) {
        free(dns_update_record->prio);
        dns_update_record->prio = NULL;
    }
    if (dns_update_record->disabled) {
        free(dns_update_record->disabled);
        dns_update_record->disabled = NULL;
    }
    if (dns_update_record->ordername) {
        free(dns_update_record->ordername);
        dns_update_record->ordername = NULL;
    }
    if (dns_update_record->auth) {
        free(dns_update_record->auth);
        dns_update_record->auth = NULL;
    }
    free(dns_update_record);
}

cJSON *dns_update_record_convertToJSON(dns_update_record_t *dns_update_record) {
    cJSON *item = cJSON_CreateObject();

    // dns_update_record->name
    if(dns_update_record->name) {
    if(cJSON_AddStringToObject(item, "name", dns_update_record->name) == NULL) {
    goto fail; //String
    }
    }


    // dns_update_record->type
    if(dns_update_record->type != interserver_management_api_dns_record_type__NULL) {
    cJSON *type_local_JSON = dns_record_type_convertToJSON(dns_update_record->type);
    if(type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "type", type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // dns_update_record->content
    if(dns_update_record->content) {
    if(cJSON_AddStringToObject(item, "content", dns_update_record->content) == NULL) {
    goto fail; //String
    }
    }


    // dns_update_record->ttl
    if(dns_update_record->ttl) {
    if(cJSON_AddStringToObject(item, "ttl", dns_update_record->ttl) == NULL) {
    goto fail; //String
    }
    }


    // dns_update_record->prio
    if(dns_update_record->prio) {
    if(cJSON_AddStringToObject(item, "prio", dns_update_record->prio) == NULL) {
    goto fail; //String
    }
    }


    // dns_update_record->disabled
    if(dns_update_record->disabled) {
    if(cJSON_AddStringToObject(item, "disabled", dns_update_record->disabled) == NULL) {
    goto fail; //String
    }
    }


    // dns_update_record->ordername
    if(dns_update_record->ordername) {
    if(cJSON_AddStringToObject(item, "ordername", dns_update_record->ordername) == NULL) {
    goto fail; //String
    }
    }


    // dns_update_record->auth
    if(dns_update_record->auth) {
    if(cJSON_AddStringToObject(item, "auth", dns_update_record->auth) == NULL) {
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

dns_update_record_t *dns_update_record_parseFromJSON(cJSON *dns_update_recordJSON){

    dns_update_record_t *dns_update_record_local_var = NULL;

    char *name_local_str = NULL;

    // define the local variable for dns_update_record->type
    interserver_management_api_dns_record_type__e type_local_nonprim = 0;

    char *content_local_str = NULL;

    char *ttl_local_str = NULL;

    char *prio_local_str = NULL;

    char *disabled_local_str = NULL;

    char *ordername_local_str = NULL;

    char *auth_local_str = NULL;

    // dns_update_record->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(dns_update_recordJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // dns_update_record->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(dns_update_recordJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    type_local_nonprim = dns_record_type_parseFromJSON(type); //custom
    }

    // dns_update_record->content
    cJSON *content = cJSON_GetObjectItemCaseSensitive(dns_update_recordJSON, "content");
    if (cJSON_IsNull(content)) {
        content = NULL;
    }
    if (content) { 
    if(!cJSON_IsString(content) && !cJSON_IsNull(content))
    {
    goto end; //String
    }
    }

    // dns_update_record->ttl
    cJSON *ttl = cJSON_GetObjectItemCaseSensitive(dns_update_recordJSON, "ttl");
    if (cJSON_IsNull(ttl)) {
        ttl = NULL;
    }
    if (ttl) { 
    if(!cJSON_IsString(ttl) && !cJSON_IsNull(ttl))
    {
    goto end; //String
    }
    }

    // dns_update_record->prio
    cJSON *prio = cJSON_GetObjectItemCaseSensitive(dns_update_recordJSON, "prio");
    if (cJSON_IsNull(prio)) {
        prio = NULL;
    }
    if (prio) { 
    if(!cJSON_IsString(prio) && !cJSON_IsNull(prio))
    {
    goto end; //String
    }
    }

    // dns_update_record->disabled
    cJSON *disabled = cJSON_GetObjectItemCaseSensitive(dns_update_recordJSON, "disabled");
    if (cJSON_IsNull(disabled)) {
        disabled = NULL;
    }
    if (disabled) { 
    if(!cJSON_IsString(disabled) && !cJSON_IsNull(disabled))
    {
    goto end; //String
    }
    }

    // dns_update_record->ordername
    cJSON *ordername = cJSON_GetObjectItemCaseSensitive(dns_update_recordJSON, "ordername");
    if (cJSON_IsNull(ordername)) {
        ordername = NULL;
    }
    if (ordername) { 
    if(!cJSON_IsString(ordername) && !cJSON_IsNull(ordername))
    {
    goto end; //String
    }
    }

    // dns_update_record->auth
    cJSON *auth = cJSON_GetObjectItemCaseSensitive(dns_update_recordJSON, "auth");
    if (cJSON_IsNull(auth)) {
        auth = NULL;
    }
    if (auth) { 
    if(!cJSON_IsString(auth) && !cJSON_IsNull(auth))
    {
    goto end; //String
    }
    }


    if (name && !cJSON_IsNull(name)) name_local_str = strdup(name->valuestring);
    if (content && !cJSON_IsNull(content)) content_local_str = strdup(content->valuestring);
    if (ttl && !cJSON_IsNull(ttl)) ttl_local_str = strdup(ttl->valuestring);
    if (prio && !cJSON_IsNull(prio)) prio_local_str = strdup(prio->valuestring);
    if (disabled && !cJSON_IsNull(disabled)) disabled_local_str = strdup(disabled->valuestring);
    if (ordername && !cJSON_IsNull(ordername)) ordername_local_str = strdup(ordername->valuestring);
    if (auth && !cJSON_IsNull(auth)) auth_local_str = strdup(auth->valuestring);

    dns_update_record_local_var = dns_update_record_create_internal (
        name_local_str,
        type ? type_local_nonprim : 0,
        content_local_str,
        ttl_local_str,
        prio_local_str,
        disabled_local_str,
        ordername_local_str,
        auth_local_str
        );

    if (!dns_update_record_local_var) {
        goto end;
    }

    return dns_update_record_local_var;
end:
    if (name_local_str) {
        free(name_local_str);
        name_local_str = NULL;
    }
    if (type_local_nonprim) {
        type_local_nonprim = 0;
    }
    if (content_local_str) {
        free(content_local_str);
        content_local_str = NULL;
    }
    if (ttl_local_str) {
        free(ttl_local_str);
        ttl_local_str = NULL;
    }
    if (prio_local_str) {
        free(prio_local_str);
        prio_local_str = NULL;
    }
    if (disabled_local_str) {
        free(disabled_local_str);
        disabled_local_str = NULL;
    }
    if (ordername_local_str) {
        free(ordername_local_str);
        ordername_local_str = NULL;
    }
    if (auth_local_str) {
        free(auth_local_str);
        auth_local_str = NULL;
    }
    return NULL;

}
