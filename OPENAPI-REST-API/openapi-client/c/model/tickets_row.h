/*
 * tickets_row.h
 *
 * Information about a single ticket.
 */

#ifndef _tickets_row_H_
#define _tickets_row_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tickets_row_t tickets_row_t;

#include "any_type.h"



typedef struct tickets_row_t {
    char *title; // string
    char *ticketmaskid; // string
    char *lastreplier; // string
    char *status; // string
    char *priority; // string
    int *total_replies; //numeric
    char *lastactivity; // string
    char *departmenttitle; // string
    int *ticketid; //numeric
    char *can_close; // string
    any_type_t *attachments; // custom
    char *status_text; // string
    int *checked; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} tickets_row_t;

__attribute__((deprecated)) tickets_row_t *tickets_row_create(
    char *title,
    char *ticketmaskid,
    char *lastreplier,
    char *status,
    char *priority,
    int *total_replies,
    char *lastactivity,
    char *departmenttitle,
    int *ticketid,
    char *can_close,
    any_type_t *attachments,
    char *status_text,
    int *checked
);

void tickets_row_free(tickets_row_t *tickets_row);

tickets_row_t *tickets_row_parseFromJSON(cJSON *tickets_rowJSON);

cJSON *tickets_row_convertToJSON(tickets_row_t *tickets_row);

#endif /* _tickets_row_H_ */

