/*
 * server_lease.h
 *
 * 
 */

#ifndef _server_lease_H_
#define _server_lease_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct server_lease_t server_lease_t;




typedef struct server_lease_t {
    char *mac; // string
    int *authenticated; //boolean
    char *group; // string

    int _library_owned; // Is the library responsible for freeing this object?
} server_lease_t;

__attribute__((deprecated)) server_lease_t *server_lease_create(
    char *mac,
    int *authenticated,
    char *group
);

void server_lease_free(server_lease_t *server_lease);

server_lease_t *server_lease_parseFromJSON(cJSON *server_leaseJSON);

cJSON *server_lease_convertToJSON(server_lease_t *server_lease);

#endif /* _server_lease_H_ */

