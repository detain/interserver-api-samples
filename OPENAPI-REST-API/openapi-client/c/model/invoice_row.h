/*
 * invoice_row.h
 *
 * 
 */

#ifndef _invoice_row_H_
#define _invoice_row_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct invoice_row_t invoice_row_t;




typedef struct invoice_row_t {

    int _library_owned; // Is the library responsible for freeing this object?
} invoice_row_t;

__attribute__((deprecated)) invoice_row_t *invoice_row_create(
);

void invoice_row_free(invoice_row_t *invoice_row);

invoice_row_t *invoice_row_parseFromJSON(cJSON *invoice_rowJSON);

cJSON *invoice_row_convertToJSON(invoice_row_t *invoice_row);

#endif /* _invoice_row_H_ */

