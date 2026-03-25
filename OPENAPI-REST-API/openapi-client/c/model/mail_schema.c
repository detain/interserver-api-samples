#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mail_schema.h"



static mail_schema_t *mail_schema_create_internal(
    mail_service_info_t *service_info,
    list_t *client_links,
    mail_billing_details_t *billing_details,
    char *cust_currency,
    char *cust_currency_symbol,
    char *package,
    mail_schema_extra_info_tables_t *extra_info_tables,
    mail_service_type_t *service_type,
    char *usage_count,
    list_t *service_extra
    ) {
    mail_schema_t *mail_schema_local_var = malloc(sizeof(mail_schema_t));
    if (!mail_schema_local_var) {
        return NULL;
    }
    memset(mail_schema_local_var, 0, sizeof(mail_schema_t));
    mail_schema_local_var->_library_owned = 1;
    mail_schema_local_var->service_info = service_info;
    mail_schema_local_var->client_links = client_links;
    mail_schema_local_var->billing_details = billing_details;
    mail_schema_local_var->cust_currency = cust_currency;
    mail_schema_local_var->cust_currency_symbol = cust_currency_symbol;
    mail_schema_local_var->package = package;
    mail_schema_local_var->extra_info_tables = extra_info_tables;
    mail_schema_local_var->service_type = service_type;
    mail_schema_local_var->usage_count = usage_count;
    mail_schema_local_var->service_extra = service_extra;
    return mail_schema_local_var;
}

__attribute__((deprecated)) mail_schema_t *mail_schema_create(
    mail_service_info_t *service_info,
    list_t *client_links,
    mail_billing_details_t *billing_details,
    char *cust_currency,
    char *cust_currency_symbol,
    char *package,
    mail_schema_extra_info_tables_t *extra_info_tables,
    mail_service_type_t *service_type,
    char *usage_count,
    list_t *service_extra
    ) {
    mail_schema_t *result = mail_schema_create_internal (
        service_info,
        client_links,
        billing_details,
        cust_currency,
        cust_currency_symbol,
        package,
        extra_info_tables,
        service_type,
        usage_count,
        service_extra
        );
    if (!result) {
    }
    return result;
}

void mail_schema_free(mail_schema_t *mail_schema) {
    if(NULL == mail_schema){
        return ;
    }
    if(mail_schema->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "mail_schema_free");
        return ;
    }
    listEntry_t *listEntry;
    if (mail_schema->service_info) {
        mail_service_info_free(mail_schema->service_info);
        mail_schema->service_info = NULL;
    }
    if (mail_schema->client_links) {
        list_ForEach(listEntry, mail_schema->client_links) {
            mail_client_link_free(listEntry->data);
        }
        list_freeList(mail_schema->client_links);
        mail_schema->client_links = NULL;
    }
    if (mail_schema->billing_details) {
        mail_billing_details_free(mail_schema->billing_details);
        mail_schema->billing_details = NULL;
    }
    if (mail_schema->cust_currency) {
        free(mail_schema->cust_currency);
        mail_schema->cust_currency = NULL;
    }
    if (mail_schema->cust_currency_symbol) {
        free(mail_schema->cust_currency_symbol);
        mail_schema->cust_currency_symbol = NULL;
    }
    if (mail_schema->package) {
        free(mail_schema->package);
        mail_schema->package = NULL;
    }
    if (mail_schema->extra_info_tables) {
        mail_schema_extra_info_tables_free(mail_schema->extra_info_tables);
        mail_schema->extra_info_tables = NULL;
    }
    if (mail_schema->service_type) {
        mail_service_type_free(mail_schema->service_type);
        mail_schema->service_type = NULL;
    }
    if (mail_schema->usage_count) {
        free(mail_schema->usage_count);
        mail_schema->usage_count = NULL;
    }
    if (mail_schema->service_extra) {
        list_ForEach(listEntry, mail_schema->service_extra) {
            free(listEntry->data);
        }
        list_freeList(mail_schema->service_extra);
        mail_schema->service_extra = NULL;
    }
    free(mail_schema);
}

