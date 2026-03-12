#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "get_scrub_ip_details_200_response_billing_details.h"



static get_scrub_ip_details_200_response_billing_details_t *get_scrub_ip_details_200_response_billing_details_create_internal(
    char *service_last_invoice_date,
    char *service_payment_status,
    char *service_frequency,
    char *next_date,
    char *service_next_invoice_date,
    char *service_currency,
    char *service_currency_symbol,
    char *service_cost_info
    ) {
    get_scrub_ip_details_200_response_billing_details_t *get_scrub_ip_details_200_response_billing_details_local_var = malloc(sizeof(get_scrub_ip_details_200_response_billing_details_t));
    if (!get_scrub_ip_details_200_response_billing_details_local_var) {
        return NULL;
    }
    get_scrub_ip_details_200_response_billing_details_local_var->service_last_invoice_date = service_last_invoice_date;
    get_scrub_ip_details_200_response_billing_details_local_var->service_payment_status = service_payment_status;
    get_scrub_ip_details_200_response_billing_details_local_var->service_frequency = service_frequency;
    get_scrub_ip_details_200_response_billing_details_local_var->next_date = next_date;
    get_scrub_ip_details_200_response_billing_details_local_var->service_next_invoice_date = service_next_invoice_date;
    get_scrub_ip_details_200_response_billing_details_local_var->service_currency = service_currency;
    get_scrub_ip_details_200_response_billing_details_local_var->service_currency_symbol = service_currency_symbol;
    get_scrub_ip_details_200_response_billing_details_local_var->service_cost_info = service_cost_info;

    get_scrub_ip_details_200_response_billing_details_local_var->_library_owned = 1;
    return get_scrub_ip_details_200_response_billing_details_local_var;
}

__attribute__((deprecated)) get_scrub_ip_details_200_response_billing_details_t *get_scrub_ip_details_200_response_billing_details_create(
    char *service_last_invoice_date,
    char *service_payment_status,
    char *service_frequency,
    char *next_date,
    char *service_next_invoice_date,
    char *service_currency,
    char *service_currency_symbol,
    char *service_cost_info
    ) {
    return get_scrub_ip_details_200_response_billing_details_create_internal (
        service_last_invoice_date,
        service_payment_status,
        service_frequency,
        next_date,
        service_next_invoice_date,
        service_currency,
        service_currency_symbol,
        service_cost_info
        );
}

void get_scrub_ip_details_200_response_billing_details_free(get_scrub_ip_details_200_response_billing_details_t *get_scrub_ip_details_200_response_billing_details) {
    if(NULL == get_scrub_ip_details_200_response_billing_details){
        return ;
    }
    if(get_scrub_ip_details_200_response_billing_details->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "get_scrub_ip_details_200_response_billing_details_free");
        return ;
    }
    listEntry_t *listEntry;
    if (get_scrub_ip_details_200_response_billing_details->service_last_invoice_date) {
        free(get_scrub_ip_details_200_response_billing_details->service_last_invoice_date);
        get_scrub_ip_details_200_response_billing_details->service_last_invoice_date = NULL;
    }
    if (get_scrub_ip_details_200_response_billing_details->service_payment_status) {
        free(get_scrub_ip_details_200_response_billing_details->service_payment_status);
        get_scrub_ip_details_200_response_billing_details->service_payment_status = NULL;
    }
    if (get_scrub_ip_details_200_response_billing_details->service_frequency) {
        free(get_scrub_ip_details_200_response_billing_details->service_frequency);
        get_scrub_ip_details_200_response_billing_details->service_frequency = NULL;
    }
    if (get_scrub_ip_details_200_response_billing_details->next_date) {
        free(get_scrub_ip_details_200_response_billing_details->next_date);
        get_scrub_ip_details_200_response_billing_details->next_date = NULL;
    }
    if (get_scrub_ip_details_200_response_billing_details->service_next_invoice_date) {
        free(get_scrub_ip_details_200_response_billing_details->service_next_invoice_date);
        get_scrub_ip_details_200_response_billing_details->service_next_invoice_date = NULL;
    }
    if (get_scrub_ip_details_200_response_billing_details->service_currency) {
        free(get_scrub_ip_details_200_response_billing_details->service_currency);
        get_scrub_ip_details_200_response_billing_details->service_currency = NULL;
    }
    if (get_scrub_ip_details_200_response_billing_details->service_currency_symbol) {
        free(get_scrub_ip_details_200_response_billing_details->service_currency_symbol);
        get_scrub_ip_details_200_response_billing_details->service_currency_symbol = NULL;
    }
    if (get_scrub_ip_details_200_response_billing_details->service_cost_info) {
        free(get_scrub_ip_details_200_response_billing_details->service_cost_info);
        get_scrub_ip_details_200_response_billing_details->service_cost_info = NULL;
    }
    free(get_scrub_ip_details_200_response_billing_details);
}

