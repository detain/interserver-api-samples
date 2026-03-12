#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "quickserver.h"



static quickserver_t *quickserver_create_internal(
    quickserver_service_info_t *service_info,
    list_t *client_links,
    quickserver_billing_details_t *billing_details,
    char *cust_currency,
    char *cust_currency_symbol,
    quickserver_service_master_t *service_master,
    char *package,
    char *os_template,
    quickserver_service_extra_t *service_extra,
    quickserver_extra_info_tables_t *extra_info_tables,
    char *cpu_graph_data,
    char *bandwidth_xaxis,
    char *bandwidth_yaxis,
    char *module,
    char *token,
    char *service_disk_used,
    char *service_disk_total,
    double disk_percentage,
    char *memory,
    char *hdd,
    list_t *service_overview_extra
    ) {
    quickserver_t *quickserver_local_var = malloc(sizeof(quickserver_t));
    if (!quickserver_local_var) {
        return NULL;
    }
    quickserver_local_var->service_info = service_info;
    quickserver_local_var->client_links = client_links;
    quickserver_local_var->billing_details = billing_details;
    quickserver_local_var->cust_currency = cust_currency;
    quickserver_local_var->cust_currency_symbol = cust_currency_symbol;
    quickserver_local_var->service_master = service_master;
    quickserver_local_var->package = package;
    quickserver_local_var->os_template = os_template;
    quickserver_local_var->service_extra = service_extra;
    quickserver_local_var->extra_info_tables = extra_info_tables;
    quickserver_local_var->cpu_graph_data = cpu_graph_data;
    quickserver_local_var->bandwidth_xaxis = bandwidth_xaxis;
    quickserver_local_var->bandwidth_yaxis = bandwidth_yaxis;
    quickserver_local_var->module = module;
    quickserver_local_var->token = token;
    quickserver_local_var->service_disk_used = service_disk_used;
    quickserver_local_var->service_disk_total = service_disk_total;
    quickserver_local_var->disk_percentage = disk_percentage;
    quickserver_local_var->memory = memory;
    quickserver_local_var->hdd = hdd;
    quickserver_local_var->service_overview_extra = service_overview_extra;

    quickserver_local_var->_library_owned = 1;
    return quickserver_local_var;
}

__attribute__((deprecated)) quickserver_t *quickserver_create(
    quickserver_service_info_t *service_info,
    list_t *client_links,
    quickserver_billing_details_t *billing_details,
    char *cust_currency,
    char *cust_currency_symbol,
    quickserver_service_master_t *service_master,
    char *package,
    char *os_template,
    quickserver_service_extra_t *service_extra,
    quickserver_extra_info_tables_t *extra_info_tables,
    char *cpu_graph_data,
    char *bandwidth_xaxis,
    char *bandwidth_yaxis,
    char *module,
    char *token,
    char *service_disk_used,
    char *service_disk_total,
    double disk_percentage,
    char *memory,
    char *hdd,
    list_t *service_overview_extra
    ) {
    return quickserver_create_internal (
        service_info,
        client_links,
        billing_details,
        cust_currency,
        cust_currency_symbol,
        service_master,
        package,
        os_template,
        service_extra,
        extra_info_tables,
        cpu_graph_data,
        bandwidth_xaxis,
        bandwidth_yaxis,
        module,
        token,
        service_disk_used,
        service_disk_total,
        disk_percentage,
        memory,
        hdd,
        service_overview_extra
        );
}

