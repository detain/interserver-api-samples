#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dns_record.h"



static dns_record_t *dns_record_create_internal(
    char *id,
    char *domain_id,
    char *name,
    interserver_management_api_dns_record_type__e type,
    char *content,
    char *ttl,
    char *prio,
    char *disabled,
    char *ordername,
    char *auth
    ) {
    dns_record_t *dns_record_local_var = malloc(sizeof(dns_record_t));
    if (!dns_record_local_var) {
        return NULL;
    }
    memset(dns_record_local_var, 0, sizeof(dns_record_t));
    dns_record_local_var->_library_owned = 1;
    dns_record_local_var->id = id;
    dns_record_local_var->domain_id = domain_id;
    dns_record_local_var->name = name;
    dns_record_local_var->type = type;
    dns_record_local_var->content = content;
    dns_record_local_var->ttl = ttl;
    dns_record_local_var->prio = prio;
    dns_record_local_var->disabled = disabled;
    dns_record_local_var->ordername = ordername;
    dns_record_local_var->auth = auth;
    return dns_record_local_var;
}

__attribute__((deprecated)) dns_record_t *dns_record_create(
    char *id,
    char *domain_id,
    char *name,
    interserver_management_api_dns_record_type__e type,
    char *content,
    char *ttl,
    char *prio,
    char *disabled,
    char *ordername,
    char *auth
    ) {
    dns_record_t *result = dns_record_create_internal (
        id,
        domain_id,
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

void dns_record_free(dns_record_t *dns_record) {
    if(NULL == dns_record){
        return ;
    }
    if(dns_record->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "dns_record_free");
        return ;
    }
    listEntry_t *listEntry;
    if (dns_record->id) {
        free(dns_record->id);
        dns_record->id = NULL;
    }
    if (dns_record->domain_id) {
        free(dns_record->domain_id);
        dns_record->domain_id = NULL;
    }
    if (dns_record->name) {
        free(dns_record->name);
        dns_record->name = NULL;
    }
    if (dns_record->content) {
        free(dns_record->content);
        dns_record->content = NULL;
    }
    if (dns_record->ttl) {
        free(dns_record->ttl);
        dns_record->ttl = NULL;
    }
    if (dns_record->prio) {
        free(dns_record->prio);
        dns_record->prio = NULL;
    }
    if (dns_record->disabled) {
        free(dns_record->disabled);
        dns_record->disabled = NULL;
    }
    if (dns_record->ordername) {
        free(dns_record->ordername);
        dns_record->ordername = NULL;
    }
    if (dns_record->auth) {
        free(dns_record->auth);
        dns_record->auth = NULL;
    }
    free(dns_record);
}

cJSON *dns_record_convertToJSON(dns_record_t *dns_record) {
    cJSON *item = cJSON_CreateObject();

    // dns_record->id
    if (!dns_record->id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "id", dns_record->id) == NULL) {
    goto fail; //String
    }


    // dns_record->domain_id
    if (!dns_record->domain_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "domain_id", dns_record->domain_id) == NULL) {
    goto fail; //String
    }


    // dns_record->name
    if (!dns_record->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", dns_record->name) == NULL) {
    goto fail; //String
    }


    // dns_record->type
    if (interserver_management_api_dns_record_type__NULL == dns_record->type) {
        goto fail;
    }
    cJSON *type_local_JSON = dns_record_type_convertToJSON(dns_record->type);
    if(type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "type", type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // dns_record->content
    if (!dns_record->content) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "content", dns_record->content) == NULL) {
    goto fail; //String
    }


    // dns_record->ttl
    if (!dns_record->ttl) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "ttl", dns_record->ttl) == NULL) {
    goto fail; //String
    }


    // dns_record->prio
    if (!dns_record->prio) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "prio", dns_record->prio) == NULL) {
    goto fail; //String
    }


    // dns_record->disabled
    if (!dns_record->disabled) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "disabled", dns_record->disabled) == NULL) {
    goto fail; //String
    }


    // dns_record->ordername
    if (!dns_record->ordername) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "ordername", dns_record->ordername) == NULL) {
    goto fail; //String
    }


    // dns_record->auth
    if (!dns_record->auth) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "auth", dns_record->auth) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

