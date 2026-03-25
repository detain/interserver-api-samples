#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "charge_invoice_rows_invoices_value_paid_invoices_value.h"



static charge_invoice_rows_invoices_value_paid_invoices_value_t *charge_invoice_rows_invoices_value_paid_invoices_value_create_internal(
    char *invoices_id,
    char *invoices_description,
    double *invoices_amount,
    char *invoices_date,
    char *invoices_currency,
    char *currency_symbol,
    char *invoices_date_formatted,
    char *payment_type,
    list_t* refund_invoices
    ) {
    charge_invoice_rows_invoices_value_paid_invoices_value_t *charge_invoice_rows_invoices_value_paid_invoices_value_local_var = malloc(sizeof(charge_invoice_rows_invoices_value_paid_invoices_value_t));
    if (!charge_invoice_rows_invoices_value_paid_invoices_value_local_var) {
        return NULL;
    }
    memset(charge_invoice_rows_invoices_value_paid_invoices_value_local_var, 0, sizeof(charge_invoice_rows_invoices_value_paid_invoices_value_t));
    charge_invoice_rows_invoices_value_paid_invoices_value_local_var->_library_owned = 1;
    charge_invoice_rows_invoices_value_paid_invoices_value_local_var->invoices_id = invoices_id;
    charge_invoice_rows_invoices_value_paid_invoices_value_local_var->invoices_description = invoices_description;
    charge_invoice_rows_invoices_value_paid_invoices_value_local_var->invoices_amount = invoices_amount;
    charge_invoice_rows_invoices_value_paid_invoices_value_local_var->invoices_date = invoices_date;
    charge_invoice_rows_invoices_value_paid_invoices_value_local_var->invoices_currency = invoices_currency;
    charge_invoice_rows_invoices_value_paid_invoices_value_local_var->currency_symbol = currency_symbol;
    charge_invoice_rows_invoices_value_paid_invoices_value_local_var->invoices_date_formatted = invoices_date_formatted;
    charge_invoice_rows_invoices_value_paid_invoices_value_local_var->payment_type = payment_type;
    charge_invoice_rows_invoices_value_paid_invoices_value_local_var->refund_invoices = refund_invoices;
    return charge_invoice_rows_invoices_value_paid_invoices_value_local_var;
}

__attribute__((deprecated)) charge_invoice_rows_invoices_value_paid_invoices_value_t *charge_invoice_rows_invoices_value_paid_invoices_value_create(
    char *invoices_id,
    char *invoices_description,
    double *invoices_amount,
    char *invoices_date,
    char *invoices_currency,
    char *currency_symbol,
    char *invoices_date_formatted,
    char *payment_type,
    list_t* refund_invoices
    ) {
    double *invoices_amount_copy = NULL;
    if (invoices_amount) {
        invoices_amount_copy = malloc(sizeof(double));
        if (invoices_amount_copy) *invoices_amount_copy = *invoices_amount;
    }
    charge_invoice_rows_invoices_value_paid_invoices_value_t *result = charge_invoice_rows_invoices_value_paid_invoices_value_create_internal (
        invoices_id,
        invoices_description,
        invoices_amount_copy,
        invoices_date,
        invoices_currency,
        currency_symbol,
        invoices_date_formatted,
        payment_type,
        refund_invoices
        );
    if (!result) {
        free(invoices_amount_copy);
    }
    return result;
}

