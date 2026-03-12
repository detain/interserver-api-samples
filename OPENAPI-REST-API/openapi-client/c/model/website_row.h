/*
 * website_row.h
 *
 * A result row from the &#x60;Webhosting&#x60; &#x60;GET&#x60; request.
 */

#ifndef _website_row_H_
#define _website_row_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct website_row_t website_row_t;




typedef struct website_row_t {
    char *website_id; // string
    char *website_hostname; // string
    char *repeat_invoices_cost; // string
    char *website_status; // string
    char *services_name; // string
    char *website_comment; // string

    int _library_owned; // Is the library responsible for freeing this object?
} website_row_t;

__attribute__((deprecated)) website_row_t *website_row_create(
    char *website_id,
    char *website_hostname,
    char *repeat_invoices_cost,
    char *website_status,
    char *services_name,
    char *website_comment
);

void website_row_free(website_row_t *website_row);

website_row_t *website_row_parseFromJSON(cJSON *website_rowJSON);

cJSON *website_row_convertToJSON(website_row_t *website_row);

#endif /* _website_row_H_ */