dns_record_t *dns_record_parseFromJSON(cJSON *dns_recordJSON){

    dns_record_t *dns_record_local_var = NULL;

    char *id_local_str = NULL;

    char *domain_id_local_str = NULL;

    char *name_local_str = NULL;

    // define the local variable for dns_record->type
    interserver_management_api_dns_record_type__e type_local_nonprim = 0;

    char *content_local_str = NULL;

    char *ttl_local_str = NULL;

    char *prio_local_str = NULL;

    char *disabled_local_str = NULL;

    char *ordername_local_str = NULL;

    char *auth_local_str = NULL;

    // dns_record->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(dns_recordJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }

    // dns_record->domain_id
    cJSON *domain_id = cJSON_GetObjectItemCaseSensitive(dns_recordJSON, "domain_id");
    if (cJSON_IsNull(domain_id)) {
        domain_id = NULL;
    }
    if (!domain_id) {
        goto end;
    }

    
    if(!cJSON_IsString(domain_id))
    {
    goto end; //String
    }

    // dns_record->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(dns_recordJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // dns_record->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(dns_recordJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (!type) {
        goto end;
    }

    
    type_local_nonprim = dns_record_type_parseFromJSON(type); //custom

    // dns_record->content
    cJSON *content = cJSON_GetObjectItemCaseSensitive(dns_recordJSON, "content");
    if (cJSON_IsNull(content)) {
        content = NULL;
    }
    if (!content) {
        goto end;
    }

    
    if(!cJSON_IsString(content))
    {
    goto end; //String
    }

    // dns_record->ttl
    cJSON *ttl = cJSON_GetObjectItemCaseSensitive(dns_recordJSON, "ttl");
    if (cJSON_IsNull(ttl)) {
        ttl = NULL;
    }
    if (!ttl) {
        goto end;
    }

    
    if(!cJSON_IsString(ttl))
    {
    goto end; //String
    }

    // dns_record->prio
    cJSON *prio = cJSON_GetObjectItemCaseSensitive(dns_recordJSON, "prio");
    if (cJSON_IsNull(prio)) {
        prio = NULL;
    }
    if (!prio) {
        goto end;
    }

    
    if(!cJSON_IsString(prio))
    {
    goto end; //String
    }

    // dns_record->disabled
    cJSON *disabled = cJSON_GetObjectItemCaseSensitive(dns_recordJSON, "disabled");
    if (cJSON_IsNull(disabled)) {
        disabled = NULL;
    }
    if (!disabled) {
        goto end;
    }

    
    if(!cJSON_IsString(disabled))
    {
    goto end; //String
    }

    // dns_record->ordername
    cJSON *ordername = cJSON_GetObjectItemCaseSensitive(dns_recordJSON, "ordername");
    if (cJSON_IsNull(ordername)) {
        ordername = NULL;
    }
    if (!ordername) {
        goto end;
    }

    
    if(!cJSON_IsString(ordername))
    {
    goto end; //String
    }

    // dns_record->auth
    cJSON *auth = cJSON_GetObjectItemCaseSensitive(dns_recordJSON, "auth");
    if (cJSON_IsNull(auth)) {
        auth = NULL;
    }
    if (!auth) {
        goto end;
    }

    
    if(!cJSON_IsString(auth))
    {
    goto end; //String
    }


    if (id && !cJSON_IsNull(id)) id_local_str = strdup(id->valuestring);
    if (domain_id && !cJSON_IsNull(domain_id)) domain_id_local_str = strdup(domain_id->valuestring);
    if (name && !cJSON_IsNull(name)) name_local_str = strdup(name->valuestring);
    if (content && !cJSON_IsNull(content)) content_local_str = strdup(content->valuestring);
    if (ttl && !cJSON_IsNull(ttl)) ttl_local_str = strdup(ttl->valuestring);
    if (prio && !cJSON_IsNull(prio)) prio_local_str = strdup(prio->valuestring);
    if (disabled && !cJSON_IsNull(disabled)) disabled_local_str = strdup(disabled->valuestring);
    if (ordername && !cJSON_IsNull(ordername)) ordername_local_str = strdup(ordername->valuestring);
    if (auth && !cJSON_IsNull(auth)) auth_local_str = strdup(auth->valuestring);

    dns_record_local_var = dns_record_create_internal (
        id_local_str,
        domain_id_local_str,
        name_local_str,
        type_local_nonprim,
        content_local_str,
        ttl_local_str,
        prio_local_str,
        disabled_local_str,
        ordername_local_str,
        auth_local_str
        );

    if (!dns_record_local_var) {
        goto end;
    }

    return dns_record_local_var;
end:
    if (id_local_str) {
        free(id_local_str);
        id_local_str = NULL;
    }
    if (domain_id_local_str) {
        free(domain_id_local_str);
        domain_id_local_str = NULL;
    }
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