void charge_invoice_rows_invoices_value_paid_invoices_value_free(charge_invoice_rows_invoices_value_paid_invoices_value_t *charge_invoice_rows_invoices_value_paid_invoices_value) {
    if(NULL == charge_invoice_rows_invoices_value_paid_invoices_value){
        return ;
    }
    if(charge_invoice_rows_invoices_value_paid_invoices_value->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "charge_invoice_rows_invoices_value_paid_invoices_value_free");
        return ;
    }
    listEntry_t *listEntry;
    if (charge_invoice_rows_invoices_value_paid_invoices_value->invoices_id) {
        free(charge_invoice_rows_invoices_value_paid_invoices_value->invoices_id);
        charge_invoice_rows_invoices_value_paid_invoices_value->invoices_id = NULL;
    }
    if (charge_invoice_rows_invoices_value_paid_invoices_value->invoices_description) {
        free(charge_invoice_rows_invoices_value_paid_invoices_value->invoices_description);
        charge_invoice_rows_invoices_value_paid_invoices_value->invoices_description = NULL;
    }
    if (charge_invoice_rows_invoices_value_paid_invoices_value->invoices_amount) {
        free(charge_invoice_rows_invoices_value_paid_invoices_value->invoices_amount);
        charge_invoice_rows_invoices_value_paid_invoices_value->invoices_amount = NULL;
    }
    if (charge_invoice_rows_invoices_value_paid_invoices_value->invoices_date) {
        free(charge_invoice_rows_invoices_value_paid_invoices_value->invoices_date);
        charge_invoice_rows_invoices_value_paid_invoices_value->invoices_date = NULL;
    }
    if (charge_invoice_rows_invoices_value_paid_invoices_value->invoices_currency) {
        free(charge_invoice_rows_invoices_value_paid_invoices_value->invoices_currency);
        charge_invoice_rows_invoices_value_paid_invoices_value->invoices_currency = NULL;
    }
    if (charge_invoice_rows_invoices_value_paid_invoices_value->currency_symbol) {
        free(charge_invoice_rows_invoices_value_paid_invoices_value->currency_symbol);
        charge_invoice_rows_invoices_value_paid_invoices_value->currency_symbol = NULL;
    }
    if (charge_invoice_rows_invoices_value_paid_invoices_value->invoices_date_formatted) {
        free(charge_invoice_rows_invoices_value_paid_invoices_value->invoices_date_formatted);
        charge_invoice_rows_invoices_value_paid_invoices_value->invoices_date_formatted = NULL;
    }
    if (charge_invoice_rows_invoices_value_paid_invoices_value->payment_type) {
        free(charge_invoice_rows_invoices_value_paid_invoices_value->payment_type);
        charge_invoice_rows_invoices_value_paid_invoices_value->payment_type = NULL;
    }
    if (charge_invoice_rows_invoices_value_paid_invoices_value->refund_invoices) {
        list_ForEach(listEntry, charge_invoice_rows_invoices_value_paid_invoices_value->refund_invoices) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(charge_invoice_rows_invoices_value_paid_invoices_value->refund_invoices);
        charge_invoice_rows_invoices_value_paid_invoices_value->refund_invoices = NULL;
    }
    free(charge_invoice_rows_invoices_value_paid_invoices_value);
}

