#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "website_billing_details.h"



static website_billing_details_t *website_billing_details_create_internal(
    char *service_last_invoice_date,
    char *service_payment_status,
    char *service_frequency,
    char *next_date,
    char *service_next_invoice_date,
    char *service_currency,
    char *service_currency_symbol,
    char *service_coupon,
    char *service_cost_info,
    object_t *service_extra,
    char *service_extra_json
    ) {
    website_billing_details_t *website_billing_details_local_var = malloc(sizeof(website_billing_details_t));
    if (!website_billing_details_local_var) {
        return NULL;
    }
    website_billing_details_local_var->service_last_invoice_date = service_last_invoice_date;
    website_billing_details_local_var->service_payment_status = service_payment_status;
    website_billing_details_local_var->service_frequency = service_frequency;
    website_billing_details_local_var->next_date = next_date;
    website_billing_details_local_var->service_next_invoice_date = service_next_invoice_date;
    website_billing_details_local_var->service_currency = service_currency;
    website_billing_details_local_var->service_currency_symbol = service_currency_symbol;
    website_billing_details_local_var->service_coupon = service_coupon;
    website_billing_details_local_var->service_cost_info = service_cost_info;
    website_billing_details_local_var->service_extra = service_extra;
    website_billing_details_local_var->service_extra_json = service_extra_json;

    website_billing_details_local_var->_library_owned = 1;
    return website_billing_details_local_var;
}

__attribute__((deprecated)) website_billing_details_t *website_billing_details_create(
    char *service_last_invoice_date,
    char *service_payment_status,
    char *service_frequency,
    char *next_date,
    char *service_next_invoice_date,
    char *service_currency,
    char *service_currency_symbol,
    char *service_coupon,
    char *service_cost_info,
    object_t *service_extra,
    char *service_extra_json
    ) {
    return website_billing_details_create_internal (
        service_last_invoice_date,
        service_payment_status,
        service_frequency,
        next_date,
        service_next_invoice_date,
        service_currency,
        service_currency_symbol,
        service_coupon,
        service_cost_info,
        service_extra,
        service_extra_json
        );
}

void website_billing_details_free(website_billing_details_t *website_billing_details) {
    if(NULL == website_billing_details){
        return ;
    }
    if(website_billing_details->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "website_billing_details_free");
        return ;
    }
    listEntry_t *listEntry;
    if (website_billing_details->service_last_invoice_date) {
        free(website_billing_details->service_last_invoice_date);
        website_billing_details->service_last_invoice_date = NULL;
    }
    if (website_billing_details->service_payment_status) {
        free(website_billing_details->service_payment_status);
        website_billing_details->service_payment_status = NULL;
    }
    if (website_billing_details->service_frequency) {
        free(website_billing_details->service_frequency);
        website_billing_details->service_frequency = NULL;
    }
    if (website_billing_details->next_date) {
        free(website_billing_details->next_date);
        website_billing_details->next_date = NULL;
    }
    if (website_billing_details->service_next_invoice_date) {
        free(website_billing_details->service_next_invoice_date);
        website_billing_details->service_next_invoice_date = NULL;
    }
    if (website_billing_details->service_currency) {
        free(website_billing_details->service_currency);
        website_billing_details->service_currency = NULL;
    }
    if (website_billing_details->service_currency_symbol) {
        free(website_billing_details->service_currency_symbol);
        website_billing_details->service_currency_symbol = NULL;
    }
    if (website_billing_details->service_coupon) {
        free(website_billing_details->service_coupon);
        website_billing_details->service_coupon = NULL;
    }
    if (website_billing_details->service_cost_info) {
        free(website_billing_details->service_cost_info);
        website_billing_details->service_cost_info = NULL;
    }
    if (website_billing_details->service_extra) {
        object_free(website_billing_details->service_extra);
        website_billing_details->service_extra = NULL;
    }
    if (website_billing_details->service_extra_json) {
        free(website_billing_details->service_extra_json);
        website_billing_details->service_extra_json = NULL;
    }
    free(website_billing_details);
}

