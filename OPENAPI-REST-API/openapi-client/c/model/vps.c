#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps.h"



static vps_t *vps_create_internal(
    vps_service_info_t *service_info,
    list_t *client_links,
    vps_billing_details_t *billing_details,
    char *cust_currency,
    char *cust_currency_symbol,
    vps_service_master_t *service_master,
    char *package,
    vps_service_extra_t *service_extra,
    vps_extra_info_tables_t *extra_info_tables,
    char *module,
    char *token,
    int da_link,
    int sr_link,
    vps_cp_data_t *cp_data,
    vps_da_data_t *da_data,
    vps_plesk12_data_t *plesk12_data,
    vps_service_addons_t *service_addons,
    char *os_template,
    any_type_t *cpu_graph_data
    ) {
    vps_t *vps_local_var = malloc(sizeof(vps_t));
    if (!vps_local_var) {
        return NULL;
    }
    vps_local_var->service_info = service_info;
    vps_local_var->client_links = client_links;
    vps_local_var->billing_details = billing_details;
    vps_local_var->cust_currency = cust_currency;
    vps_local_var->cust_currency_symbol = cust_currency_symbol;
    vps_local_var->service_master = service_master;
    vps_local_var->package = package;
    vps_local_var->service_extra = service_extra;
    vps_local_var->extra_info_tables = extra_info_tables;
    vps_local_var->module = module;
    vps_local_var->token = token;
    vps_local_var->da_link = da_link;
    vps_local_var->sr_link = sr_link;
    vps_local_var->cp_data = cp_data;
    vps_local_var->da_data = da_data;
    vps_local_var->plesk12_data = plesk12_data;
    vps_local_var->service_addons = service_addons;
    vps_local_var->os_template = os_template;
    vps_local_var->cpu_graph_data = cpu_graph_data;

    vps_local_var->_library_owned = 1;
    return vps_local_var;
}

__attribute__((deprecated)) vps_t *vps_create(
    vps_service_info_t *service_info,
    list_t *client_links,
    vps_billing_details_t *billing_details,
    char *cust_currency,
    char *cust_currency_symbol,
    vps_service_master_t *service_master,
    char *package,
    vps_service_extra_t *service_extra,
    vps_extra_info_tables_t *extra_info_tables,
    char *module,
    char *token,
    int da_link,
    int sr_link,
    vps_cp_data_t *cp_data,
    vps_da_data_t *da_data,
    vps_plesk12_data_t *plesk12_data,
    vps_service_addons_t *service_addons,
    char *os_template,
    any_type_t *cpu_graph_data
    ) {
    return vps_create_internal (
        service_info,
        client_links,
        billing_details,
        cust_currency,
        cust_currency_symbol,
        service_master,
        package,
        service_extra,
        extra_info_tables,
        module,
        token,
        da_link,
        sr_link,
        cp_data,
        da_data,
        plesk12_data,
        service_addons,
        os_template,
        cpu_graph_data
        );
}