cJSON *charge_invoice_rows_invoices_value_paid_invoices_value_convertToJSON(charge_invoice_rows_invoices_value_paid_invoices_value_t *charge_invoice_rows_invoices_value_paid_invoices_value) {
    cJSON *item = cJSON_CreateObject();

    // charge_invoice_rows_invoices_value_paid_invoices_value->invoices_id
    if(charge_invoice_rows_invoices_value_paid_invoices_value->invoices_id) {
    if(cJSON_AddStringToObject(item, "invoices_id", charge_invoice_rows_invoices_value_paid_invoices_value->invoices_id) == NULL) {
    goto fail; //String
    }
    }


    // charge_invoice_rows_invoices_value_paid_invoices_value->invoices_description
    if(charge_invoice_rows_invoices_value_paid_invoices_value->invoices_description) {
    if(cJSON_AddStringToObject(item, "invoices_description", charge_invoice_rows_invoices_value_paid_invoices_value->invoices_description) == NULL) {
    goto fail; //String
    }
    }


    // charge_invoice_rows_invoices_value_paid_invoices_value->invoices_amount
    if(charge_invoice_rows_invoices_value_paid_invoices_value->invoices_amount) {
    if(cJSON_AddNumberToObject(item, "invoices_amount", *charge_invoice_rows_invoices_value_paid_invoices_value->invoices_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // charge_invoice_rows_invoices_value_paid_invoices_value->invoices_date
    if(charge_invoice_rows_invoices_value_paid_invoices_value->invoices_date) {
    if(cJSON_AddStringToObject(item, "invoices_date", charge_invoice_rows_invoices_value_paid_invoices_value->invoices_date) == NULL) {
    goto fail; //String
    }
    }


    // charge_invoice_rows_invoices_value_paid_invoices_value->invoices_currency
    if(charge_invoice_rows_invoices_value_paid_invoices_value->invoices_currency) {
    if(cJSON_AddStringToObject(item, "invoices_currency", charge_invoice_rows_invoices_value_paid_invoices_value->invoices_currency) == NULL) {
    goto fail; //String
    }
    }


    // charge_invoice_rows_invoices_value_paid_invoices_value->currency_symbol
    if(charge_invoice_rows_invoices_value_paid_invoices_value->currency_symbol) {
    if(cJSON_AddStringToObject(item, "currency_symbol", charge_invoice_rows_invoices_value_paid_invoices_value->currency_symbol) == NULL) {
    goto fail; //String
    }
    }


    // charge_invoice_rows_invoices_value_paid_invoices_value->invoices_date_formatted
    if(charge_invoice_rows_invoices_value_paid_invoices_value->invoices_date_formatted) {
    if(cJSON_AddStringToObject(item, "invoices_date_formatted", charge_invoice_rows_invoices_value_paid_invoices_value->invoices_date_formatted) == NULL) {
    goto fail; //String
    }
    }


    // charge_invoice_rows_invoices_value_paid_invoices_value->payment_type
    if(charge_invoice_rows_invoices_value_paid_invoices_value->payment_type) {
    if(cJSON_AddStringToObject(item, "payment_type", charge_invoice_rows_invoices_value_paid_invoices_value->payment_type) == NULL) {
    goto fail; //String
    }
    }


    // charge_invoice_rows_invoices_value_paid_invoices_value->refund_invoices
    if(charge_invoice_rows_invoices_value_paid_invoices_value->refund_invoices) {
    cJSON *refund_invoices = cJSON_AddObjectToObject(item, "refund_invoices");
    if(refund_invoices == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = refund_invoices;
    listEntry_t *refund_invoicesListEntry;
    if (charge_invoice_rows_invoices_value_paid_invoices_value->refund_invoices) {
    list_ForEach(refund_invoicesListEntry, charge_invoice_rows_invoices_value_paid_invoices_value->refund_invoices) {
        keyValuePair_t *localKeyValue = refund_invoicesListEntry->data;
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

charge_invoice_rows_invoices_value_paid_invoices_value_t *charge_invoice_rows_invoices_value_paid_invoices_value_parseFromJSON(cJSON *charge_invoice_rows_invoices_value_paid_invoices_valueJSON){

    charge_invoice_rows_invoices_value_paid_invoices_value_t *charge_invoice_rows_invoices_value_paid_invoices_value_local_var = NULL;

    char *invoices_id_local_str = NULL;

    char *invoices_description_local_str = NULL;

    // define the local variable for charge_invoice_rows_invoices_value_paid_invoices_value->invoices_amount
    double *invoices_amount_local_var = NULL;

    char *invoices_date_local_str = NULL;

    char *invoices_currency_local_str = NULL;

    char *currency_symbol_local_str = NULL;

    char *invoices_date_formatted_local_str = NULL;

    char *payment_type_local_str = NULL;

    // define the local map for charge_invoice_rows_invoices_value_paid_invoices_value->refund_invoices
    list_t *refund_invoicesList = NULL;

    // charge_invoice_rows_invoices_value_paid_invoices_value->invoices_id
    cJSON *invoices_id = cJSON_GetObjectItemCaseSensitive(charge_invoice_rows_invoices_value_paid_invoices_valueJSON, "invoices_id");
    if (cJSON_IsNull(invoices_id)) {
        invoices_id = NULL;
    }
    if (invoices_id) { 
    if(!cJSON_IsString(invoices_id) && !cJSON_IsNull(invoices_id))
    {
    goto end; //String
    }
    }

    // charge_invoice_rows_invoices_value_paid_invoices_value->invoices_description
    cJSON *invoices_description = cJSON_GetObjectItemCaseSensitive(charge_invoice_rows_invoices_value_paid_invoices_valueJSON, "invoices_description");
    if (cJSON_IsNull(invoices_description)) {
        invoices_description = NULL;
    }
    if (invoices_description) { 
    if(!cJSON_IsString(invoices_description) && !cJSON_IsNull(invoices_description))
    {
    goto end; //String
    }
    }

    // charge_invoice_rows_invoices_value_paid_invoices_value->invoices_amount
    cJSON *invoices_amount = cJSON_GetObjectItemCaseSensitive(charge_invoice_rows_invoices_value_paid_invoices_valueJSON, "invoices_amount");
    if (cJSON_IsNull(invoices_amount)) {
        invoices_amount = NULL;
    }
    if (invoices_amount) { 
    if(!cJSON_IsNumber(invoices_amount))
    {
    goto end; //Numeric
    }
    invoices_amount_local_var = malloc(sizeof(double));
    if(!invoices_amount_local_var)
    {
        goto end;
    }
    *invoices_amount_local_var = invoices_amount->valuedouble;
    }

    // charge_invoice_rows_invoices_value_paid_invoices_value->invoices_date
    cJSON *invoices_date = cJSON_GetObjectItemCaseSensitive(charge_invoice_rows_invoices_value_paid_invoices_valueJSON, "invoices_date");
    if (cJSON_IsNull(invoices_date)) {
        invoices_date = NULL;
    }
    if (invoices_date) { 
    if(!cJSON_IsString(invoices_date) && !cJSON_IsNull(invoices_date))
    {
    goto end; //String
    }
    }

    // charge_invoice_rows_invoices_value_paid_invoices_value->invoices_currency
    cJSON *invoices_currency = cJSON_GetObjectItemCaseSensitive(charge_invoice_rows_invoices_value_paid_invoices_valueJSON, "invoices_currency");
    if (cJSON_IsNull(invoices_currency)) {
        invoices_currency = NULL;
    }
    if (invoices_currency) { 
    if(!cJSON_IsString(invoices_currency) && !cJSON_IsNull(invoices_currency))
    {
    goto end; //String
    }
    }

    // charge_invoice_rows_invoices_value_paid_invoices_value->currency_symbol
    cJSON *currency_symbol = cJSON_GetObjectItemCaseSensitive(charge_invoice_rows_invoices_value_paid_invoices_valueJSON, "currency_symbol");
    if (cJSON_IsNull(currency_symbol)) {
        currency_symbol = NULL;
    }
    if (currency_symbol) { 
    if(!cJSON_IsString(currency_symbol) && !cJSON_IsNull(currency_symbol))
    {
    goto end; //String
    }
    }

    // charge_invoice_rows_invoices_value_paid_invoices_value->invoices_date_formatted
    cJSON *invoices_date_formatted = cJSON_GetObjectItemCaseSensitive(charge_invoice_rows_invoices_value_paid_invoices_valueJSON, "invoices_date_formatted");
    if (cJSON_IsNull(invoices_date_formatted)) {
        invoices_date_formatted = NULL;
    }
    if (invoices_date_formatted) { 
    if(!cJSON_IsString(invoices_date_formatted) && !cJSON_IsNull(invoices_date_formatted))
    {
    goto end; //String
    }
    }

    // charge_invoice_rows_invoices_value_paid_invoices_value->payment_type
    cJSON *payment_type = cJSON_GetObjectItemCaseSensitive(charge_invoice_rows_invoices_value_paid_invoices_valueJSON, "payment_type");
    if (cJSON_IsNull(payment_type)) {
        payment_type = NULL;
    }
    if (payment_type) { 
    if(!cJSON_IsString(payment_type) && !cJSON_IsNull(payment_type))
    {
    goto end; //String
    }
    }

    // charge_invoice_rows_invoices_value_paid_invoices_value->refund_invoices
    cJSON *refund_invoices = cJSON_GetObjectItemCaseSensitive(charge_invoice_rows_invoices_value_paid_invoices_valueJSON, "refund_invoices");
    if (cJSON_IsNull(refund_invoices)) {
        refund_invoices = NULL;
    }
    if (refund_invoices) { 

    // The data type of the elements in charge_invoice_rows_invoices_value_paid_invoices_value->refund_invoices is currently not supported.

    }


    if (invoices_id && !cJSON_IsNull(invoices_id)) invoices_id_local_str = strdup(invoices_id->valuestring);
    if (invoices_description && !cJSON_IsNull(invoices_description)) invoices_description_local_str = strdup(invoices_description->valuestring);
    if (invoices_date && !cJSON_IsNull(invoices_date)) invoices_date_local_str = strdup(invoices_date->valuestring);
    if (invoices_currency && !cJSON_IsNull(invoices_currency)) invoices_currency_local_str = strdup(invoices_currency->valuestring);
    if (currency_symbol && !cJSON_IsNull(currency_symbol)) currency_symbol_local_str = strdup(currency_symbol->valuestring);
    if (invoices_date_formatted && !cJSON_IsNull(invoices_date_formatted)) invoices_date_formatted_local_str = strdup(invoices_date_formatted->valuestring);
    if (payment_type && !cJSON_IsNull(payment_type)) payment_type_local_str = strdup(payment_type->valuestring);

    charge_invoice_rows_invoices_value_paid_invoices_value_local_var = charge_invoice_rows_invoices_value_paid_invoices_value_create_internal (
        invoices_id_local_str,
        invoices_description_local_str,
        invoices_amount_local_var,
        invoices_date_local_str,
        invoices_currency_local_str,
        currency_symbol_local_str,
        invoices_date_formatted_local_str,
        payment_type_local_str,
        refund_invoices ? refund_invoicesList : NULL
        );

    if (!charge_invoice_rows_invoices_value_paid_invoices_value_local_var) {
        goto end;
    }

    return charge_invoice_rows_invoices_value_paid_invoices_value_local_var;
end:
    if (invoices_id_local_str) {
        free(invoices_id_local_str);
        invoices_id_local_str = NULL;
    }
    if (invoices_description_local_str) {
        free(invoices_description_local_str);
        invoices_description_local_str = NULL;
    }
    if (invoices_amount_local_var) {
        free(invoices_amount_local_var);
        invoices_amount_local_var = NULL;
    }
    if (invoices_date_local_str) {
        free(invoices_date_local_str);
        invoices_date_local_str = NULL;
    }
    if (invoices_currency_local_str) {
        free(invoices_currency_local_str);
        invoices_currency_local_str = NULL;
    }
    if (currency_symbol_local_str) {
        free(currency_symbol_local_str);
        currency_symbol_local_str = NULL;
    }
    if (invoices_date_formatted_local_str) {
        free(invoices_date_formatted_local_str);
        invoices_date_formatted_local_str = NULL;
    }
    if (payment_type_local_str) {
        free(payment_type_local_str);
        payment_type_local_str = NULL;
    }

    // The data type of the elements in charge_invoice_rows_invoices_value_paid_invoices_value->refund_invoices is currently not supported.

    return NULL;

}
