/*
 * home_ticket_status.h
 *
 * Ticket statuses.
 */

#ifndef _home_ticket_status_H_
#define _home_ticket_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct home_ticket_status_t home_ticket_status_t;




typedef struct home_ticket_status_t {
    int *open; //numeric
    int *on_hold; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} home_ticket_status_t;

__attribute__((deprecated)) home_ticket_status_t *home_ticket_status_create(
    int *open,
    int *on_hold
);

void home_ticket_status_free(home_ticket_status_t *home_ticket_status);

home_ticket_status_t *home_ticket_status_parseFromJSON(cJSON *home_ticket_statusJSON);

cJSON *home_ticket_status_convertToJSON(home_ticket_status_t *home_ticket_status);

#endif /* _home_ticket_status_H_ */

