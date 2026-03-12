/*
 * server_order_config_ids.h
 *
 * Configuration IDs for the server order.
 */

#ifndef _server_order_config_ids_H_
#define _server_order_config_ids_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct server_order_config_ids_t server_order_config_ids_t;




typedef struct server_order_config_ids_t {
    int memory; //numeric
    char *bandwidth; // string
    char *ips; // string
    char *os; // string
    int cp; //numeric
    char *raid; // string
    char *hd; // string

    int _library_owned; // Is the library responsible for freeing this object?
} server_order_config_ids_t;

__attribute__((deprecated)) server_order_config_ids_t *server_order_config_ids_create(
    int memory,
    char *bandwidth,
    char *ips,
    char *os,
    int cp,
    char *raid,
    char *hd
);

void server_order_config_ids_free(server_order_config_ids_t *server_order_config_ids);

server_order_config_ids_t *server_order_config_ids_parseFromJSON(cJSON *server_order_config_idsJSON);

cJSON *server_order_config_ids_convertToJSON(server_order_config_ids_t *server_order_config_ids);

#endif /* _server_order_config_ids_H_ */

