/*
 * reply_ticket_request.h
 *
 * Post reply to your ticket
 */

#ifndef _reply_ticket_request_H_
#define _reply_ticket_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct reply_ticket_request_t reply_ticket_request_t;




typedef struct reply_ticket_request_t {
    char *content; // string

    int _library_owned; // Is the library responsible for freeing this object?
} reply_ticket_request_t;

__attribute__((deprecated)) reply_ticket_request_t *reply_ticket_request_create(
    char *content
);

void reply_ticket_request_free(reply_ticket_request_t *reply_ticket_request);

reply_ticket_request_t *reply_ticket_request_parseFromJSON(cJSON *reply_ticket_requestJSON);

cJSON *reply_ticket_request_convertToJSON(reply_ticket_request_t *reply_ticket_request);

#endif /* _reply_ticket_request_H_ */

