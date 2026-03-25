#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_lookup_response.h"



static domain_lookup_response_t *domain_lookup_response_create_internal(
    int *available,
    int *premium,
    int *website,
    int *domain_service,
    object_t *service,
    int *whois_privacy,
    char *_new,
    char *renewal,
    char *transfer,
    object_t *fields,
    object_t *currencies
    ) {
    domain_lookup_response_t *domain_lookup_response_local_var = malloc(sizeof(domain_lookup_response_t));
    if (!domain_lookup_response_local_var) {
        return NULL;
    }
    memset(domain_lookup_response_local_var, 0, sizeof(domain_lookup_response_t));
    domain_lookup_response_local_var->_library_owned = 1;
    domain_lookup_response_local_var->available = available;
    domain_lookup_response_local_var->premium = premium;
    domain_lookup_response_local_var->website = website;
    domain_lookup_response_local_var->domain_service = domain_service;
    domain_lookup_response_local_var->service = service;
    domain_lookup_response_local_var->whois_privacy = whois_privacy;
    domain_lookup_response_local_var->_new = _new;
    domain_lookup_response_local_var->renewal = renewal;
    domain_lookup_response_local_var->transfer = transfer;
    domain_lookup_response_local_var->fields = fields;
    domain_lookup_response_local_var->currencies = currencies;
    return domain_lookup_response_local_var;
}

__attribute__((deprecated)) domain_lookup_response_t *domain_lookup_response_create(
    int *available,
    int *premium,
    int *website,
    int *domain_service,
    object_t *service,
    int *whois_privacy,
    char *_new,
    char *renewal,
    char *transfer,
    object_t *fields,
    object_t *currencies
    ) {
    int *available_copy = NULL;
    if (available) {
        available_copy = malloc(sizeof(int));
        if (available_copy) *available_copy = *available;
    }
    int *premium_copy = NULL;
    if (premium) {
        premium_copy = malloc(sizeof(int));
        if (premium_copy) *premium_copy = *premium;
    }
    int *website_copy = NULL;
    if (website) {
        website_copy = malloc(sizeof(int));
        if (website_copy) *website_copy = *website;
    }
    int *domain_service_copy = NULL;
    if (domain_service) {
        domain_service_copy = malloc(sizeof(int));
        if (domain_service_copy) *domain_service_copy = *domain_service;
    }
    int *whois_privacy_copy = NULL;
    if (whois_privacy) {
        whois_privacy_copy = malloc(sizeof(int));
        if (whois_privacy_copy) *whois_privacy_copy = *whois_privacy;
    }
    domain_lookup_response_t *result = domain_lookup_response_create_internal (
        available_copy,
        premium_copy,
        website_copy,
        domain_service_copy,
        service,
        whois_privacy_copy,
        _new,
        renewal,
        transfer,
        fields,
        currencies
        );
    if (!result) {
        free(available_copy);
        free(premium_copy);
        free(website_copy);
        free(domain_service_copy);
        free(whois_privacy_copy);
    }
    return result;
}