void quickserver_free(quickserver_t *quickserver) {
    if(NULL == quickserver){
        return ;
    }
    if(quickserver->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "quickserver_free");
        return ;
    }
    listEntry_t *listEntry;
    if (quickserver->service_info) {
        quickserver_service_info_free(quickserver->service_info);
        quickserver->service_info = NULL;
    }
    if (quickserver->client_links) {
        list_ForEach(listEntry, quickserver->client_links) {
            quickserver_client_link_free(listEntry->data);
        }
        list_freeList(quickserver->client_links);
        quickserver->client_links = NULL;
    }
    if (quickserver->billing_details) {
        quickserver_billing_details_free(quickserver->billing_details);
        quickserver->billing_details = NULL;
    }
    if (quickserver->cust_currency) {
        free(quickserver->cust_currency);
        quickserver->cust_currency = NULL;
    }
    if (quickserver->cust_currency_symbol) {
        free(quickserver->cust_currency_symbol);
        quickserver->cust_currency_symbol = NULL;
    }
    if (quickserver->service_master) {
        quickserver_service_master_free(quickserver->service_master);
        quickserver->service_master = NULL;
    }
    if (quickserver->package) {
        free(quickserver->package);
        quickserver->package = NULL;
    }
    if (quickserver->os_template) {
        free(quickserver->os_template);
        quickserver->os_template = NULL;
    }
    if (quickserver->service_extra) {
        quickserver_service_extra_free(quickserver->service_extra);
        quickserver->service_extra = NULL;
    }
    if (quickserver->extra_info_tables) {
        quickserver_extra_info_tables_free(quickserver->extra_info_tables);
        quickserver->extra_info_tables = NULL;
    }
    if (quickserver->cpu_graph_data) {
        free(quickserver->cpu_graph_data);
        quickserver->cpu_graph_data = NULL;
    }
    if (quickserver->bandwidth_xaxis) {
        free(quickserver->bandwidth_xaxis);
        quickserver->bandwidth_xaxis = NULL;
    }
    if (quickserver->bandwidth_yaxis) {
        free(quickserver->bandwidth_yaxis);
        quickserver->bandwidth_yaxis = NULL;
    }
    if (quickserver->module) {
        free(quickserver->module);
        quickserver->module = NULL;
    }
    if (quickserver->token) {
        free(quickserver->token);
        quickserver->token = NULL;
    }
    if (quickserver->service_disk_used) {
        free(quickserver->service_disk_used);
        quickserver->service_disk_used = NULL;
    }
    if (quickserver->service_disk_total) {
        free(quickserver->service_disk_total);
        quickserver->service_disk_total = NULL;
    }
    if (quickserver->memory) {
        free(quickserver->memory);
        quickserver->memory = NULL;
    }
    if (quickserver->hdd) {
        free(quickserver->hdd);
        quickserver->hdd = NULL;
    }
    if (quickserver->service_overview_extra) {
        list_ForEach(listEntry, quickserver->service_overview_extra) {
            free(listEntry->data);
        }
        list_freeList(quickserver->service_overview_extra);
        quickserver->service_overview_extra = NULL;
    }
    free(quickserver);
}

