/*
 * asset_server_cpu_inner.h
 *
 * 
 */

#ifndef _asset_server_cpu_inner_H_
#define _asset_server_cpu_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct asset_server_cpu_inner_t asset_server_cpu_inner_t;




typedef struct asset_server_cpu_inner_t {

    int _library_owned; // Is the library responsible for freeing this object?
} asset_server_cpu_inner_t;

__attribute__((deprecated)) asset_server_cpu_inner_t *asset_server_cpu_inner_create(
);

void asset_server_cpu_inner_free(asset_server_cpu_inner_t *asset_server_cpu_inner);

asset_server_cpu_inner_t *asset_server_cpu_inner_parseFromJSON(cJSON *asset_server_cpu_innerJSON);

cJSON *asset_server_cpu_inner_convertToJSON(asset_server_cpu_inner_t *asset_server_cpu_inner);

#endif /* _asset_server_cpu_inner_H_ */

