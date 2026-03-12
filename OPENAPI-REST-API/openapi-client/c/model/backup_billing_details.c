#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "backup_billing_details.h"



static backup_billing_details_t *backup_billing_details_create_internal(
    char *service_last_invoice_date,
    char *service_payment_status,
    char *service_frequency,
    char *next_date,
    char *service_next_invoice_date,
    char *service_currency,
    char *service_currency_symbol,
    char *service_cost_info,
    char *service_extra,
    char *service_extra_json
    ) {
    backup_billing_details_t *backup_billing_details_local_var = malloc(sizeof(backup_billing_details_t));
    if (!backup_billing_details_local_var) {
        return NULL;
    }
    backup_billing_details_local_var->service_last_invoice_date = service_last_invoice_date;
    backup_billing_details_local_var->service_payment_status = service_payment_status;
    backup_billing_details_local_var->service_frequency = service_frequency;
    backup_billing_details_local_var->next_date = next_date;
    backup_billing_details_local_var->service_next_invoice_date = service_next_invoice_date;
    backup_billing_details_local_var->service_currency = service_currency;
    backup_billing_details_local_var->service_currency_symbol = service_currency_symbol;
    backup_billing_details_local_var->service_cost_info = service_cost_info;
    backup_billing_details_local_var->service_extra = service_extra;
    backup_billing_details_local_var->service_extra_json = service_extra_json;

    backup_billing_details_local_var->_library_owned = 1;
    return backup_billing_details_local_var;
}

__attribute__((deprecated)) backup_billing_details_t *backup_billing_details_create(
    char *service_last_invoice_date,
    char *service_payment_status,
    char *service_frequency,
    char *next_date,
    char *service_next_invoice_date,
    char *service_currency,
    char *service_currency_symbol,
    char *service_cost_info,
    char *service_extra,
    char *service_extra_json
    ) {
    return backup_billing_details_create_internal (
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
}

void backup_billing_details_free(backup_billing_details_t *backup_billing_details) {
    if(NULL == backup_billing_details){
        return ;
    }
    if(backup_billing_details->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "backup_billing_details_free");
        return ;
    }
    listEntry_t *listEntry;
    if (backup_billing_details->service_last_invoice_date) {
        free(backup_billing_details->service_last_invoice_date);
        backup_billing_details->service_last_invoice_date = NULL;
    }
    if (backup_billing_details->service_payment_status) {
        free(backup_billing_details->service_payment_status);
        backup_billing_details->service_payment_status = NULL;
    }
    if (backup_billing_details->service_frequency) {
        free(backup_billing_details->service_frequency);
        backup_billing_details->service_frequency = NULL;
    }
    if (backup_billing_details->next_date) {
        free(backup_billing_details->next_date);
        backup_billing_details->next_date = NULL;
    }
    if (backup_billing_details->service_next_invoice_date) {
        free(backup_billing_details->service_next_invoice_date);
        backup_billing_details->service_next_invoice_date = NULL;
    }
    if (backup_billing_details->service_currency) {
        free(backup_billing_details->service_currency);
        backup_billing_details->service_currency = NULL;
    }
    if (backup_billing_details->service_currency_symbol) {
        free(backup_billing_details->service_currency_symbol);
        backup_billing_details->service_currency_symbol = NULL;
    }
    if (backup_billing_details->service_cost_info) {
        free(backup_billing_details->service_cost_info);
        backup_billing_details->service_cost_info = NULL;
    }
    if (backup_billing_details->service_extra) {
        free(backup_billing_details->service_extra);
        backup_billing_details->service_extra = NULL;
    }
    if (backup_billing_details->service_extra_json) {
        free(backup_billing_details->service_extra_json);
        backup_billing_details->service_extra_json = NULL;
    }
    free(backup_billing_details);
}

