#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "license.h"



static license_t *license_create_internal(
    license_service_info_t *service_info,
    list_t *client_links,
    license_billing_details_t *billing_details,
    char *cust_currency,
    char *cust_currency_symbol,
    char *package,
    list_t *service_extra,
    license_extra_info_tables_t *extra_info_tables,
    char *service_overview_extra,
    license_service_type_t *service_type,
    char *license_key
    ) {
    license_t *license_local_var = malloc(sizeof(license_t));
    if (!license_local_var) {
        return NULL;
    }
    memset(license_local_var, 0, sizeof(license_t));
    license_local_var->_library_owned = 1;
    license_local_var->service_info = service_info;
    license_local_var->client_links = client_links;
    license_local_var->billing_details = billing_details;
    license_local_var->cust_currency = cust_currency;
    license_local_var->cust_currency_symbol = cust_currency_symbol;
    license_local_var->package = package;
    license_local_var->service_extra = service_extra;
    license_local_var->extra_info_tables = extra_info_tables;
    license_local_var->service_overview_extra = service_overview_extra;
    license_local_var->service_type = service_type;
    license_local_var->license_key = license_key;
    return license_local_var;
}

__attribute__((deprecated)) license_t *license_create(
    license_service_info_t *service_info,
    list_t *client_links,
    license_billing_details_t *billing_details,
    char *cust_currency,
    char *cust_currency_symbol,
    char *package,
    list_t *service_extra,
    license_extra_info_tables_t *extra_info_tables,
    char *service_overview_extra,
    license_service_type_t *service_type,
    char *license_key
    ) {
    license_t *result = license_create_internal (
        service_info,
        client_links,
        billing_details,
        cust_currency,
        cust_currency_symbol,
        package,
        service_extra,
        extra_info_tables,
        service_overview_extra,
        service_type,
        license_key
        );
    if (!result) {
    }
    return result;
}

void license_free(license_t *license) {
    if(NULL == license){
        return ;
    }
    if(license->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "license_free");
        return ;
    }
    listEntry_t *listEntry;
    if (license->service_info) {
        license_service_info_free(license->service_info);
        license->service_info = NULL;
    }
    if (license->client_links) {
        list_ForEach(listEntry, license->client_links) {
            license_client_link_free(listEntry->data);
        }
        list_freeList(license->client_links);
        license->client_links = NULL;
    }
    if (license->billing_details) {
        license_billing_details_free(license->billing_details);
        license->billing_details = NULL;
    }
    if (license->cust_currency) {
        free(license->cust_currency);
        license->cust_currency = NULL;
    }
    if (license->cust_currency_symbol) {
        free(license->cust_currency_symbol);
        license->cust_currency_symbol = NULL;
    }
    if (license->package) {
        free(license->package);
        license->package = NULL;
    }
    if (license->service_extra) {
        list_ForEach(listEntry, license->service_extra) {
            free(listEntry->data);
        }
        list_freeList(license->service_extra);
        license->service_extra = NULL;
    }
    if (license->extra_info_tables) {
        license_extra_info_tables_free(license->extra_info_tables);
        license->extra_info_tables = NULL;
    }
    if (license->service_overview_extra) {
        free(license->service_overview_extra);
        license->service_overview_extra = NULL;
    }
    if (license->service_type) {
        license_service_type_free(license->service_type);
        license->service_type = NULL;
    }
    if (license->license_key) {
        free(license->license_key);
        license->license_key = NULL;
    }
    free(license);
}

