#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value.h"



static charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_t *charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_create_internal(
    double invoices_id,
    char *invoices_description,
    double invoices_amount,
    char *invoices_date,
    char *invoices_currency,
    char *currency_symbol,
    char *invoices_date_formatted
    ) {
    charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_t *charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_local_var = malloc(sizeof(charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_t));
    if (!charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_local_var) {
        return NULL;
    }
    charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_local_var->invoices_id = invoices_id;
    charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_local_var->invoices_description = invoices_description;
    charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_local_var->invoices_amount = invoices_amount;
    charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_local_var->invoices_date = invoices_date;
    charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_local_var->invoices_currency = invoices_currency;
    charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_local_var->currency_symbol = currency_symbol;
    charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_local_var->invoices_date_formatted = invoices_date_formatted;

    charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_local_var->_library_owned = 1;
    return charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_local_var;
}

__attribute__((deprecated)) charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_t *charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_create(
    double invoices_id,
    char *invoices_description,
    double invoices_amount,
    char *invoices_date,
    char *invoices_currency,
    char *currency_symbol,
    char *invoices_date_formatted
    ) {
    return charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_create_internal (
        invoices_id,
        invoices_description,
        invoices_amount,
        invoices_date,
        invoices_currency,
        currency_symbol,
        invoices_date_formatted
        );
}

void charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_free(charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_t *charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value) {
    if(NULL == charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value){
        return ;
    }
    if(charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_free");
        return ;
    }
    listEntry_t *listEntry;
    if (charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_description) {
        free(charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_description);
        charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_description = NULL;
    }
    if (charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_date) {
        free(charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_date);
        charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_date = NULL;
    }
    if (charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_currency) {
        free(charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_currency);
        charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_currency = NULL;
    }
    if (charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->currency_symbol) {
        free(charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->currency_symbol);
        charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->currency_symbol = NULL;
    }
    if (charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_date_formatted) {
        free(charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_date_formatted);
        charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_date_formatted = NULL;
    }
    free(charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value);
}

cJSON *charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_convertToJSON(charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_t *charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value) {
    cJSON *item = cJSON_CreateObject();

    // charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_id
    if(charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_id) {
    if(cJSON_AddNumberToObject(item, "invoices_id", charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_description
    if(charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_description) {
    if(cJSON_AddStringToObject(item, "invoices_description", charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_description) == NULL) {
    goto fail; //String
    }
    }


    // charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_amount
    if(charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_amount) {
    if(cJSON_AddNumberToObject(item, "invoices_amount", charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_date
    if(charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_date) {
    if(cJSON_AddStringToObject(item, "invoices_date", charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_date) == NULL) {
    goto fail; //String
    }
    }


    // charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_currency
    if(charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_currency) {
    if(cJSON_AddStringToObject(item, "invoices_currency", charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_currency) == NULL) {
    goto fail; //String
    }
    }


    // charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->currency_symbol
    if(charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->currency_symbol) {
    if(cJSON_AddStringToObject(item, "currency_symbol", charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->currency_symbol) == NULL) {
    goto fail; //String
    }
    }


    // charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_date_formatted
    if(charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_date_formatted) {
    if(cJSON_AddStringToObject(item, "invoices_date_formatted", charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_date_formatted) == NULL) {
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

charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_t *charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_parseFromJSON(cJSON *charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_valueJSON){

    charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_t *charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_local_var = NULL;

    // charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_id
    cJSON *invoices_id = cJSON_GetObjectItemCaseSensitive(charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_valueJSON, "invoices_id");
    if (cJSON_IsNull(invoices_id)) {
        invoices_id = NULL;
    }
    if (invoices_id) { 
    if(!cJSON_IsNumber(invoices_id))
    {
    goto end; //Numeric
    }
    }

    // charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_description
    cJSON *invoices_description = cJSON_GetObjectItemCaseSensitive(charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_valueJSON, "invoices_description");
    if (cJSON_IsNull(invoices_description)) {
        invoices_description = NULL;
    }
    if (invoices_description) { 
    if(!cJSON_IsString(invoices_description) && !cJSON_IsNull(invoices_description))
    {
    goto end; //String
    }
    }

    // charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_amount
    cJSON *invoices_amount = cJSON_GetObjectItemCaseSensitive(charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_valueJSON, "invoices_amount");
    if (cJSON_IsNull(invoices_amount)) {
        invoices_amount = NULL;
    }
    if (invoices_amount) { 
    if(!cJSON_IsNumber(invoices_amount))
    {
    goto end; //Numeric
    }
    }

    // charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_date
    cJSON *invoices_date = cJSON_GetObjectItemCaseSensitive(charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_valueJSON, "invoices_date");
    if (cJSON_IsNull(invoices_date)) {
        invoices_date = NULL;
    }
    if (invoices_date) { 
    if(!cJSON_IsString(invoices_date) && !cJSON_IsNull(invoices_date))
    {
    goto end; //String
    }
    }

    // charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_currency
    cJSON *invoices_currency = cJSON_GetObjectItemCaseSensitive(charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_valueJSON, "invoices_currency");
    if (cJSON_IsNull(invoices_currency)) {
        invoices_currency = NULL;
    }
    if (invoices_currency) { 
    if(!cJSON_IsString(invoices_currency) && !cJSON_IsNull(invoices_currency))
    {
    goto end; //String
    }
    }

    // charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->currency_symbol
    cJSON *currency_symbol = cJSON_GetObjectItemCaseSensitive(charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_valueJSON, "currency_symbol");
    if (cJSON_IsNull(currency_symbol)) {
        currency_symbol = NULL;
    }
    if (currency_symbol) { 
    if(!cJSON_IsString(currency_symbol) && !cJSON_IsNull(currency_symbol))
    {
    goto end; //String
    }
    }

    // charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value->invoices_date_formatted
    cJSON *invoices_date_formatted = cJSON_GetObjectItemCaseSensitive(charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_valueJSON, "invoices_date_formatted");
    if (cJSON_IsNull(invoices_date_formatted)) {
        invoices_date_formatted = NULL;
    }
    if (invoices_date_formatted) { 
    if(!cJSON_IsString(invoices_date_formatted) && !cJSON_IsNull(invoices_date_formatted))
    {
    goto end; //String
    }
    }


    charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_local_var = charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_create_internal (
        invoices_id ? invoices_id->valuedouble : 0,
        invoices_description && !cJSON_IsNull(invoices_description) ? strdup(invoices_description->valuestring) : NULL,
        invoices_amount ? invoices_amount->valuedouble : 0,
        invoices_date && !cJSON_IsNull(invoices_date) ? strdup(invoices_date->valuestring) : NULL,
        invoices_currency && !cJSON_IsNull(invoices_currency) ? strdup(invoices_currency->valuestring) : NULL,
        currency_symbol && !cJSON_IsNull(currency_symbol) ? strdup(currency_symbol->valuestring) : NULL,
        invoices_date_formatted && !cJSON_IsNull(invoices_date_formatted) ? strdup(invoices_date_formatted->valuestring) : NULL
        );

    return charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_local_var;
end:
    return NULL;

}