void vps_free(vps_t *vps) {
    if(NULL == vps){
        return ;
    }
    if(vps->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps->service_info) {
        vps_service_info_free(vps->service_info);
        vps->service_info = NULL;
    }
    if (vps->client_links) {
        list_ForEach(listEntry, vps->client_links) {
            vps_client_link_free(listEntry->data);
        }
        list_freeList(vps->client_links);
        vps->client_links = NULL;
    }
    if (vps->billing_details) {
        vps_billing_details_free(vps->billing_details);
        vps->billing_details = NULL;
    }
    if (vps->cust_currency) {
        free(vps->cust_currency);
        vps->cust_currency = NULL;
    }
    if (vps->cust_currency_symbol) {
        free(vps->cust_currency_symbol);
        vps->cust_currency_symbol = NULL;
    }
    if (vps->service_master) {
        vps_service_master_free(vps->service_master);
        vps->service_master = NULL;
    }
    if (vps->package) {
        free(vps->package);
        vps->package = NULL;
    }
    if (vps->service_extra) {
        vps_service_extra_free(vps->service_extra);
        vps->service_extra = NULL;
    }
    if (vps->extra_info_tables) {
        vps_extra_info_tables_free(vps->extra_info_tables);
        vps->extra_info_tables = NULL;
    }
    if (vps->module) {
        free(vps->module);
        vps->module = NULL;
    }
    if (vps->token) {
        free(vps->token);
        vps->token = NULL;
    }
    if (vps->cp_data) {
        vps_cp_data_free(vps->cp_data);
        vps->cp_data = NULL;
    }
    if (vps->da_data) {
        vps_da_data_free(vps->da_data);
        vps->da_data = NULL;
    }
    if (vps->plesk12_data) {
        vps_plesk12_data_free(vps->plesk12_data);
        vps->plesk12_data = NULL;
    }
    if (vps->service_addons) {
        vps_service_addons_free(vps->service_addons);
        vps->service_addons = NULL;
    }
    if (vps->os_template) {
        free(vps->os_template);
        vps->os_template = NULL;
    }
    if (vps->cpu_graph_data) {
        _free(vps->cpu_graph_data);
        vps->cpu_graph_data = NULL;
    }
    free(vps);
}

