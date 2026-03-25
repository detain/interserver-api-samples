#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "website.h"



static website_t *website_create_internal(
    website_service_info_t *service_info,
    list_t *client_links,
    website_billing_details_t *billing_details,
    char *cust_currency,
    char *cust_currency_symbol,
    website_service_master_t *service_master,
    char *package,
    list_t *service_extra,
    website_extra_info_tables_t *extra_info_tables
    ) {
    website_t *website_local_var = malloc(sizeof(website_t));
    if (!website_local_var) {
        return NULL;
    }
    memset(website_local_var, 0, sizeof(website_t));
    website_local_var->_library_owned = 1;
    website_local_var->service_info = service_info;
    website_local_var->client_links = client_links;
    website_local_var->billing_details = billing_details;
    website_local_var->cust_currency = cust_currency;
    website_local_var->cust_currency_symbol = cust_currency_symbol;
    website_local_var->service_master = service_master;
    website_local_var->package = package;
    website_local_var->service_extra = service_extra;
    website_local_var->extra_info_tables = extra_info_tables;
    return website_local_var;
}

__attribute__((deprecated)) website_t *website_create(
    website_service_info_t *service_info,
    list_t *client_links,
    website_billing_details_t *billing_details,
    char *cust_currency,
    char *cust_currency_symbol,
    website_service_master_t *service_master,
    char *package,
    list_t *service_extra,
    website_extra_info_tables_t *extra_info_tables
    ) {
    website_t *result = website_create_internal (
        service_info,
        client_links,
        billing_details,
        cust_currency,
        cust_currency_symbol,
        service_master,
        package,
        service_extra,
        extra_info_tables
        );
    if (!result) {
    }
    return result;
}

void website_free(website_t *website) {
    if(NULL == website){
        return ;
    }
    if(website->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "website_free");
        return ;
    }
    listEntry_t *listEntry;
    if (website->service_info) {
        website_service_info_free(website->service_info);
        website->service_info = NULL;
    }
    if (website->client_links) {
        list_ForEach(listEntry, website->client_links) {
            website_client_link_free(listEntry->data);
        }
        list_freeList(website->client_links);
        website->client_links = NULL;
    }
    if (website->billing_details) {
        website_billing_details_free(website->billing_details);
        website->billing_details = NULL;
    }
    if (website->cust_currency) {
        free(website->cust_currency);
        website->cust_currency = NULL;
    }
    if (website->cust_currency_symbol) {
        free(website->cust_currency_symbol);
        website->cust_currency_symbol = NULL;
    }
    if (website->service_master) {
        website_service_master_free(website->service_master);
        website->service_master = NULL;
    }
    if (website->package) {
        free(website->package);
        website->package = NULL;
    }
    if (website->service_extra) {
        list_ForEach(listEntry, website->service_extra) {
            object_free(listEntry->data);
        }
        list_freeList(website->service_extra);
        website->service_extra = NULL;
    }
    if (website->extra_info_tables) {
        website_extra_info_tables_free(website->extra_info_tables);
        website->extra_info_tables = NULL;
    }
    free(website);
}

