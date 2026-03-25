#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "backup.h"



static backup_t *backup_create_internal(
    backup_service_info_t *service_info,
    list_t *client_links,
    backup_billing_details_t *billing_details,
    char *cust_currency,
    char *cust_currency_symbol,
    backup_service_master_t *service_master,
    char *package,
    char *service_extra,
    backup_extra_info_tables_t *extra_info_tables
    ) {
    backup_t *backup_local_var = malloc(sizeof(backup_t));
    if (!backup_local_var) {
        return NULL;
    }
    memset(backup_local_var, 0, sizeof(backup_t));
    backup_local_var->_library_owned = 1;
    backup_local_var->service_info = service_info;
    backup_local_var->client_links = client_links;
    backup_local_var->billing_details = billing_details;
    backup_local_var->cust_currency = cust_currency;
    backup_local_var->cust_currency_symbol = cust_currency_symbol;
    backup_local_var->service_master = service_master;
    backup_local_var->package = package;
    backup_local_var->service_extra = service_extra;
    backup_local_var->extra_info_tables = extra_info_tables;
    return backup_local_var;
}

__attribute__((deprecated)) backup_t *backup_create(
    backup_service_info_t *service_info,
    list_t *client_links,
    backup_billing_details_t *billing_details,
    char *cust_currency,
    char *cust_currency_symbol,
    backup_service_master_t *service_master,
    char *package,
    char *service_extra,
    backup_extra_info_tables_t *extra_info_tables
    ) {
    backup_t *result = backup_create_internal (
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

void backup_free(backup_t *backup) {
    if(NULL == backup){
        return ;
    }
    if(backup->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "backup_free");
        return ;
    }
    listEntry_t *listEntry;
    if (backup->service_info) {
        backup_service_info_free(backup->service_info);
        backup->service_info = NULL;
    }
    if (backup->client_links) {
        list_ForEach(listEntry, backup->client_links) {
            backup_client_link_free(listEntry->data);
        }
        list_freeList(backup->client_links);
        backup->client_links = NULL;
    }
    if (backup->billing_details) {
        backup_billing_details_free(backup->billing_details);
        backup->billing_details = NULL;
    }
    if (backup->cust_currency) {
        free(backup->cust_currency);
        backup->cust_currency = NULL;
    }
    if (backup->cust_currency_symbol) {
        free(backup->cust_currency_symbol);
        backup->cust_currency_symbol = NULL;
    }
    if (backup->service_master) {
        backup_service_master_free(backup->service_master);
        backup->service_master = NULL;
    }
    if (backup->package) {
        free(backup->package);
        backup->package = NULL;
    }
    if (backup->service_extra) {
        free(backup->service_extra);
        backup->service_extra = NULL;
    }
    if (backup->extra_info_tables) {
        backup_extra_info_tables_free(backup->extra_info_tables);
        backup->extra_info_tables = NULL;
    }
    free(backup);
}

cJSON *backup_convertToJSON(backup_t *backup) {
    cJSON *item = cJSON_CreateObject();

    // backup->service_info
    if(backup->service_info) {
    cJSON *service_info_local_JSON = backup_service_info_convertToJSON(backup->service_info);
    if(service_info_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "serviceInfo", service_info_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // backup->client_links
    if(backup->client_links) {
    cJSON *client_links = cJSON_AddArrayToObject(item, "client_links");
    if(client_links == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *client_linksListEntry;
    if (backup->client_links) {
    list_ForEach(client_linksListEntry, backup->client_links) {
    cJSON *itemLocal = backup_client_link_convertToJSON(client_linksListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(client_links, itemLocal);
    }
    }
    }


    // backup->billing_details
    if(backup->billing_details) {
    cJSON *billing_details_local_JSON = backup_billing_details_convertToJSON(backup->billing_details);
    if(billing_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "billingDetails", billing_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // backup->cust_currency
    if(backup->cust_currency) {
    if(cJSON_AddStringToObject(item, "custCurrency", backup->cust_currency) == NULL) {
    goto fail; //String
    }
    }


    // backup->cust_currency_symbol
    if(backup->cust_currency_symbol) {
    if(cJSON_AddStringToObject(item, "custCurrencySymbol", backup->cust_currency_symbol) == NULL) {
    goto fail; //String
    }
    }


    // backup->service_master
    if(backup->service_master) {
    cJSON *service_master_local_JSON = backup_service_master_convertToJSON(backup->service_master);
    if(service_master_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "serviceMaster", service_master_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // backup->package
    if(backup->package) {
    if(cJSON_AddStringToObject(item, "package", backup->package) == NULL) {
    goto fail; //String
    }
    }


    // backup->service_extra
    if(backup->service_extra) {
    if(cJSON_AddStringToObject(item, "serviceExtra", backup->service_extra) == NULL) {
    goto fail; //String
    }
    }


    // backup->extra_info_tables
    if(backup->extra_info_tables) {
    cJSON *extra_info_tables_local_JSON = backup_extra_info_tables_convertToJSON(backup->extra_info_tables);
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

backup_t *backup_parseFromJSON(cJSON *backupJSON){

    backup_t *backup_local_var = NULL;

    // define the local variable for backup->service_info
    backup_service_info_t *service_info_local_nonprim = NULL;

    // define the local list for backup->client_links
    list_t *client_linksList = NULL;

    // define the local variable for backup->billing_details
    backup_billing_details_t *billing_details_local_nonprim = NULL;

    char *cust_currency_local_str = NULL;

    char *cust_currency_symbol_local_str = NULL;

    // define the local variable for backup->service_master
    backup_service_master_t *service_master_local_nonprim = NULL;

    char *package_local_str = NULL;

    char *service_extra_local_str = NULL;

    // define the local variable for backup->extra_info_tables
    backup_extra_info_tables_t *extra_info_tables_local_nonprim = NULL;

    // backup->service_info
    cJSON *service_info = cJSON_GetObjectItemCaseSensitive(backupJSON, "serviceInfo");
    if (cJSON_IsNull(service_info)) {
        service_info = NULL;
    }
    if (service_info) { 
    service_info_local_nonprim = backup_service_info_parseFromJSON(service_info); //nonprimitive
    }

    // backup->client_links
    cJSON *client_links = cJSON_GetObjectItemCaseSensitive(backupJSON, "client_links");
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
        backup_client_link_t *client_linksItem = backup_client_link_parseFromJSON(client_links_local_nonprimitive);

        list_addElement(client_linksList, client_linksItem);
    }
    }

    // backup->billing_details
    cJSON *billing_details = cJSON_GetObjectItemCaseSensitive(backupJSON, "billingDetails");
    if (cJSON_IsNull(billing_details)) {
        billing_details = NULL;
    }
    if (billing_details) { 
    billing_details_local_nonprim = backup_billing_details_parseFromJSON(billing_details); //nonprimitive
    }

    // backup->cust_currency
    cJSON *cust_currency = cJSON_GetObjectItemCaseSensitive(backupJSON, "custCurrency");
    if (cJSON_IsNull(cust_currency)) {
        cust_currency = NULL;
    }
    if (cust_currency) { 
    if(!cJSON_IsString(cust_currency) && !cJSON_IsNull(cust_currency))
    {
    goto end; //String
    }
    }

    // backup->cust_currency_symbol
    cJSON *cust_currency_symbol = cJSON_GetObjectItemCaseSensitive(backupJSON, "custCurrencySymbol");
    if (cJSON_IsNull(cust_currency_symbol)) {
        cust_currency_symbol = NULL;
    }
    if (cust_currency_symbol) { 
    if(!cJSON_IsString(cust_currency_symbol) && !cJSON_IsNull(cust_currency_symbol))
    {
    goto end; //String
    }
    }

    // backup->service_master
    cJSON *service_master = cJSON_GetObjectItemCaseSensitive(backupJSON, "serviceMaster");
    if (cJSON_IsNull(service_master)) {
        service_master = NULL;
    }
    if (service_master) { 
    service_master_local_nonprim = backup_service_master_parseFromJSON(service_master); //nonprimitive
    }

    // backup->package
    cJSON *package = cJSON_GetObjectItemCaseSensitive(backupJSON, "package");
    if (cJSON_IsNull(package)) {
        package = NULL;
    }
    if (package) { 
    if(!cJSON_IsString(package) && !cJSON_IsNull(package))
    {
    goto end; //String
    }
    }

    // backup->service_extra
    cJSON *service_extra = cJSON_GetObjectItemCaseSensitive(backupJSON, "serviceExtra");
    if (cJSON_IsNull(service_extra)) {
        service_extra = NULL;
    }
    if (service_extra) { 
    if(!cJSON_IsString(service_extra) && !cJSON_IsNull(service_extra))
    {
    goto end; //String
    }
    }

    // backup->extra_info_tables
    cJSON *extra_info_tables = cJSON_GetObjectItemCaseSensitive(backupJSON, "extraInfoTables");
    if (cJSON_IsNull(extra_info_tables)) {
        extra_info_tables = NULL;
    }
    if (extra_info_tables) { 
    extra_info_tables_local_nonprim = backup_extra_info_tables_parseFromJSON(extra_info_tables); //nonprimitive
    }


    if (cust_currency && !cJSON_IsNull(cust_currency)) cust_currency_local_str = strdup(cust_currency->valuestring);
    if (cust_currency_symbol && !cJSON_IsNull(cust_currency_symbol)) cust_currency_symbol_local_str = strdup(cust_currency_symbol->valuestring);
    if (package && !cJSON_IsNull(package)) package_local_str = strdup(package->valuestring);
    if (service_extra && !cJSON_IsNull(service_extra)) service_extra_local_str = strdup(service_extra->valuestring);

    backup_local_var = backup_create_internal (
        service_info ? service_info_local_nonprim : NULL,
        client_links ? client_linksList : NULL,
        billing_details ? billing_details_local_nonprim : NULL,
        cust_currency_local_str,
        cust_currency_symbol_local_str,
        service_master ? service_master_local_nonprim : NULL,
        package_local_str,
        service_extra_local_str,
        extra_info_tables ? extra_info_tables_local_nonprim : NULL
        );

    if (!backup_local_var) {
        goto end;
    }

    return backup_local_var;
end:
    if (service_info_local_nonprim) {
        backup_service_info_free(service_info_local_nonprim);
        service_info_local_nonprim = NULL;
    }
    if (client_linksList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, client_linksList) {
            backup_client_link_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(client_linksList);
        client_linksList = NULL;
    }
    if (billing_details_local_nonprim) {
        backup_billing_details_free(billing_details_local_nonprim);
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
        backup_service_master_free(service_master_local_nonprim);
        service_master_local_nonprim = NULL;
    }
    if (package_local_str) {
        free(package_local_str);
        package_local_str = NULL;
    }
    if (service_extra_local_str) {
        free(service_extra_local_str);
        service_extra_local_str = NULL;
    }
    if (extra_info_tables_local_nonprim) {
        backup_extra_info_tables_free(extra_info_tables_local_nonprim);
        extra_info_tables_local_nonprim = NULL;
    }
    return NULL;

}
