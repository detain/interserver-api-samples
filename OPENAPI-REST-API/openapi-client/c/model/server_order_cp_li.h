/*
 * server_order_cp_li.h
 *
 * Control Panel options for the server order.
 */

#ifndef _server_order_cp_li_H_
#define _server_order_cp_li_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct server_order_cp_li_t server_order_cp_li_t;

#include "server_order_control_panel.h"



typedef struct server_order_cp_li_t {
    struct server_order_control_panel_t *_9; //model

    int _library_owned; // Is the library responsible for freeing this object?
} server_order_cp_li_t;

__attribute__((deprecated)) server_order_cp_li_t *server_order_cp_li_create(
    server_order_control_panel_t *_9
);

void server_order_cp_li_free(server_order_cp_li_t *server_order_cp_li);

server_order_cp_li_t *server_order_cp_li_parseFromJSON(cJSON *server_order_cp_liJSON);

cJSON *server_order_cp_li_convertToJSON(server_order_cp_li_t *server_order_cp_li);

#endif /* _server_order_cp_li_H_ */