cJSON *mail_schema_convertToJSON(mail_schema_t *mail_schema) {
    cJSON *item = cJSON_CreateObject();

    // mail_schema->service_info
    if (!mail_schema->service_info) {
        goto fail;
    }
    cJSON *service_info_local_JSON = mail_service_info_convertToJSON(mail_schema->service_info);
    if(service_info_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "serviceInfo", service_info_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // mail_schema->client_links
    if (!mail_schema->client_links) {
        goto fail;
    }
    cJSON *client_links = cJSON_AddArrayToObject(item, "client_links");
    if(client_links == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *client_linksListEntry;
    if (mail_schema->client_links) {
    list_ForEach(client_linksListEntry, mail_schema->client_links) {
    cJSON *itemLocal = mail_client_link_convertToJSON(client_linksListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(client_links, itemLocal);
    }
    }


    // mail_schema->billing_details
    if (!mail_schema->billing_details) {
        goto fail;
    }
    cJSON *billing_details_local_JSON = mail_billing_details_convertToJSON(mail_schema->billing_details);
    if(billing_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "billingDetails", billing_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // mail_schema->cust_currency
    if (!mail_schema->cust_currency) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "custCurrency", mail_schema->cust_currency) == NULL) {
    goto fail; //String
    }


    // mail_schema->cust_currency_symbol
    if (!mail_schema->cust_currency_symbol) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "custCurrencySymbol", mail_schema->cust_currency_symbol) == NULL) {
    goto fail; //String
    }


    // mail_schema->package
    if (!mail_schema->package) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "package", mail_schema->package) == NULL) {
    goto fail; //String
    }


    // mail_schema->extra_info_tables
    if (!mail_schema->extra_info_tables) {
        goto fail;
    }
    cJSON *extra_info_tables_local_JSON = mail_schema_extra_info_tables_convertToJSON(mail_schema->extra_info_tables);
    if(extra_info_tables_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "extraInfoTables", extra_info_tables_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // mail_schema->service_type
    if (!mail_schema->service_type) {
        goto fail;
    }
    cJSON *service_type_local_JSON = mail_service_type_convertToJSON(mail_schema->service_type);
    if(service_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "serviceType", service_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // mail_schema->usage_count
    if (!mail_schema->usage_count) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "usage_count", mail_schema->usage_count) == NULL) {
    goto fail; //String
    }


    // mail_schema->service_extra
    if(mail_schema->service_extra) {
    cJSON *service_extra = cJSON_AddArrayToObject(item, "serviceExtra");
    if(service_extra == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *service_extraListEntry;
    list_ForEach(service_extraListEntry, mail_schema->service_extra) {
    if(cJSON_AddStringToObject(service_extra, "", service_extraListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

mail_schema_t *mail_schema_parseFromJSON(cJSON *mail_schemaJSON){

    mail_schema_t *mail_schema_local_var = NULL;

    // define the local variable for mail_schema->service_info
    mail_service_info_t *service_info_local_nonprim = NULL;

    // define the local list for mail_schema->client_links
    list_t *client_linksList = NULL;

    // define the local variable for mail_schema->billing_details
    mail_billing_details_t *billing_details_local_nonprim = NULL;

    char *cust_currency_local_str = NULL;

    char *cust_currency_symbol_local_str = NULL;

    char *package_local_str = NULL;

    // define the local variable for mail_schema->extra_info_tables
    mail_schema_extra_info_tables_t *extra_info_tables_local_nonprim = NULL;

    // define the local variable for mail_schema->service_type
    mail_service_type_t *service_type_local_nonprim = NULL;

    char *usage_count_local_str = NULL;

    // define the local list for mail_schema->service_extra
    list_t *service_extraList = NULL;

    // mail_schema->service_info
    cJSON *service_info = cJSON_GetObjectItemCaseSensitive(mail_schemaJSON, "serviceInfo");
    if (cJSON_IsNull(service_info)) {
        service_info = NULL;
    }
    if (!service_info) {
        goto end;
    }

    
    service_info_local_nonprim = mail_service_info_parseFromJSON(service_info); //nonprimitive

    // mail_schema->client_links
    cJSON *client_links = cJSON_GetObjectItemCaseSensitive(mail_schemaJSON, "client_links");
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
        mail_client_link_t *client_linksItem = mail_client_link_parseFromJSON(client_links_local_nonprimitive);

        list_addElement(client_linksList, client_linksItem);
    }

    // mail_schema->billing_details
    cJSON *billing_details = cJSON_GetObjectItemCaseSensitive(mail_schemaJSON, "billingDetails");
    if (cJSON_IsNull(billing_details)) {
        billing_details = NULL;
    }
    if (!billing_details) {
        goto end;
    }

    
    billing_details_local_nonprim = mail_billing_details_parseFromJSON(billing_details); //nonprimitive

    // mail_schema->cust_currency
    cJSON *cust_currency = cJSON_GetObjectItemCaseSensitive(mail_schemaJSON, "custCurrency");
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

    // mail_schema->cust_currency_symbol
    cJSON *cust_currency_symbol = cJSON_GetObjectItemCaseSensitive(mail_schemaJSON, "custCurrencySymbol");
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

    // mail_schema->package
    cJSON *package = cJSON_GetObjectItemCaseSensitive(mail_schemaJSON, "package");
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

    // mail_schema->extra_info_tables
    cJSON *extra_info_tables = cJSON_GetObjectItemCaseSensitive(mail_schemaJSON, "extraInfoTables");
    if (cJSON_IsNull(extra_info_tables)) {
        extra_info_tables = NULL;
    }
    if (!extra_info_tables) {
        goto end;
    }

    
    extra_info_tables_local_nonprim = mail_schema_extra_info_tables_parseFromJSON(extra_info_tables); //nonprimitive

    // mail_schema->service_type
    cJSON *service_type = cJSON_GetObjectItemCaseSensitive(mail_schemaJSON, "serviceType");
    if (cJSON_IsNull(service_type)) {
        service_type = NULL;
    }
    if (!service_type) {
        goto end;
    }

    
    service_type_local_nonprim = mail_service_type_parseFromJSON(service_type); //nonprimitive

    // mail_schema->usage_count
    cJSON *usage_count = cJSON_GetObjectItemCaseSensitive(mail_schemaJSON, "usage_count");
    if (cJSON_IsNull(usage_count)) {
        usage_count = NULL;
    }
    if (!usage_count) {
        goto end;
    }

    
    if(!cJSON_IsString(usage_count))
    {
    goto end; //String
    }

    // mail_schema->service_extra
    cJSON *service_extra = cJSON_GetObjectItemCaseSensitive(mail_schemaJSON, "serviceExtra");
    if (cJSON_IsNull(service_extra)) {
        service_extra = NULL;
    }
    if (service_extra) { 
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
    }


    if (cust_currency && !cJSON_IsNull(cust_currency)) cust_currency_local_str = strdup(cust_currency->valuestring);
    if (cust_currency_symbol && !cJSON_IsNull(cust_currency_symbol)) cust_currency_symbol_local_str = strdup(cust_currency_symbol->valuestring);
    if (package && !cJSON_IsNull(package)) package_local_str = strdup(package->valuestring);
    if (usage_count && !cJSON_IsNull(usage_count)) usage_count_local_str = strdup(usage_count->valuestring);

    mail_schema_local_var = mail_schema_create_internal (
        service_info_local_nonprim,
        client_linksList,
        billing_details_local_nonprim,
        cust_currency_local_str,
        cust_currency_symbol_local_str,
        package_local_str,
        extra_info_tables_local_nonprim,
        service_type_local_nonprim,
        usage_count_local_str,
        service_extra ? service_extraList : NULL
        );

    if (!mail_schema_local_var) {
        goto end;
    }

    return mail_schema_local_var;
end:
    if (service_info_local_nonprim) {
        mail_service_info_free(service_info_local_nonprim);
        service_info_local_nonprim = NULL;
    }
    if (client_linksList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, client_linksList) {
            mail_client_link_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(client_linksList);
        client_linksList = NULL;
    }
    if (billing_details_local_nonprim) {
        mail_billing_details_free(billing_details_local_nonprim);
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
    if (extra_info_tables_local_nonprim) {
        mail_schema_extra_info_tables_free(extra_info_tables_local_nonprim);
        extra_info_tables_local_nonprim = NULL;
    }
    if (service_type_local_nonprim) {
        mail_service_type_free(service_type_local_nonprim);
        service_type_local_nonprim = NULL;
    }
    if (usage_count_local_str) {
        free(usage_count_local_str);
        usage_count_local_str = NULL;
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
    return NULL;

}
