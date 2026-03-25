/*
 * ticket_new_response.h
 *
 * Response returned after creating a new support ticket.
 */

#ifndef _ticket_new_response_H_
#define _ticket_new_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ticket_new_response_t ticket_new_response_t;




typedef struct ticket_new_response_t {
    char *text; // string
    int *success; //boolean
    int *ticket_id; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} ticket_new_response_t;

__attribute__((deprecated)) ticket_new_response_t *ticket_new_response_create(
    char *text,
    int *success,
    int *ticket_id
);

void ticket_new_response_free(ticket_new_response_t *ticket_new_response);

ticket_new_response_t *ticket_new_response_parseFromJSON(cJSON *ticket_new_responseJSON);

cJSON *ticket_new_response_convertToJSON(ticket_new_response_t *ticket_new_response);

#endif /* _ticket_new_response_H_ */

