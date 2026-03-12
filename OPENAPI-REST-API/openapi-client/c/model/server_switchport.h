/*
 * server_switchport.h
 *
 * 
 */

#ifndef _server_switchport_H_
#define _server_switchport_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct server_switchport_t server_switchport_t;




typedef struct server_switchport_t {
    int switchport_id; //numeric
    char *switch_id; // string
    char *_switch; // string
    char *port; // string
    char *blade; // string
    char *justport; // string
    char *graph_id; // string
    int asset_id; //numeric
    list_t *vlans; //primitive container
    list_t *vlans6; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} server_switchport_t;

__attribute__((deprecated)) server_switchport_t *server_switchport_create(
    int switchport_id,
    char *switch_id,
    char *_switch,
    char *port,
    char *blade,
    char *justport,
    char *graph_id,
    int asset_id,
    list_t *vlans,
    list_t *vlans6
);

void server_switchport_free(server_switchport_t *server_switchport);

server_switchport_t *server_switchport_parseFromJSON(cJSON *server_switchportJSON);

cJSON *server_switchport_convertToJSON(server_switchport_t *server_switchport);

#endif /* _server_switchport_H_ */