cJSON *quickserver_convertToJSON(quickserver_t *quickserver) {
    cJSON *item = cJSON_CreateObject();

    // quickserver->service_info
    if (!quickserver->service_info) {
        goto fail;
    }
    cJSON *service_info_local_JSON = quickserver_service_info_convertToJSON(quickserver->service_info);
    if(service_info_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "serviceInfo", service_info_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // quickserver->client_links
    if (!quickserver->client_links) {
        goto fail;
    }
    cJSON *client_links = cJSON_AddArrayToObject(item, "client_links");
    if(client_links == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *client_linksListEntry;
    if (quickserver->client_links) {
    list_ForEach(client_linksListEntry, quickserver->client_links) {
    cJSON *itemLocal = quickserver_client_link_convertToJSON(client_linksListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(client_links, itemLocal);
    }
    }


    // quickserver->billing_details
    if (!quickserver->billing_details) {
        goto fail;
    }
    cJSON *billing_details_local_JSON = quickserver_billing_details_convertToJSON(quickserver->billing_details);
    if(billing_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "billingDetails", billing_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // quickserver->cust_currency
    if (!quickserver->cust_currency) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "custCurrency", quickserver->cust_currency) == NULL) {
    goto fail; //String
    }


    // quickserver->cust_currency_symbol
    if (!quickserver->cust_currency_symbol) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "custCurrencySymbol", quickserver->cust_currency_symbol) == NULL) {
    goto fail; //String
    }


    // quickserver->service_master
    if (!quickserver->service_master) {
        goto fail;
    }
    cJSON *service_master_local_JSON = quickserver_service_master_convertToJSON(quickserver->service_master);
    if(service_master_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "serviceMaster", service_master_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // quickserver->package
    if (!quickserver->package) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "package", quickserver->package) == NULL) {
    goto fail; //String
    }


    // quickserver->os_template
    if (!quickserver->os_template) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "os_template", quickserver->os_template) == NULL) {
    goto fail; //String
    }


    // quickserver->service_extra
    if (!quickserver->service_extra) {
        goto fail;
    }
    cJSON *service_extra_local_JSON = quickserver_service_extra_convertToJSON(quickserver->service_extra);
    if(service_extra_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "serviceExtra", service_extra_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // quickserver->extra_info_tables
    if (!quickserver->extra_info_tables) {
        goto fail;
    }
    cJSON *extra_info_tables_local_JSON = quickserver_extra_info_tables_convertToJSON(quickserver->extra_info_tables);
    if(extra_info_tables_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "extraInfoTables", extra_info_tables_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // quickserver->cpu_graph_data
    if (!quickserver->cpu_graph_data) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "cpu_graph_data", quickserver->cpu_graph_data) == NULL) {
    goto fail; //String
    }


    // quickserver->bandwidth_xaxis
    if (!quickserver->bandwidth_xaxis) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "bandwidth_xaxis", quickserver->bandwidth_xaxis) == NULL) {
    goto fail; //String
    }


    // quickserver->bandwidth_yaxis
    if (!quickserver->bandwidth_yaxis) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "bandwidth_yaxis", quickserver->bandwidth_yaxis) == NULL) {
    goto fail; //String
    }


    // quickserver->module
    if (!quickserver->module) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "module", quickserver->module) == NULL) {
    goto fail; //String
    }


    // quickserver->token
    if (!quickserver->token) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "token", quickserver->token) == NULL) {
    goto fail; //String
    }


    // quickserver->service_disk_used
    if (!quickserver->service_disk_used) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "service_disk_used", quickserver->service_disk_used) == NULL) {
    goto fail; //String
    }


    // quickserver->service_disk_total
    if (!quickserver->service_disk_total) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "service_disk_total", quickserver->service_disk_total) == NULL) {
    goto fail; //String
    }


    // quickserver->disk_percentage
    if (!quickserver->disk_percentage) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "disk_percentage", quickserver->disk_percentage) == NULL) {
    goto fail; //Numeric
    }


    // quickserver->memory
    if (!quickserver->memory) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "memory", quickserver->memory) == NULL) {
    goto fail; //String
    }


    // quickserver->hdd
    if (!quickserver->hdd) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "hdd", quickserver->hdd) == NULL) {
    goto fail; //String
    }


    // quickserver->service_overview_extra
    if (!quickserver->service_overview_extra) {
        goto fail;
    }
    cJSON *service_overview_extra = cJSON_AddArrayToObject(item, "service_overview_extra");
    if(service_overview_extra == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *service_overview_extraListEntry;
    list_ForEach(service_overview_extraListEntry, quickserver->service_overview_extra) {
    if(cJSON_AddStringToObject(service_overview_extra, "", service_overview_extraListEntry->data) == NULL)
    {
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

quickserver_t *quickserver_parseFromJSON(cJSON *quickserverJSON){

    quickserver_t *quickserver_local_var = NULL;

    // define the local variable for quickserver->service_info
    quickserver_service_info_t *service_info_local_nonprim = NULL;

    // define the local list for quickserver->client_links
    list_t *client_linksList = NULL;

    // define the local variable for quickserver->billing_details
    quickserver_billing_details_t *billing_details_local_nonprim = NULL;

    // define the local variable for quickserver->service_master
    quickserver_service_master_t *service_master_local_nonprim = NULL;

    // define the local variable for quickserver->service_extra
    quickserver_service_extra_t *service_extra_local_nonprim = NULL;

    // define the local variable for quickserver->extra_info_tables
    quickserver_extra_info_tables_t *extra_info_tables_local_nonprim = NULL;

    // define the local list for quickserver->service_overview_extra
    list_t *service_overview_extraList = NULL;

    // quickserver->service_info
    cJSON *service_info = cJSON_GetObjectItemCaseSensitive(quickserverJSON, "serviceInfo");
    if (cJSON_IsNull(service_info)) {
        service_info = NULL;
    }
    if (!service_info) {
        goto end;
    }

    
    service_info_local_nonprim = quickserver_service_info_parseFromJSON(service_info); //nonprimitive

    // quickserver->client_links
    cJSON *client_links = cJSON_GetObjectItemCaseSensitive(quickserverJSON, "client_links");
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
        quickserver_client_link_t *client_linksItem = quickserver_client_link_parseFromJSON(client_links_local_nonprimitive);

        list_addElement(client_linksList, client_linksItem);
    }

    // quickserver->billing_details
    cJSON *billing_details = cJSON_GetObjectItemCaseSensitive(quickserverJSON, "billingDetails");
    if (cJSON_IsNull(billing_details)) {
        billing_details = NULL;
    }
    if (!billing_details) {
        goto end;
    }

    
    billing_details_local_nonprim = quickserver_billing_details_parseFromJSON(billing_details); //nonprimitive

    // quickserver->cust_currency
    cJSON *cust_currency = cJSON_GetObjectItemCaseSensitive(quickserverJSON, "custCurrency");
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

    // quickserver->cust_currency_symbol
    cJSON *cust_currency_symbol = cJSON_GetObjectItemCaseSensitive(quickserverJSON, "custCurrencySymbol");
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

    // quickserver->service_master
    cJSON *service_master = cJSON_GetObjectItemCaseSensitive(quickserverJSON, "serviceMaster");
    if (cJSON_IsNull(service_master)) {
        service_master = NULL;
    }
    if (!service_master) {
        goto end;
    }

    
    service_master_local_nonprim = quickserver_service_master_parseFromJSON(service_master); //nonprimitive

    // quickserver->package
    cJSON *package = cJSON_GetObjectItemCaseSensitive(quickserverJSON, "package");
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

    // quickserver->os_template
    cJSON *os_template = cJSON_GetObjectItemCaseSensitive(quickserverJSON, "os_template");
    if (cJSON_IsNull(os_template)) {
        os_template = NULL;
    }
    if (!os_template) {
        goto end;
    }

    
    if(!cJSON_IsString(os_template))
    {
    goto end; //String
    }

    // quickserver->service_extra
    cJSON *service_extra = cJSON_GetObjectItemCaseSensitive(quickserverJSON, "serviceExtra");
    if (cJSON_IsNull(service_extra)) {
        service_extra = NULL;
    }
    if (!service_extra) {
        goto end;
    }

    
    service_extra_local_nonprim = quickserver_service_extra_parseFromJSON(service_extra); //nonprimitive

    // quickserver->extra_info_tables
    cJSON *extra_info_tables = cJSON_GetObjectItemCaseSensitive(quickserverJSON, "extraInfoTables");
    if (cJSON_IsNull(extra_info_tables)) {
        extra_info_tables = NULL;
    }
    if (!extra_info_tables) {
        goto end;
    }

    
    extra_info_tables_local_nonprim = quickserver_extra_info_tables_parseFromJSON(extra_info_tables); //nonprimitive

    // quickserver->cpu_graph_data
    cJSON *cpu_graph_data = cJSON_GetObjectItemCaseSensitive(quickserverJSON, "cpu_graph_data");
    if (cJSON_IsNull(cpu_graph_data)) {
        cpu_graph_data = NULL;
    }
    if (!cpu_graph_data) {
        goto end;
    }

    
    if(!cJSON_IsString(cpu_graph_data))
    {
    goto end; //String
    }

    // quickserver->bandwidth_xaxis
    cJSON *bandwidth_xaxis = cJSON_GetObjectItemCaseSensitive(quickserverJSON, "bandwidth_xaxis");
    if (cJSON_IsNull(bandwidth_xaxis)) {
        bandwidth_xaxis = NULL;
    }
    if (!bandwidth_xaxis) {
        goto end;
    }

    
    if(!cJSON_IsString(bandwidth_xaxis))
    {
    goto end; //String
    }

    // quickserver->bandwidth_yaxis
    cJSON *bandwidth_yaxis = cJSON_GetObjectItemCaseSensitive(quickserverJSON, "bandwidth_yaxis");
    if (cJSON_IsNull(bandwidth_yaxis)) {
        bandwidth_yaxis = NULL;
    }
    if (!bandwidth_yaxis) {
        goto end;
    }

    
    if(!cJSON_IsString(bandwidth_yaxis))
    {
    goto end; //String
    }

    // quickserver->module
    cJSON *module = cJSON_GetObjectItemCaseSensitive(quickserverJSON, "module");
    if (cJSON_IsNull(module)) {
        module = NULL;
    }
    if (!module) {
        goto end;
    }

    
    if(!cJSON_IsString(module))
    {
    goto end; //String
    }

    // quickserver->token
    cJSON *token = cJSON_GetObjectItemCaseSensitive(quickserverJSON, "token");
    if (cJSON_IsNull(token)) {
        token = NULL;
    }
    if (!token) {
        goto end;
    }

    
    if(!cJSON_IsString(token))
    {
    goto end; //String
    }

    // quickserver->service_disk_used
    cJSON *service_disk_used = cJSON_GetObjectItemCaseSensitive(quickserverJSON, "service_disk_used");
    if (cJSON_IsNull(service_disk_used)) {
        service_disk_used = NULL;
    }
    if (!service_disk_used) {
        goto end;
    }

    
    if(!cJSON_IsString(service_disk_used))
    {
    goto end; //String
    }

    // quickserver->service_disk_total
    cJSON *service_disk_total = cJSON_GetObjectItemCaseSensitive(quickserverJSON, "service_disk_total");
    if (cJSON_IsNull(service_disk_total)) {
        service_disk_total = NULL;
    }
    if (!service_disk_total) {
        goto end;
    }

    
    if(!cJSON_IsString(service_disk_total))
    {
    goto end; //String
    }

    // quickserver->disk_percentage
    cJSON *disk_percentage = cJSON_GetObjectItemCaseSensitive(quickserverJSON, "disk_percentage");
    if (cJSON_IsNull(disk_percentage)) {
        disk_percentage = NULL;
    }
    if (!disk_percentage) {
        goto end;
    }

    
    if(!cJSON_IsNumber(disk_percentage))
    {
    goto end; //Numeric
    }

    // quickserver->memory
    cJSON *memory = cJSON_GetObjectItemCaseSensitive(quickserverJSON, "memory");
    if (cJSON_IsNull(memory)) {
        memory = NULL;
    }
    if (!memory) {
        goto end;
    }

    
    if(!cJSON_IsString(memory))
    {
    goto end; //String
    }

    // quickserver->hdd
    cJSON *hdd = cJSON_GetObjectItemCaseSensitive(quickserverJSON, "hdd");
    if (cJSON_IsNull(hdd)) {
        hdd = NULL;
    }
    if (!hdd) {
        goto end;
    }

    
    if(!cJSON_IsString(hdd))
    {
    goto end; //String
    }

    // quickserver->service_overview_extra
    cJSON *service_overview_extra = cJSON_GetObjectItemCaseSensitive(quickserverJSON, "service_overview_extra");
    if (cJSON_IsNull(service_overview_extra)) {
        service_overview_extra = NULL;
    }
    if (!service_overview_extra) {
        goto end;
    }

    
    cJSON *service_overview_extra_local = NULL;
    if(!cJSON_IsArray(service_overview_extra)) {
        goto end;//primitive container
    }
    service_overview_extraList = list_createList();

    cJSON_ArrayForEach(service_overview_extra_local, service_overview_extra)
    {
        if(!cJSON_IsString(service_overview_extra_local))
        {
            goto end;
        }
        list_addElement(service_overview_extraList , strdup(service_overview_extra_local->valuestring));
    }


    quickserver_local_var = quickserver_create_internal (
        service_info_local_nonprim,
        client_linksList,
        billing_details_local_nonprim,
        strdup(cust_currency->valuestring),
        strdup(cust_currency_symbol->valuestring),
        service_master_local_nonprim,
        strdup(package->valuestring),
        strdup(os_template->valuestring),
        service_extra_local_nonprim,
        extra_info_tables_local_nonprim,
        strdup(cpu_graph_data->valuestring),
        strdup(bandwidth_xaxis->valuestring),
        strdup(bandwidth_yaxis->valuestring),
        strdup(module->valuestring),
        strdup(token->valuestring),
        strdup(service_disk_used->valuestring),
        strdup(service_disk_total->valuestring),
        disk_percentage->valuedouble,
        strdup(memory->valuestring),
        strdup(hdd->valuestring),
        service_overview_extraList
        );

    return quickserver_local_var;
end:
    if (service_info_local_nonprim) {
        quickserver_service_info_free(service_info_local_nonprim);
        service_info_local_nonprim = NULL;
    }
    if (client_linksList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, client_linksList) {
            quickserver_client_link_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(client_linksList);
        client_linksList = NULL;
    }
    if (billing_details_local_nonprim) {
        quickserver_billing_details_free(billing_details_local_nonprim);
        billing_details_local_nonprim = NULL;
    }
    if (service_master_local_nonprim) {
        quickserver_service_master_free(service_master_local_nonprim);
        service_master_local_nonprim = NULL;
    }
    if (service_extra_local_nonprim) {
        quickserver_service_extra_free(service_extra_local_nonprim);
        service_extra_local_nonprim = NULL;
    }
    if (extra_info_tables_local_nonprim) {
        quickserver_extra_info_tables_free(extra_info_tables_local_nonprim);
        extra_info_tables_local_nonprim = NULL;
    }
    if (service_overview_extraList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, service_overview_extraList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(service_overview_extraList);
        service_overview_extraList = NULL;
    }
    return NULL;

}
