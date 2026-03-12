#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "license_billing_details.h"



static license_billing_details_t *license_billing_details_create_internal(
    char *service_last_invoice_date,
    char *service_payment_status,
    char *service_frequency,
    char *next_date,
    char *service_next_invoice_date,
    char *service_currency,
    char *service_currency_symbol,
    char *service_coupon,
    char *service_cost_info,
    list_t *service_extra,
    char *service_extra_json
    ) {
    license_billing_details_t *license_billing_details_local_var = malloc(sizeof(license_billing_details_t));
    if (!license_billing_details_local_var) {
        return NULL;
    }
    license_billing_details_local_var->service_last_invoice_date = service_last_invoice_date;
    license_billing_details_local_var->service_payment_status = service_payment_status;
    license_billing_details_local_var->service_frequency = service_frequency;
    license_billing_details_local_var->next_date = next_date;
    license_billing_details_local_var->service_next_invoice_date = service_next_invoice_date;
    license_billing_details_local_var->service_currency = service_currency;
    license_billing_details_local_var->service_currency_symbol = service_currency_symbol;
    license_billing_details_local_var->service_coupon = service_coupon;
    license_billing_details_local_var->service_cost_info = service_cost_info;
    license_billing_details_local_var->service_extra = service_extra;
    license_billing_details_local_var->service_extra_json = service_extra_json;

    license_billing_details_local_var->_library_owned = 1;
    return license_billing_details_local_var;
}

