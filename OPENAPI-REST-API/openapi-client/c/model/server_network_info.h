/*
 * server_network_info.h
 *
 * 
 */

#ifndef _server_network_info_H_
#define _server_network_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct server_network_info_t server_network_info_t;

#include "server_network_info_assets.h"
#include "server_network_info_switchports.h"



typedef struct server_network_info_t {
    list_t *vlans; //primitive container
    list_t *vlans6; //primitive container
    struct server_network_info_assets_t *assets; //model
    struct server_network_info_switchports_t *switchports; //model

    int _library_owned; // Is the library responsible for freeing this object?
} server_network_info_t;

__attribute__((deprecated)) server_network_info_t *server_network_info_create(
    list_t *vlans,
    list_t *vlans6,
    server_network_info_assets_t *assets,
    server_network_info_switchports_t *switchports
);

void server_network_info_free(server_network_info_t *server_network_info);

server_network_info_t *server_network_info_parseFromJSON(cJSON *server_network_infoJSON);

cJSON *server_network_info_convertToJSON(server_network_info_t *server_network_info);

#endif /* _server_network_info_H_ */

