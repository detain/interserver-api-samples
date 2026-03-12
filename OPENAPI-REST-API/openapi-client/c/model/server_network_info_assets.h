/*
 * server_network_info_assets.h
 *
 * Object containing asset information.
 */

#ifndef _server_network_info_assets_H_
#define _server_network_info_assets_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct server_network_info_assets_t server_network_info_assets_t;

#include "server_asset.h"



typedef struct server_network_info_assets_t {
    struct server_asset_t *_3497; //model

    int _library_owned; // Is the library responsible for freeing this object?
} server_network_info_assets_t;

__attribute__((deprecated)) server_network_info_assets_t *server_network_info_assets_create(
    server_asset_t *_3497
);

void server_network_info_assets_free(server_network_info_assets_t *server_network_info_assets);

server_network_info_assets_t *server_network_info_assets_parseFromJSON(cJSON *server_network_info_assetsJSON);

cJSON *server_network_info_assets_convertToJSON(server_network_info_assets_t *server_network_info_assets);

#endif /* _server_network_info_assets_H_ */