__attribute__((deprecated)) license_billing_details_t *license_billing_details_create(
    char *service_last_invoice_date,
    char *service_payment_status,
    char *service_frequency,
    char *next_date,
    char *service_next_invoice_date,
    char *service_currency,
    char *service_currency_symbol,
    char *service_coupon,
    char *service_cost_info,
    list_t *service_extra,
    char *service_extra_json
    ) {
    return license_billing_details_create_internal (
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

void license_billing_details_free(license_billing_details_t *license_billing_details) {
    if(NULL == license_billing_details){
        return ;
    }
    if(license_billing_details->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "license_billing_details_free");
        return ;
    }
    listEntry_t *listEntry;
    if (license_billing_details->service_last_invoice_date) {
        free(license_billing_details->service_last_invoice_date);
        license_billing_details->service_last_invoice_date = NULL;
    }
    if (license_billing_details->service_payment_status) {
        free(license_billing_details->service_payment_status);
        license_billing_details->service_payment_status = NULL;
    }
    if (license_billing_details->service_frequency) {
        free(license_billing_details->service_frequency);
        license_billing_details->service_frequency = NULL;
    }
    if (license_billing_details->next_date) {
        free(license_billing_details->next_date);
        license_billing_details->next_date = NULL;
    }
    if (license_billing_details->service_next_invoice_date) {
        free(license_billing_details->service_next_invoice_date);
        license_billing_details->service_next_invoice_date = NULL;
    }
    if (license_billing_details->service_currency) {
        free(license_billing_details->service_currency);
        license_billing_details->service_currency = NULL;
    }
    if (license_billing_details->service_currency_symbol) {
        free(license_billing_details->service_currency_symbol);
        license_billing_details->service_currency_symbol = NULL;
    }
    if (license_billing_details->service_coupon) {
        free(license_billing_details->service_coupon);
        license_billing_details->service_coupon = NULL;
    }
    if (license_billing_details->service_cost_info) {
        free(license_billing_details->service_cost_info);
        license_billing_details->service_cost_info = NULL;
    }
    if (license_billing_details->service_extra) {
        list_ForEach(listEntry, license_billing_details->service_extra) {
            free(listEntry->data);
        }
        list_freeList(license_billing_details->service_extra);
        license_billing_details->service_extra = NULL;
    }
    if (license_billing_details->service_extra_json) {
        free(license_billing_details->service_extra_json);
        license_billing_details->service_extra_json = NULL;
    }
    free(license_billing_details);
}

cJSON *license_billing_details_convertToJSON(license_billing_details_t *license_billing_details) {
    cJSON *item = cJSON_CreateObject();

    // license_billing_details->service_last_invoice_date
    if(license_billing_details->service_last_invoice_date) {
    if(cJSON_AddStringToObject(item, "service_last_invoice_date", license_billing_details->service_last_invoice_date) == NULL) {
    goto fail; //String
    }
    }


    // license_billing_details->service_payment_status
    if(license_billing_details->service_payment_status) {
    if(cJSON_AddStringToObject(item, "service_payment_status", license_billing_details->service_payment_status) == NULL) {
    goto fail; //String
    }
    }


    // license_billing_details->service_frequency
    if(license_billing_details->service_frequency) {
    if(cJSON_AddStringToObject(item, "service_frequency", license_billing_details->service_frequency) == NULL) {
    goto fail; //String
    }
    }


    // license_billing_details->next_date
    if(license_billing_details->next_date) {
    if(cJSON_AddStringToObject(item, "next_date", license_billing_details->next_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // license_billing_details->service_next_invoice_date
    if(license_billing_details->service_next_invoice_date) {
    if(cJSON_AddStringToObject(item, "service_next_invoice_date", license_billing_details->service_next_invoice_date) == NULL) {
    goto fail; //String
    }
    }


    // license_billing_details->service_currency
    if(license_billing_details->service_currency) {
    if(cJSON_AddStringToObject(item, "service_currency", license_billing_details->service_currency) == NULL) {
    goto fail; //String
    }
    }


    // license_billing_details->service_currency_symbol
    if(license_billing_details->service_currency_symbol) {
    if(cJSON_AddStringToObject(item, "service_currency_symbol", license_billing_details->service_currency_symbol) == NULL) {
    goto fail; //String
    }
    }


    // license_billing_details->service_coupon
    if(license_billing_details->service_coupon) {
    if(cJSON_AddStringToObject(item, "service_coupon", license_billing_details->service_coupon) == NULL) {
    goto fail; //String
    }
    }


    // license_billing_details->service_cost_info
    if(license_billing_details->service_cost_info) {
    if(cJSON_AddStringToObject(item, "service_cost_info", license_billing_details->service_cost_info) == NULL) {
    goto fail; //String
    }
    }


    // license_billing_details->service_extra
    if(license_billing_details->service_extra) {
    cJSON *service_extra = cJSON_AddArrayToObject(item, "service_extra");
    if(service_extra == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *service_extraListEntry;
    list_ForEach(service_extraListEntry, license_billing_details->service_extra) {
    if(cJSON_AddStringToObject(service_extra, "", service_extraListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // license_billing_details->service_extra_json
    if(license_billing_details->service_extra_json) {
    if(cJSON_AddStringToObject(item, "service_extra_json", license_billing_details->service_extra_json) == NULL) {
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

license_billing_details_t *license_billing_details_parseFromJSON(cJSON *license_billing_detailsJSON){

    license_billing_details_t *license_billing_details_local_var = NULL;

    // define the local list for license_billing_details->service_extra
    list_t *service_extraList = NULL;

    // license_billing_details->service_last_invoice_date
    cJSON *service_last_invoice_date = cJSON_GetObjectItemCaseSensitive(license_billing_detailsJSON, "service_last_invoice_date");
    if (cJSON_IsNull(service_last_invoice_date)) {
        service_last_invoice_date = NULL;
    }
    if (service_last_invoice_date) { 
    if(!cJSON_IsString(service_last_invoice_date) && !cJSON_IsNull(service_last_invoice_date))
    {
    goto end; //String
    }
    }

    // license_billing_details->service_payment_status
    cJSON *service_payment_status = cJSON_GetObjectItemCaseSensitive(license_billing_detailsJSON, "service_payment_status");
    if (cJSON_IsNull(service_payment_status)) {
        service_payment_status = NULL;
    }
    if (service_payment_status) { 
    if(!cJSON_IsString(service_payment_status) && !cJSON_IsNull(service_payment_status))
    {
    goto end; //String
    }
    }

    // license_billing_details->service_frequency
    cJSON *service_frequency = cJSON_GetObjectItemCaseSensitive(license_billing_detailsJSON, "service_frequency");
    if (cJSON_IsNull(service_frequency)) {
        service_frequency = NULL;
    }
    if (service_frequency) { 
    if(!cJSON_IsString(service_frequency) && !cJSON_IsNull(service_frequency))
    {
    goto end; //String
    }
    }

    // license_billing_details->next_date
    cJSON *next_date = cJSON_GetObjectItemCaseSensitive(license_billing_detailsJSON, "next_date");
    if (cJSON_IsNull(next_date)) {
        next_date = NULL;
    }
    if (next_date) { 
    if(!cJSON_IsString(next_date) && !cJSON_IsNull(next_date))
    {
    goto end; //DateTime
    }
    }

    // license_billing_details->service_next_invoice_date
    cJSON *service_next_invoice_date = cJSON_GetObjectItemCaseSensitive(license_billing_detailsJSON, "service_next_invoice_date");
    if (cJSON_IsNull(service_next_invoice_date)) {
        service_next_invoice_date = NULL;
    }
    if (service_next_invoice_date) { 
    if(!cJSON_IsString(service_next_invoice_date) && !cJSON_IsNull(service_next_invoice_date))
    {
    goto end; //String
    }
    }

    // license_billing_details->service_currency
    cJSON *service_currency = cJSON_GetObjectItemCaseSensitive(license_billing_detailsJSON, "service_currency");
    if (cJSON_IsNull(service_currency)) {
        service_currency = NULL;
    }
    if (service_currency) { 
    if(!cJSON_IsString(service_currency) && !cJSON_IsNull(service_currency))
    {
    goto end; //String
    }
    }

    // license_billing_details->service_currency_symbol
    cJSON *service_currency_symbol = cJSON_GetObjectItemCaseSensitive(license_billing_detailsJSON, "service_currency_symbol");
    if (cJSON_IsNull(service_currency_symbol)) {
        service_currency_symbol = NULL;
    }
    if (service_currency_symbol) { 
    if(!cJSON_IsString(service_currency_symbol) && !cJSON_IsNull(service_currency_symbol))
    {
    goto end; //String
    }
    }

    // license_billing_details->service_coupon
    cJSON *service_coupon = cJSON_GetObjectItemCaseSensitive(license_billing_detailsJSON, "service_coupon");
    if (cJSON_IsNull(service_coupon)) {
        service_coupon = NULL;
    }
    if (service_coupon) { 
    if(!cJSON_IsString(service_coupon) && !cJSON_IsNull(service_coupon))
    {
    goto end; //String
    }
    }

    // license_billing_details->service_cost_info
    cJSON *service_cost_info = cJSON_GetObjectItemCaseSensitive(license_billing_detailsJSON, "service_cost_info");
    if (cJSON_IsNull(service_cost_info)) {
        service_cost_info = NULL;
    }
    if (service_cost_info) { 
    if(!cJSON_IsString(service_cost_info) && !cJSON_IsNull(service_cost_info))
    {
    goto end; //String
    }
    }

    // license_billing_details->service_extra
    cJSON *service_extra = cJSON_GetObjectItemCaseSensitive(license_billing_detailsJSON, "service_extra");
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

    // license_billing_details->service_extra_json
    cJSON *service_extra_json = cJSON_GetObjectItemCaseSensitive(license_billing_detailsJSON, "service_extra_json");
    if (cJSON_IsNull(service_extra_json)) {
        service_extra_json = NULL;
    }
    if (service_extra_json) { 
    if(!cJSON_IsString(service_extra_json) && !cJSON_IsNull(service_extra_json))
    {
    goto end; //String
    }
    }


    license_billing_details_local_var = license_billing_details_create_internal (
        service_last_invoice_date && !cJSON_IsNull(service_last_invoice_date) ? strdup(service_last_invoice_date->valuestring) : NULL,
        service_payment_status && !cJSON_IsNull(service_payment_status) ? strdup(service_payment_status->valuestring) : NULL,
        service_frequency && !cJSON_IsNull(service_frequency) ? strdup(service_frequency->valuestring) : NULL,
        next_date && !cJSON_IsNull(next_date) ? strdup(next_date->valuestring) : NULL,
        service_next_invoice_date && !cJSON_IsNull(service_next_invoice_date) ? strdup(service_next_invoice_date->valuestring) : NULL,
        service_currency && !cJSON_IsNull(service_currency) ? strdup(service_currency->valuestring) : NULL,
        service_currency_symbol && !cJSON_IsNull(service_currency_symbol) ? strdup(service_currency_symbol->valuestring) : NULL,
        service_coupon && !cJSON_IsNull(service_coupon) ? strdup(service_coupon->valuestring) : NULL,
        service_cost_info && !cJSON_IsNull(service_cost_info) ? strdup(service_cost_info->valuestring) : NULL,
        service_extra ? service_extraList : NULL,
        service_extra_json && !cJSON_IsNull(service_extra_json) ? strdup(service_extra_json->valuestring) : NULL
        );

    return license_billing_details_local_var;
end:
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
