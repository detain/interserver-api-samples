#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server_order_get_response.h"



static server_order_get_response_t *server_order_get_response_create_internal(
    form_values_t *form_values,
    config_ids_t *config_ids,
    int cpu,
    list_t* cpu_li,
    config_lists_t *config_li,
    int frequency,
    char *currency,
    char *country,
    char *step,
    list_t* field_label,
    list_t* cpu_cores,
    char *currency_symbol,
    int custid,
    char *ima,
    list_t *regions,
    list_t *asset_servers,
    list_t *buy_it_servers,
    char *display_showmore,
    double cust_discount
    ) {
    server_order_get_response_t *server_order_get_response_local_var = malloc(sizeof(server_order_get_response_t));
    if (!server_order_get_response_local_var) {
        return NULL;
    }
    server_order_get_response_local_var->form_values = form_values;
    server_order_get_response_local_var->config_ids = config_ids;
    server_order_get_response_local_var->cpu = cpu;
    server_order_get_response_local_var->cpu_li = cpu_li;
    server_order_get_response_local_var->config_li = config_li;
    server_order_get_response_local_var->frequency = frequency;
    server_order_get_response_local_var->currency = currency;
    server_order_get_response_local_var->country = country;
    server_order_get_response_local_var->step = step;
    server_order_get_response_local_var->field_label = field_label;
    server_order_get_response_local_var->cpu_cores = cpu_cores;
    server_order_get_response_local_var->currency_symbol = currency_symbol;
    server_order_get_response_local_var->custid = custid;
    server_order_get_response_local_var->ima = ima;
    server_order_get_response_local_var->regions = regions;
    server_order_get_response_local_var->asset_servers = asset_servers;
    server_order_get_response_local_var->buy_it_servers = buy_it_servers;
    server_order_get_response_local_var->display_showmore = display_showmore;
    server_order_get_response_local_var->cust_discount = cust_discount;

    server_order_get_response_local_var->_library_owned = 1;
    return server_order_get_response_local_var;
}

__attribute__((deprecated)) server_order_get_response_t *server_order_get_response_create(
    form_values_t *form_values,
    config_ids_t *config_ids,
    int cpu,
    list_t* cpu_li,
    config_lists_t *config_li,
    int frequency,
    char *currency,
    char *country,
    char *step,
    list_t* field_label,
    list_t* cpu_cores,
    char *currency_symbol,
    int custid,
    char *ima,
    list_t *regions,
    list_t *asset_servers,
    list_t *buy_it_servers,
    char *display_showmore,
    double cust_discount
    ) {
    return server_order_get_response_create_internal (
        form_values,
        config_ids,
        cpu,
        cpu_li,
        config_li,
        frequency,
        currency,
        country,
        step,
        field_label,
        cpu_cores,
        currency_symbol,
        custid,
        ima,
        regions,
        asset_servers,
        buy_it_servers,
        display_showmore,
        cust_discount
        );
}