void domain_lookup_response_free(domain_lookup_response_t *domain_lookup_response) {
    if(NULL == domain_lookup_response){
        return ;
    }
    if(domain_lookup_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_lookup_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (domain_lookup_response->available) {
        free(domain_lookup_response->available);
        domain_lookup_response->available = NULL;
    }
    if (domain_lookup_response->premium) {
        free(domain_lookup_response->premium);
        domain_lookup_response->premium = NULL;
    }
    if (domain_lookup_response->website) {
        free(domain_lookup_response->website);
        domain_lookup_response->website = NULL;
    }
    if (domain_lookup_response->domain_service) {
        free(domain_lookup_response->domain_service);
        domain_lookup_response->domain_service = NULL;
    }
    if (domain_lookup_response->service) {
        object_free(domain_lookup_response->service);
        domain_lookup_response->service = NULL;
    }
    if (domain_lookup_response->whois_privacy) {
        free(domain_lookup_response->whois_privacy);
        domain_lookup_response->whois_privacy = NULL;
    }
    if (domain_lookup_response->_new) {
        free(domain_lookup_response->_new);
        domain_lookup_response->_new = NULL;
    }
    if (domain_lookup_response->renewal) {
        free(domain_lookup_response->renewal);
        domain_lookup_response->renewal = NULL;
    }
    if (domain_lookup_response->transfer) {
        free(domain_lookup_response->transfer);
        domain_lookup_response->transfer = NULL;
    }
    if (domain_lookup_response->fields) {
        object_free(domain_lookup_response->fields);
        domain_lookup_response->fields = NULL;
    }
    if (domain_lookup_response->currencies) {
        object_free(domain_lookup_response->currencies);
        domain_lookup_response->currencies = NULL;
    }
    free(domain_lookup_response);
}

cJSON *domain_lookup_response_convertToJSON(domain_lookup_response_t *domain_lookup_response) {
    cJSON *item = cJSON_CreateObject();

    // domain_lookup_response->available
    if(domain_lookup_response->available) {
    if(cJSON_AddBoolToObject(item, "available", *domain_lookup_response->available) == NULL) {
    goto fail; //Bool
    }
    }


    // domain_lookup_response->premium
    if(domain_lookup_response->premium) {
    if(cJSON_AddBoolToObject(item, "premium", *domain_lookup_response->premium) == NULL) {
    goto fail; //Bool
    }
    }


    // domain_lookup_response->website
    if(domain_lookup_response->website) {
    if(cJSON_AddBoolToObject(item, "website", *domain_lookup_response->website) == NULL) {
    goto fail; //Bool
    }
    }


    // domain_lookup_response->domain_service
    if(domain_lookup_response->domain_service) {
    if(cJSON_AddBoolToObject(item, "domain_service", *domain_lookup_response->domain_service) == NULL) {
    goto fail; //Bool
    }
    }


    // domain_lookup_response->service
    if(domain_lookup_response->service) {
    cJSON *service_object = object_convertToJSON(domain_lookup_response->service);
    if(service_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "service", service_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // domain_lookup_response->whois_privacy
    if(domain_lookup_response->whois_privacy) {
    if(cJSON_AddBoolToObject(item, "whois_privacy", *domain_lookup_response->whois_privacy) == NULL) {
    goto fail; //Bool
    }
    }


    // domain_lookup_response->_new
    if(domain_lookup_response->_new) {
    if(cJSON_AddStringToObject(item, "new", domain_lookup_response->_new) == NULL) {
    goto fail; //String
    }
    }


    // domain_lookup_response->renewal
    if(domain_lookup_response->renewal) {
    if(cJSON_AddStringToObject(item, "renewal", domain_lookup_response->renewal) == NULL) {
    goto fail; //String
    }
    }


    // domain_lookup_response->transfer
    if(domain_lookup_response->transfer) {
    if(cJSON_AddStringToObject(item, "transfer", domain_lookup_response->transfer) == NULL) {
    goto fail; //String
    }
    }


    // domain_lookup_response->fields
    if(domain_lookup_response->fields) {
    cJSON *fields_object = object_convertToJSON(domain_lookup_response->fields);
    if(fields_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "fields", fields_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // domain_lookup_response->currencies
    if(domain_lookup_response->currencies) {
    cJSON *currencies_object = object_convertToJSON(domain_lookup_response->currencies);
    if(currencies_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "currencies", currencies_object);
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

domain_lookup_response_t *domain_lookup_response_parseFromJSON(cJSON *domain_lookup_responseJSON){

    domain_lookup_response_t *domain_lookup_response_local_var = NULL;

    // define the local variable for domain_lookup_response->available
    int *available_local_var = NULL;

    // define the local variable for domain_lookup_response->premium
    int *premium_local_var = NULL;

    // define the local variable for domain_lookup_response->website
    int *website_local_var = NULL;

    // define the local variable for domain_lookup_response->domain_service
    int *domain_service_local_var = NULL;

    // define the local variable for domain_lookup_response->whois_privacy
    int *whois_privacy_local_var = NULL;

    char *_new_local_str = NULL;

    char *renewal_local_str = NULL;

    char *transfer_local_str = NULL;

    // domain_lookup_response->available
    cJSON *available = cJSON_GetObjectItemCaseSensitive(domain_lookup_responseJSON, "available");
    if (cJSON_IsNull(available)) {
        available = NULL;
    }
    if (available) { 
    if(!cJSON_IsBool(available))
    {
    goto end; //Bool
    }
    available_local_var = malloc(sizeof(int));
    if(!available_local_var)
    {
        goto end;
    }
    *available_local_var = available->valueint;
    }

    // domain_lookup_response->premium
    cJSON *premium = cJSON_GetObjectItemCaseSensitive(domain_lookup_responseJSON, "premium");
    if (cJSON_IsNull(premium)) {
        premium = NULL;
    }
    if (premium) { 
    if(!cJSON_IsBool(premium))
    {
    goto end; //Bool
    }
    premium_local_var = malloc(sizeof(int));
    if(!premium_local_var)
    {
        goto end;
    }
    *premium_local_var = premium->valueint;
    }

    // domain_lookup_response->website
    cJSON *website = cJSON_GetObjectItemCaseSensitive(domain_lookup_responseJSON, "website");
    if (cJSON_IsNull(website)) {
        website = NULL;
    }
    if (website) { 
    if(!cJSON_IsBool(website))
    {
    goto end; //Bool
    }
    website_local_var = malloc(sizeof(int));
    if(!website_local_var)
    {
        goto end;
    }
    *website_local_var = website->valueint;
    }

    // domain_lookup_response->domain_service
    cJSON *domain_service = cJSON_GetObjectItemCaseSensitive(domain_lookup_responseJSON, "domain_service");
    if (cJSON_IsNull(domain_service)) {
        domain_service = NULL;
    }
    if (domain_service) { 
    if(!cJSON_IsBool(domain_service))
    {
    goto end; //Bool
    }
    domain_service_local_var = malloc(sizeof(int));
    if(!domain_service_local_var)
    {
        goto end;
    }
    *domain_service_local_var = domain_service->valueint;
    }

    // domain_lookup_response->service
    cJSON *service = cJSON_GetObjectItemCaseSensitive(domain_lookup_responseJSON, "service");
    if (cJSON_IsNull(service)) {
        service = NULL;
    }
    object_t *service_local_object = NULL;
    if (service) { 
    service_local_object = object_parseFromJSON(service); //object
    }

    // domain_lookup_response->whois_privacy
    cJSON *whois_privacy = cJSON_GetObjectItemCaseSensitive(domain_lookup_responseJSON, "whois_privacy");
    if (cJSON_IsNull(whois_privacy)) {
        whois_privacy = NULL;
    }
    if (whois_privacy) { 
    if(!cJSON_IsBool(whois_privacy))
    {
    goto end; //Bool
    }
    whois_privacy_local_var = malloc(sizeof(int));
    if(!whois_privacy_local_var)
    {
        goto end;
    }
    *whois_privacy_local_var = whois_privacy->valueint;
    }

    // domain_lookup_response->_new
    cJSON *_new = cJSON_GetObjectItemCaseSensitive(domain_lookup_responseJSON, "new");
    if (cJSON_IsNull(_new)) {
        _new = NULL;
    }
    if (_new) { 
    if(!cJSON_IsString(_new) && !cJSON_IsNull(_new))
    {
    goto end; //String
    }
    }

    // domain_lookup_response->renewal
    cJSON *renewal = cJSON_GetObjectItemCaseSensitive(domain_lookup_responseJSON, "renewal");
    if (cJSON_IsNull(renewal)) {
        renewal = NULL;
    }
    if (renewal) { 
    if(!cJSON_IsString(renewal) && !cJSON_IsNull(renewal))
    {
    goto end; //String
    }
    }

    // domain_lookup_response->transfer
    cJSON *transfer = cJSON_GetObjectItemCaseSensitive(domain_lookup_responseJSON, "transfer");
    if (cJSON_IsNull(transfer)) {
        transfer = NULL;
    }
    if (transfer) { 
    if(!cJSON_IsString(transfer) && !cJSON_IsNull(transfer))
    {
    goto end; //String
    }
    }

    // domain_lookup_response->fields
    cJSON *fields = cJSON_GetObjectItemCaseSensitive(domain_lookup_responseJSON, "fields");
    if (cJSON_IsNull(fields)) {
        fields = NULL;
    }
    object_t *fields_local_object = NULL;
    if (fields) { 
    fields_local_object = object_parseFromJSON(fields); //object
    }

    // domain_lookup_response->currencies
    cJSON *currencies = cJSON_GetObjectItemCaseSensitive(domain_lookup_responseJSON, "currencies");
    if (cJSON_IsNull(currencies)) {
        currencies = NULL;
    }
    object_t *currencies_local_object = NULL;
    if (currencies) { 
    currencies_local_object = object_parseFromJSON(currencies); //object
    }


    if (_new && !cJSON_IsNull(_new)) _new_local_str = strdup(_new->valuestring);
    if (renewal && !cJSON_IsNull(renewal)) renewal_local_str = strdup(renewal->valuestring);
    if (transfer && !cJSON_IsNull(transfer)) transfer_local_str = strdup(transfer->valuestring);

    domain_lookup_response_local_var = domain_lookup_response_create_internal (
        available_local_var,
        premium_local_var,
        website_local_var,
        domain_service_local_var,
        service ? service_local_object : NULL,
        whois_privacy_local_var,
        _new_local_str,
        renewal_local_str,
        transfer_local_str,
        fields ? fields_local_object : NULL,
        currencies ? currencies_local_object : NULL
        );

    if (!domain_lookup_response_local_var) {
        goto end;
    }

    return domain_lookup_response_local_var;
end:
    if (available_local_var) {
        free(available_local_var);
        available_local_var = NULL;
    }
    if (premium_local_var) {
        free(premium_local_var);
        premium_local_var = NULL;
    }
    if (website_local_var) {
        free(website_local_var);
        website_local_var = NULL;
    }
    if (domain_service_local_var) {
        free(domain_service_local_var);
        domain_service_local_var = NULL;
    }
    if (whois_privacy_local_var) {
        free(whois_privacy_local_var);
        whois_privacy_local_var = NULL;
    }
    if (_new_local_str) {
        free(_new_local_str);
        _new_local_str = NULL;
    }
    if (renewal_local_str) {
        free(renewal_local_str);
        renewal_local_str = NULL;
    }
    if (transfer_local_str) {
        free(transfer_local_str);
        transfer_local_str = NULL;
    }
    return NULL;

}