cJSON *website_convertToJSON(website_t *website) {
    cJSON *item = cJSON_CreateObject();

    // website->service_info
    if(website->service_info) {
    cJSON *service_info_local_JSON = website_service_info_convertToJSON(website->service_info);
    if(service_info_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "serviceInfo", service_info_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // website->client_links
    if(website->client_links) {
    cJSON *client_links = cJSON_AddArrayToObject(item, "client_links");
    if(client_links == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *client_linksListEntry;
    if (website->client_links) {
    list_ForEach(client_linksListEntry, website->client_links) {
    cJSON *itemLocal = website_client_link_convertToJSON(client_linksListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(client_links, itemLocal);
    }
    }
    }


    // website->billing_details
    if(website->billing_details) {
    cJSON *billing_details_local_JSON = website_billing_details_convertToJSON(website->billing_details);
    if(billing_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "billingDetails", billing_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // website->cust_currency
    if(website->cust_currency) {
    if(cJSON_AddStringToObject(item, "custCurrency", website->cust_currency) == NULL) {
    goto fail; //String
    }
    }


    // website->cust_currency_symbol
    if(website->cust_currency_symbol) {
    if(cJSON_AddStringToObject(item, "custCurrencySymbol", website->cust_currency_symbol) == NULL) {
    goto fail; //String
    }
    }


    // website->service_master
    if(website->service_master) {
    cJSON *service_master_local_JSON = website_service_master_convertToJSON(website->service_master);
    if(service_master_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "serviceMaster", service_master_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // website->package
    if(website->package) {
    if(cJSON_AddStringToObject(item, "package", website->package) == NULL) {
    goto fail; //String
    }
    }


    // website->service_extra
    if(website->service_extra) {
    cJSON *service_extra = cJSON_AddArrayToObject(item, "serviceExtra");
    if(service_extra == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *service_extraListEntry;
    if (website->service_extra) {
    list_ForEach(service_extraListEntry, website->service_extra) {
    cJSON *itemLocal = object_convertToJSON(service_extraListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(service_extra, itemLocal);
    }
    }
    }


    // website->extra_info_tables
    if(website->extra_info_tables) {
    cJSON *extra_info_tables_local_JSON = website_extra_info_tables_convertToJSON(website->extra_info_tables);
    if(extra_info_tables_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "extraInfoTables", extra_info_tables_local_JSON);
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

website_t *website_parseFromJSON(cJSON *websiteJSON){

    website_t *website_local_var = NULL;

    // define the local variable for website->service_info
    website_service_info_t *service_info_local_nonprim = NULL;

    // define the local list for website->client_links
    list_t *client_linksList = NULL;

    // define the local variable for website->billing_details
    website_billing_details_t *billing_details_local_nonprim = NULL;

    char *cust_currency_local_str = NULL;

    char *cust_currency_symbol_local_str = NULL;

    // define the local variable for website->service_master
    website_service_master_t *service_master_local_nonprim = NULL;

    char *package_local_str = NULL;

    // define the local list for website->service_extra
    list_t *service_extraList = NULL;

    // define the local variable for website->extra_info_tables
    website_extra_info_tables_t *extra_info_tables_local_nonprim = NULL;

    // website->service_info
    cJSON *service_info = cJSON_GetObjectItemCaseSensitive(websiteJSON, "serviceInfo");
    if (cJSON_IsNull(service_info)) {
        service_info = NULL;
    }
    if (service_info) { 
    service_info_local_nonprim = website_service_info_parseFromJSON(service_info); //nonprimitive
    }

    // website->client_links
    cJSON *client_links = cJSON_GetObjectItemCaseSensitive(websiteJSON, "client_links");
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
        website_client_link_t *client_linksItem = website_client_link_parseFromJSON(client_links_local_nonprimitive);

        list_addElement(client_linksList, client_linksItem);
    }
    }

    // website->billing_details
    cJSON *billing_details = cJSON_GetObjectItemCaseSensitive(websiteJSON, "billingDetails");
    if (cJSON_IsNull(billing_details)) {
        billing_details = NULL;
    }
    if (billing_details) { 
    billing_details_local_nonprim = website_billing_details_parseFromJSON(billing_details); //nonprimitive
    }

    // website->cust_currency
    cJSON *cust_currency = cJSON_GetObjectItemCaseSensitive(websiteJSON, "custCurrency");
    if (cJSON_IsNull(cust_currency)) {
        cust_currency = NULL;
    }
    if (cust_currency) { 
    if(!cJSON_IsString(cust_currency) && !cJSON_IsNull(cust_currency))
    {
    goto end; //String
    }
    }

    // website->cust_currency_symbol
    cJSON *cust_currency_symbol = cJSON_GetObjectItemCaseSensitive(websiteJSON, "custCurrencySymbol");
    if (cJSON_IsNull(cust_currency_symbol)) {
        cust_currency_symbol = NULL;
    }
    if (cust_currency_symbol) { 
    if(!cJSON_IsString(cust_currency_symbol) && !cJSON_IsNull(cust_currency_symbol))
    {
    goto end; //String
    }
    }

    // website->service_master
    cJSON *service_master = cJSON_GetObjectItemCaseSensitive(websiteJSON, "serviceMaster");
    if (cJSON_IsNull(service_master)) {
        service_master = NULL;
    }
    if (service_master) { 
    service_master_local_nonprim = website_service_master_parseFromJSON(service_master); //nonprimitive
    }

    // website->package
    cJSON *package = cJSON_GetObjectItemCaseSensitive(websiteJSON, "package");
    if (cJSON_IsNull(package)) {
        package = NULL;
    }
    if (package) { 
    if(!cJSON_IsString(package) && !cJSON_IsNull(package))
    {
    goto end; //String
    }
    }

    // website->service_extra
    cJSON *service_extra = cJSON_GetObjectItemCaseSensitive(websiteJSON, "serviceExtra");
    if (cJSON_IsNull(service_extra)) {
        service_extra = NULL;
    }
    if (service_extra) { 
    cJSON *service_extra_local_nonprimitive = NULL;
    if(!cJSON_IsArray(service_extra)){
        goto end; //nonprimitive container
    }

    service_extraList = list_createList();

    cJSON_ArrayForEach(service_extra_local_nonprimitive,service_extra )
    {
        if(!cJSON_IsObject(service_extra_local_nonprimitive)){
            goto end;
        }
        object_t *service_extraItem = object_parseFromJSON(service_extra_local_nonprimitive);

        list_addElement(service_extraList, service_extraItem);
    }
    }

    // website->extra_info_tables
    cJSON *extra_info_tables = cJSON_GetObjectItemCaseSensitive(websiteJSON, "extraInfoTables");
    if (cJSON_IsNull(extra_info_tables)) {
        extra_info_tables = NULL;
    }
    if (extra_info_tables) { 
    extra_info_tables_local_nonprim = website_extra_info_tables_parseFromJSON(extra_info_tables); //nonprimitive
    }


    if (cust_currency && !cJSON_IsNull(cust_currency)) cust_currency_local_str = strdup(cust_currency->valuestring);
    if (cust_currency_symbol && !cJSON_IsNull(cust_currency_symbol)) cust_currency_symbol_local_str = strdup(cust_currency_symbol->valuestring);
    if (package && !cJSON_IsNull(package)) package_local_str = strdup(package->valuestring);

    website_local_var = website_create_internal (
        service_info ? service_info_local_nonprim : NULL,
        client_links ? client_linksList : NULL,
        billing_details ? billing_details_local_nonprim : NULL,
        cust_currency_local_str,
        cust_currency_symbol_local_str,
        service_master ? service_master_local_nonprim : NULL,
        package_local_str,
        service_extra ? service_extraList : NULL,
        extra_info_tables ? extra_info_tables_local_nonprim : NULL
        );

    if (!website_local_var) {
        goto end;
    }

    return website_local_var;
end:
    if (service_info_local_nonprim) {
        website_service_info_free(service_info_local_nonprim);
        service_info_local_nonprim = NULL;
    }
    if (client_linksList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, client_linksList) {
            website_client_link_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(client_linksList);
        client_linksList = NULL;
    }
    if (billing_details_local_nonprim) {
        website_billing_details_free(billing_details_local_nonprim);
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
    if (service_master_local_nonprim) {
        website_service_master_free(service_master_local_nonprim);
        service_master_local_nonprim = NULL;
    }
    if (package_local_str) {
        free(package_local_str);
        package_local_str = NULL;
    }
    if (service_extraList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, service_extraList) {
            object_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(service_extraList);
        service_extraList = NULL;
    }
    if (extra_info_tables_local_nonprim) {
        website_extra_info_tables_free(extra_info_tables_local_nonprim);
        extra_info_tables_local_nonprim = NULL;
    }
    return NULL;

}
