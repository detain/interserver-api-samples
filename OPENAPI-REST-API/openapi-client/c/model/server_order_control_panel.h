/*
 * server_order_control_panel.h
 *
 * A control panel option available when ordering a dedicated server.
 */

#ifndef _server_order_control_panel_H_
#define _server_order_control_panel_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct server_order_control_panel_t server_order_control_panel_t;




typedef struct server_order_control_panel_t {
    char *id; // string
    int *price; //numeric
    char *img; // string
    char *short_desc; // string
    char *long_desc; // string
    char *os_type; // string
    int *monthly_price; //numeric
    list_t *types; //primitive container
    char *price_display; // string
    char *monthly_price_display; // string

    int _library_owned; // Is the library responsible for freeing this object?
} server_order_control_panel_t;

__attribute__((deprecated)) server_order_control_panel_t *server_order_control_panel_create(
    char *id,
    int *price,
    char *img,
    char *short_desc,
    char *long_desc,
    char *os_type,
    int *monthly_price,
    list_t *types,
    char *price_display,
    char *monthly_price_display
);

void server_order_control_panel_free(server_order_control_panel_t *server_order_control_panel);

server_order_control_panel_t *server_order_control_panel_parseFromJSON(cJSON *server_order_control_panelJSON);

cJSON *server_order_control_panel_convertToJSON(server_order_control_panel_t *server_order_control_panel);

#endif /* _server_order_control_panel_H_ */

