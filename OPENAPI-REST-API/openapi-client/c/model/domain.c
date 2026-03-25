#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain.h"



static domain_t *domain_create_internal(
    domain_service_info_t *service_info,
    list_t* service_types,
    list_t *client_links,
    domain_billing_details_t *billing_details,
    char *cust_currency,
    char *cust_currency_symbol,
    domain_billing_extra_t *service_extra,
    backup_extra_info_tables_t *extra_info_tables,
    domain_service_type_t *service_type,
    domain_contact_details_t *contact_details,
    char *pwarning,
    char *transfer_info,
    int *errors,
    list_t *domain_logs,
    domain_all_info_t *all_info,
    char *registrar_status,
    char *locked,
    char *whois_privacy,
    char *auto_renew
    ) {
    domain_t *domain_local_var = malloc(sizeof(domain_t));
    if (!domain_local_var) {
        return NULL;
    }
    memset(domain_local_var, 0, sizeof(domain_t));
    domain_local_var->_library_owned = 1;
    domain_local_var->service_info = service_info;
    domain_local_var->service_types = service_types;
    domain_local_var->client_links = client_links;
    domain_local_var->billing_details = billing_details;
    domain_local_var->cust_currency = cust_currency;
    domain_local_var->cust_currency_symbol = cust_currency_symbol;
    domain_local_var->service_extra = service_extra;
    domain_local_var->extra_info_tables = extra_info_tables;
    domain_local_var->service_type = service_type;
    domain_local_var->contact_details = contact_details;
    domain_local_var->pwarning = pwarning;
    domain_local_var->transfer_info = transfer_info;
    domain_local_var->errors = errors;
    domain_local_var->domain_logs = domain_logs;
    domain_local_var->all_info = all_info;
    domain_local_var->registrar_status = registrar_status;
    domain_local_var->locked = locked;
    domain_local_var->whois_privacy = whois_privacy;
    domain_local_var->auto_renew = auto_renew;
    return domain_local_var;
}

__attribute__((deprecated)) domain_t *domain_create(
    domain_service_info_t *service_info,
    list_t* service_types,
    list_t *client_links,
    domain_billing_details_t *billing_details,
    char *cust_currency,
    char *cust_currency_symbol,
    domain_billing_extra_t *service_extra,
    backup_extra_info_tables_t *extra_info_tables,
    domain_service_type_t *service_type,
    domain_contact_details_t *contact_details,
    char *pwarning,
    char *transfer_info,
    int *errors,
    list_t *domain_logs,
    domain_all_info_t *all_info,
    char *registrar_status,
    char *locked,
    char *whois_privacy,
    char *auto_renew
    ) {
    int *errors_copy = NULL;
    if (errors) {
        errors_copy = malloc(sizeof(int));
        if (errors_copy) *errors_copy = *errors;
    }
    domain_t *result = domain_create_internal (
        service_info,
        service_types,
        client_links,
        billing_details,
        cust_currency,
        cust_currency_symbol,
        service_extra,
        extra_info_tables,
        service_type,
        contact_details,
        pwarning,
        transfer_info,
        errors_copy,
        domain_logs,
        all_info,
        registrar_status,
        locked,
        whois_privacy,
        auto_renew
        );
    if (!result) {
        free(errors_copy);
    }
    return result;
}

