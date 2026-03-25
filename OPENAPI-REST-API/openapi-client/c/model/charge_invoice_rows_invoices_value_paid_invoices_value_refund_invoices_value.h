/*
 * charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value.h
 *
 * 
 */

#ifndef _charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_H_
#define _charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_t charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_t;




typedef struct charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_t {
    double *invoices_id; //numeric
    char *invoices_description; // string
    double *invoices_amount; //numeric
    char *invoices_date; // string
    char *invoices_currency; // string
    char *currency_symbol; // string
    char *invoices_date_formatted; // string

    int _library_owned; // Is the library responsible for freeing this object?
} charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_t;

__attribute__((deprecated)) charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_t *charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_create(
    double *invoices_id,
    char *invoices_description,
    double *invoices_amount,
    char *invoices_date,
    char *invoices_currency,
    char *currency_symbol,
    char *invoices_date_formatted
);

void charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_free(charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_t *charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value);

charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_t *charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_parseFromJSON(cJSON *charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_valueJSON);

cJSON *charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_convertToJSON(charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_t *charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value);

#endif /* _charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value_H_ */

