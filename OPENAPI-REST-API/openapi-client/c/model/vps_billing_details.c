#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_billing_details.h"



static vps_billing_details_t *vps_billing_details_create_internal(
    char *service_last_invoice_date,
    char *service_payment_status,
    char *service_frequency,
    char *next_date,
    char *service_next_invoice_date,
    char *service_currency,
    char *service_currency_symbol,
    char *service_coupon,
    char *service_cost_info,
    vps_service_extra_t *service_extra,
    char *service_extra_json
    ) {
    vps_billing_details_t *vps_billing_details_local_var = malloc(sizeof(vps_billing_details_t));
    if (!vps_billing_details_local_var) {
        return NULL;
    }
    vps_billing_details_local_var->service_last_invoice_date = service_last_invoice_date;
    vps_billing_details_local_var->service_payment_status = service_payment_status;
    vps_billing_details_local_var->service_frequency = service_frequency;
    vps_billing_details_local_var->next_date = next_date;
    vps_billing_details_local_var->service_next_invoice_date = service_next_invoice_date;
    vps_billing_details_local_var->service_currency = service_currency;
    vps_billing_details_local_var->service_currency_symbol = service_currency_symbol;
    vps_billing_details_local_var->service_coupon = service_coupon;
    vps_billing_details_local_var->service_cost_info = service_cost_info;
    vps_billing_details_local_var->service_extra = service_extra;
    vps_billing_details_local_var->service_extra_json = service_extra_json;

    vps_billing_details_local_var->_library_owned = 1;
    return vps_billing_details_local_var;
}

