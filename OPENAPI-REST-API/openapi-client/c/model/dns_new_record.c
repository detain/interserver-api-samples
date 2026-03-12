#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dns_new_record.h"



static dns_new_record_t *dns_new_record_create_internal(
    char *name,
    interserver_management_api_dns_record_type__e type,
    char *content,
    int ttl,
    int prio
    ) {
    dns_new_record_t *dns_new_record_local_var = malloc(sizeof(dns_new_record_t));
    if (!dns_new_record_local_var) {
        return NULL;
    }
    dns_new_record_local_var->name = name;
    dns_new_record_local_var->type = type;
    dns_new_record_local_var->content = content;
    dns_new_record_local_var->ttl = ttl;
    dns_new_record_local_var->prio = prio;

    dns_new_record_local_var->_library_owned = 1;
    return dns_new_record_local_var;
}

__attribute__((deprecated)) dns_new_record_t *dns_new_record_create(
    char *name,
    interserver_management_api_dns_record_type__e type,
    char *content,
    int ttl,
    int prio
    ) {
    return dns_new_record_create_internal (
        name,
        type,
        content,
        ttl,
        prio
        );
}

void dns_new_record_free(dns_new_record_t *dns_new_record) {
    if(NULL == dns_new_record){
        return ;
    }
    if(dns_new_record->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "dns_new_record_free");
        return ;
    }
    listEntry_t *listEntry;
    if (dns_new_record->name) {
        free(dns_new_record->name);
        dns_new_record->name = NULL;
    }
    if (dns_new_record->content) {
        free(dns_new_record->content);
        dns_new_record->content = NULL;
    }
    free(dns_new_record);
}

cJSON *dns_new_record_convertToJSON(dns_new_record_t *dns_new_record) {
    cJSON *item = cJSON_CreateObject();

    // dns_new_record->name
    if (!dns_new_record->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", dns_new_record->name) == NULL) {
    goto fail; //String
    }


    // dns_new_record->type
    if (interserver_management_api_dns_record_type__NULL == dns_new_record->type) {
        goto fail;
    }
    cJSON *type_local_JSON = dns_record_type_convertToJSON(dns_new_record->type);
    if(type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "type", type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // dns_new_record->content
    if (!dns_new_record->content) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "content", dns_new_record->content) == NULL) {
    goto fail; //String
    }


    // dns_new_record->ttl
    if(dns_new_record->ttl) {
    if(cJSON_AddNumberToObject(item, "ttl", dns_new_record->ttl) == NULL) {
    goto fail; //Numeric
    }
    }


    // dns_new_record->prio
    if(dns_new_record->prio) {
    if(cJSON_AddNumberToObject(item, "prio", dns_new_record->prio) == NULL) {
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

dns_new_record_t *dns_new_record_parseFromJSON(cJSON *dns_new_recordJSON){

    dns_new_record_t *dns_new_record_local_var = NULL;

    // define the local variable for dns_new_record->type
    interserver_management_api_dns_record_type__e type_local_nonprim = 0;

    // dns_new_record->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(dns_new_recordJSON, "name");
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

    // dns_new_record->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(dns_new_recordJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (!type) {
        goto end;
    }

    
    type_local_nonprim = dns_record_type_parseFromJSON(type); //custom

    // dns_new_record->content
    cJSON *content = cJSON_GetObjectItemCaseSensitive(dns_new_recordJSON, "content");
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

    // dns_new_record->ttl
    cJSON *ttl = cJSON_GetObjectItemCaseSensitive(dns_new_recordJSON, "ttl");
    if (cJSON_IsNull(ttl)) {
        ttl = NULL;
    }
    if (ttl) { 
    if(!cJSON_IsNumber(ttl))
    {
    goto end; //Numeric
    }
    }

    // dns_new_record->prio
    cJSON *prio = cJSON_GetObjectItemCaseSensitive(dns_new_recordJSON, "prio");
    if (cJSON_IsNull(prio)) {
        prio = NULL;
    }
    if (prio) { 
    if(!cJSON_IsNumber(prio))
    {
    goto end; //Numeric
    }
    }


    dns_new_record_local_var = dns_new_record_create_internal (
        strdup(name->valuestring),
        type_local_nonprim,
        strdup(content->valuestring),
        ttl ? ttl->valuedouble : 0,
        prio ? prio->valuedouble : 0
        );

    return dns_new_record_local_var;
end:
    if (type_local_nonprim) {
        type_local_nonprim = 0;
    }
    return NULL;

}