cJSON *vps_convertToJSON(vps_t *vps) {
    cJSON *item = cJSON_CreateObject();

    // vps->service_info
    if (!vps->service_info) {
        goto fail;
    }
    cJSON *service_info_local_JSON = vps_service_info_convertToJSON(vps->service_info);
    if(service_info_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "serviceInfo", service_info_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // vps->client_links
    if (!vps->client_links) {
        goto fail;
    }
    cJSON *client_links = cJSON_AddArrayToObject(item, "client_links");
    if(client_links == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *client_linksListEntry;
    if (vps->client_links) {
    list_ForEach(client_linksListEntry, vps->client_links) {
    cJSON *itemLocal = vps_client_link_convertToJSON(client_linksListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(client_links, itemLocal);
    }
    }


    // vps->billing_details
    if (!vps->billing_details) {
        goto fail;
    }
    cJSON *billing_details_local_JSON = vps_billing_details_convertToJSON(vps->billing_details);
    if(billing_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "billingDetails", billing_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // vps->cust_currency
    if (!vps->cust_currency) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "custCurrency", vps->cust_currency) == NULL) {
    goto fail; //String
    }


    // vps->cust_currency_symbol
    if (!vps->cust_currency_symbol) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "custCurrencySymbol", vps->cust_currency_symbol) == NULL) {
    goto fail; //String
    }


    // vps->service_master
    if (!vps->service_master) {
        goto fail;
    }
    cJSON *service_master_local_JSON = vps_service_master_convertToJSON(vps->service_master);
    if(service_master_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "serviceMaster", service_master_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // vps->package
    if (!vps->package) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "package", vps->package) == NULL) {
    goto fail; //String
    }


    // vps->service_extra
    if (!vps->service_extra) {
        goto fail;
    }
    cJSON *service_extra_local_JSON = vps_service_extra_convertToJSON(vps->service_extra);
    if(service_extra_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "serviceExtra", service_extra_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // vps->extra_info_tables
    if (!vps->extra_info_tables) {
        goto fail;
    }
    cJSON *extra_info_tables_local_JSON = vps_extra_info_tables_convertToJSON(vps->extra_info_tables);
    if(extra_info_tables_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "extraInfoTables", extra_info_tables_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // vps->module
    if (!vps->module) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "module", vps->module) == NULL) {
    goto fail; //String
    }


    // vps->token
    if (!vps->token) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "token", vps->token) == NULL) {
    goto fail; //String
    }


    // vps->da_link
    if (!vps->da_link) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "da_link", vps->da_link) == NULL) {
    goto fail; //Numeric
    }


    // vps->sr_link
    if (!vps->sr_link) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "sr_link", vps->sr_link) == NULL) {
    goto fail; //Numeric
    }


    // vps->cp_data
    if (!vps->cp_data) {
        goto fail;
    }
    cJSON *cp_data_local_JSON = vps_cp_data_convertToJSON(vps->cp_data);
    if(cp_data_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "cp_data", cp_data_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // vps->da_data
    if (!vps->da_data) {
        goto fail;
    }
    cJSON *da_data_local_JSON = vps_da_data_convertToJSON(vps->da_data);
    if(da_data_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "da_data", da_data_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // vps->plesk12_data
    if (!vps->plesk12_data) {
        goto fail;
    }
    cJSON *plesk12_data_local_JSON = vps_plesk12_data_convertToJSON(vps->plesk12_data);
    if(plesk12_data_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "plesk12_data", plesk12_data_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // vps->service_addons
    if (!vps->service_addons) {
        goto fail;
    }
    cJSON *service_addons_local_JSON = vps_service_addons_convertToJSON(vps->service_addons);
    if(service_addons_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "serviceAddons", service_addons_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // vps->os_template
    if(vps->os_template) {
    if(cJSON_AddStringToObject(item, "os_template", vps->os_template) == NULL) {
    goto fail; //String
    }
    }


    // vps->cpu_graph_data
    if(vps->cpu_graph_data) {
    cJSON *cpu_graph_data_local_JSON = _convertToJSON(vps->cpu_graph_data);
    if(cpu_graph_data_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "cpu_graph_data", cpu_graph_data_local_JSON);
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

vps_t *vps_parseFromJSON(cJSON *vpsJSON){

    vps_t *vps_local_var = NULL;

    // define the local variable for vps->service_info
    vps_service_info_t *service_info_local_nonprim = NULL;

    // define the local list for vps->client_links
    list_t *client_linksList = NULL;

    // define the local variable for vps->billing_details
    vps_billing_details_t *billing_details_local_nonprim = NULL;

    // define the local variable for vps->service_master
    vps_service_master_t *service_master_local_nonprim = NULL;

    // define the local variable for vps->service_extra
    vps_service_extra_t *service_extra_local_nonprim = NULL;

    // define the local variable for vps->extra_info_tables
    vps_extra_info_tables_t *extra_info_tables_local_nonprim = NULL;

    // define the local variable for vps->cp_data
    vps_cp_data_t *cp_data_local_nonprim = NULL;

    // define the local variable for vps->da_data
    vps_da_data_t *da_data_local_nonprim = NULL;

    // define the local variable for vps->plesk12_data
    vps_plesk12_data_t *plesk12_data_local_nonprim = NULL;

    // define the local variable for vps->service_addons
    vps_service_addons_t *service_addons_local_nonprim = NULL;

    // define the local variable for vps->cpu_graph_data
    _t *cpu_graph_data_local_nonprim = NULL;

    // vps->service_info
    cJSON *service_info = cJSON_GetObjectItemCaseSensitive(vpsJSON, "serviceInfo");
    if (cJSON_IsNull(service_info)) {
        service_info = NULL;
    }
    if (!service_info) {
        goto end;
    }

    
    service_info_local_nonprim = vps_service_info_parseFromJSON(service_info); //nonprimitive

    // vps->client_links
    cJSON *client_links = cJSON_GetObjectItemCaseSensitive(vpsJSON, "client_links");
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
        vps_client_link_t *client_linksItem = vps_client_link_parseFromJSON(client_links_local_nonprimitive);

        list_addElement(client_linksList, client_linksItem);
    }

    // vps->billing_details
    cJSON *billing_details = cJSON_GetObjectItemCaseSensitive(vpsJSON, "billingDetails");
    if (cJSON_IsNull(billing_details)) {
        billing_details = NULL;
    }
    if (!billing_details) {
        goto end;
    }

    
    billing_details_local_nonprim = vps_billing_details_parseFromJSON(billing_details); //nonprimitive

    // vps->cust_currency
    cJSON *cust_currency = cJSON_GetObjectItemCaseSensitive(vpsJSON, "custCurrency");
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

    // vps->cust_currency_symbol
    cJSON *cust_currency_symbol = cJSON_GetObjectItemCaseSensitive(vpsJSON, "custCurrencySymbol");
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

    // vps->service_master
    cJSON *service_master = cJSON_GetObjectItemCaseSensitive(vpsJSON, "serviceMaster");
    if (cJSON_IsNull(service_master)) {
        service_master = NULL;
    }
    if (!service_master) {
        goto end;
    }

    
    service_master_local_nonprim = vps_service_master_parseFromJSON(service_master); //nonprimitive

    // vps->package
    cJSON *package = cJSON_GetObjectItemCaseSensitive(vpsJSON, "package");
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

    // vps->service_extra
    cJSON *service_extra = cJSON_GetObjectItemCaseSensitive(vpsJSON, "serviceExtra");
    if (cJSON_IsNull(service_extra)) {
        service_extra = NULL;
    }
    if (!service_extra) {
        goto end;
    }

    
    service_extra_local_nonprim = vps_service_extra_parseFromJSON(service_extra); //nonprimitive

    // vps->extra_info_tables
    cJSON *extra_info_tables = cJSON_GetObjectItemCaseSensitive(vpsJSON, "extraInfoTables");
    if (cJSON_IsNull(extra_info_tables)) {
        extra_info_tables = NULL;
    }
    if (!extra_info_tables) {
        goto end;
    }

    
    extra_info_tables_local_nonprim = vps_extra_info_tables_parseFromJSON(extra_info_tables); //nonprimitive

    // vps->module
    cJSON *module = cJSON_GetObjectItemCaseSensitive(vpsJSON, "module");
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

    // vps->token
    cJSON *token = cJSON_GetObjectItemCaseSensitive(vpsJSON, "token");
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

    // vps->da_link
    cJSON *da_link = cJSON_GetObjectItemCaseSensitive(vpsJSON, "da_link");
    if (cJSON_IsNull(da_link)) {
        da_link = NULL;
    }
    if (!da_link) {
        goto end;
    }

    
    if(!cJSON_IsNumber(da_link))
    {
    goto end; //Numeric
    }

    // vps->sr_link
    cJSON *sr_link = cJSON_GetObjectItemCaseSensitive(vpsJSON, "sr_link");
    if (cJSON_IsNull(sr_link)) {
        sr_link = NULL;
    }
    if (!sr_link) {
        goto end;
    }

    
    if(!cJSON_IsNumber(sr_link))
    {
    goto end; //Numeric
    }

    // vps->cp_data
    cJSON *cp_data = cJSON_GetObjectItemCaseSensitive(vpsJSON, "cp_data");
    if (cJSON_IsNull(cp_data)) {
        cp_data = NULL;
    }
    if (!cp_data) {
        goto end;
    }

    
    cp_data_local_nonprim = vps_cp_data_parseFromJSON(cp_data); //nonprimitive

    // vps->da_data
    cJSON *da_data = cJSON_GetObjectItemCaseSensitive(vpsJSON, "da_data");
    if (cJSON_IsNull(da_data)) {
        da_data = NULL;
    }
    if (!da_data) {
        goto end;
    }

    
    da_data_local_nonprim = vps_da_data_parseFromJSON(da_data); //nonprimitive

    // vps->plesk12_data
    cJSON *plesk12_data = cJSON_GetObjectItemCaseSensitive(vpsJSON, "plesk12_data");
    if (cJSON_IsNull(plesk12_data)) {
        plesk12_data = NULL;
    }
    if (!plesk12_data) {
        goto end;
    }

    
    plesk12_data_local_nonprim = vps_plesk12_data_parseFromJSON(plesk12_data); //nonprimitive

    // vps->service_addons
    cJSON *service_addons = cJSON_GetObjectItemCaseSensitive(vpsJSON, "serviceAddons");
    if (cJSON_IsNull(service_addons)) {
        service_addons = NULL;
    }
    if (!service_addons) {
        goto end;
    }

    
    service_addons_local_nonprim = vps_service_addons_parseFromJSON(service_addons); //nonprimitive

    // vps->os_template
    cJSON *os_template = cJSON_GetObjectItemCaseSensitive(vpsJSON, "os_template");
    if (cJSON_IsNull(os_template)) {
        os_template = NULL;
    }
    if (os_template) { 
    if(!cJSON_IsString(os_template) && !cJSON_IsNull(os_template))
    {
    goto end; //String
    }
    }

    // vps->cpu_graph_data
    cJSON *cpu_graph_data = cJSON_GetObjectItemCaseSensitive(vpsJSON, "cpu_graph_data");
    if (cJSON_IsNull(cpu_graph_data)) {
        cpu_graph_data = NULL;
    }
    if (cpu_graph_data) { 
    cpu_graph_data_local_nonprim = _parseFromJSON(cpu_graph_data); //custom
    }


    vps_local_var = vps_create_internal (
        service_info_local_nonprim,
        client_linksList,
        billing_details_local_nonprim,
        strdup(cust_currency->valuestring),
        strdup(cust_currency_symbol->valuestring),
        service_master_local_nonprim,
        strdup(package->valuestring),
        service_extra_local_nonprim,
        extra_info_tables_local_nonprim,
        strdup(module->valuestring),
        strdup(token->valuestring),
        da_link->valuedouble,
        sr_link->valuedouble,
        cp_data_local_nonprim,
        da_data_local_nonprim,
        plesk12_data_local_nonprim,
        service_addons_local_nonprim,
        os_template && !cJSON_IsNull(os_template) ? strdup(os_template->valuestring) : NULL,
        cpu_graph_data ? cpu_graph_data_local_nonprim : NULL
        );

    return vps_local_var;
end:
    if (service_info_local_nonprim) {
        vps_service_info_free(service_info_local_nonprim);
        service_info_local_nonprim = NULL;
    }
    if (client_linksList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, client_linksList) {
            vps_client_link_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(client_linksList);
        client_linksList = NULL;
    }
    if (billing_details_local_nonprim) {
        vps_billing_details_free(billing_details_local_nonprim);
        billing_details_local_nonprim = NULL;
    }
    if (service_master_local_nonprim) {
        vps_service_master_free(service_master_local_nonprim);
        service_master_local_nonprim = NULL;
    }
    if (service_extra_local_nonprim) {
        vps_service_extra_free(service_extra_local_nonprim);
        service_extra_local_nonprim = NULL;
    }
    if (extra_info_tables_local_nonprim) {
        vps_extra_info_tables_free(extra_info_tables_local_nonprim);
        extra_info_tables_local_nonprim = NULL;
    }
    if (cp_data_local_nonprim) {
        vps_cp_data_free(cp_data_local_nonprim);
        cp_data_local_nonprim = NULL;
    }
    if (da_data_local_nonprim) {
        vps_da_data_free(da_data_local_nonprim);
        da_data_local_nonprim = NULL;
    }
    if (plesk12_data_local_nonprim) {
        vps_plesk12_data_free(plesk12_data_local_nonprim);
        plesk12_data_local_nonprim = NULL;
    }
    if (service_addons_local_nonprim) {
        vps_service_addons_free(service_addons_local_nonprim);
        service_addons_local_nonprim = NULL;
    }
    if (cpu_graph_data_local_nonprim) {
        _free(cpu_graph_data_local_nonprim);
        cpu_graph_data_local_nonprim = NULL;
    }
    return NULL;

}
