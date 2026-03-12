/*
 * server_assets.h
 *
 * 
 */

#ifndef _server_assets_H_
#define _server_assets_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct server_assets_t server_assets_t;




typedef struct server_assets_t {
    char *title; // string
    int size; //numeric
    char *type; // string
    list_t *header; //primitive container
    list_t *rows; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} server_assets_t;

__attribute__((deprecated)) server_assets_t *server_assets_create(
    char *title,
    int size,
    char *type,
    list_t *header,
    list_t *rows
);

void server_assets_free(server_assets_t *server_assets);

server_assets_t *server_assets_parseFromJSON(cJSON *server_assetsJSON);

cJSON *server_assets_convertToJSON(server_assets_t *server_assets);

#endif /* _server_assets_H_ */