cJSON *backup_billing_details_convertToJSON(backup_billing_details_t *backup_billing_details) {
    cJSON *item = cJSON_CreateObject();

    // backup_billing_details->service_last_invoice_date
    if(backup_billing_details->service_last_invoice_date) {
    if(cJSON_AddStringToObject(item, "service_last_invoice_date", backup_billing_details->service_last_invoice_date) == NULL) {
    goto fail; //String
    }
    }


    // backup_billing_details->service_payment_status
    if(backup_billing_details->service_payment_status) {
    if(cJSON_AddStringToObject(item, "service_payment_status", backup_billing_details->service_payment_status) == NULL) {
    goto fail; //String
    }
    }


    // backup_billing_details->service_frequency
    if(backup_billing_details->service_frequency) {
    if(cJSON_AddStringToObject(item, "service_frequency", backup_billing_details->service_frequency) == NULL) {
    goto fail; //String
    }
    }


    // backup_billing_details->next_date
    if(backup_billing_details->next_date) {
    if(cJSON_AddStringToObject(item, "next_date", backup_billing_details->next_date) == NULL) {
    goto fail; //String
    }
    }


    // backup_billing_details->service_next_invoice_date
    if(backup_billing_details->service_next_invoice_date) {
    if(cJSON_AddStringToObject(item, "service_next_invoice_date", backup_billing_details->service_next_invoice_date) == NULL) {
    goto fail; //String
    }
    }


    // backup_billing_details->service_currency
    if(backup_billing_details->service_currency) {
    if(cJSON_AddStringToObject(item, "service_currency", backup_billing_details->service_currency) == NULL) {
    goto fail; //String
    }
    }


    // backup_billing_details->service_currency_symbol
    if(backup_billing_details->service_currency_symbol) {
    if(cJSON_AddStringToObject(item, "service_currency_symbol", backup_billing_details->service_currency_symbol) == NULL) {
    goto fail; //String
    }
    }


    // backup_billing_details->service_cost_info
    if(backup_billing_details->service_cost_info) {
    if(cJSON_AddStringToObject(item, "service_cost_info", backup_billing_details->service_cost_info) == NULL) {
    goto fail; //String
    }
    }


    // backup_billing_details->service_extra
    if(backup_billing_details->service_extra) {
    if(cJSON_AddStringToObject(item, "service_extra", backup_billing_details->service_extra) == NULL) {
    goto fail; //String
    }
    }


    // backup_billing_details->service_extra_json
    if(backup_billing_details->service_extra_json) {
    if(cJSON_AddStringToObject(item, "service_extra_json", backup_billing_details->service_extra_json) == NULL) {
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

backup_billing_details_t *backup_billing_details_parseFromJSON(cJSON *backup_billing_detailsJSON){

    backup_billing_details_t *backup_billing_details_local_var = NULL;

    // backup_billing_details->service_last_invoice_date
    cJSON *service_last_invoice_date = cJSON_GetObjectItemCaseSensitive(backup_billing_detailsJSON, "service_last_invoice_date");
    if (cJSON_IsNull(service_last_invoice_date)) {
        service_last_invoice_date = NULL;
    }
    if (service_last_invoice_date) { 
    if(!cJSON_IsString(service_last_invoice_date) && !cJSON_IsNull(service_last_invoice_date))
    {
    goto end; //String
    }
    }

    // backup_billing_details->service_payment_status
    cJSON *service_payment_status = cJSON_GetObjectItemCaseSensitive(backup_billing_detailsJSON, "service_payment_status");
    if (cJSON_IsNull(service_payment_status)) {
        service_payment_status = NULL;
    }
    if (service_payment_status) { 
    if(!cJSON_IsString(service_payment_status) && !cJSON_IsNull(service_payment_status))
    {
    goto end; //String
    }
    }

    // backup_billing_details->service_frequency
    cJSON *service_frequency = cJSON_GetObjectItemCaseSensitive(backup_billing_detailsJSON, "service_frequency");
    if (cJSON_IsNull(service_frequency)) {
        service_frequency = NULL;
    }
    if (service_frequency) { 
    if(!cJSON_IsString(service_frequency) && !cJSON_IsNull(service_frequency))
    {
    goto end; //String
    }
    }

    // backup_billing_details->next_date
    cJSON *next_date = cJSON_GetObjectItemCaseSensitive(backup_billing_detailsJSON, "next_date");
    if (cJSON_IsNull(next_date)) {
        next_date = NULL;
    }
    if (next_date) { 
    if(!cJSON_IsString(next_date) && !cJSON_IsNull(next_date))
    {
    goto end; //String
    }
    }

    // backup_billing_details->service_next_invoice_date
    cJSON *service_next_invoice_date = cJSON_GetObjectItemCaseSensitive(backup_billing_detailsJSON, "service_next_invoice_date");
    if (cJSON_IsNull(service_next_invoice_date)) {
        service_next_invoice_date = NULL;
    }
    if (service_next_invoice_date) { 
    if(!cJSON_IsString(service_next_invoice_date) && !cJSON_IsNull(service_next_invoice_date))
    {
    goto end; //String
    }
    }

    // backup_billing_details->service_currency
    cJSON *service_currency = cJSON_GetObjectItemCaseSensitive(backup_billing_detailsJSON, "service_currency");
    if (cJSON_IsNull(service_currency)) {
        service_currency = NULL;
    }
    if (service_currency) { 
    if(!cJSON_IsString(service_currency) && !cJSON_IsNull(service_currency))
    {
    goto end; //String
    }
    }

    // backup_billing_details->service_currency_symbol
    cJSON *service_currency_symbol = cJSON_GetObjectItemCaseSensitive(backup_billing_detailsJSON, "service_currency_symbol");
    if (cJSON_IsNull(service_currency_symbol)) {
        service_currency_symbol = NULL;
    }
    if (service_currency_symbol) { 
    if(!cJSON_IsString(service_currency_symbol) && !cJSON_IsNull(service_currency_symbol))
    {
    goto end; //String
    }
    }

    // backup_billing_details->service_cost_info
    cJSON *service_cost_info = cJSON_GetObjectItemCaseSensitive(backup_billing_detailsJSON, "service_cost_info");
    if (cJSON_IsNull(service_cost_info)) {
        service_cost_info = NULL;
    }
    if (service_cost_info) { 
    if(!cJSON_IsString(service_cost_info) && !cJSON_IsNull(service_cost_info))
    {
    goto end; //String
    }
    }

    // backup_billing_details->service_extra
    cJSON *service_extra = cJSON_GetObjectItemCaseSensitive(backup_billing_detailsJSON, "service_extra");
    if (cJSON_IsNull(service_extra)) {
        service_extra = NULL;
    }
    if (service_extra) { 
    if(!cJSON_IsString(service_extra) && !cJSON_IsNull(service_extra))
    {
    goto end; //String
    }
    }

    // backup_billing_details->service_extra_json
    cJSON *service_extra_json = cJSON_GetObjectItemCaseSensitive(backup_billing_detailsJSON, "service_extra_json");
    if (cJSON_IsNull(service_extra_json)) {
        service_extra_json = NULL;
    }
    if (service_extra_json) { 
    if(!cJSON_IsString(service_extra_json) && !cJSON_IsNull(service_extra_json))
    {
    goto end; //String
    }
    }


    backup_billing_details_local_var = backup_billing_details_create_internal (
        service_last_invoice_date && !cJSON_IsNull(service_last_invoice_date) ? strdup(service_last_invoice_date->valuestring) : NULL,
        service_payment_status && !cJSON_IsNull(service_payment_status) ? strdup(service_payment_status->valuestring) : NULL,
        service_frequency && !cJSON_IsNull(service_frequency) ? strdup(service_frequency->valuestring) : NULL,
        next_date && !cJSON_IsNull(next_date) ? strdup(next_date->valuestring) : NULL,
        service_next_invoice_date && !cJSON_IsNull(service_next_invoice_date) ? strdup(service_next_invoice_date->valuestring) : NULL,
        service_currency && !cJSON_IsNull(service_currency) ? strdup(service_currency->valuestring) : NULL,
        service_currency_symbol && !cJSON_IsNull(service_currency_symbol) ? strdup(service_currency_symbol->valuestring) : NULL,
        service_cost_info && !cJSON_IsNull(service_cost_info) ? strdup(service_cost_info->valuestring) : NULL,
        service_extra && !cJSON_IsNull(service_extra) ? strdup(service_extra->valuestring) : NULL,
        service_extra_json && !cJSON_IsNull(service_extra_json) ? strdup(service_extra_json->valuestring) : NULL
        );

    return backup_billing_details_local_var;
end:
    return NULL;

}
