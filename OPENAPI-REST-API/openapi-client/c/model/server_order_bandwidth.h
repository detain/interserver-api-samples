/*
 * server_order_bandwidth.h
 *
 * A bandwidth option available when ordering a dedicated server.
 */

#ifndef _server_order_bandwidth_H_
#define _server_order_bandwidth_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct server_order_bandwidth_t server_order_bandwidth_t;




typedef struct server_order_bandwidth_t {
    char *id; // string
    int *price; //numeric
    char *img; // string
    char *short_desc; // string
    char *long_desc; // string
    char *type; // string
    char *qty; // string
    char *active; // string
    int *monthly_price; //numeric
    char *price_display; // string
    char *monthly_price_display; // string

    int _library_owned; // Is the library responsible for freeing this object?
} server_order_bandwidth_t;

__attribute__((deprecated)) server_order_bandwidth_t *server_order_bandwidth_create(
    char *id,
    int *price,
    char *img,
    char *short_desc,
    char *long_desc,
    char *type,
    char *qty,
    char *active,
    int *monthly_price,
    char *price_display,
    char *monthly_price_display
);

void server_order_bandwidth_free(server_order_bandwidth_t *server_order_bandwidth);

server_order_bandwidth_t *server_order_bandwidth_parseFromJSON(cJSON *server_order_bandwidthJSON);

cJSON *server_order_bandwidth_convertToJSON(server_order_bandwidth_t *server_order_bandwidth);

#endif /* _server_order_bandwidth_H_ */

