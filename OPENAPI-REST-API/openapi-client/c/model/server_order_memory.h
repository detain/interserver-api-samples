/*
 * server_order_memory.h
 *
 * A memory (RAM) option available when ordering a dedicated server.
 */

#ifndef _server_order_memory_H_
#define _server_order_memory_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct server_order_memory_t server_order_memory_t;




typedef struct server_order_memory_t {
    char *id; // string
    char *price; // string
    char *img; // string
    char *short_desc; // string
    char *long_desc; // string
    char *manu; // string
    char *size; // string
    char *type; // string
    char *hidden; // string
    int monthly_price; //numeric
    char *drive_type; // string
    char *monthly_price_display; // string

    int _library_owned; // Is the library responsible for freeing this object?
} server_order_memory_t;

__attribute__((deprecated)) server_order_memory_t *server_order_memory_create(
    char *id,
    char *price,
    char *img,
    char *short_desc,
    char *long_desc,
    char *manu,
    char *size,
    char *type,
    char *hidden,
    int monthly_price,
    char *drive_type,
    char *monthly_price_display
);

void server_order_memory_free(server_order_memory_t *server_order_memory);

server_order_memory_t *server_order_memory_parseFromJSON(cJSON *server_order_memoryJSON);

cJSON *server_order_memory_convertToJSON(server_order_memory_t *server_order_memory);

#endif /* _server_order_memory_H_ */

