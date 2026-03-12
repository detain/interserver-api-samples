/*
 * server_locations.h
 *
 * 
 */

#ifndef _server_locations_H_
#define _server_locations_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct server_locations_t server_locations_t;

#include "server_location1.h"



typedef struct server_locations_t {
    struct server_location1_t *_1; //model

    int _library_owned; // Is the library responsible for freeing this object?
} server_locations_t;

__attribute__((deprecated)) server_locations_t *server_locations_create(
    server_location1_t *_1
);

void server_locations_free(server_locations_t *server_locations);

server_locations_t *server_locations_parseFromJSON(cJSON *server_locationsJSON);

cJSON *server_locations_convertToJSON(server_locations_t *server_locations);

#endif /* _server_locations_H_ */

