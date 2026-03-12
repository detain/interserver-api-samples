/*
 * server_order_memory_li_254.h
 *
 * 
 */

#ifndef _server_order_memory_li_254_H_
#define _server_order_memory_li_254_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct server_order_memory_li_254_t server_order_memory_li_254_t;

#include "server_order_memory.h"



typedef struct server_order_memory_li_254_t {
    struct server_order_memory_t *_65; //model

    int _library_owned; // Is the library responsible for freeing this object?
} server_order_memory_li_254_t;

__attribute__((deprecated)) server_order_memory_li_254_t *server_order_memory_li_254_create(
    server_order_memory_t *_65
);

void server_order_memory_li_254_free(server_order_memory_li_254_t *server_order_memory_li_254);

server_order_memory_li_254_t *server_order_memory_li_254_parseFromJSON(cJSON *server_order_memory_li_254JSON);

cJSON *server_order_memory_li_254_convertToJSON(server_order_memory_li_254_t *server_order_memory_li_254);

#endif /* _server_order_memory_li_254_H_ */

