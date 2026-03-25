/*
 * ticket_new.h
 *
 * New helpdesk ticket request.  
 */

#ifndef _ticket_new_H_
#define _ticket_new_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ticket_new_t ticket_new_t;




typedef struct ticket_new_t {
    char *subject; // string
    char *body; // string
    int *service_id; //numeric
    char *service_module; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ticket_new_t;

__attribute__((deprecated)) ticket_new_t *ticket_new_create(
    char *subject,
    char *body,
    int *service_id,
    char *service_module
);

void ticket_new_free(ticket_new_t *ticket_new);

ticket_new_t *ticket_new_parseFromJSON(cJSON *ticket_newJSON);

cJSON *ticket_new_convertToJSON(ticket_new_t *ticket_new);

#endif /* _ticket_new_H_ */

