#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server_billing_details.h"



static server_billing_details_t *server_billing_details_create_internal(
    char *service_last_invoice_date,
    char *service_payment_status,
    char *service_frequency,
    char *next_date,
    char *service_next_invoice_date,
    char *service_currency,
    char *service_currency_symbol,
    char *service_cost_info,
    list_t *service_extra,
    char *service_extra_json
    ) {
    server_billing_details_t *server_billing_details_local_var = malloc(sizeof(server_billing_details_t));
    if (!server_billing_details_local_var) {
        return NULL;
    }
    memset(server_billing_details_local_var, 0, sizeof(server_billing_details_t));
    server_billing_details_local_var->_library_owned = 1;
    server_billing_details_local_var->service_last_invoice_date = service_last_invoice_date;
    server_billing_details_local_var->service_payment_status = service_payment_status;
    server_billing_details_local_var->service_frequency = service_frequency;
    server_billing_details_local_var->next_date = next_date;
    server_billing_details_local_var->service_next_invoice_date = service_next_invoice_date;
    server_billing_details_local_var->service_currency = service_currency;
    server_billing_details_local_var->service_currency_symbol = service_currency_symbol;
    server_billing_details_local_var->service_cost_info = service_cost_info;
    server_billing_details_local_var->service_extra = service_extra;
    server_billing_details_local_var->service_extra_json = service_extra_json;
    return server_billing_details_local_var;
}

__attribute__((deprecated)) server_billing_details_t *server_billing_details_create(
    char *service_last_invoice_date,
    char *service_payment_status,
    char *service_frequency,
    char *next_date,
    char *service_next_invoice_date,
    char *service_currency,
    char *service_currency_symbol,
    char *service_cost_info,
    list_t *service_extra,
    char *service_extra_json
    ) {
    server_billing_details_t *result = server_billing_details_create_internal (
        service_last_invoice_date,
        service_payment_status,
        service_frequency,
        next_date,
        service_next_invoice_date,
        service_currency,
        service_currency_symbol,
        service_cost_info,
        service_extra,
        service_extra_json
        );
    if (!result) {
    }
    return result;
}

void server_billing_details_free(server_billing_details_t *server_billing_details) {
    if(NULL == server_billing_details){
        return ;
    }
    if(server_billing_details->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "server_billing_details_free");
        return ;
    }
    listEntry_t *listEntry;
    if (server_billing_details->service_last_invoice_date) {
        free(server_billing_details->service_last_invoice_date);
        server_billing_details->service_last_invoice_date = NULL;
    }
    if (server_billing_details->service_payment_status) {
        free(server_billing_details->service_payment_status);
        server_billing_details->service_payment_status = NULL;
    }
    if (server_billing_details->service_frequency) {
        free(server_billing_details->service_frequency);
        server_billing_details->service_frequency = NULL;
    }
    if (server_billing_details->next_date) {
        free(server_billing_details->next_date);
        server_billing_details->next_date = NULL;
    }
    if (server_billing_details->service_next_invoice_date) {
        free(server_billing_details->service_next_invoice_date);
        server_billing_details->service_next_invoice_date = NULL;
    }
    if (server_billing_details->service_currency) {
        free(server_billing_details->service_currency);
        server_billing_details->service_currency = NULL;
    }
    if (server_billing_details->service_currency_symbol) {
        free(server_billing_details->service_currency_symbol);
        server_billing_details->service_currency_symbol = NULL;
    }
    if (server_billing_details->service_cost_info) {
        free(server_billing_details->service_cost_info);
        server_billing_details->service_cost_info = NULL;
    }
    if (server_billing_details->service_extra) {
        list_ForEach(listEntry, server_billing_details->service_extra) {
            free(listEntry->data);
        }
        list_freeList(server_billing_details->service_extra);
        server_billing_details->service_extra = NULL;
    }
    if (server_billing_details->service_extra_json) {
        free(server_billing_details->service_extra_json);
        server_billing_details->service_extra_json = NULL;
    }
    free(server_billing_details);
}