void server_order_get_response_free(server_order_get_response_t *server_order_get_response) {
    if(NULL == server_order_get_response){
        return ;
    }
    if(server_order_get_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "server_order_get_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (server_order_get_response->form_values) {
        form_values_free(server_order_get_response->form_values);
        server_order_get_response->form_values = NULL;
    }
    if (server_order_get_response->config_ids) {
        config_ids_free(server_order_get_response->config_ids);
        server_order_get_response->config_ids = NULL;
    }
    if (server_order_get_response->cpu_li) {
        list_ForEach(listEntry, server_order_get_response->cpu_li) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(server_order_get_response->cpu_li);
        server_order_get_response->cpu_li = NULL;
    }
    if (server_order_get_response->config_li) {
        config_lists_free(server_order_get_response->config_li);
        server_order_get_response->config_li = NULL;
    }
    if (server_order_get_response->currency) {
        free(server_order_get_response->currency);
        server_order_get_response->currency = NULL;
    }
    if (server_order_get_response->country) {
        free(server_order_get_response->country);
        server_order_get_response->country = NULL;
    }
    if (server_order_get_response->step) {
        free(server_order_get_response->step);
        server_order_get_response->step = NULL;
    }
    if (server_order_get_response->field_label) {
        list_ForEach(listEntry, server_order_get_response->field_label) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(server_order_get_response->field_label);
        server_order_get_response->field_label = NULL;
    }
    if (server_order_get_response->cpu_cores) {
        list_ForEach(listEntry, server_order_get_response->cpu_cores) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(server_order_get_response->cpu_cores);
        server_order_get_response->cpu_cores = NULL;
    }
    if (server_order_get_response->currency_symbol) {
        free(server_order_get_response->currency_symbol);
        server_order_get_response->currency_symbol = NULL;
    }
    if (server_order_get_response->ima) {
        free(server_order_get_response->ima);
        server_order_get_response->ima = NULL;
    }
    if (server_order_get_response->regions) {
        list_ForEach(listEntry, server_order_get_response->regions) {
            region_free(listEntry->data);
        }
        list_freeList(server_order_get_response->regions);
        server_order_get_response->regions = NULL;
    }
    if (server_order_get_response->asset_servers) {
        list_ForEach(listEntry, server_order_get_response->asset_servers) {
            asset_server_free(listEntry->data);
        }
        list_freeList(server_order_get_response->asset_servers);
        server_order_get_response->asset_servers = NULL;
    }
    if (server_order_get_response->buy_it_servers) {
        list_ForEach(listEntry, server_order_get_response->buy_it_servers) {
            object_free(listEntry->data);
        }
        list_freeList(server_order_get_response->buy_it_servers);
        server_order_get_response->buy_it_servers = NULL;
    }
    if (server_order_get_response->display_showmore) {
        free(server_order_get_response->display_showmore);
        server_order_get_response->display_showmore = NULL;
    }
    free(server_order_get_response);
}

