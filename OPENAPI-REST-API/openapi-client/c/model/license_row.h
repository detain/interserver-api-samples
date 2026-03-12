/*
 * license_row.h
 *
 * A result row from the &#x60;Licenses&#x60; &#x60;GET&#x60; request.
 */

#ifndef _license_row_H_
#define _license_row_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct license_row_t license_row_t;




typedef struct license_row_t {
    char *license_id; // string
    char *license_hostname; // string
    char *license_ip; // string
    char *services_name; // string
    char *cost; // string
    char *license_status; // string
    char *invoices_paid; // string
    char *invoices_date; //date time

    int _library_owned; // Is the library responsible for freeing this object?
} license_row_t;

__attribute__((deprecated)) license_row_t *license_row_create(
    char *license_id,
    char *license_hostname,
    char *license_ip,
    char *services_name,
    char *cost,
    char *license_status,
    char *invoices_paid,
    char *invoices_date
);

void license_row_free(license_row_t *license_row);

license_row_t *license_row_parseFromJSON(cJSON *license_rowJSON);

cJSON *license_row_convertToJSON(license_row_t *license_row);

#endif /* _license_row_H_ */