cJSON *server_billing_details_convertToJSON(server_billing_details_t *server_billing_details) {
    cJSON *item = cJSON_CreateObject();

    // server_billing_details->service_last_invoice_date
    if(server_billing_details->service_last_invoice_date) {
    if(cJSON_AddStringToObject(item, "service_last_invoice_date", server_billing_details->service_last_invoice_date) == NULL) {
    goto fail; //String
    }
    }


    // server_billing_details->service_payment_status
    if(server_billing_details->service_payment_status) {
    if(cJSON_AddStringToObject(item, "service_payment_status", server_billing_details->service_payment_status) == NULL) {
    goto fail; //String
    }
    }


    // server_billing_details->service_frequency
    if(server_billing_details->service_frequency) {
    if(cJSON_AddStringToObject(item, "service_frequency", server_billing_details->service_frequency) == NULL) {
    goto fail; //String
    }
    }


    // server_billing_details->next_date
    if(server_billing_details->next_date) {
    if(cJSON_AddStringToObject(item, "next_date", server_billing_details->next_date) == NULL) {
    goto fail; //String
    }
    }


    // server_billing_details->service_next_invoice_date
    if(server_billing_details->service_next_invoice_date) {
    if(cJSON_AddStringToObject(item, "service_next_invoice_date", server_billing_details->service_next_invoice_date) == NULL) {
    goto fail; //String
    }
    }


    // server_billing_details->service_currency
    if(server_billing_details->service_currency) {
    if(cJSON_AddStringToObject(item, "service_currency", server_billing_details->service_currency) == NULL) {
    goto fail; //String
    }
    }


    // server_billing_details->service_currency_symbol
    if(server_billing_details->service_currency_symbol) {
    if(cJSON_AddStringToObject(item, "service_currency_symbol", server_billing_details->service_currency_symbol) == NULL) {
    goto fail; //String
    }
    }


    // server_billing_details->service_cost_info
    if(server_billing_details->service_cost_info) {
    if(cJSON_AddStringToObject(item, "service_cost_info", server_billing_details->service_cost_info) == NULL) {
    goto fail; //String
    }
    }


    // server_billing_details->service_extra
    if(server_billing_details->service_extra) {
    cJSON *service_extra = cJSON_AddArrayToObject(item, "service_extra");
    if(service_extra == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *service_extraListEntry;
    list_ForEach(service_extraListEntry, server_billing_details->service_extra) {
    if(cJSON_AddStringToObject(service_extra, "", service_extraListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // server_billing_details->service_extra_json
    if(server_billing_details->service_extra_json) {
    if(cJSON_AddStringToObject(item, "service_extra_json", server_billing_details->service_extra_json) == NULL) {
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

server_billing_details_t *server_billing_details_parseFromJSON(cJSON *server_billing_detailsJSON){

    server_billing_details_t *server_billing_details_local_var = NULL;

    char *service_last_invoice_date_local_str = NULL;

    char *service_payment_status_local_str = NULL;

    char *service_frequency_local_str = NULL;

    char *next_date_local_str = NULL;

    char *service_next_invoice_date_local_str = NULL;

    char *service_currency_local_str = NULL;

    char *service_currency_symbol_local_str = NULL;

    char *service_cost_info_local_str = NULL;

    // define the local list for server_billing_details->service_extra
    list_t *service_extraList = NULL;

    char *service_extra_json_local_str = NULL;

    // server_billing_details->service_last_invoice_date
    cJSON *service_last_invoice_date = cJSON_GetObjectItemCaseSensitive(server_billing_detailsJSON, "service_last_invoice_date");
    if (cJSON_IsNull(service_last_invoice_date)) {
        service_last_invoice_date = NULL;
    }
    if (service_last_invoice_date) { 
    if(!cJSON_IsString(service_last_invoice_date) && !cJSON_IsNull(service_last_invoice_date))
    {
    goto end; //String
    }
    }

    // server_billing_details->service_payment_status
    cJSON *service_payment_status = cJSON_GetObjectItemCaseSensitive(server_billing_detailsJSON, "service_payment_status");
    if (cJSON_IsNull(service_payment_status)) {
        service_payment_status = NULL;
    }
    if (service_payment_status) { 
    if(!cJSON_IsString(service_payment_status) && !cJSON_IsNull(service_payment_status))
    {
    goto end; //String
    }
    }

    // server_billing_details->service_frequency
    cJSON *service_frequency = cJSON_GetObjectItemCaseSensitive(server_billing_detailsJSON, "service_frequency");
    if (cJSON_IsNull(service_frequency)) {
        service_frequency = NULL;
    }
    if (service_frequency) { 
    if(!cJSON_IsString(service_frequency) && !cJSON_IsNull(service_frequency))
    {
    goto end; //String
    }
    }

    // server_billing_details->next_date
    cJSON *next_date = cJSON_GetObjectItemCaseSensitive(server_billing_detailsJSON, "next_date");
    if (cJSON_IsNull(next_date)) {
        next_date = NULL;
    }
    if (next_date) { 
    if(!cJSON_IsString(next_date) && !cJSON_IsNull(next_date))
    {
    goto end; //String
    }
    }

    // server_billing_details->service_next_invoice_date
    cJSON *service_next_invoice_date = cJSON_GetObjectItemCaseSensitive(server_billing_detailsJSON, "service_next_invoice_date");
    if (cJSON_IsNull(service_next_invoice_date)) {
        service_next_invoice_date = NULL;
    }
    if (service_next_invoice_date) { 
    if(!cJSON_IsString(service_next_invoice_date) && !cJSON_IsNull(service_next_invoice_date))
    {
    goto end; //String
    }
    }

    // server_billing_details->service_currency
    cJSON *service_currency = cJSON_GetObjectItemCaseSensitive(server_billing_detailsJSON, "service_currency");
    if (cJSON_IsNull(service_currency)) {
        service_currency = NULL;
    }
    if (service_currency) { 
    if(!cJSON_IsString(service_currency) && !cJSON_IsNull(service_currency))
    {
    goto end; //String
    }
    }

    // server_billing_details->service_currency_symbol
    cJSON *service_currency_symbol = cJSON_GetObjectItemCaseSensitive(server_billing_detailsJSON, "service_currency_symbol");
    if (cJSON_IsNull(service_currency_symbol)) {
        service_currency_symbol = NULL;
    }
    if (service_currency_symbol) { 
    if(!cJSON_IsString(service_currency_symbol) && !cJSON_IsNull(service_currency_symbol))
    {
    goto end; //String
    }
    }

    // server_billing_details->service_cost_info
    cJSON *service_cost_info = cJSON_GetObjectItemCaseSensitive(server_billing_detailsJSON, "service_cost_info");
    if (cJSON_IsNull(service_cost_info)) {
        service_cost_info = NULL;
    }
    if (service_cost_info) { 
    if(!cJSON_IsString(service_cost_info) && !cJSON_IsNull(service_cost_info))
    {
    goto end; //String
    }
    }

    // server_billing_details->service_extra
    cJSON *service_extra = cJSON_GetObjectItemCaseSensitive(server_billing_detailsJSON, "service_extra");
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

    // server_billing_details->service_extra_json
    cJSON *service_extra_json = cJSON_GetObjectItemCaseSensitive(server_billing_detailsJSON, "service_extra_json");
    if (cJSON_IsNull(service_extra_json)) {
        service_extra_json = NULL;
    }
    if (service_extra_json) { 
    if(!cJSON_IsString(service_extra_json) && !cJSON_IsNull(service_extra_json))
    {
    goto end; //String
    }
    }


    if (service_last_invoice_date && !cJSON_IsNull(service_last_invoice_date)) service_last_invoice_date_local_str = strdup(service_last_invoice_date->valuestring);
    if (service_payment_status && !cJSON_IsNull(service_payment_status)) service_payment_status_local_str = strdup(service_payment_status->valuestring);
    if (service_frequency && !cJSON_IsNull(service_frequency)) service_frequency_local_str = strdup(service_frequency->valuestring);
    if (next_date && !cJSON_IsNull(next_date)) next_date_local_str = strdup(next_date->valuestring);
    if (service_next_invoice_date && !cJSON_IsNull(service_next_invoice_date)) service_next_invoice_date_local_str = strdup(service_next_invoice_date->valuestring);
    if (service_currency && !cJSON_IsNull(service_currency)) service_currency_local_str = strdup(service_currency->valuestring);
    if (service_currency_symbol && !cJSON_IsNull(service_currency_symbol)) service_currency_symbol_local_str = strdup(service_currency_symbol->valuestring);
    if (service_cost_info && !cJSON_IsNull(service_cost_info)) service_cost_info_local_str = strdup(service_cost_info->valuestring);
    if (service_extra_json && !cJSON_IsNull(service_extra_json)) service_extra_json_local_str = strdup(service_extra_json->valuestring);

    server_billing_details_local_var = server_billing_details_create_internal (
        service_last_invoice_date_local_str,
        service_payment_status_local_str,
        service_frequency_local_str,
        next_date_local_str,
        service_next_invoice_date_local_str,
        service_currency_local_str,
        service_currency_symbol_local_str,
        service_cost_info_local_str,
        service_extra ? service_extraList : NULL,
        service_extra_json_local_str
        );

    if (!server_billing_details_local_var) {
        goto end;
    }

    return server_billing_details_local_var;
end:
    if (service_last_invoice_date_local_str) {
        free(service_last_invoice_date_local_str);
        service_last_invoice_date_local_str = NULL;
    }
    if (service_payment_status_local_str) {
        free(service_payment_status_local_str);
        service_payment_status_local_str = NULL;
    }
    if (service_frequency_local_str) {
        free(service_frequency_local_str);
        service_frequency_local_str = NULL;
    }
    if (next_date_local_str) {
        free(next_date_local_str);
        next_date_local_str = NULL;
    }
    if (service_next_invoice_date_local_str) {
        free(service_next_invoice_date_local_str);
        service_next_invoice_date_local_str = NULL;
    }
    if (service_currency_local_str) {
        free(service_currency_local_str);
        service_currency_local_str = NULL;
    }
    if (service_currency_symbol_local_str) {
        free(service_currency_symbol_local_str);
        service_currency_symbol_local_str = NULL;
    }
    if (service_cost_info_local_str) {
        free(service_cost_info_local_str);
        service_cost_info_local_str = NULL;
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
    if (service_extra_json_local_str) {
        free(service_extra_json_local_str);
        service_extra_json_local_str = NULL;
    }
    return NULL;

}
