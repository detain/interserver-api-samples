/*
 * server_order_os.h
 *
 * An operating system option available when ordering a dedicated server.
 */

#ifndef _server_order_os_H_
#define _server_order_os_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct server_order_os_t server_order_os_t;




typedef struct server_order_os_t {
    char *id; // string
    int price; //numeric
    char *img; // string
    char *short_desc; // string
    char *long_desc; // string
    int monthly_price; //numeric
    char *active; // string
    char *price_display; // string
    char *monthly_price_display; // string

    int _library_owned; // Is the library responsible for freeing this object?
} server_order_os_t;

__attribute__((deprecated)) server_order_os_t *server_order_os_create(
    char *id,
    int price,
    char *img,
    char *short_desc,
    char *long_desc,
    int monthly_price,
    char *active,
    char *price_display,
    char *monthly_price_display
);

void server_order_os_free(server_order_os_t *server_order_os);

server_order_os_t *server_order_os_parseFromJSON(cJSON *server_order_osJSON);

cJSON *server_order_os_convertToJSON(server_order_os_t *server_order_os);

#endif /* _server_order_os_H_ */

