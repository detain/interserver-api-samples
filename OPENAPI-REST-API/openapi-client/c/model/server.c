#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server.h"



static server_t *server_create_internal(
    int ipmi_auth,
    list_t *client_links,
    server_billing_details_t *billing_details,
    char *cust_currency,
    char *cust_currency_symbol,
    char *package,
    list_t *service_extra,
    server_locations_t *locations,
    server_network_info_t *network_info,
    server_extra_info_tables_t *extra_info_tables,
    server_service_info_t *service_info
    ) {
    server_t *server_local_var = malloc(sizeof(server_t));
    if (!server_local_var) {
        return NULL;
    }
    server_local_var->ipmi_auth = ipmi_auth;
    server_local_var->client_links = client_links;
    server_local_var->billing_details = billing_details;
    server_local_var->cust_currency = cust_currency;
    server_local_var->cust_currency_symbol = cust_currency_symbol;
    server_local_var->package = package;
    server_local_var->service_extra = service_extra;
    server_local_var->locations = locations;
    server_local_var->network_info = network_info;
    server_local_var->extra_info_tables = extra_info_tables;
    server_local_var->service_info = service_info;

    server_local_var->_library_owned = 1;
    return server_local_var;
}

__attribute__((deprecated)) server_t *server_create(
    int ipmi_auth,
    list_t *client_links,
    server_billing_details_t *billing_details,
    char *cust_currency,
    char *cust_currency_symbol,
    char *package,
    list_t *service_extra,
    server_locations_t *locations,
    server_network_info_t *network_info,
    server_extra_info_tables_t *extra_info_tables,
    server_service_info_t *service_info
    ) {
    return server_create_internal (
        ipmi_auth,
        client_links,
        billing_details,
        cust_currency,
        cust_currency_symbol,
        package,
        service_extra,
        locations,
        network_info,
        extra_info_tables,
        service_info
        );
}

void server_free(server_t *server) {
    if(NULL == server){
        return ;
    }
    if(server->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "server_free");
        return ;
    }
    listEntry_t *listEntry;
    if (server->client_links) {
        list_ForEach(listEntry, server->client_links) {
            server_client_link_free(listEntry->data);
        }
        list_freeList(server->client_links);
        server->client_links = NULL;
    }
    if (server->billing_details) {
        server_billing_details_free(server->billing_details);
        server->billing_details = NULL;
    }
    if (server->cust_currency) {
        free(server->cust_currency);
        server->cust_currency = NULL;
    }
    if (server->cust_currency_symbol) {
        free(server->cust_currency_symbol);
        server->cust_currency_symbol = NULL;
    }
    if (server->package) {
        free(server->package);
        server->package = NULL;
    }
    if (server->service_extra) {
        list_ForEach(listEntry, server->service_extra) {
            free(listEntry->data);
        }
        list_freeList(server->service_extra);
        server->service_extra = NULL;
    }
    if (server->locations) {
        server_locations_free(server->locations);
        server->locations = NULL;
    }
    if (server->network_info) {
        server_network_info_free(server->network_info);
        server->network_info = NULL;
    }
    if (server->extra_info_tables) {
        server_extra_info_tables_free(server->extra_info_tables);
        server->extra_info_tables = NULL;
    }
    if (server->service_info) {
        server_service_info_free(server->service_info);
        server->service_info = NULL;
    }
    free(server);
}