cJSON *license_convertToJSON(license_t *license) {
    cJSON *item = cJSON_CreateObject();

    // license->service_info
    if (!license->service_info) {
        goto fail;
    }
    cJSON *service_info_local_JSON = license_service_info_convertToJSON(license->service_info);
    if(service_info_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "serviceInfo", service_info_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // license->client_links
    if (!license->client_links) {
        goto fail;
    }
    cJSON *client_links = cJSON_AddArrayToObject(item, "client_links");
    if(client_links == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *client_linksListEntry;
    if (license->client_links) {
    list_ForEach(client_linksListEntry, license->client_links) {
    cJSON *itemLocal = license_client_link_convertToJSON(client_linksListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(client_links, itemLocal);
    }
    }


    // license->billing_details
    if (!license->billing_details) {
        goto fail;
    }
    cJSON *billing_details_local_JSON = license_billing_details_convertToJSON(license->billing_details);
    if(billing_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "billingDetails", billing_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // license->cust_currency
    if (!license->cust_currency) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "custCurrency", license->cust_currency) == NULL) {
    goto fail; //String
    }


    // license->cust_currency_symbol
    if (!license->cust_currency_symbol) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "custCurrencySymbol", license->cust_currency_symbol) == NULL) {
    goto fail; //String
    }


    // license->package
    if (!license->package) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "package", license->package) == NULL) {
    goto fail; //String
    }


    // license->service_extra
    if (!license->service_extra) {
        goto fail;
    }
    cJSON *service_extra = cJSON_AddArrayToObject(item, "serviceExtra");
    if(service_extra == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *service_extraListEntry;
    list_ForEach(service_extraListEntry, license->service_extra) {
    if(cJSON_AddStringToObject(service_extra, "", service_extraListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // license->extra_info_tables
    if (!license->extra_info_tables) {
        goto fail;
    }
    cJSON *extra_info_tables_local_JSON = license_extra_info_tables_convertToJSON(license->extra_info_tables);
    if(extra_info_tables_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "extraInfoTables", extra_info_tables_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // license->service_overview_extra
    if (!license->service_overview_extra) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "service_overview_extra", license->service_overview_extra) == NULL) {
    goto fail; //String
    }


    // license->service_type
    if (!license->service_type) {
        goto fail;
    }
    cJSON *service_type_local_JSON = license_service_type_convertToJSON(license->service_type);
    if(service_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "serviceType", service_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // license->license_key
    if (!license->license_key) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "license_key", license->license_key) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

license_t *license_parseFromJSON(cJSON *licenseJSON){

    license_t *license_local_var = NULL;

    // define the local variable for license->service_info
    license_service_info_t *service_info_local_nonprim = NULL;

    // define the local list for license->client_links
    list_t *client_linksList = NULL;

    // define the local variable for license->billing_details
    license_billing_details_t *billing_details_local_nonprim = NULL;

    char *cust_currency_local_str = NULL;

    char *cust_currency_symbol_local_str = NULL;

    char *package_local_str = NULL;

    // define the local list for license->service_extra
    list_t *service_extraList = NULL;

    // define the local variable for license->extra_info_tables
    license_extra_info_tables_t *extra_info_tables_local_nonprim = NULL;

    char *service_overview_extra_local_str = NULL;

    // define the local variable for license->service_type
    license_service_type_t *service_type_local_nonprim = NULL;

    char *license_key_local_str = NULL;

    // license->service_info
    cJSON *service_info = cJSON_GetObjectItemCaseSensitive(licenseJSON, "serviceInfo");
    if (cJSON_IsNull(service_info)) {
        service_info = NULL;
    }
    if (!service_info) {
        goto end;
    }

    
    service_info_local_nonprim = license_service_info_parseFromJSON(service_info); //nonprimitive

    // license->client_links
    cJSON *client_links = cJSON_GetObjectItemCaseSensitive(licenseJSON, "client_links");
    if (cJSON_IsNull(client_links)) {
        client_links = NULL;
    }
    if (!client_links) {
        goto end;
    }

    
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
        license_client_link_t *client_linksItem = license_client_link_parseFromJSON(client_links_local_nonprimitive);

        list_addElement(client_linksList, client_linksItem);
    }

    // license->billing_details
    cJSON *billing_details = cJSON_GetObjectItemCaseSensitive(licenseJSON, "billingDetails");
    if (cJSON_IsNull(billing_details)) {
        billing_details = NULL;
    }
    if (!billing_details) {
        goto end;
    }

    
    billing_details_local_nonprim = license_billing_details_parseFromJSON(billing_details); //nonprimitive

    // license->cust_currency
    cJSON *cust_currency = cJSON_GetObjectItemCaseSensitive(licenseJSON, "custCurrency");
    if (cJSON_IsNull(cust_currency)) {
        cust_currency = NULL;
    }
    if (!cust_currency) {
        goto end;
    }

    
    if(!cJSON_IsString(cust_currency))
    {
    goto end; //String
    }

    // license->cust_currency_symbol
    cJSON *cust_currency_symbol = cJSON_GetObjectItemCaseSensitive(licenseJSON, "custCurrencySymbol");
    if (cJSON_IsNull(cust_currency_symbol)) {
        cust_currency_symbol = NULL;
    }
    if (!cust_currency_symbol) {
        goto end;
    }

    
    if(!cJSON_IsString(cust_currency_symbol))
    {
    goto end; //String
    }

    // license->package
    cJSON *package = cJSON_GetObjectItemCaseSensitive(licenseJSON, "package");
    if (cJSON_IsNull(package)) {
        package = NULL;
    }
    if (!package) {
        goto end;
    }

    
    if(!cJSON_IsString(package))
    {
    goto end; //String
    }

    // license->service_extra
    cJSON *service_extra = cJSON_GetObjectItemCaseSensitive(licenseJSON, "serviceExtra");
    if (cJSON_IsNull(service_extra)) {
        service_extra = NULL;
    }
    if (!service_extra) {
        goto end;
    }

    
    cJSON *service_extra_local = NULL;
    if(!cJSON_IsArray(service_extra)) {
        goto end;//primitive container
    }
    service_extraList = list_createList();

    cJSON_ArrayForEach(service_extra_local, service_extra)
    {
        if(!cJSON_IsString(service_extra_local))
        {
            goto end;
        }
        list_addElement(service_extraList , strdup(service_extra_local->valuestring));
    }

    // license->extra_info_tables
    cJSON *extra_info_tables = cJSON_GetObjectItemCaseSensitive(licenseJSON, "extraInfoTables");
    if (cJSON_IsNull(extra_info_tables)) {
        extra_info_tables = NULL;
    }
    if (!extra_info_tables) {
        goto end;
    }

    
    extra_info_tables_local_nonprim = license_extra_info_tables_parseFromJSON(extra_info_tables); //nonprimitive

    // license->service_overview_extra
    cJSON *service_overview_extra = cJSON_GetObjectItemCaseSensitive(licenseJSON, "service_overview_extra");
    if (cJSON_IsNull(service_overview_extra)) {
        service_overview_extra = NULL;
    }
    if (!service_overview_extra) {
        goto end;
    }

    
    if(!cJSON_IsString(service_overview_extra))
    {
    goto end; //String
    }

    // license->service_type
    cJSON *service_type = cJSON_GetObjectItemCaseSensitive(licenseJSON, "serviceType");
    if (cJSON_IsNull(service_type)) {
        service_type = NULL;
    }
    if (!service_type) {
        goto end;
    }

    
    service_type_local_nonprim = license_service_type_parseFromJSON(service_type); //nonprimitive

    // license->license_key
    cJSON *license_key = cJSON_GetObjectItemCaseSensitive(licenseJSON, "license_key");
    if (cJSON_IsNull(license_key)) {
        license_key = NULL;
    }
    if (!license_key) {
        goto end;
    }

    
    if(!cJSON_IsString(license_key))
    {
    goto end; //String
    }


    if (cust_currency && !cJSON_IsNull(cust_currency)) cust_currency_local_str = strdup(cust_currency->valuestring);
    if (cust_currency_symbol && !cJSON_IsNull(cust_currency_symbol)) cust_currency_symbol_local_str = strdup(cust_currency_symbol->valuestring);
    if (package && !cJSON_IsNull(package)) package_local_str = strdup(package->valuestring);
    if (service_overview_extra && !cJSON_IsNull(service_overview_extra)) service_overview_extra_local_str = strdup(service_overview_extra->valuestring);
    if (license_key && !cJSON_IsNull(license_key)) license_key_local_str = strdup(license_key->valuestring);

    license_local_var = license_create_internal (
        service_info_local_nonprim,
        client_linksList,
        billing_details_local_nonprim,
        cust_currency_local_str,
        cust_currency_symbol_local_str,
        package_local_str,
        service_extraList,
        extra_info_tables_local_nonprim,
        service_overview_extra_local_str,
        service_type_local_nonprim,
        license_key_local_str
        );

    if (!license_local_var) {
        goto end;
    }

    return license_local_var;
end:
    if (service_info_local_nonprim) {
        license_service_info_free(service_info_local_nonprim);
        service_info_local_nonprim = NULL;
    }
    if (client_linksList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, client_linksList) {
            license_client_link_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(client_linksList);
        client_linksList = NULL;
    }
    if (billing_details_local_nonprim) {
        license_billing_details_free(billing_details_local_nonprim);
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
    if (package_local_str) {
        free(package_local_str);
        package_local_str = NULL;
    }
    if (service_extraList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, service_extraList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(service_extraList);
        service_extraList = NULL;
    }
    if (extra_info_tables_local_nonprim) {
        license_extra_info_tables_free(extra_info_tables_local_nonprim);
        extra_info_tables_local_nonprim = NULL;
    }
    if (service_overview_extra_local_str) {
        free(service_overview_extra_local_str);
        service_overview_extra_local_str = NULL;
    }
    if (service_type_local_nonprim) {
        license_service_type_free(service_type_local_nonprim);
        service_type_local_nonprim = NULL;
    }
    if (license_key_local_str) {
        free(license_key_local_str);
        license_key_local_str = NULL;
    }
    return NULL;

}
