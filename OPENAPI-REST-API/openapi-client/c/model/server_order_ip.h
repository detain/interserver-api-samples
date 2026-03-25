/*
 * server_order_ip.h
 *
 * An IP block option available when ordering a dedicated server.
 */

#ifndef _server_order_ip_H_
#define _server_order_ip_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct server_order_ip_t server_order_ip_t;




typedef struct server_order_ip_t {
    char *id; // string
    int *price; //numeric
    char *img; // string
    char *short_desc; // string
    char *long_desc; // string
    char *qty; // string
    int *monthly_price; //numeric
    char *price_display; // string
    char *monthly_price_display; // string

    int _library_owned; // Is the library responsible for freeing this object?
} server_order_ip_t;

__attribute__((deprecated)) server_order_ip_t *server_order_ip_create(
    char *id,
    int *price,
    char *img,
    char *short_desc,
    char *long_desc,
    char *qty,
    int *monthly_price,
    char *price_display,
    char *monthly_price_display
);

void server_order_ip_free(server_order_ip_t *server_order_ip);

server_order_ip_t *server_order_ip_parseFromJSON(cJSON *server_order_ipJSON);

cJSON *server_order_ip_convertToJSON(server_order_ip_t *server_order_ip);

#endif /* _server_order_ip_H_ */

