#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "get_scrub_ip_details_200_response.h"



static get_scrub_ip_details_200_response_t *get_scrub_ip_details_200_response_create_internal(
    get_scrub_ip_details_200_response_service_info_t *service_info,
    list_t *client_links,
    get_scrub_ip_details_200_response_billing_details_t *billing_details,
    char *cust_currency,
    char *cust_currency_symbol,
    char *package,
    get_scrub_ip_details_200_response_extra_info_tables_t *extra_info_tables,
    get_scrub_ip_details_200_response_filter_firewall_t *filter_firewall
    ) {
    get_scrub_ip_details_200_response_t *get_scrub_ip_details_200_response_local_var = malloc(sizeof(get_scrub_ip_details_200_response_t));
    if (!get_scrub_ip_details_200_response_local_var) {
        return NULL;
    }
    get_scrub_ip_details_200_response_local_var->service_info = service_info;
    get_scrub_ip_details_200_response_local_var->client_links = client_links;
    get_scrub_ip_details_200_response_local_var->billing_details = billing_details;
    get_scrub_ip_details_200_response_local_var->cust_currency = cust_currency;
    get_scrub_ip_details_200_response_local_var->cust_currency_symbol = cust_currency_symbol;
    get_scrub_ip_details_200_response_local_var->package = package;
    get_scrub_ip_details_200_response_local_var->extra_info_tables = extra_info_tables;
    get_scrub_ip_details_200_response_local_var->filter_firewall = filter_firewall;

    get_scrub_ip_details_200_response_local_var->_library_owned = 1;
    return get_scrub_ip_details_200_response_local_var;
}

__attribute__((deprecated)) get_scrub_ip_details_200_response_t *get_scrub_ip_details_200_response_create(
    get_scrub_ip_details_200_response_service_info_t *service_info,
    list_t *client_links,
    get_scrub_ip_details_200_response_billing_details_t *billing_details,
    char *cust_currency,
    char *cust_currency_symbol,
    char *package,
    get_scrub_ip_details_200_response_extra_info_tables_t *extra_info_tables,
    get_scrub_ip_details_200_response_filter_firewall_t *filter_firewall
    ) {
    return get_scrub_ip_details_200_response_create_internal (
        service_info,
        client_links,
        billing_details,
        cust_currency,
        cust_currency_symbol,
        package,
        extra_info_tables,
        filter_firewall
        );
}

void get_scrub_ip_details_200_response_free(get_scrub_ip_details_200_response_t *get_scrub_ip_details_200_response) {
    if(NULL == get_scrub_ip_details_200_response){
        return ;
    }
    if(get_scrub_ip_details_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "get_scrub_ip_details_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (get_scrub_ip_details_200_response->service_info) {
        get_scrub_ip_details_200_response_service_info_free(get_scrub_ip_details_200_response->service_info);
        get_scrub_ip_details_200_response->service_info = NULL;
    }
    if (get_scrub_ip_details_200_response->client_links) {
        list_ForEach(listEntry, get_scrub_ip_details_200_response->client_links) {
            get_scrub_ip_details_200_response_client_links_inner_free(listEntry->data);
        }
        list_freeList(get_scrub_ip_details_200_response->client_links);
        get_scrub_ip_details_200_response->client_links = NULL;
    }
    if (get_scrub_ip_details_200_response->billing_details) {
        get_scrub_ip_details_200_response_billing_details_free(get_scrub_ip_details_200_response->billing_details);
        get_scrub_ip_details_200_response->billing_details = NULL;
    }
    if (get_scrub_ip_details_200_response->cust_currency) {
        free(get_scrub_ip_details_200_response->cust_currency);
        get_scrub_ip_details_200_response->cust_currency = NULL;
    }
    if (get_scrub_ip_details_200_response->cust_currency_symbol) {
        free(get_scrub_ip_details_200_response->cust_currency_symbol);
        get_scrub_ip_details_200_response->cust_currency_symbol = NULL;
    }
    if (get_scrub_ip_details_200_response->package) {
        free(get_scrub_ip_details_200_response->package);
        get_scrub_ip_details_200_response->package = NULL;
    }
    if (get_scrub_ip_details_200_response->extra_info_tables) {
        get_scrub_ip_details_200_response_extra_info_tables_free(get_scrub_ip_details_200_response->extra_info_tables);
        get_scrub_ip_details_200_response->extra_info_tables = NULL;
    }
    if (get_scrub_ip_details_200_response->filter_firewall) {
        get_scrub_ip_details_200_response_filter_firewall_free(get_scrub_ip_details_200_response->filter_firewall);
        get_scrub_ip_details_200_response->filter_firewall = NULL;
    }
    free(get_scrub_ip_details_200_response);
}