void domain_free(domain_t *domain) {
    if(NULL == domain){
        return ;
    }
    if(domain->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_free");
        return ;
    }
    listEntry_t *listEntry;
    if (domain->service_info) {
        domain_service_info_free(domain->service_info);
        domain->service_info = NULL;
    }
    if (domain->service_types) {
        list_ForEach(listEntry, domain->service_types) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(domain->service_types);
        domain->service_types = NULL;
    }
    if (domain->client_links) {
        list_ForEach(listEntry, domain->client_links) {
            domain_client_link_free(listEntry->data);
        }
        list_freeList(domain->client_links);
        domain->client_links = NULL;
    }
    if (domain->billing_details) {
        domain_billing_details_free(domain->billing_details);
        domain->billing_details = NULL;
    }
    if (domain->cust_currency) {
        free(domain->cust_currency);
        domain->cust_currency = NULL;
    }
    if (domain->cust_currency_symbol) {
        free(domain->cust_currency_symbol);
        domain->cust_currency_symbol = NULL;
    }
    if (domain->service_extra) {
        domain_billing_extra_free(domain->service_extra);
        domain->service_extra = NULL;
    }
    if (domain->extra_info_tables) {
        backup_extra_info_tables_free(domain->extra_info_tables);
        domain->extra_info_tables = NULL;
    }
    if (domain->service_type) {
        domain_service_type_free(domain->service_type);
        domain->service_type = NULL;
    }
    if (domain->contact_details) {
        domain_contact_details_free(domain->contact_details);
        domain->contact_details = NULL;
    }
    if (domain->pwarning) {
        free(domain->pwarning);
        domain->pwarning = NULL;
    }
    if (domain->transfer_info) {
        free(domain->transfer_info);
        domain->transfer_info = NULL;
    }
    if (domain->errors) {
        free(domain->errors);
        domain->errors = NULL;
    }
    if (domain->domain_logs) {
        list_ForEach(listEntry, domain->domain_logs) {
            free(listEntry->data);
        }
        list_freeList(domain->domain_logs);
        domain->domain_logs = NULL;
    }
    if (domain->all_info) {
        domain_all_info_free(domain->all_info);
        domain->all_info = NULL;
    }
    if (domain->registrar_status) {
        free(domain->registrar_status);
        domain->registrar_status = NULL;
    }
    if (domain->locked) {
        free(domain->locked);
        domain->locked = NULL;
    }
    if (domain->whois_privacy) {
        free(domain->whois_privacy);
        domain->whois_privacy = NULL;
    }
    if (domain->auto_renew) {
        free(domain->auto_renew);
        domain->auto_renew = NULL;
    }
    free(domain);
}