cJSON *get_scrub_ip_details_200_response_billing_details_convertToJSON(get_scrub_ip_details_200_response_billing_details_t *get_scrub_ip_details_200_response_billing_details) {
    cJSON *item = cJSON_CreateObject();

    // get_scrub_ip_details_200_response_billing_details->service_last_invoice_date
    if(get_scrub_ip_details_200_response_billing_details->service_last_invoice_date) {
    if(cJSON_AddStringToObject(item, "service_last_invoice_date", get_scrub_ip_details_200_response_billing_details->service_last_invoice_date) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_billing_details->service_payment_status
    if(get_scrub_ip_details_200_response_billing_details->service_payment_status) {
    if(cJSON_AddStringToObject(item, "service_payment_status", get_scrub_ip_details_200_response_billing_details->service_payment_status) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_billing_details->service_frequency
    if(get_scrub_ip_details_200_response_billing_details->service_frequency) {
    if(cJSON_AddStringToObject(item, "service_frequency", get_scrub_ip_details_200_response_billing_details->service_frequency) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_billing_details->next_date
    if(get_scrub_ip_details_200_response_billing_details->next_date) {
    if(cJSON_AddStringToObject(item, "next_date", get_scrub_ip_details_200_response_billing_details->next_date) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_billing_details->service_next_invoice_date
    if(get_scrub_ip_details_200_response_billing_details->service_next_invoice_date) {
    if(cJSON_AddStringToObject(item, "service_next_invoice_date", get_scrub_ip_details_200_response_billing_details->service_next_invoice_date) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_billing_details->service_currency
    if(get_scrub_ip_details_200_response_billing_details->service_currency) {
    if(cJSON_AddStringToObject(item, "service_currency", get_scrub_ip_details_200_response_billing_details->service_currency) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_billing_details->service_currency_symbol
    if(get_scrub_ip_details_200_response_billing_details->service_currency_symbol) {
    if(cJSON_AddStringToObject(item, "service_currency_symbol", get_scrub_ip_details_200_response_billing_details->service_currency_symbol) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_billing_details->service_cost_info
    if(get_scrub_ip_details_200_response_billing_details->service_cost_info) {
    if(cJSON_AddStringToObject(item, "service_cost_info", get_scrub_ip_details_200_response_billing_details->service_cost_info) == NULL) {
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

get_scrub_ip_details_200_response_billing_details_t *get_scrub_ip_details_200_response_billing_details_parseFromJSON(cJSON *get_scrub_ip_details_200_response_billing_detailsJSON){

    get_scrub_ip_details_200_response_billing_details_t *get_scrub_ip_details_200_response_billing_details_local_var = NULL;

    // get_scrub_ip_details_200_response_billing_details->service_last_invoice_date
    cJSON *service_last_invoice_date = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_billing_detailsJSON, "service_last_invoice_date");
    if (cJSON_IsNull(service_last_invoice_date)) {
        service_last_invoice_date = NULL;
    }
    if (service_last_invoice_date) { 
    if(!cJSON_IsString(service_last_invoice_date) && !cJSON_IsNull(service_last_invoice_date))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_billing_details->service_payment_status
    cJSON *service_payment_status = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_billing_detailsJSON, "service_payment_status");
    if (cJSON_IsNull(service_payment_status)) {
        service_payment_status = NULL;
    }
    if (service_payment_status) { 
    if(!cJSON_IsString(service_payment_status) && !cJSON_IsNull(service_payment_status))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_billing_details->service_frequency
    cJSON *service_frequency = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_billing_detailsJSON, "service_frequency");
    if (cJSON_IsNull(service_frequency)) {
        service_frequency = NULL;
    }
    if (service_frequency) { 
    if(!cJSON_IsString(service_frequency) && !cJSON_IsNull(service_frequency))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_billing_details->next_date
    cJSON *next_date = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_billing_detailsJSON, "next_date");
    if (cJSON_IsNull(next_date)) {
        next_date = NULL;
    }
    if (next_date) { 
    if(!cJSON_IsString(next_date) && !cJSON_IsNull(next_date))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_billing_details->service_next_invoice_date
    cJSON *service_next_invoice_date = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_billing_detailsJSON, "service_next_invoice_date");
    if (cJSON_IsNull(service_next_invoice_date)) {
        service_next_invoice_date = NULL;
    }
    if (service_next_invoice_date) { 
    if(!cJSON_IsString(service_next_invoice_date) && !cJSON_IsNull(service_next_invoice_date))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_billing_details->service_currency
    cJSON *service_currency = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_billing_detailsJSON, "service_currency");
    if (cJSON_IsNull(service_currency)) {
        service_currency = NULL;
    }
    if (service_currency) { 
    if(!cJSON_IsString(service_currency) && !cJSON_IsNull(service_currency))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_billing_details->service_currency_symbol
    cJSON *service_currency_symbol = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_billing_detailsJSON, "service_currency_symbol");
    if (cJSON_IsNull(service_currency_symbol)) {
        service_currency_symbol = NULL;
    }
    if (service_currency_symbol) { 
    if(!cJSON_IsString(service_currency_symbol) && !cJSON_IsNull(service_currency_symbol))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_billing_details->service_cost_info
    cJSON *service_cost_info = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_billing_detailsJSON, "service_cost_info");
    if (cJSON_IsNull(service_cost_info)) {
        service_cost_info = NULL;
    }
    if (service_cost_info) { 
    if(!cJSON_IsString(service_cost_info) && !cJSON_IsNull(service_cost_info))
    {
    goto end; //String
    }
    }


    get_scrub_ip_details_200_response_billing_details_local_var = get_scrub_ip_details_200_response_billing_details_create_internal (
        service_last_invoice_date && !cJSON_IsNull(service_last_invoice_date) ? strdup(service_last_invoice_date->valuestring) : NULL,
        service_payment_status && !cJSON_IsNull(service_payment_status) ? strdup(service_payment_status->valuestring) : NULL,
        service_frequency && !cJSON_IsNull(service_frequency) ? strdup(service_frequency->valuestring) : NULL,
        next_date && !cJSON_IsNull(next_date) ? strdup(next_date->valuestring) : NULL,
        service_next_invoice_date && !cJSON_IsNull(service_next_invoice_date) ? strdup(service_next_invoice_date->valuestring) : NULL,
        service_currency && !cJSON_IsNull(service_currency) ? strdup(service_currency->valuestring) : NULL,
        service_currency_symbol && !cJSON_IsNull(service_currency_symbol) ? strdup(service_currency_symbol->valuestring) : NULL,
        service_cost_info && !cJSON_IsNull(service_cost_info) ? strdup(service_cost_info->valuestring) : NULL
        );

    return get_scrub_ip_details_200_response_billing_details_local_var;
end:
    return NULL;

}
