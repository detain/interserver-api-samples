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
    dns_update_record_local_var->name = name;
    dns_update_record_local_var->type = type;
    dns_update_record_local_var->content = content;
    dns_update_record_local_var->ttl = ttl;
    dns_update_record_local_var->prio = prio;
    dns_update_record_local_var->disabled = disabled;
    dns_update_record_local_var->ordername = ordername;
    dns_update_record_local_var->auth = auth;

    dns_update_record_local_var->_library_owned = 1;
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
    return dns_update_record_create_internal (
        name,
        type,
        content,
        ttl,
        prio,
        disabled,
        ordername,
        auth
        );
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

    // define the local variable for dns_update_record->type
    interserver_management_api_dns_record_type__e type_local_nonprim = 0;

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


    dns_update_record_local_var = dns_update_record_create_internal (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        type ? type_local_nonprim : 0,
        content && !cJSON_IsNull(content) ? strdup(content->valuestring) : NULL,
        ttl && !cJSON_IsNull(ttl) ? strdup(ttl->valuestring) : NULL,
        prio && !cJSON_IsNull(prio) ? strdup(prio->valuestring) : NULL,
        disabled && !cJSON_IsNull(disabled) ? strdup(disabled->valuestring) : NULL,
        ordername && !cJSON_IsNull(ordername) ? strdup(ordername->valuestring) : NULL,
        auth && !cJSON_IsNull(auth) ? strdup(auth->valuestring) : NULL
        );

    return dns_update_record_local_var;
end:
    if (type_local_nonprim) {
        type_local_nonprim = 0;
    }
    return NULL;

}
