/*
 * server_order_get_response.h
 *
 * Configuration options and pricing data returned when starting a dedicated server order.
 */

#ifndef _server_order_get_response_H_
#define _server_order_get_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct server_order_get_response_t server_order_get_response_t;

#include "asset_server.h"
#include "config_ids.h"
#include "config_lists.h"
#include "cpu.h"
#include "cpu_with_defaults.h"
#include "field_label.h"
#include "form_values.h"
#include "object.h"
#include "region.h"



typedef struct server_order_get_response_t {
    struct form_values_t *form_values; //model
    struct config_ids_t *config_ids; //model
    int *cpu; //numeric
    list_t* cpu_li; //map
    struct config_lists_t *config_li; //model
    int *frequency; //numeric
    char *currency; // string
    char *country; // string
    char *step; // string
    list_t* field_label; //map
    list_t* cpu_cores; //map
    char *currency_symbol; // string
    int *custid; //numeric
    char *ima; // string
    list_t *regions; //nonprimitive container
    list_t *asset_servers; //nonprimitive container
    list_t *buy_it_servers; //nonprimitive container
    char *display_showmore; // string
    double *cust_discount; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} server_order_get_response_t;

__attribute__((deprecated)) server_order_get_response_t *server_order_get_response_create(
    form_values_t *form_values,
    config_ids_t *config_ids,
    int *cpu,
    list_t* cpu_li,
    config_lists_t *config_li,
    int *frequency,
    char *currency,
    char *country,
    char *step,
    list_t* field_label,
    list_t* cpu_cores,
    char *currency_symbol,
    int *custid,
    char *ima,
    list_t *regions,
    list_t *asset_servers,
    list_t *buy_it_servers,
    char *display_showmore,
    double *cust_discount
);

void server_order_get_response_free(server_order_get_response_t *server_order_get_response);

server_order_get_response_t *server_order_get_response_parseFromJSON(cJSON *server_order_get_responseJSON);

cJSON *server_order_get_response_convertToJSON(server_order_get_response_t *server_order_get_response);

#endif /* _server_order_get_response_H_ */