__attribute__((deprecated)) vps_billing_details_t *vps_billing_details_create(
    char *service_last_invoice_date,
    char *service_payment_status,
    char *service_frequency,
    char *next_date,
    char *service_next_invoice_date,
    char *service_currency,
    char *service_currency_symbol,
    char *service_coupon,
    char *service_cost_info,
    vps_service_extra_t *service_extra,
    char *service_extra_json
    ) {
    return vps_billing_details_create_internal (
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

void vps_billing_details_free(vps_billing_details_t *vps_billing_details) {
    if(NULL == vps_billing_details){
        return ;
    }
    if(vps_billing_details->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_billing_details_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_billing_details->service_last_invoice_date) {
        free(vps_billing_details->service_last_invoice_date);
        vps_billing_details->service_last_invoice_date = NULL;
    }
    if (vps_billing_details->service_payment_status) {
        free(vps_billing_details->service_payment_status);
        vps_billing_details->service_payment_status = NULL;
    }
    if (vps_billing_details->service_frequency) {
        free(vps_billing_details->service_frequency);
        vps_billing_details->service_frequency = NULL;
    }
    if (vps_billing_details->next_date) {
        free(vps_billing_details->next_date);
        vps_billing_details->next_date = NULL;
    }
    if (vps_billing_details->service_next_invoice_date) {
        free(vps_billing_details->service_next_invoice_date);
        vps_billing_details->service_next_invoice_date = NULL;
    }
    if (vps_billing_details->service_currency) {
        free(vps_billing_details->service_currency);
        vps_billing_details->service_currency = NULL;
    }
    if (vps_billing_details->service_currency_symbol) {
        free(vps_billing_details->service_currency_symbol);
        vps_billing_details->service_currency_symbol = NULL;
    }
    if (vps_billing_details->service_coupon) {
        free(vps_billing_details->service_coupon);
        vps_billing_details->service_coupon = NULL;
    }
    if (vps_billing_details->service_cost_info) {
        free(vps_billing_details->service_cost_info);
        vps_billing_details->service_cost_info = NULL;
    }
    if (vps_billing_details->service_extra) {
        vps_service_extra_free(vps_billing_details->service_extra);
        vps_billing_details->service_extra = NULL;
    }
    if (vps_billing_details->service_extra_json) {
        free(vps_billing_details->service_extra_json);
        vps_billing_details->service_extra_json = NULL;
    }
    free(vps_billing_details);
}

cJSON *vps_billing_details_convertToJSON(vps_billing_details_t *vps_billing_details) {
    cJSON *item = cJSON_CreateObject();

    // vps_billing_details->service_last_invoice_date
    if(vps_billing_details->service_last_invoice_date) {
    if(cJSON_AddStringToObject(item, "service_last_invoice_date", vps_billing_details->service_last_invoice_date) == NULL) {
    goto fail; //String
    }
    }


    // vps_billing_details->service_payment_status
    if(vps_billing_details->service_payment_status) {
    if(cJSON_AddStringToObject(item, "service_payment_status", vps_billing_details->service_payment_status) == NULL) {
    goto fail; //String
    }
    }


    // vps_billing_details->service_frequency
    if(vps_billing_details->service_frequency) {
    if(cJSON_AddStringToObject(item, "service_frequency", vps_billing_details->service_frequency) == NULL) {
    goto fail; //String
    }
    }


    // vps_billing_details->next_date
    if(vps_billing_details->next_date) {
    if(cJSON_AddStringToObject(item, "next_date", vps_billing_details->next_date) == NULL) {
    goto fail; //String
    }
    }


    // vps_billing_details->service_next_invoice_date
    if(vps_billing_details->service_next_invoice_date) {
    if(cJSON_AddStringToObject(item, "service_next_invoice_date", vps_billing_details->service_next_invoice_date) == NULL) {
    goto fail; //String
    }
    }


    // vps_billing_details->service_currency
    if(vps_billing_details->service_currency) {
    if(cJSON_AddStringToObject(item, "service_currency", vps_billing_details->service_currency) == NULL) {
    goto fail; //String
    }
    }


    // vps_billing_details->service_currency_symbol
    if(vps_billing_details->service_currency_symbol) {
    if(cJSON_AddStringToObject(item, "service_currency_symbol", vps_billing_details->service_currency_symbol) == NULL) {
    goto fail; //String
    }
    }


    // vps_billing_details->service_coupon
    if(vps_billing_details->service_coupon) {
    if(cJSON_AddStringToObject(item, "service_coupon", vps_billing_details->service_coupon) == NULL) {
    goto fail; //String
    }
    }


    // vps_billing_details->service_cost_info
    if(vps_billing_details->service_cost_info) {
    if(cJSON_AddStringToObject(item, "service_cost_info", vps_billing_details->service_cost_info) == NULL) {
    goto fail; //String
    }
    }


    // vps_billing_details->service_extra
    if(vps_billing_details->service_extra) {
    cJSON *service_extra_local_JSON = vps_service_extra_convertToJSON(vps_billing_details->service_extra);
    if(service_extra_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "service_extra", service_extra_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // vps_billing_details->service_extra_json
    if(vps_billing_details->service_extra_json) {
    if(cJSON_AddStringToObject(item, "service_extra_json", vps_billing_details->service_extra_json) == NULL) {
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

vps_billing_details_t *vps_billing_details_parseFromJSON(cJSON *vps_billing_detailsJSON){

    vps_billing_details_t *vps_billing_details_local_var = NULL;

    // define the local variable for vps_billing_details->service_extra
    vps_service_extra_t *service_extra_local_nonprim = NULL;

    // vps_billing_details->service_last_invoice_date
    cJSON *service_last_invoice_date = cJSON_GetObjectItemCaseSensitive(vps_billing_detailsJSON, "service_last_invoice_date");
    if (cJSON_IsNull(service_last_invoice_date)) {
        service_last_invoice_date = NULL;
    }
    if (service_last_invoice_date) { 
    if(!cJSON_IsString(service_last_invoice_date) && !cJSON_IsNull(service_last_invoice_date))
    {
    goto end; //String
    }
    }

    // vps_billing_details->service_payment_status
    cJSON *service_payment_status = cJSON_GetObjectItemCaseSensitive(vps_billing_detailsJSON, "service_payment_status");
    if (cJSON_IsNull(service_payment_status)) {
        service_payment_status = NULL;
    }
    if (service_payment_status) { 
    if(!cJSON_IsString(service_payment_status) && !cJSON_IsNull(service_payment_status))
    {
    goto end; //String
    }
    }

    // vps_billing_details->service_frequency
    cJSON *service_frequency = cJSON_GetObjectItemCaseSensitive(vps_billing_detailsJSON, "service_frequency");
    if (cJSON_IsNull(service_frequency)) {
        service_frequency = NULL;
    }
    if (service_frequency) { 
    if(!cJSON_IsString(service_frequency) && !cJSON_IsNull(service_frequency))
    {
    goto end; //String
    }
    }

    // vps_billing_details->next_date
    cJSON *next_date = cJSON_GetObjectItemCaseSensitive(vps_billing_detailsJSON, "next_date");
    if (cJSON_IsNull(next_date)) {
        next_date = NULL;
    }
    if (next_date) { 
    if(!cJSON_IsString(next_date) && !cJSON_IsNull(next_date))
    {
    goto end; //String
    }
    }

    // vps_billing_details->service_next_invoice_date
    cJSON *service_next_invoice_date = cJSON_GetObjectItemCaseSensitive(vps_billing_detailsJSON, "service_next_invoice_date");
    if (cJSON_IsNull(service_next_invoice_date)) {
        service_next_invoice_date = NULL;
    }
    if (service_next_invoice_date) { 
    if(!cJSON_IsString(service_next_invoice_date) && !cJSON_IsNull(service_next_invoice_date))
    {
    goto end; //String
    }
    }

    // vps_billing_details->service_currency
    cJSON *service_currency = cJSON_GetObjectItemCaseSensitive(vps_billing_detailsJSON, "service_currency");
    if (cJSON_IsNull(service_currency)) {
        service_currency = NULL;
    }
    if (service_currency) { 
    if(!cJSON_IsString(service_currency) && !cJSON_IsNull(service_currency))
    {
    goto end; //String
    }
    }

    // vps_billing_details->service_currency_symbol
    cJSON *service_currency_symbol = cJSON_GetObjectItemCaseSensitive(vps_billing_detailsJSON, "service_currency_symbol");
    if (cJSON_IsNull(service_currency_symbol)) {
        service_currency_symbol = NULL;
    }
    if (service_currency_symbol) { 
    if(!cJSON_IsString(service_currency_symbol) && !cJSON_IsNull(service_currency_symbol))
    {
    goto end; //String
    }
    }

    // vps_billing_details->service_coupon
    cJSON *service_coupon = cJSON_GetObjectItemCaseSensitive(vps_billing_detailsJSON, "service_coupon");
    if (cJSON_IsNull(service_coupon)) {
        service_coupon = NULL;
    }
    if (service_coupon) { 
    if(!cJSON_IsString(service_coupon) && !cJSON_IsNull(service_coupon))
    {
    goto end; //String
    }
    }

    // vps_billing_details->service_cost_info
    cJSON *service_cost_info = cJSON_GetObjectItemCaseSensitive(vps_billing_detailsJSON, "service_cost_info");
    if (cJSON_IsNull(service_cost_info)) {
        service_cost_info = NULL;
    }
    if (service_cost_info) { 
    if(!cJSON_IsString(service_cost_info) && !cJSON_IsNull(service_cost_info))
    {
    goto end; //String
    }
    }

    // vps_billing_details->service_extra
    cJSON *service_extra = cJSON_GetObjectItemCaseSensitive(vps_billing_detailsJSON, "service_extra");
    if (cJSON_IsNull(service_extra)) {
        service_extra = NULL;
    }
    if (service_extra) { 
    service_extra_local_nonprim = vps_service_extra_parseFromJSON(service_extra); //nonprimitive
    }

    // vps_billing_details->service_extra_json
    cJSON *service_extra_json = cJSON_GetObjectItemCaseSensitive(vps_billing_detailsJSON, "service_extra_json");
    if (cJSON_IsNull(service_extra_json)) {
        service_extra_json = NULL;
    }
    if (service_extra_json) { 
    if(!cJSON_IsString(service_extra_json) && !cJSON_IsNull(service_extra_json))
    {
    goto end; //String
    }
    }


    vps_billing_details_local_var = vps_billing_details_create_internal (
        service_last_invoice_date && !cJSON_IsNull(service_last_invoice_date) ? strdup(service_last_invoice_date->valuestring) : NULL,
        service_payment_status && !cJSON_IsNull(service_payment_status) ? strdup(service_payment_status->valuestring) : NULL,
        service_frequency && !cJSON_IsNull(service_frequency) ? strdup(service_frequency->valuestring) : NULL,
        next_date && !cJSON_IsNull(next_date) ? strdup(next_date->valuestring) : NULL,
        service_next_invoice_date && !cJSON_IsNull(service_next_invoice_date) ? strdup(service_next_invoice_date->valuestring) : NULL,
        service_currency && !cJSON_IsNull(service_currency) ? strdup(service_currency->valuestring) : NULL,
        service_currency_symbol && !cJSON_IsNull(service_currency_symbol) ? strdup(service_currency_symbol->valuestring) : NULL,
        service_coupon && !cJSON_IsNull(service_coupon) ? strdup(service_coupon->valuestring) : NULL,
        service_cost_info && !cJSON_IsNull(service_cost_info) ? strdup(service_cost_info->valuestring) : NULL,
        service_extra ? service_extra_local_nonprim : NULL,
        service_extra_json && !cJSON_IsNull(service_extra_json) ? strdup(service_extra_json->valuestring) : NULL
        );

    return vps_billing_details_local_var;
end:
    if (service_extra_local_nonprim) {
        vps_service_extra_free(service_extra_local_nonprim);
        service_extra_local_nonprim = NULL;
    }
    return NULL;

}
