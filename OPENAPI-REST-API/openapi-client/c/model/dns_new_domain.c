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
    memset(dns_new_domain_local_var, 0, sizeof(dns_new_domain_t));
    dns_new_domain_local_var->_library_owned = 1;
    dns_new_domain_local_var->domain = domain;
    dns_new_domain_local_var->ip = ip;
    return dns_new_domain_local_var;
}

__attribute__((deprecated)) dns_new_domain_t *dns_new_domain_create(
    char *domain,
    char *ip
    ) {
    dns_new_domain_t *result = dns_new_domain_create_internal (
        domain,
        ip
        );
    if (!result) {
    }
    return result;
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

    char *domain_local_str = NULL;

    char *ip_local_str = NULL;

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


    if (domain && !cJSON_IsNull(domain)) domain_local_str = strdup(domain->valuestring);
    if (ip && !cJSON_IsNull(ip)) ip_local_str = strdup(ip->valuestring);

    dns_new_domain_local_var = dns_new_domain_create_internal (
        domain_local_str,
        ip_local_str
        );

    if (!dns_new_domain_local_var) {
        goto end;
    }

    return dns_new_domain_local_var;
end:
    if (domain_local_str) {
        free(domain_local_str);
        domain_local_str = NULL;
    }
    if (ip_local_str) {
        free(ip_local_str);
        ip_local_str = NULL;
    }
    return NULL;

}
