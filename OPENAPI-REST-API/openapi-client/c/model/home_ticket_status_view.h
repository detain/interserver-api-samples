/*
 * home_ticket_status_view.h
 *
 * Ticket statuses with view numbers.
 */

#ifndef _home_ticket_status_view_H_
#define _home_ticket_status_view_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct home_ticket_status_view_t home_ticket_status_view_t;




typedef struct home_ticket_status_view_t {
    char *_4; // string
    char *_5; // string
    char *_6; // string

    int _library_owned; // Is the library responsible for freeing this object?
} home_ticket_status_view_t;

__attribute__((deprecated)) home_ticket_status_view_t *home_ticket_status_view_create(
    char *_4,
    char *_5,
    char *_6
);

void home_ticket_status_view_free(home_ticket_status_view_t *home_ticket_status_view);

home_ticket_status_view_t *home_ticket_status_view_parseFromJSON(cJSON *home_ticket_status_viewJSON);

cJSON *home_ticket_status_view_convertToJSON(home_ticket_status_view_t *home_ticket_status_view);

#endif /* _home_ticket_status_view_H_ */

