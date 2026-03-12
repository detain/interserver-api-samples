/*
 * server_location1.h
 *
 * 
 */

#ifndef _server_location1_H_
#define _server_location1_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct server_location1_t server_location1_t;




typedef struct server_location1_t {
    int location_id; //numeric
    char *location_name; // string
    char *location_lat; // string
    char *location_long; // string
    char *location_description; // string
    int location_ipmi_group; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} server_location1_t;

__attribute__((deprecated)) server_location1_t *server_location1_create(
    int location_id,
    char *location_name,
    char *location_lat,
    char *location_long,
    char *location_description,
    int location_ipmi_group
);

void server_location1_free(server_location1_t *server_location1);

server_location1_t *server_location1_parseFromJSON(cJSON *server_location1JSON);

cJSON *server_location1_convertToJSON(server_location1_t *server_location1);

#endif /* _server_location1_H_ */

