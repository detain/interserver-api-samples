/*
 * mail_row.h
 *
 * A result row from the &#x60;Mail&#x60; &#x60;GET&#x60; request.
 */

#ifndef _mail_row_H_
#define _mail_row_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mail_row_t mail_row_t;




typedef struct mail_row_t {
    char *mail_id; // string
    char *repeat_invoices_cost; // string
    char *mail_username; // string
    char *mail_status; // string
    char *services_name; // string

    int _library_owned; // Is the library responsible for freeing this object?
} mail_row_t;

__attribute__((deprecated)) mail_row_t *mail_row_create(
    char *mail_id,
    char *repeat_invoices_cost,
    char *mail_username,
    char *mail_status,
    char *services_name
);

void mail_row_free(mail_row_t *mail_row);

mail_row_t *mail_row_parseFromJSON(cJSON *mail_rowJSON);

cJSON *mail_row_convertToJSON(mail_row_t *mail_row);

#endif /* _mail_row_H_ */