cJSON *website_billing_details_convertToJSON(website_billing_details_t *website_billing_details) {
    cJSON *item = cJSON_CreateObject();

    // website_billing_details->service_last_invoice_date
    if(website_billing_details->service_last_invoice_date) {
    if(cJSON_AddStringToObject(item, "service_last_invoice_date", website_billing_details->service_last_invoice_date) == NULL) {
    goto fail; //String
    }
    }


    // website_billing_details->service_payment_status
    if(website_billing_details->service_payment_status) {
    if(cJSON_AddStringToObject(item, "service_payment_status", website_billing_details->service_payment_status) == NULL) {
    goto fail; //String
    }
    }


    // website_billing_details->service_frequency
    if(website_billing_details->service_frequency) {
    if(cJSON_AddStringToObject(item, "service_frequency", website_billing_details->service_frequency) == NULL) {
    goto fail; //String
    }
    }


    // website_billing_details->next_date
    if(website_billing_details->next_date) {
    if(cJSON_AddStringToObject(item, "next_date", website_billing_details->next_date) == NULL) {
    goto fail; //String
    }
    }


    // website_billing_details->service_next_invoice_date
    if(website_billing_details->service_next_invoice_date) {
    if(cJSON_AddStringToObject(item, "service_next_invoice_date", website_billing_details->service_next_invoice_date) == NULL) {
    goto fail; //String
    }
    }


    // website_billing_details->service_currency
    if(website_billing_details->service_currency) {
    if(cJSON_AddStringToObject(item, "service_currency", website_billing_details->service_currency) == NULL) {
    goto fail; //String
    }
    }


    // website_billing_details->service_currency_symbol
    if(website_billing_details->service_currency_symbol) {
    if(cJSON_AddStringToObject(item, "service_currency_symbol", website_billing_details->service_currency_symbol) == NULL) {
    goto fail; //String
    }
    }


    // website_billing_details->service_coupon
    if(website_billing_details->service_coupon) {
    if(cJSON_AddStringToObject(item, "service_coupon", website_billing_details->service_coupon) == NULL) {
    goto fail; //String
    }
    }


    // website_billing_details->service_cost_info
    if(website_billing_details->service_cost_info) {
    if(cJSON_AddStringToObject(item, "service_cost_info", website_billing_details->service_cost_info) == NULL) {
    goto fail; //String
    }
    }


    // website_billing_details->service_extra
    if(website_billing_details->service_extra) {
    cJSON *service_extra_object = object_convertToJSON(website_billing_details->service_extra);
    if(service_extra_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "service_extra", service_extra_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // website_billing_details->service_extra_json
    if(website_billing_details->service_extra_json) {
    if(cJSON_AddStringToObject(item, "service_extra_json", website_billing_details->service_extra_json) == NULL) {
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

website_billing_details_t *website_billing_details_parseFromJSON(cJSON *website_billing_detailsJSON){

    website_billing_details_t *website_billing_details_local_var = NULL;

    // website_billing_details->service_last_invoice_date
    cJSON *service_last_invoice_date = cJSON_GetObjectItemCaseSensitive(website_billing_detailsJSON, "service_last_invoice_date");
    if (cJSON_IsNull(service_last_invoice_date)) {
        service_last_invoice_date = NULL;
    }
    if (service_last_invoice_date) { 
    if(!cJSON_IsString(service_last_invoice_date) && !cJSON_IsNull(service_last_invoice_date))
    {
    goto end; //String
    }
    }

    // website_billing_details->service_payment_status
    cJSON *service_payment_status = cJSON_GetObjectItemCaseSensitive(website_billing_detailsJSON, "service_payment_status");
    if (cJSON_IsNull(service_payment_status)) {
        service_payment_status = NULL;
    }
    if (service_payment_status) { 
    if(!cJSON_IsString(service_payment_status) && !cJSON_IsNull(service_payment_status))
    {
    goto end; //String
    }
    }

    // website_billing_details->service_frequency
    cJSON *service_frequency = cJSON_GetObjectItemCaseSensitive(website_billing_detailsJSON, "service_frequency");
    if (cJSON_IsNull(service_frequency)) {
        service_frequency = NULL;
    }
    if (service_frequency) { 
    if(!cJSON_IsString(service_frequency) && !cJSON_IsNull(service_frequency))
    {
    goto end; //String
    }
    }

    // website_billing_details->next_date
    cJSON *next_date = cJSON_GetObjectItemCaseSensitive(website_billing_detailsJSON, "next_date");
    if (cJSON_IsNull(next_date)) {
        next_date = NULL;
    }
    if (next_date) { 
    if(!cJSON_IsString(next_date) && !cJSON_IsNull(next_date))
    {
    goto end; //String
    }
    }

    // website_billing_details->service_next_invoice_date
    cJSON *service_next_invoice_date = cJSON_GetObjectItemCaseSensitive(website_billing_detailsJSON, "service_next_invoice_date");
    if (cJSON_IsNull(service_next_invoice_date)) {
        service_next_invoice_date = NULL;
    }
    if (service_next_invoice_date) { 
    if(!cJSON_IsString(service_next_invoice_date) && !cJSON_IsNull(service_next_invoice_date))
    {
    goto end; //String
    }
    }

    // website_billing_details->service_currency
    cJSON *service_currency = cJSON_GetObjectItemCaseSensitive(website_billing_detailsJSON, "service_currency");
    if (cJSON_IsNull(service_currency)) {
        service_currency = NULL;
    }
    if (service_currency) { 
    if(!cJSON_IsString(service_currency) && !cJSON_IsNull(service_currency))
    {
    goto end; //String
    }
    }

    // website_billing_details->service_currency_symbol
    cJSON *service_currency_symbol = cJSON_GetObjectItemCaseSensitive(website_billing_detailsJSON, "service_currency_symbol");
    if (cJSON_IsNull(service_currency_symbol)) {
        service_currency_symbol = NULL;
    }
    if (service_currency_symbol) { 
    if(!cJSON_IsString(service_currency_symbol) && !cJSON_IsNull(service_currency_symbol))
    {
    goto end; //String
    }
    }

    // website_billing_details->service_coupon
    cJSON *service_coupon = cJSON_GetObjectItemCaseSensitive(website_billing_detailsJSON, "service_coupon");
    if (cJSON_IsNull(service_coupon)) {
        service_coupon = NULL;
    }
    if (service_coupon) { 
    if(!cJSON_IsString(service_coupon) && !cJSON_IsNull(service_coupon))
    {
    goto end; //String
    }
    }

    // website_billing_details->service_cost_info
    cJSON *service_cost_info = cJSON_GetObjectItemCaseSensitive(website_billing_detailsJSON, "service_cost_info");
    if (cJSON_IsNull(service_cost_info)) {
        service_cost_info = NULL;
    }
    if (service_cost_info) { 
    if(!cJSON_IsString(service_cost_info) && !cJSON_IsNull(service_cost_info))
    {
    goto end; //String
    }
    }

    // website_billing_details->service_extra
    cJSON *service_extra = cJSON_GetObjectItemCaseSensitive(website_billing_detailsJSON, "service_extra");
    if (cJSON_IsNull(service_extra)) {
        service_extra = NULL;
    }
    object_t *service_extra_local_object = NULL;
    if (service_extra) { 
    service_extra_local_object = object_parseFromJSON(service_extra); //object
    }

    // website_billing_details->service_extra_json
    cJSON *service_extra_json = cJSON_GetObjectItemCaseSensitive(website_billing_detailsJSON, "service_extra_json");
    if (cJSON_IsNull(service_extra_json)) {
        service_extra_json = NULL;
    }
    if (service_extra_json) { 
    if(!cJSON_IsString(service_extra_json) && !cJSON_IsNull(service_extra_json))
    {
    goto end; //String
    }
    }


    website_billing_details_local_var = website_billing_details_create_internal (
        service_last_invoice_date && !cJSON_IsNull(service_last_invoice_date) ? strdup(service_last_invoice_date->valuestring) : NULL,
        service_payment_status && !cJSON_IsNull(service_payment_status) ? strdup(service_payment_status->valuestring) : NULL,
        service_frequency && !cJSON_IsNull(service_frequency) ? strdup(service_frequency->valuestring) : NULL,
        next_date && !cJSON_IsNull(next_date) ? strdup(next_date->valuestring) : NULL,
        service_next_invoice_date && !cJSON_IsNull(service_next_invoice_date) ? strdup(service_next_invoice_date->valuestring) : NULL,
        service_currency && !cJSON_IsNull(service_currency) ? strdup(service_currency->valuestring) : NULL,
        service_currency_symbol && !cJSON_IsNull(service_currency_symbol) ? strdup(service_currency_symbol->valuestring) : NULL,
        service_coupon && !cJSON_IsNull(service_coupon) ? strdup(service_coupon->valuestring) : NULL,
        service_cost_info && !cJSON_IsNull(service_cost_info) ? strdup(service_cost_info->valuestring) : NULL,
        service_extra ? service_extra_local_object : NULL,
        service_extra_json && !cJSON_IsNull(service_extra_json) ? strdup(service_extra_json->valuestring) : NULL
        );

    return website_billing_details_local_var;
end:
    return NULL;

}
