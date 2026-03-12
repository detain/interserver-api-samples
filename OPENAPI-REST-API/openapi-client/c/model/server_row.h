/*
 * server_row.h
 *
 * A result row from the &#x60;Servers&#x60; &#x60;GET&#x60; request.
 */

#ifndef _server_row_H_
#define _server_row_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct server_row_t server_row_t;




typedef struct server_row_t {
    char *server_id; // string
    char *account_lid; // string
    char *server_hostname; // string
    char *server_status; // string

    int _library_owned; // Is the library responsible for freeing this object?
} server_row_t;

__attribute__((deprecated)) server_row_t *server_row_create(
    char *server_id,
    char *account_lid,
    char *server_hostname,
    char *server_status
);

void server_row_free(server_row_t *server_row);

server_row_t *server_row_parseFromJSON(cJSON *server_rowJSON);

cJSON *server_row_convertToJSON(server_row_t *server_row);

#endif /* _server_row_H_ */

