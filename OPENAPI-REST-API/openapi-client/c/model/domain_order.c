#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_order.h"



static domain_order_t *domain_order_create_internal(
    char *whois_privacy_cost,
    domain_order_services_t *services,
    object_t *tld_services
    ) {
    domain_order_t *domain_order_local_var = malloc(sizeof(domain_order_t));
    if (!domain_order_local_var) {
        return NULL;
    }
    memset(domain_order_local_var, 0, sizeof(domain_order_t));
    domain_order_local_var->_library_owned = 1;
    domain_order_local_var->whois_privacy_cost = whois_privacy_cost;
    domain_order_local_var->services = services;
    domain_order_local_var->tld_services = tld_services;
    return domain_order_local_var;
}

__attribute__((deprecated)) domain_order_t *domain_order_create(
    char *whois_privacy_cost,
    domain_order_services_t *services,
    object_t *tld_services
    ) {
    domain_order_t *result = domain_order_create_internal (
        whois_privacy_cost,
        services,
        tld_services
        );
    if (!result) {
    }
    return result;
}

void domain_order_free(domain_order_t *domain_order) {
    if(NULL == domain_order){
        return ;
    }
    if(domain_order->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_order_free");
        return ;
    }
    listEntry_t *listEntry;
    if (domain_order->whois_privacy_cost) {
        free(domain_order->whois_privacy_cost);
        domain_order->whois_privacy_cost = NULL;
    }
    if (domain_order->services) {
        domain_order_services_free(domain_order->services);
        domain_order->services = NULL;
    }
    if (domain_order->tld_services) {
        object_free(domain_order->tld_services);
        domain_order->tld_services = NULL;
    }
    free(domain_order);
}

cJSON *domain_order_convertToJSON(domain_order_t *domain_order) {
    cJSON *item = cJSON_CreateObject();

    // domain_order->whois_privacy_cost
    if(domain_order->whois_privacy_cost) {
    if(cJSON_AddStringToObject(item, "whoisPrivacyCost", domain_order->whois_privacy_cost) == NULL) {
    goto fail; //String
    }
    }


    // domain_order->services
    if(domain_order->services) {
    cJSON *services_local_JSON = domain_order_services_convertToJSON(domain_order->services);
    if(services_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "services", services_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // domain_order->tld_services
    if(domain_order->tld_services) {
    cJSON *tld_services_object = object_convertToJSON(domain_order->tld_services);
    if(tld_services_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "tldServices", tld_services_object);
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

domain_order_t *domain_order_parseFromJSON(cJSON *domain_orderJSON){

    domain_order_t *domain_order_local_var = NULL;

    char *whois_privacy_cost_local_str = NULL;

    // define the local variable for domain_order->services
    domain_order_services_t *services_local_nonprim = NULL;

    // domain_order->whois_privacy_cost
    cJSON *whois_privacy_cost = cJSON_GetObjectItemCaseSensitive(domain_orderJSON, "whoisPrivacyCost");
    if (cJSON_IsNull(whois_privacy_cost)) {
        whois_privacy_cost = NULL;
    }
    if (whois_privacy_cost) { 
    if(!cJSON_IsString(whois_privacy_cost) && !cJSON_IsNull(whois_privacy_cost))
    {
    goto end; //String
    }
    }

    // domain_order->services
    cJSON *services = cJSON_GetObjectItemCaseSensitive(domain_orderJSON, "services");
    if (cJSON_IsNull(services)) {
        services = NULL;
    }
    if (services) { 
    services_local_nonprim = domain_order_services_parseFromJSON(services); //nonprimitive
    }

    // domain_order->tld_services
    cJSON *tld_services = cJSON_GetObjectItemCaseSensitive(domain_orderJSON, "tldServices");
    if (cJSON_IsNull(tld_services)) {
        tld_services = NULL;
    }
    object_t *tld_services_local_object = NULL;
    if (tld_services) { 
    tld_services_local_object = object_parseFromJSON(tld_services); //object
    }


    if (whois_privacy_cost && !cJSON_IsNull(whois_privacy_cost)) whois_privacy_cost_local_str = strdup(whois_privacy_cost->valuestring);

    domain_order_local_var = domain_order_create_internal (
        whois_privacy_cost_local_str,
        services ? services_local_nonprim : NULL,
        tld_services ? tld_services_local_object : NULL
        );

    if (!domain_order_local_var) {
        goto end;
    }

    return domain_order_local_var;
end:
    if (whois_privacy_cost_local_str) {
        free(whois_privacy_cost_local_str);
        whois_privacy_cost_local_str = NULL;
    }
    if (services_local_nonprim) {
        domain_order_services_free(services_local_nonprim);
        services_local_nonprim = NULL;
    }
    return NULL;

}