cJSON *get_scrub_ip_details_200_response_convertToJSON(get_scrub_ip_details_200_response_t *get_scrub_ip_details_200_response) {
    cJSON *item = cJSON_CreateObject();

    // get_scrub_ip_details_200_response->service_info
    if(get_scrub_ip_details_200_response->service_info) {
    cJSON *service_info_local_JSON = get_scrub_ip_details_200_response_service_info_convertToJSON(get_scrub_ip_details_200_response->service_info);
    if(service_info_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "serviceInfo", service_info_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // get_scrub_ip_details_200_response->client_links
    if(get_scrub_ip_details_200_response->client_links) {
    cJSON *client_links = cJSON_AddArrayToObject(item, "client_links");
    if(client_links == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *client_linksListEntry;
    if (get_scrub_ip_details_200_response->client_links) {
    list_ForEach(client_linksListEntry, get_scrub_ip_details_200_response->client_links) {
    cJSON *itemLocal = get_scrub_ip_details_200_response_client_links_inner_convertToJSON(client_linksListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(client_links, itemLocal);
    }
    }
    }


    // get_scrub_ip_details_200_response->billing_details
    if(get_scrub_ip_details_200_response->billing_details) {
    cJSON *billing_details_local_JSON = get_scrub_ip_details_200_response_billing_details_convertToJSON(get_scrub_ip_details_200_response->billing_details);
    if(billing_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "billingDetails", billing_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // get_scrub_ip_details_200_response->cust_currency
    if(get_scrub_ip_details_200_response->cust_currency) {
    if(cJSON_AddStringToObject(item, "custCurrency", get_scrub_ip_details_200_response->cust_currency) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response->cust_currency_symbol
    if(get_scrub_ip_details_200_response->cust_currency_symbol) {
    if(cJSON_AddStringToObject(item, "custCurrencySymbol", get_scrub_ip_details_200_response->cust_currency_symbol) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response->package
    if(get_scrub_ip_details_200_response->package) {
    if(cJSON_AddStringToObject(item, "package", get_scrub_ip_details_200_response->package) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response->extra_info_tables
    if(get_scrub_ip_details_200_response->extra_info_tables) {
    cJSON *extra_info_tables_local_JSON = get_scrub_ip_details_200_response_extra_info_tables_convertToJSON(get_scrub_ip_details_200_response->extra_info_tables);
    if(extra_info_tables_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "extraInfoTables", extra_info_tables_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // get_scrub_ip_details_200_response->filter_firewall
    if(get_scrub_ip_details_200_response->filter_firewall) {
    cJSON *filter_firewall_local_JSON = get_scrub_ip_details_200_response_filter_firewall_convertToJSON(get_scrub_ip_details_200_response->filter_firewall);
    if(filter_firewall_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "filter_firewall", filter_firewall_local_JSON);
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

get_scrub_ip_details_200_response_t *get_scrub_ip_details_200_response_parseFromJSON(cJSON *get_scrub_ip_details_200_responseJSON){

    get_scrub_ip_details_200_response_t *get_scrub_ip_details_200_response_local_var = NULL;

    // define the local variable for get_scrub_ip_details_200_response->service_info
    get_scrub_ip_details_200_response_service_info_t *service_info_local_nonprim = NULL;

    // define the local list for get_scrub_ip_details_200_response->client_links
    list_t *client_linksList = NULL;

    // define the local variable for get_scrub_ip_details_200_response->billing_details
    get_scrub_ip_details_200_response_billing_details_t *billing_details_local_nonprim = NULL;

    // define the local variable for get_scrub_ip_details_200_response->extra_info_tables
    get_scrub_ip_details_200_response_extra_info_tables_t *extra_info_tables_local_nonprim = NULL;

    // define the local variable for get_scrub_ip_details_200_response->filter_firewall
    get_scrub_ip_details_200_response_filter_firewall_t *filter_firewall_local_nonprim = NULL;

    // get_scrub_ip_details_200_response->service_info
    cJSON *service_info = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_responseJSON, "serviceInfo");
    if (cJSON_IsNull(service_info)) {
        service_info = NULL;
    }
    if (service_info) { 
    service_info_local_nonprim = get_scrub_ip_details_200_response_service_info_parseFromJSON(service_info); //nonprimitive
    }

    // get_scrub_ip_details_200_response->client_links
    cJSON *client_links = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_responseJSON, "client_links");
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
        get_scrub_ip_details_200_response_client_links_inner_t *client_linksItem = get_scrub_ip_details_200_response_client_links_inner_parseFromJSON(client_links_local_nonprimitive);

        list_addElement(client_linksList, client_linksItem);
    }
    }

    // get_scrub_ip_details_200_response->billing_details
    cJSON *billing_details = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_responseJSON, "billingDetails");
    if (cJSON_IsNull(billing_details)) {
        billing_details = NULL;
    }
    if (billing_details) { 
    billing_details_local_nonprim = get_scrub_ip_details_200_response_billing_details_parseFromJSON(billing_details); //nonprimitive
    }

    // get_scrub_ip_details_200_response->cust_currency
    cJSON *cust_currency = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_responseJSON, "custCurrency");
    if (cJSON_IsNull(cust_currency)) {
        cust_currency = NULL;
    }
    if (cust_currency) { 
    if(!cJSON_IsString(cust_currency) && !cJSON_IsNull(cust_currency))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response->cust_currency_symbol
    cJSON *cust_currency_symbol = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_responseJSON, "custCurrencySymbol");
    if (cJSON_IsNull(cust_currency_symbol)) {
        cust_currency_symbol = NULL;
    }
    if (cust_currency_symbol) { 
    if(!cJSON_IsString(cust_currency_symbol) && !cJSON_IsNull(cust_currency_symbol))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response->package
    cJSON *package = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_responseJSON, "package");
    if (cJSON_IsNull(package)) {
        package = NULL;
    }
    if (package) { 
    if(!cJSON_IsString(package) && !cJSON_IsNull(package))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response->extra_info_tables
    cJSON *extra_info_tables = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_responseJSON, "extraInfoTables");
    if (cJSON_IsNull(extra_info_tables)) {
        extra_info_tables = NULL;
    }
    if (extra_info_tables) { 
    extra_info_tables_local_nonprim = get_scrub_ip_details_200_response_extra_info_tables_parseFromJSON(extra_info_tables); //nonprimitive
    }

    // get_scrub_ip_details_200_response->filter_firewall
    cJSON *filter_firewall = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_responseJSON, "filter_firewall");
    if (cJSON_IsNull(filter_firewall)) {
        filter_firewall = NULL;
    }
    if (filter_firewall) { 
    filter_firewall_local_nonprim = get_scrub_ip_details_200_response_filter_firewall_parseFromJSON(filter_firewall); //nonprimitive
    }


    get_scrub_ip_details_200_response_local_var = get_scrub_ip_details_200_response_create_internal (
        service_info ? service_info_local_nonprim : NULL,
        client_links ? client_linksList : NULL,
        billing_details ? billing_details_local_nonprim : NULL,
        cust_currency && !cJSON_IsNull(cust_currency) ? strdup(cust_currency->valuestring) : NULL,
        cust_currency_symbol && !cJSON_IsNull(cust_currency_symbol) ? strdup(cust_currency_symbol->valuestring) : NULL,
        package && !cJSON_IsNull(package) ? strdup(package->valuestring) : NULL,
        extra_info_tables ? extra_info_tables_local_nonprim : NULL,
        filter_firewall ? filter_firewall_local_nonprim : NULL
        );

    return get_scrub_ip_details_200_response_local_var;
end:
    if (service_info_local_nonprim) {
        get_scrub_ip_details_200_response_service_info_free(service_info_local_nonprim);
        service_info_local_nonprim = NULL;
    }
    if (client_linksList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, client_linksList) {
            get_scrub_ip_details_200_response_client_links_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(client_linksList);
        client_linksList = NULL;
    }
    if (billing_details_local_nonprim) {
        get_scrub_ip_details_200_response_billing_details_free(billing_details_local_nonprim);
        billing_details_local_nonprim = NULL;
    }
    if (extra_info_tables_local_nonprim) {
        get_scrub_ip_details_200_response_extra_info_tables_free(extra_info_tables_local_nonprim);
        extra_info_tables_local_nonprim = NULL;
    }
    if (filter_firewall_local_nonprim) {
        get_scrub_ip_details_200_response_filter_firewall_free(filter_firewall_local_nonprim);
        filter_firewall_local_nonprim = NULL;
    }
    return NULL;

}
