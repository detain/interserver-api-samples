/*
 * server_network_info_switchports.h
 *
 * Object containing switchport information.
 */

#ifndef _server_network_info_switchports_H_
#define _server_network_info_switchports_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct server_network_info_switchports_t server_network_info_switchports_t;

#include "server_switchport.h"



typedef struct server_network_info_switchports_t {
    struct server_switchport_t *_10414; //model

    int _library_owned; // Is the library responsible for freeing this object?
} server_network_info_switchports_t;

__attribute__((deprecated)) server_network_info_switchports_t *server_network_info_switchports_create(
    server_switchport_t *_10414
);

void server_network_info_switchports_free(server_network_info_switchports_t *server_network_info_switchports);

server_network_info_switchports_t *server_network_info_switchports_parseFromJSON(cJSON *server_network_info_switchportsJSON);

cJSON *server_network_info_switchports_convertToJSON(server_network_info_switchports_t *server_network_info_switchports);

#endif /* _server_network_info_switchports_H_ */

