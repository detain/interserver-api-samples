/*
 * reply_ticket_response_schema.h
 *
 * 
 */

#ifndef _reply_ticket_response_schema_H_
#define _reply_ticket_response_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct reply_ticket_response_schema_t reply_ticket_response_schema_t;




typedef struct reply_ticket_response_schema_t {
    int success; //boolean
    int post_id; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} reply_ticket_response_schema_t;

__attribute__((deprecated)) reply_ticket_response_schema_t *reply_ticket_response_schema_create(
    int success,
    int post_id
);

void reply_ticket_response_schema_free(reply_ticket_response_schema_t *reply_ticket_response_schema);

reply_ticket_response_schema_t *reply_ticket_response_schema_parseFromJSON(cJSON *reply_ticket_response_schemaJSON);

cJSON *reply_ticket_response_schema_convertToJSON(reply_ticket_response_schema_t *reply_ticket_response_schema);

#endif /* _reply_ticket_response_schema_H_ */

