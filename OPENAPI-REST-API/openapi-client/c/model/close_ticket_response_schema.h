/*
 * close_ticket_response_schema.h
 *
 * 
 */

#ifndef _close_ticket_response_schema_H_
#define _close_ticket_response_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct close_ticket_response_schema_t close_ticket_response_schema_t;




typedef struct close_ticket_response_schema_t {
    int success; //boolean
    char *text; // string

    int _library_owned; // Is the library responsible for freeing this object?
} close_ticket_response_schema_t;

__attribute__((deprecated)) close_ticket_response_schema_t *close_ticket_response_schema_create(
    int success,
    char *text
);

void close_ticket_response_schema_free(close_ticket_response_schema_t *close_ticket_response_schema);

close_ticket_response_schema_t *close_ticket_response_schema_parseFromJSON(cJSON *close_ticket_response_schemaJSON);

cJSON *close_ticket_response_schema_convertToJSON(close_ticket_response_schema_t *close_ticket_response_schema);

#endif /* _close_ticket_response_schema_H_ */

