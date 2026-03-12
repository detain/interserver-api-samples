#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dns_new_domain.h"



static dns_new_domain_t *dns_new_domain_create_internal(
    char *domain,
    char *ip
    ) {
    dns_new_domain_t *dns_new_domain_local_var = malloc(sizeof(dns_new_domain_t));
    if (!dns_new_domain_local_var) {
        return NULL;
    }
    dns_new_domain_local_var->domain = domain;
    dns_new_domain_local_var->ip = ip;

    dns_new_domain_local_var->_library_owned = 1;
    return dns_new_domain_local_var;
}

__attribute__((deprecated)) dns_new_domain_t *dns_new_domain_create(
    char *domain,
    char *ip
    ) {
    return dns_new_domain_create_internal (
        domain,
        ip
        );
}

void dns_new_domain_free(dns_new_domain_t *dns_new_domain) {
    if(NULL == dns_new_domain){
        return ;
    }
    if(dns_new_domain->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "dns_new_domain_free");
        return ;
    }
    listEntry_t *listEntry;
    if (dns_new_domain->domain) {
        free(dns_new_domain->domain);
        dns_new_domain->domain = NULL;
    }
    if (dns_new_domain->ip) {
        free(dns_new_domain->ip);
        dns_new_domain->ip = NULL;
    }
    free(dns_new_domain);
}

cJSON *dns_new_domain_convertToJSON(dns_new_domain_t *dns_new_domain) {
    cJSON *item = cJSON_CreateObject();

    // dns_new_domain->domain
    if (!dns_new_domain->domain) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "domain", dns_new_domain->domain) == NULL) {
    goto fail; //String
    }


    // dns_new_domain->ip
    if (!dns_new_domain->ip) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "ip", dns_new_domain->ip) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

dns_new_domain_t *dns_new_domain_parseFromJSON(cJSON *dns_new_domainJSON){

    dns_new_domain_t *dns_new_domain_local_var = NULL;

    // dns_new_domain->domain
    cJSON *domain = cJSON_GetObjectItemCaseSensitive(dns_new_domainJSON, "domain");
    if (cJSON_IsNull(domain)) {
        domain = NULL;
    }
    if (!domain) {
        goto end;
    }

    
    if(!cJSON_IsString(domain))
    {
    goto end; //String
    }

    // dns_new_domain->ip
    cJSON *ip = cJSON_GetObjectItemCaseSensitive(dns_new_domainJSON, "ip");
    if (cJSON_IsNull(ip)) {
        ip = NULL;
    }
    if (!ip) {
        goto end;
    }

    
    if(!cJSON_IsString(ip))
    {
    goto end; //String
    }


    dns_new_domain_local_var = dns_new_domain_create_internal (
        strdup(domain->valuestring),
        strdup(ip->valuestring)
        );

    return dns_new_domain_local_var;
end:
    return NULL;

}