cJSON *domain_convertToJSON(domain_t *domain) {
    cJSON *item = cJSON_CreateObject();

    // domain->service_info
    if(domain->service_info) {
    cJSON *service_info_local_JSON = domain_service_info_convertToJSON(domain->service_info);
    if(service_info_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "serviceInfo", service_info_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // domain->service_types
    if(domain->service_types) {
    cJSON *service_types = cJSON_AddObjectToObject(item, "serviceTypes");
    if(service_types == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = service_types;
    listEntry_t *service_typesListEntry;
    if (domain->service_types) {
    list_ForEach(service_typesListEntry, domain->service_types) {
        keyValuePair_t *localKeyValue = service_typesListEntry->data;
    }
    }
    }


    // domain->client_links
    if(domain->client_links) {
    cJSON *client_links = cJSON_AddArrayToObject(item, "client_links");
    if(client_links == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *client_linksListEntry;
    if (domain->client_links) {
    list_ForEach(client_linksListEntry, domain->client_links) {
    cJSON *itemLocal = domain_client_link_convertToJSON(client_linksListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(client_links, itemLocal);
    }
    }
    }


    // domain->billing_details
    if(domain->billing_details) {
    cJSON *billing_details_local_JSON = domain_billing_details_convertToJSON(domain->billing_details);
    if(billing_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "billingDetails", billing_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // domain->cust_currency
    if(domain->cust_currency) {
    if(cJSON_AddStringToObject(item, "custCurrency", domain->cust_currency) == NULL) {
    goto fail; //String
    }
    }


    // domain->cust_currency_symbol
    if(domain->cust_currency_symbol) {
    if(cJSON_AddStringToObject(item, "custCurrencySymbol", domain->cust_currency_symbol) == NULL) {
    goto fail; //String
    }
    }


    // domain->service_extra
    if(domain->service_extra) {
    cJSON *service_extra_local_JSON = domain_billing_extra_convertToJSON(domain->service_extra);
    if(service_extra_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "serviceExtra", service_extra_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // domain->extra_info_tables
    if(domain->extra_info_tables) {
    cJSON *extra_info_tables_local_JSON = backup_extra_info_tables_convertToJSON(domain->extra_info_tables);
    if(extra_info_tables_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "extraInfoTables", extra_info_tables_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // domain->service_type
    if(domain->service_type) {
    cJSON *service_type_local_JSON = domain_service_type_convertToJSON(domain->service_type);
    if(service_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "serviceType", service_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // domain->contact_details
    if(domain->contact_details) {
    cJSON *contact_details_local_JSON = domain_contact_details_convertToJSON(domain->contact_details);
    if(contact_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "contact_details", contact_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // domain->pwarning
    if(domain->pwarning) {
    if(cJSON_AddStringToObject(item, "pwarning", domain->pwarning) == NULL) {
    goto fail; //String
    }
    }


    // domain->transfer_info
    if(domain->transfer_info) {
    if(cJSON_AddStringToObject(item, "transfer_info", domain->transfer_info) == NULL) {
    goto fail; //String
    }
    }


    // domain->errors
    if(domain->errors) {
    if(cJSON_AddBoolToObject(item, "errors", *domain->errors) == NULL) {
    goto fail; //Bool
    }
    }


    // domain->domain_logs
    if(domain->domain_logs) {
    cJSON *domain_logs = cJSON_AddArrayToObject(item, "domain_logs");
    if(domain_logs == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *domain_logsListEntry;
    list_ForEach(domain_logsListEntry, domain->domain_logs) {
    if(cJSON_AddStringToObject(domain_logs, "", domain_logsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // domain->all_info
    if(domain->all_info) {
    cJSON *all_info_local_JSON = domain_all_info_convertToJSON(domain->all_info);
    if(all_info_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "allInfo", all_info_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // domain->registrar_status
    if(domain->registrar_status) {
    if(cJSON_AddStringToObject(item, "registrarStatus", domain->registrar_status) == NULL) {
    goto fail; //String
    }
    }


    // domain->locked
    if(domain->locked) {
    if(cJSON_AddStringToObject(item, "locked", domain->locked) == NULL) {
    goto fail; //String
    }
    }


    // domain->whois_privacy
    if(domain->whois_privacy) {
    if(cJSON_AddStringToObject(item, "whoisPrivacy", domain->whois_privacy) == NULL) {
    goto fail; //String
    }
    }


    // domain->auto_renew
    if(domain->auto_renew) {
    if(cJSON_AddStringToObject(item, "autoRenew", domain->auto_renew) == NULL) {
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

domain_t *domain_parseFromJSON(cJSON *domainJSON){

    domain_t *domain_local_var = NULL;

    // define the local variable for domain->service_info
    domain_service_info_t *service_info_local_nonprim = NULL;

    // define the local map for domain->service_types
    list_t *service_typesList = NULL;

    // define the local list for domain->client_links
    list_t *client_linksList = NULL;

    // define the local variable for domain->billing_details
    domain_billing_details_t *billing_details_local_nonprim = NULL;

    char *cust_currency_local_str = NULL;

    char *cust_currency_symbol_local_str = NULL;

    // define the local variable for domain->service_extra
    domain_billing_extra_t *service_extra_local_nonprim = NULL;

    // define the local variable for domain->extra_info_tables
    backup_extra_info_tables_t *extra_info_tables_local_nonprim = NULL;

    // define the local variable for domain->service_type
    domain_service_type_t *service_type_local_nonprim = NULL;

    // define the local variable for domain->contact_details
    domain_contact_details_t *contact_details_local_nonprim = NULL;

    char *pwarning_local_str = NULL;

    char *transfer_info_local_str = NULL;

    // define the local variable for domain->errors
    int *errors_local_var = NULL;

    // define the local list for domain->domain_logs
    list_t *domain_logsList = NULL;

    // define the local variable for domain->all_info
    domain_all_info_t *all_info_local_nonprim = NULL;

    char *registrar_status_local_str = NULL;

    char *locked_local_str = NULL;

    char *whois_privacy_local_str = NULL;

    char *auto_renew_local_str = NULL;

    // domain->service_info
    cJSON *service_info = cJSON_GetObjectItemCaseSensitive(domainJSON, "serviceInfo");
    if (cJSON_IsNull(service_info)) {
        service_info = NULL;
    }
    if (service_info) { 
    service_info_local_nonprim = domain_service_info_parseFromJSON(service_info); //nonprimitive
    }

    // domain->service_types
    cJSON *service_types = cJSON_GetObjectItemCaseSensitive(domainJSON, "serviceTypes");
    if (cJSON_IsNull(service_types)) {
        service_types = NULL;
    }
    if (service_types) { 

    // The data type of the elements in domain->service_types is currently not supported.

    }

    // domain->client_links
    cJSON *client_links = cJSON_GetObjectItemCaseSensitive(domainJSON, "client_links");
    if (cJSON_IsNull(client_links)) {
        client_links = NULL;
    }
    if (client_links) { 
    cJSON *client_links_local_nonprimitive = NULL;
    if(!cJSON_IsArray(client_links)){
        goto end; //nonprimitive container
    }

    client_linksList = list_createList();

    cJSON_ArrayForEach(client_links_local_nonprimitive,client_links )
    {
        if(!cJSON_IsObject(client_links_local_nonprimitive)){
            goto end;
        }
        domain_client_link_t *client_linksItem = domain_client_link_parseFromJSON(client_links_local_nonprimitive);

        list_addElement(client_linksList, client_linksItem);
    }
    }

    // domain->billing_details
    cJSON *billing_details = cJSON_GetObjectItemCaseSensitive(domainJSON, "billingDetails");
    if (cJSON_IsNull(billing_details)) {
        billing_details = NULL;
    }
    if (billing_details) { 
    billing_details_local_nonprim = domain_billing_details_parseFromJSON(billing_details); //nonprimitive
    }

    // domain->cust_currency
    cJSON *cust_currency = cJSON_GetObjectItemCaseSensitive(domainJSON, "custCurrency");
    if (cJSON_IsNull(cust_currency)) {
        cust_currency = NULL;
    }
    if (cust_currency) { 
    if(!cJSON_IsString(cust_currency) && !cJSON_IsNull(cust_currency))
    {
    goto end; //String
    }
    }

    // domain->cust_currency_symbol
    cJSON *cust_currency_symbol = cJSON_GetObjectItemCaseSensitive(domainJSON, "custCurrencySymbol");
    if (cJSON_IsNull(cust_currency_symbol)) {
        cust_currency_symbol = NULL;
    }
    if (cust_currency_symbol) { 
    if(!cJSON_IsString(cust_currency_symbol) && !cJSON_IsNull(cust_currency_symbol))
    {
    goto end; //String
    }
    }

    // domain->service_extra
    cJSON *service_extra = cJSON_GetObjectItemCaseSensitive(domainJSON, "serviceExtra");
    if (cJSON_IsNull(service_extra)) {
        service_extra = NULL;
    }
    if (service_extra) { 
    service_extra_local_nonprim = domain_billing_extra_parseFromJSON(service_extra); //nonprimitive
    }

    // domain->extra_info_tables
    cJSON *extra_info_tables = cJSON_GetObjectItemCaseSensitive(domainJSON, "extraInfoTables");
    if (cJSON_IsNull(extra_info_tables)) {
        extra_info_tables = NULL;
    }
    if (extra_info_tables) { 
    extra_info_tables_local_nonprim = backup_extra_info_tables_parseFromJSON(extra_info_tables); //nonprimitive
    }

    // domain->service_type
    cJSON *service_type = cJSON_GetObjectItemCaseSensitive(domainJSON, "serviceType");
    if (cJSON_IsNull(service_type)) {
        service_type = NULL;
    }
    if (service_type) { 
    service_type_local_nonprim = domain_service_type_parseFromJSON(service_type); //nonprimitive
    }

    // domain->contact_details
    cJSON *contact_details = cJSON_GetObjectItemCaseSensitive(domainJSON, "contact_details");
    if (cJSON_IsNull(contact_details)) {
        contact_details = NULL;
    }
    if (contact_details) { 
    contact_details_local_nonprim = domain_contact_details_parseFromJSON(contact_details); //nonprimitive
    }

    // domain->pwarning
    cJSON *pwarning = cJSON_GetObjectItemCaseSensitive(domainJSON, "pwarning");
    if (cJSON_IsNull(pwarning)) {
        pwarning = NULL;
    }
    if (pwarning) { 
    if(!cJSON_IsString(pwarning) && !cJSON_IsNull(pwarning))
    {
    goto end; //String
    }
    }

    // domain->transfer_info
    cJSON *transfer_info = cJSON_GetObjectItemCaseSensitive(domainJSON, "transfer_info");
    if (cJSON_IsNull(transfer_info)) {
        transfer_info = NULL;
    }
    if (transfer_info) { 
    if(!cJSON_IsString(transfer_info) && !cJSON_IsNull(transfer_info))
    {
    goto end; //String
    }
    }

    // domain->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(domainJSON, "errors");
    if (cJSON_IsNull(errors)) {
        errors = NULL;
    }
    if (errors) { 
    if(!cJSON_IsBool(errors))
    {
    goto end; //Bool
    }
    errors_local_var = malloc(sizeof(int));
    if(!errors_local_var)
    {
        goto end;
    }
    *errors_local_var = errors->valueint;
    }

    // domain->domain_logs
    cJSON *domain_logs = cJSON_GetObjectItemCaseSensitive(domainJSON, "domain_logs");
    if (cJSON_IsNull(domain_logs)) {
        domain_logs = NULL;
    }
    if (domain_logs) { 
    cJSON *domain_logs_local = NULL;
    if(!cJSON_IsArray(domain_logs)) {
        goto end;//primitive container
    }
    domain_logsList = list_createList();

    cJSON_ArrayForEach(domain_logs_local, domain_logs)
    {
        if(!cJSON_IsString(domain_logs_local))
        {
            goto end;
        }
        list_addElement(domain_logsList , strdup(domain_logs_local->valuestring));
    }
    }

    // domain->all_info
    cJSON *all_info = cJSON_GetObjectItemCaseSensitive(domainJSON, "allInfo");
    if (cJSON_IsNull(all_info)) {
        all_info = NULL;
    }
    if (all_info) { 
    all_info_local_nonprim = domain_all_info_parseFromJSON(all_info); //nonprimitive
    }

    // domain->registrar_status
    cJSON *registrar_status = cJSON_GetObjectItemCaseSensitive(domainJSON, "registrarStatus");
    if (cJSON_IsNull(registrar_status)) {
        registrar_status = NULL;
    }
    if (registrar_status) { 
    if(!cJSON_IsString(registrar_status) && !cJSON_IsNull(registrar_status))
    {
    goto end; //String
    }
    }

    // domain->locked
    cJSON *locked = cJSON_GetObjectItemCaseSensitive(domainJSON, "locked");
    if (cJSON_IsNull(locked)) {
        locked = NULL;
    }
    if (locked) { 
    if(!cJSON_IsString(locked) && !cJSON_IsNull(locked))
    {
    goto end; //String
    }
    }

    // domain->whois_privacy
    cJSON *whois_privacy = cJSON_GetObjectItemCaseSensitive(domainJSON, "whoisPrivacy");
    if (cJSON_IsNull(whois_privacy)) {
        whois_privacy = NULL;
    }
    if (whois_privacy) { 
    if(!cJSON_IsString(whois_privacy) && !cJSON_IsNull(whois_privacy))
    {
    goto end; //String
    }
    }

    // domain->auto_renew
    cJSON *auto_renew = cJSON_GetObjectItemCaseSensitive(domainJSON, "autoRenew");
    if (cJSON_IsNull(auto_renew)) {
        auto_renew = NULL;
    }
    if (auto_renew) { 
    if(!cJSON_IsString(auto_renew) && !cJSON_IsNull(auto_renew))
    {
    goto end; //String
    }
    }


    if (cust_currency && !cJSON_IsNull(cust_currency)) cust_currency_local_str = strdup(cust_currency->valuestring);
    if (cust_currency_symbol && !cJSON_IsNull(cust_currency_symbol)) cust_currency_symbol_local_str = strdup(cust_currency_symbol->valuestring);
    if (pwarning && !cJSON_IsNull(pwarning)) pwarning_local_str = strdup(pwarning->valuestring);
    if (transfer_info && !cJSON_IsNull(transfer_info)) transfer_info_local_str = strdup(transfer_info->valuestring);
    if (registrar_status && !cJSON_IsNull(registrar_status)) registrar_status_local_str = strdup(registrar_status->valuestring);
    if (locked && !cJSON_IsNull(locked)) locked_local_str = strdup(locked->valuestring);
    if (whois_privacy && !cJSON_IsNull(whois_privacy)) whois_privacy_local_str = strdup(whois_privacy->valuestring);
    if (auto_renew && !cJSON_IsNull(auto_renew)) auto_renew_local_str = strdup(auto_renew->valuestring);

    domain_local_var = domain_create_internal (
        service_info ? service_info_local_nonprim : NULL,
        service_types ? service_typesList : NULL,
        client_links ? client_linksList : NULL,
        billing_details ? billing_details_local_nonprim : NULL,
        cust_currency_local_str,
        cust_currency_symbol_local_str,
        service_extra ? service_extra_local_nonprim : NULL,
        extra_info_tables ? extra_info_tables_local_nonprim : NULL,
        service_type ? service_type_local_nonprim : NULL,
        contact_details ? contact_details_local_nonprim : NULL,
        pwarning_local_str,
        transfer_info_local_str,
        errors_local_var,
        domain_logs ? domain_logsList : NULL,
        all_info ? all_info_local_nonprim : NULL,
        registrar_status_local_str,
        locked_local_str,
        whois_privacy_local_str,
        auto_renew_local_str
        );

    if (!domain_local_var) {
        goto end;
    }

    return domain_local_var;
end:
    if (service_info_local_nonprim) {
        domain_service_info_free(service_info_local_nonprim);
        service_info_local_nonprim = NULL;
    }

    // The data type of the elements in domain->service_types is currently not supported.

    if (client_linksList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, client_linksList) {
            domain_client_link_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(client_linksList);
        client_linksList = NULL;
    }
    if (billing_details_local_nonprim) {
        domain_billing_details_free(billing_details_local_nonprim);
        billing_details_local_nonprim = NULL;
    }
    if (cust_currency_local_str) {
        free(cust_currency_local_str);
        cust_currency_local_str = NULL;
    }
    if (cust_currency_symbol_local_str) {
        free(cust_currency_symbol_local_str);
        cust_currency_symbol_local_str = NULL;
    }
    if (service_extra_local_nonprim) {
        domain_billing_extra_free(service_extra_local_nonprim);
        service_extra_local_nonprim = NULL;
    }
    if (extra_info_tables_local_nonprim) {
        backup_extra_info_tables_free(extra_info_tables_local_nonprim);
        extra_info_tables_local_nonprim = NULL;
    }
    if (service_type_local_nonprim) {
        domain_service_type_free(service_type_local_nonprim);
        service_type_local_nonprim = NULL;
    }
    if (contact_details_local_nonprim) {
        domain_contact_details_free(contact_details_local_nonprim);
        contact_details_local_nonprim = NULL;
    }
    if (pwarning_local_str) {
        free(pwarning_local_str);
        pwarning_local_str = NULL;
    }
    if (transfer_info_local_str) {
        free(transfer_info_local_str);
        transfer_info_local_str = NULL;
    }
    if (errors_local_var) {
        free(errors_local_var);
        errors_local_var = NULL;
    }
    if (domain_logsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, domain_logsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(domain_logsList);
        domain_logsList = NULL;
    }
    if (all_info_local_nonprim) {
        domain_all_info_free(all_info_local_nonprim);
        all_info_local_nonprim = NULL;
    }
    if (registrar_status_local_str) {
        free(registrar_status_local_str);
        registrar_status_local_str = NULL;
    }
    if (locked_local_str) {
        free(locked_local_str);
        locked_local_str = NULL;
    }
    if (whois_privacy_local_str) {
        free(whois_privacy_local_str);
        whois_privacy_local_str = NULL;
    }
    if (auto_renew_local_str) {
        free(auto_renew_local_str);
        auto_renew_local_str = NULL;
    }
    return NULL;

}
