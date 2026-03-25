/*
 * server.h
 *
 * 
 */

#ifndef _server_H_
#define _server_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct server_t server_t;

#include "server_billing_details.h"
#include "server_client_link.h"
#include "server_extra_info_tables.h"
#include "server_locations.h"
#include "server_network_info.h"
#include "server_service_info.h"



typedef struct server_t {
    int *ipmi_auth; //boolean
    list_t *client_links; //nonprimitive container
    struct server_billing_details_t *billing_details; //model
    char *cust_currency; // string
    char *cust_currency_symbol; // string
    char *package; // string
    list_t *service_extra; //primitive container
    struct server_locations_t *locations; //model
    struct server_network_info_t *network_info; //model
    struct server_extra_info_tables_t *extra_info_tables; //model
    struct server_service_info_t *service_info; //model

    int _library_owned; // Is the library responsible for freeing this object?
} server_t;

__attribute__((deprecated)) server_t *server_create(
    int *ipmi_auth,
    list_t *client_links,
    server_billing_details_t *billing_details,
    char *cust_currency,
    char *cust_currency_symbol,
    char *package,
    list_t *service_extra,
    server_locations_t *locations,
    server_network_info_t *network_info,
    server_extra_info_tables_t *extra_info_tables,
    server_service_info_t *service_info
);

void server_free(server_t *server);

server_t *server_parseFromJSON(cJSON *serverJSON);

cJSON *server_convertToJSON(server_t *server);

#endif /* _server_H_ */