cJSON *server_order_get_response_convertToJSON(server_order_get_response_t *server_order_get_response) {
    cJSON *item = cJSON_CreateObject();

    // server_order_get_response->form_values
    if (!server_order_get_response->form_values) {
        goto fail;
    }
    cJSON *form_values_local_JSON = form_values_convertToJSON(server_order_get_response->form_values);
    if(form_values_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "form_values", form_values_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // server_order_get_response->config_ids
    if (!server_order_get_response->config_ids) {
        goto fail;
    }
    cJSON *config_ids_local_JSON = config_ids_convertToJSON(server_order_get_response->config_ids);
    if(config_ids_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "config_ids", config_ids_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // server_order_get_response->cpu
    if (!server_order_get_response->cpu) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "cpu", server_order_get_response->cpu) == NULL) {
    goto fail; //Numeric
    }


    // server_order_get_response->cpu_li
    if (!server_order_get_response->cpu_li) {
        goto fail;
    }
    cJSON *cpu_li = cJSON_AddObjectToObject(item, "cpu_li");
    if(cpu_li == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = cpu_li;
    listEntry_t *cpu_liListEntry;
    if (server_order_get_response->cpu_li) {
    list_ForEach(cpu_liListEntry, server_order_get_response->cpu_li) {
        keyValuePair_t *localKeyValue = cpu_liListEntry->data;
    }
    }


    // server_order_get_response->config_li
    if (!server_order_get_response->config_li) {
        goto fail;
    }
    cJSON *config_li_local_JSON = config_lists_convertToJSON(server_order_get_response->config_li);
    if(config_li_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "config_li", config_li_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // server_order_get_response->frequency
    if (!server_order_get_response->frequency) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "frequency", server_order_get_response->frequency) == NULL) {
    goto fail; //Numeric
    }


    // server_order_get_response->currency
    if (!server_order_get_response->currency) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "currency", server_order_get_response->currency) == NULL) {
    goto fail; //String
    }


    // server_order_get_response->country
    if (!server_order_get_response->country) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "country", server_order_get_response->country) == NULL) {
    goto fail; //String
    }


    // server_order_get_response->step
    if (!server_order_get_response->step) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "step", server_order_get_response->step) == NULL) {
    goto fail; //String
    }


    // server_order_get_response->field_label
    if(server_order_get_response->field_label) {
    cJSON *field_label = cJSON_AddObjectToObject(item, "field_label");
    if(field_label == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = field_label;
    listEntry_t *field_labelListEntry;
    if (server_order_get_response->field_label) {
    list_ForEach(field_labelListEntry, server_order_get_response->field_label) {
        keyValuePair_t *localKeyValue = field_labelListEntry->data;
    }
    }
    }


    // server_order_get_response->cpu_cores
    if(server_order_get_response->cpu_cores) {
    cJSON *cpu_cores = cJSON_AddObjectToObject(item, "cpu_cores");
    if(cpu_cores == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = cpu_cores;
    listEntry_t *cpu_coresListEntry;
    if (server_order_get_response->cpu_cores) {
    list_ForEach(cpu_coresListEntry, server_order_get_response->cpu_cores) {
        keyValuePair_t *localKeyValue = cpu_coresListEntry->data;
    }
    }
    }


    // server_order_get_response->currency_symbol
    if(server_order_get_response->currency_symbol) {
    if(cJSON_AddStringToObject(item, "currencySymbol", server_order_get_response->currency_symbol) == NULL) {
    goto fail; //String
    }
    }


    // server_order_get_response->custid
    if(server_order_get_response->custid) {
    if(cJSON_AddNumberToObject(item, "custid", server_order_get_response->custid) == NULL) {
    goto fail; //Numeric
    }
    }


    // server_order_get_response->ima
    if(server_order_get_response->ima) {
    if(cJSON_AddStringToObject(item, "ima", server_order_get_response->ima) == NULL) {
    goto fail; //String
    }
    }


    // server_order_get_response->regions
    if(server_order_get_response->regions) {
    cJSON *regions = cJSON_AddArrayToObject(item, "regions");
    if(regions == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *regionsListEntry;
    if (server_order_get_response->regions) {
    list_ForEach(regionsListEntry, server_order_get_response->regions) {
    cJSON *itemLocal = region_convertToJSON(regionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(regions, itemLocal);
    }
    }
    }


    // server_order_get_response->asset_servers
    if(server_order_get_response->asset_servers) {
    cJSON *asset_servers = cJSON_AddArrayToObject(item, "asset_servers");
    if(asset_servers == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *asset_serversListEntry;
    if (server_order_get_response->asset_servers) {
    list_ForEach(asset_serversListEntry, server_order_get_response->asset_servers) {
    cJSON *itemLocal = asset_server_convertToJSON(asset_serversListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(asset_servers, itemLocal);
    }
    }
    }


    // server_order_get_response->buy_it_servers
    if(server_order_get_response->buy_it_servers) {
    cJSON *buy_it_servers = cJSON_AddArrayToObject(item, "buy_it_servers");
    if(buy_it_servers == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *buy_it_serversListEntry;
    if (server_order_get_response->buy_it_servers) {
    list_ForEach(buy_it_serversListEntry, server_order_get_response->buy_it_servers) {
    cJSON *itemLocal = object_convertToJSON(buy_it_serversListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(buy_it_servers, itemLocal);
    }
    }
    }


    // server_order_get_response->display_showmore
    if(server_order_get_response->display_showmore) {
    if(cJSON_AddStringToObject(item, "display_showmore", server_order_get_response->display_showmore) == NULL) {
    goto fail; //String
    }
    }


    // server_order_get_response->cust_discount
    if(server_order_get_response->cust_discount) {
    if(cJSON_AddNumberToObject(item, "cust_discount", server_order_get_response->cust_discount) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

server_order_get_response_t *server_order_get_response_parseFromJSON(cJSON *server_order_get_responseJSON){

    server_order_get_response_t *server_order_get_response_local_var = NULL;

    // define the local variable for server_order_get_response->form_values
    form_values_t *form_values_local_nonprim = NULL;

    // define the local variable for server_order_get_response->config_ids
    config_ids_t *config_ids_local_nonprim = NULL;

    // define the local map for server_order_get_response->cpu_li
    list_t *cpu_liList = NULL;

    // define the local variable for server_order_get_response->config_li
    config_lists_t *config_li_local_nonprim = NULL;

    // define the local map for server_order_get_response->field_label
    list_t *field_labelList = NULL;

    // define the local map for server_order_get_response->cpu_cores
    list_t *cpu_coresList = NULL;

    // define the local list for server_order_get_response->regions
    list_t *regionsList = NULL;

    // define the local list for server_order_get_response->asset_servers
    list_t *asset_serversList = NULL;

    // define the local list for server_order_get_response->buy_it_servers
    list_t *buy_it_serversList = NULL;

    // server_order_get_response->form_values
    cJSON *form_values = cJSON_GetObjectItemCaseSensitive(server_order_get_responseJSON, "form_values");
    if (cJSON_IsNull(form_values)) {
        form_values = NULL;
    }
    if (!form_values) {
        goto end;
    }

    
    form_values_local_nonprim = form_values_parseFromJSON(form_values); //nonprimitive

    // server_order_get_response->config_ids
    cJSON *config_ids = cJSON_GetObjectItemCaseSensitive(server_order_get_responseJSON, "config_ids");
    if (cJSON_IsNull(config_ids)) {
        config_ids = NULL;
    }
    if (!config_ids) {
        goto end;
    }

    
    config_ids_local_nonprim = config_ids_parseFromJSON(config_ids); //nonprimitive

    // server_order_get_response->cpu
    cJSON *cpu = cJSON_GetObjectItemCaseSensitive(server_order_get_responseJSON, "cpu");
    if (cJSON_IsNull(cpu)) {
        cpu = NULL;
    }
    if (!cpu) {
        goto end;
    }

    
    if(!cJSON_IsNumber(cpu))
    {
    goto end; //Numeric
    }

    // server_order_get_response->cpu_li
    cJSON *cpu_li = cJSON_GetObjectItemCaseSensitive(server_order_get_responseJSON, "cpu_li");
    if (cJSON_IsNull(cpu_li)) {
        cpu_li = NULL;
    }
    if (!cpu_li) {
        goto end;
    }

    

    // The data type of the elements in server_order_get_response->cpu_li is currently not supported.


    // server_order_get_response->config_li
    cJSON *config_li = cJSON_GetObjectItemCaseSensitive(server_order_get_responseJSON, "config_li");
    if (cJSON_IsNull(config_li)) {
        config_li = NULL;
    }
    if (!config_li) {
        goto end;
    }

    
    config_li_local_nonprim = config_lists_parseFromJSON(config_li); //nonprimitive

    // server_order_get_response->frequency
    cJSON *frequency = cJSON_GetObjectItemCaseSensitive(server_order_get_responseJSON, "frequency");
    if (cJSON_IsNull(frequency)) {
        frequency = NULL;
    }
    if (!frequency) {
        goto end;
    }

    
    if(!cJSON_IsNumber(frequency))
    {
    goto end; //Numeric
    }

    // server_order_get_response->currency
    cJSON *currency = cJSON_GetObjectItemCaseSensitive(server_order_get_responseJSON, "currency");
    if (cJSON_IsNull(currency)) {
        currency = NULL;
    }
    if (!currency) {
        goto end;
    }

    
    if(!cJSON_IsString(currency))
    {
    goto end; //String
    }

    // server_order_get_response->country
    cJSON *country = cJSON_GetObjectItemCaseSensitive(server_order_get_responseJSON, "country");
    if (cJSON_IsNull(country)) {
        country = NULL;
    }
    if (!country) {
        goto end;
    }

    
    if(!cJSON_IsString(country))
    {
    goto end; //String
    }

    // server_order_get_response->step
    cJSON *step = cJSON_GetObjectItemCaseSensitive(server_order_get_responseJSON, "step");
    if (cJSON_IsNull(step)) {
        step = NULL;
    }
    if (!step) {
        goto end;
    }

    
    if(!cJSON_IsString(step))
    {
    goto end; //String
    }

    // server_order_get_response->field_label
    cJSON *field_label = cJSON_GetObjectItemCaseSensitive(server_order_get_responseJSON, "field_label");
    if (cJSON_IsNull(field_label)) {
        field_label = NULL;
    }
    if (field_label) { 

    // The data type of the elements in server_order_get_response->field_label is currently not supported.

    }

    // server_order_get_response->cpu_cores
    cJSON *cpu_cores = cJSON_GetObjectItemCaseSensitive(server_order_get_responseJSON, "cpu_cores");
    if (cJSON_IsNull(cpu_cores)) {
        cpu_cores = NULL;
    }
    if (cpu_cores) { 
    cJSON *cpu_cores_local_map = NULL;
    if(!cJSON_IsObject(cpu_cores) && !cJSON_IsNull(cpu_cores))
    {
        goto end;//primitive map container
    }
    if(cJSON_IsObject(cpu_cores))
    {
        cpu_coresList = list_createList();
        keyValuePair_t *localMapKeyPair;
        cJSON_ArrayForEach(cpu_cores_local_map, cpu_cores)
        {
            cJSON *localMapObject = cpu_cores_local_map;
            list_addElement(cpu_coresList , localMapKeyPair);
        }
    }
    }

    // server_order_get_response->currency_symbol
    cJSON *currency_symbol = cJSON_GetObjectItemCaseSensitive(server_order_get_responseJSON, "currencySymbol");
    if (cJSON_IsNull(currency_symbol)) {
        currency_symbol = NULL;
    }
    if (currency_symbol) { 
    if(!cJSON_IsString(currency_symbol) && !cJSON_IsNull(currency_symbol))
    {
    goto end; //String
    }
    }

    // server_order_get_response->custid
    cJSON *custid = cJSON_GetObjectItemCaseSensitive(server_order_get_responseJSON, "custid");
    if (cJSON_IsNull(custid)) {
        custid = NULL;
    }
    if (custid) { 
    if(!cJSON_IsNumber(custid))
    {
    goto end; //Numeric
    }
    }

    // server_order_get_response->ima
    cJSON *ima = cJSON_GetObjectItemCaseSensitive(server_order_get_responseJSON, "ima");
    if (cJSON_IsNull(ima)) {
        ima = NULL;
    }
    if (ima) { 
    if(!cJSON_IsString(ima) && !cJSON_IsNull(ima))
    {
    goto end; //String
    }
    }

    // server_order_get_response->regions
    cJSON *regions = cJSON_GetObjectItemCaseSensitive(server_order_get_responseJSON, "regions");
    if (cJSON_IsNull(regions)) {
        regions = NULL;
    }
    if (regions) { 
    cJSON *regions_local_nonprimitive = NULL;
    if(!cJSON_IsArray(regions)){
        goto end; //nonprimitive container
    }

    regionsList = list_createList();

    cJSON_ArrayForEach(regions_local_nonprimitive,regions )
    {
        if(!cJSON_IsObject(regions_local_nonprimitive)){
            goto end;
        }
        region_t *regionsItem = region_parseFromJSON(regions_local_nonprimitive);

        list_addElement(regionsList, regionsItem);
    }
    }

    // server_order_get_response->asset_servers
    cJSON *asset_servers = cJSON_GetObjectItemCaseSensitive(server_order_get_responseJSON, "asset_servers");
    if (cJSON_IsNull(asset_servers)) {
        asset_servers = NULL;
    }
    if (asset_servers) { 
    cJSON *asset_servers_local_nonprimitive = NULL;
    if(!cJSON_IsArray(asset_servers)){
        goto end; //nonprimitive container
    }

    asset_serversList = list_createList();

    cJSON_ArrayForEach(asset_servers_local_nonprimitive,asset_servers )
    {
        if(!cJSON_IsObject(asset_servers_local_nonprimitive)){
            goto end;
        }
        asset_server_t *asset_serversItem = asset_server_parseFromJSON(asset_servers_local_nonprimitive);

        list_addElement(asset_serversList, asset_serversItem);
    }
    }

    // server_order_get_response->buy_it_servers
    cJSON *buy_it_servers = cJSON_GetObjectItemCaseSensitive(server_order_get_responseJSON, "buy_it_servers");
    if (cJSON_IsNull(buy_it_servers)) {
        buy_it_servers = NULL;
    }
    if (buy_it_servers) { 
    cJSON *buy_it_servers_local_nonprimitive = NULL;
    if(!cJSON_IsArray(buy_it_servers)){
        goto end; //nonprimitive container
    }

    buy_it_serversList = list_createList();

    cJSON_ArrayForEach(buy_it_servers_local_nonprimitive,buy_it_servers )
    {
        if(!cJSON_IsObject(buy_it_servers_local_nonprimitive)){
            goto end;
        }
        object_t *buy_it_serversItem = object_parseFromJSON(buy_it_servers_local_nonprimitive);

        list_addElement(buy_it_serversList, buy_it_serversItem);
    }
    }

    // server_order_get_response->display_showmore
    cJSON *display_showmore = cJSON_GetObjectItemCaseSensitive(server_order_get_responseJSON, "display_showmore");
    if (cJSON_IsNull(display_showmore)) {
        display_showmore = NULL;
    }
    if (display_showmore) { 
    if(!cJSON_IsString(display_showmore) && !cJSON_IsNull(display_showmore))
    {
    goto end; //String
    }
    }

    // server_order_get_response->cust_discount
    cJSON *cust_discount = cJSON_GetObjectItemCaseSensitive(server_order_get_responseJSON, "cust_discount");
    if (cJSON_IsNull(cust_discount)) {
        cust_discount = NULL;
    }
    if (cust_discount) { 
    if(!cJSON_IsNumber(cust_discount))
    {
    goto end; //Numeric
    }
    }


    server_order_get_response_local_var = server_order_get_response_create_internal (
        form_values_local_nonprim,
        config_ids_local_nonprim,
        cpu->valuedouble,
        cpu_liList,
        config_li_local_nonprim,
        frequency->valuedouble,
        strdup(currency->valuestring),
        strdup(country->valuestring),
        strdup(step->valuestring),
        field_label ? field_labelList : NULL,
        cpu_cores ? cpu_coresList : NULL,
        currency_symbol && !cJSON_IsNull(currency_symbol) ? strdup(currency_symbol->valuestring) : NULL,
        custid ? custid->valuedouble : 0,
        ima && !cJSON_IsNull(ima) ? strdup(ima->valuestring) : NULL,
        regions ? regionsList : NULL,
        asset_servers ? asset_serversList : NULL,
        buy_it_servers ? buy_it_serversList : NULL,
        display_showmore && !cJSON_IsNull(display_showmore) ? strdup(display_showmore->valuestring) : NULL,
        cust_discount ? cust_discount->valuedouble : 0
        );

    return server_order_get_response_local_var;
end:
    if (form_values_local_nonprim) {
        form_values_free(form_values_local_nonprim);
        form_values_local_nonprim = NULL;
    }
    if (config_ids_local_nonprim) {
        config_ids_free(config_ids_local_nonprim);
        config_ids_local_nonprim = NULL;
    }

    // The data type of the elements in server_order_get_response->cpu_li is currently not supported.

    if (config_li_local_nonprim) {
        config_lists_free(config_li_local_nonprim);
        config_li_local_nonprim = NULL;
    }

    // The data type of the elements in server_order_get_response->field_label is currently not supported.

    if (cpu_coresList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, cpu_coresList) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free(localKeyValue->key);
            localKeyValue->key = NULL;
            keyValuePair_free(localKeyValue);
            localKeyValue = NULL;
        }
        list_freeList(cpu_coresList);
        cpu_coresList = NULL;
    }
    if (regionsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, regionsList) {
            region_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(regionsList);
        regionsList = NULL;
    }
    if (asset_serversList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, asset_serversList) {
            asset_server_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(asset_serversList);
        asset_serversList = NULL;
    }
    if (buy_it_serversList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, buy_it_serversList) {
            object_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(buy_it_serversList);
        buy_it_serversList = NULL;
    }
    return NULL;

}
