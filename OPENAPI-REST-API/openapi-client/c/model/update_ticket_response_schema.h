/*
 * update_ticket_response_schema.h
 *
 * 
 */

#ifndef _update_ticket_response_schema_H_
#define _update_ticket_response_schema_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct update_ticket_response_schema_t update_ticket_response_schema_t;




typedef struct update_ticket_response_schema_t {
    int success; //boolean
    char *message; // string

    int _library_owned; // Is the library responsible for freeing this object?
} update_ticket_response_schema_t;

__attribute__((deprecated)) update_ticket_response_schema_t *update_ticket_response_schema_create(
    int success,
    char *message
);

void update_ticket_response_schema_free(update_ticket_response_schema_t *update_ticket_response_schema);

update_ticket_response_schema_t *update_ticket_response_schema_parseFromJSON(cJSON *update_ticket_response_schemaJSON);

cJSON *update_ticket_response_schema_convertToJSON(update_ticket_response_schema_t *update_ticket_response_schema);

#endif /* _update_ticket_response_schema_H_ */

