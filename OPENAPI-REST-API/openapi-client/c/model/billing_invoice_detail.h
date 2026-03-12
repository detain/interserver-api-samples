/*
 * billing_invoice_detail.h
 *
 * Detailed invoice data payload returned for a single invoice.
 */

#ifndef _billing_invoice_detail_H_
#define _billing_invoice_detail_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billing_invoice_detail_t billing_invoice_detail_t;




typedef struct billing_invoice_detail_t {

    int _library_owned; // Is the library responsible for freeing this object?
} billing_invoice_detail_t;

__attribute__((deprecated)) billing_invoice_detail_t *billing_invoice_detail_create(
);

void billing_invoice_detail_free(billing_invoice_detail_t *billing_invoice_detail);

billing_invoice_detail_t *billing_invoice_detail_parseFromJSON(cJSON *billing_invoice_detailJSON);

cJSON *billing_invoice_detail_convertToJSON(billing_invoice_detail_t *billing_invoice_detail);

#endif /* _billing_invoice_detail_H_ */

