/*
 * asset_server.h
 *
 * A pre-configured asset server available for immediate provisioning.
 */

#ifndef _asset_server_H_
#define _asset_server_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct asset_server_t asset_server_t;

#include "asset_server_cpu_inner.h"



typedef struct asset_server_t {
    int *id; //numeric
    char *region; // string
    char *price; // string
    list_t *cpu; //nonprimitive container
    list_t *memory; //nonprimitive container
    list_t *bandwidth; //nonprimitive container
    list_t *ips; //nonprimitive container
    list_t* hd; //map

    int _library_owned; // Is the library responsible for freeing this object?
} asset_server_t;

__attribute__((deprecated)) asset_server_t *asset_server_create(
    int *id,
    char *region,
    char *price,
    list_t *cpu,
    list_t *memory,
    list_t *bandwidth,
    list_t *ips,
    list_t* hd
);

void asset_server_free(asset_server_t *asset_server);

asset_server_t *asset_server_parseFromJSON(cJSON *asset_serverJSON);

cJSON *asset_server_convertToJSON(asset_server_t *asset_server);

#endif /* _asset_server_H_ */

