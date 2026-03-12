/*
 * charge_invoice_rows.h
 *
 * Billing invoices associated with a service, including invoice IDs, descriptions, amounts, and payment status.
 */

#ifndef _charge_invoice_rows_H_
#define _charge_invoice_rows_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct charge_invoice_rows_t charge_invoice_rows_t;

#include "charge_invoice_rows_invoices_value.h"



typedef struct charge_invoice_rows_t {
    int success; //boolean
    list_t* invoices; //map

    int _library_owned; // Is the library responsible for freeing this object?
} charge_invoice_rows_t;

__attribute__((deprecated)) charge_invoice_rows_t *charge_invoice_rows_create(
    int success,
    list_t* invoices
);

void charge_invoice_rows_free(charge_invoice_rows_t *charge_invoice_rows);

charge_invoice_rows_t *charge_invoice_rows_parseFromJSON(cJSON *charge_invoice_rowsJSON);

cJSON *charge_invoice_rows_convertToJSON(charge_invoice_rows_t *charge_invoice_rows);

#endif /* _charge_invoice_rows_H_ */

