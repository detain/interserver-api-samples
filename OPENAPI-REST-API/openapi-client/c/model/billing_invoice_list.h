/*
 * billing_invoice_list.h
 *
 * Summary list of invoices for the account.
 */

#ifndef _billing_invoice_list_H_
#define _billing_invoice_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billing_invoice_list_t billing_invoice_list_t;

#include "object.h"



typedef struct billing_invoice_list_t {
    list_t *rows; //nonprimitive container
    object_t *summary; //object

    int _library_owned; // Is the library responsible for freeing this object?
} billing_invoice_list_t;

__attribute__((deprecated)) billing_invoice_list_t *billing_invoice_list_create(
    list_t *rows,
    object_t *summary
);

void billing_invoice_list_free(billing_invoice_list_t *billing_invoice_list);

billing_invoice_list_t *billing_invoice_list_parseFromJSON(cJSON *billing_invoice_listJSON);

cJSON *billing_invoice_list_convertToJSON(billing_invoice_list_t *billing_invoice_list);

#endif /* _billing_invoice_list_H_ */