cJSON *server_convertToJSON(server_t *server) {
    cJSON *item = cJSON_CreateObject();

    // server->ipmi_auth
    if (!server->ipmi_auth) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "ipmiAuth", server->ipmi_auth) == NULL) {
    goto fail; //Bool
    }


    // server->client_links
    if (!server->client_links) {
        goto fail;
    }
    cJSON *client_links = cJSON_AddArrayToObject(item, "client_links");
    if(client_links == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *client_linksListEntry;
    if (server->client_links) {
    list_ForEach(client_linksListEntry, server->client_links) {
    cJSON *itemLocal = server_client_link_convertToJSON(client_linksListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(client_links, itemLocal);
    }
    }


    // server->billing_details
    if (!server->billing_details) {
        goto fail;
    }
    cJSON *billing_details_local_JSON = server_billing_details_convertToJSON(server->billing_details);
    if(billing_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "billingDetails", billing_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // server->cust_currency
    if (!server->cust_currency) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "custCurrency", server->cust_currency) == NULL) {
    goto fail; //String
    }


    // server->cust_currency_symbol
    if (!server->cust_currency_symbol) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "custCurrencySymbol", server->cust_currency_symbol) == NULL) {
    goto fail; //String
    }


    // server->package
    if (!server->package) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "package", server->package) == NULL) {
    goto fail; //String
    }


    // server->service_extra
    if (!server->service_extra) {
        goto fail;
    }
    cJSON *service_extra = cJSON_AddArrayToObject(item, "serviceExtra");
    if(service_extra == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *service_extraListEntry;
    list_ForEach(service_extraListEntry, server->service_extra) {
    if(cJSON_AddStringToObject(service_extra, "", service_extraListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // server->locations
    if (!server->locations) {
        goto fail;
    }
    cJSON *locations_local_JSON = server_locations_convertToJSON(server->locations);
    if(locations_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "locations", locations_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // server->network_info
    if (!server->network_info) {
        goto fail;
    }
    cJSON *network_info_local_JSON = server_network_info_convertToJSON(server->network_info);
    if(network_info_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "networkInfo", network_info_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // server->extra_info_tables
    if (!server->extra_info_tables) {
        goto fail;
    }
    cJSON *extra_info_tables_local_JSON = server_extra_info_tables_convertToJSON(server->extra_info_tables);
    if(extra_info_tables_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "extraInfoTables", extra_info_tables_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // server->service_info
    if (!server->service_info) {
        goto fail;
    }
    cJSON *service_info_local_JSON = server_service_info_convertToJSON(server->service_info);
    if(service_info_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "serviceInfo", service_info_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

server_t *server_parseFromJSON(cJSON *serverJSON){

    server_t *server_local_var = NULL;

    // define the local list for server->client_links
    list_t *client_linksList = NULL;

    // define the local variable for server->billing_details
    server_billing_details_t *billing_details_local_nonprim = NULL;

    // define the local list for server->service_extra
    list_t *service_extraList = NULL;

    // define the local variable for server->locations
    server_locations_t *locations_local_nonprim = NULL;

    // define the local variable for server->network_info
    server_network_info_t *network_info_local_nonprim = NULL;

    // define the local variable for server->extra_info_tables
    server_extra_info_tables_t *extra_info_tables_local_nonprim = NULL;

    // define the local variable for server->service_info
    server_service_info_t *service_info_local_nonprim = NULL;

    // server->ipmi_auth
    cJSON *ipmi_auth = cJSON_GetObjectItemCaseSensitive(serverJSON, "ipmiAuth");
    if (cJSON_IsNull(ipmi_auth)) {
        ipmi_auth = NULL;
    }
    if (!ipmi_auth) {
        goto end;
    }

    
    if(!cJSON_IsBool(ipmi_auth))
    {
    goto end; //Bool
    }

    // server->client_links
    cJSON *client_links = cJSON_GetObjectItemCaseSensitive(serverJSON, "client_links");
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
        server_client_link_t *client_linksItem = server_client_link_parseFromJSON(client_links_local_nonprimitive);

        list_addElement(client_linksList, client_linksItem);
    }

    // server->billing_details
    cJSON *billing_details = cJSON_GetObjectItemCaseSensitive(serverJSON, "billingDetails");
    if (cJSON_IsNull(billing_details)) {
        billing_details = NULL;
    }
    if (!billing_details) {
        goto end;
    }

    
    billing_details_local_nonprim = server_billing_details_parseFromJSON(billing_details); //nonprimitive

    // server->cust_currency
    cJSON *cust_currency = cJSON_GetObjectItemCaseSensitive(serverJSON, "custCurrency");
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

    // server->cust_currency_symbol
    cJSON *cust_currency_symbol = cJSON_GetObjectItemCaseSensitive(serverJSON, "custCurrencySymbol");
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

    // server->package
    cJSON *package = cJSON_GetObjectItemCaseSensitive(serverJSON, "package");
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

    // server->service_extra
    cJSON *service_extra = cJSON_GetObjectItemCaseSensitive(serverJSON, "serviceExtra");
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

    // server->locations
    cJSON *locations = cJSON_GetObjectItemCaseSensitive(serverJSON, "locations");
    if (cJSON_IsNull(locations)) {
        locations = NULL;
    }
    if (!locations) {
        goto end;
    }

    
    locations_local_nonprim = server_locations_parseFromJSON(locations); //nonprimitive

    // server->network_info
    cJSON *network_info = cJSON_GetObjectItemCaseSensitive(serverJSON, "networkInfo");
    if (cJSON_IsNull(network_info)) {
        network_info = NULL;
    }
    if (!network_info) {
        goto end;
    }

    
    network_info_local_nonprim = server_network_info_parseFromJSON(network_info); //nonprimitive

    // server->extra_info_tables
    cJSON *extra_info_tables = cJSON_GetObjectItemCaseSensitive(serverJSON, "extraInfoTables");
    if (cJSON_IsNull(extra_info_tables)) {
        extra_info_tables = NULL;
    }
    if (!extra_info_tables) {
        goto end;
    }

    
    extra_info_tables_local_nonprim = server_extra_info_tables_parseFromJSON(extra_info_tables); //nonprimitive

    // server->service_info
    cJSON *service_info = cJSON_GetObjectItemCaseSensitive(serverJSON, "serviceInfo");
    if (cJSON_IsNull(service_info)) {
        service_info = NULL;
    }
    if (!service_info) {
        goto end;
    }

    
    service_info_local_nonprim = server_service_info_parseFromJSON(service_info); //nonprimitive


    server_local_var = server_create_internal (
        ipmi_auth->valueint,
        client_linksList,
        billing_details_local_nonprim,
        strdup(cust_currency->valuestring),
        strdup(cust_currency_symbol->valuestring),
        strdup(package->valuestring),
        service_extraList,
        locations_local_nonprim,
        network_info_local_nonprim,
        extra_info_tables_local_nonprim,
        service_info_local_nonprim
        );

    return server_local_var;
end:
    if (client_linksList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, client_linksList) {
            server_client_link_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(client_linksList);
        client_linksList = NULL;
    }
    if (billing_details_local_nonprim) {
        server_billing_details_free(billing_details_local_nonprim);
        billing_details_local_nonprim = NULL;
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
    if (locations_local_nonprim) {
        server_locations_free(locations_local_nonprim);
        locations_local_nonprim = NULL;
    }
    if (network_info_local_nonprim) {
        server_network_info_free(network_info_local_nonprim);
        network_info_local_nonprim = NULL;
    }
    if (extra_info_tables_local_nonprim) {
        server_extra_info_tables_free(extra_info_tables_local_nonprim);
        extra_info_tables_local_nonprim = NULL;
    }
    if (service_info_local_nonprim) {
        server_service_info_free(service_info_local_nonprim);
        service_info_local_nonprim = NULL;
    }
    return NULL;

}
