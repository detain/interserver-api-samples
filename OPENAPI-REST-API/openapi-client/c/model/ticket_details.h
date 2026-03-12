/*
 * ticket_details.h
 *
 * Detailed ticket information
 */

#ifndef _ticket_details_H_
#define _ticket_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ticket_details_t ticket_details_t;




typedef struct ticket_details_t {
    int ticketid; //numeric
    char *ticketmaskid; // string
    char *department; // string
    char *status; // string
    char *priority; // string
    char *subject; // string
    char *created_on; // string
    char *updated_on; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ticket_details_t;

__attribute__((deprecated)) ticket_details_t *ticket_details_create(
    int ticketid,
    char *ticketmaskid,
    char *department,
    char *status,
    char *priority,
    char *subject,
    char *created_on,
    char *updated_on
);

void ticket_details_free(ticket_details_t *ticket_details);

ticket_details_t *ticket_details_parseFromJSON(cJSON *ticket_detailsJSON);

cJSON *ticket_details_convertToJSON(ticket_details_t *ticket_details);

#endif /* _ticket_details_H_ */

