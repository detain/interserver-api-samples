/*
 * payment_invoice_rows.h
 *
 * 
 */

#ifndef _payment_invoice_rows_H_
#define _payment_invoice_rows_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct payment_invoice_rows_t payment_invoice_rows_t;

#include "invoice_row.h"



typedef struct payment_invoice_rows_t {

    int _library_owned; // Is the library responsible for freeing this object?
} payment_invoice_rows_t;

__attribute__((deprecated)) payment_invoice_rows_t *payment_invoice_rows_create(
);

void payment_invoice_rows_free(payment_invoice_rows_t *payment_invoice_rows);

payment_invoice_rows_t *payment_invoice_rows_parseFromJSON(cJSON *payment_invoice_rowsJSON);

cJSON *payment_invoice_rows_convertToJSON(payment_invoice_rows_t *payment_invoice_rows);

#endif /* _payment_invoice_rows_H_ */

