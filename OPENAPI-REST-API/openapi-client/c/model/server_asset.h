/*
 * server_asset.h
 *
 * 
 */

#ifndef _server_asset_H_
#define _server_asset_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct server_asset_t server_asset_t;

#include "any_type.h"
#include "server_lease.h"



typedef struct server_asset_t {
    int *id; //numeric
    char *order_id; // string
    char *hostname; // string
    char *status; // string
    char *primary_ipv4; // string
    char *primary_ipv6; // string
    char *datacenter; // string
    char *type_id; // string
    char *asset_tag; // string
    char *rack; // string
    char *row; // string
    char *col; // string
    char *unit_start; // string
    char *unit_end; // string
    char *unit_sub; // string
    char *ipmi_mac; // string
    char *ipmi_ip; // string
    char *ipmi_working; // string
    char *company; // string
    char *comments; // string
    char *make; // string
    char *model; // string
    char *description; // string
    char *customer_id; // string
    char *external_id; // string
    char *billing_status; // string
    char *overdue; // string
    char *asset_id; // string
    char *asset_name; // string
    char *rack_id; // string
    char *rack_name; // string
    char *rack_location; // string
    char *rack_size; // string
    char *rack_x; // string
    char *rack_y; // string
    list_t *switchports; //primitive container
    list_t *vlans; //primitive container
    list_t *vlans6; //primitive container
    struct server_lease_t *lease; //model
    any_type_t *mac; // custom
    any_type_t *ipmi_admin_username; // custom
    any_type_t *ipmi_admin_password; // custom
    any_type_t *ipmi_client_username; // custom
    any_type_t *ipmi_client_password; // custom
    any_type_t *ipmi_updated; // custom
    any_type_t *create_timestamp; // custom
    any_type_t *update_timestamp; // custom
    any_type_t *comment; // custom

    int _library_owned; // Is the library responsible for freeing this object?
} server_asset_t;

__attribute__((deprecated)) server_asset_t *server_asset_create(
    int *id,
    char *order_id,
    char *hostname,
    char *status,
    char *primary_ipv4,
    char *primary_ipv6,
    char *datacenter,
    char *type_id,
    char *asset_tag,
    char *rack,
    char *row,
    char *col,
    char *unit_start,
    char *unit_end,
    char *unit_sub,
    char *ipmi_mac,
    char *ipmi_ip,
    char *ipmi_working,
    char *company,
    char *comments,
    char *make,
    char *model,
    char *description,
    char *customer_id,
    char *external_id,
    char *billing_status,
    char *overdue,
    char *asset_id,
    char *asset_name,
    char *rack_id,
    char *rack_name,
    char *rack_location,
    char *rack_size,
    char *rack_x,
    char *rack_y,
    list_t *switchports,
    list_t *vlans,
    list_t *vlans6,
    server_lease_t *lease,
    any_type_t *mac,
    any_type_t *ipmi_admin_username,
    any_type_t *ipmi_admin_password,
    any_type_t *ipmi_client_username,
    any_type_t *ipmi_client_password,
    any_type_t *ipmi_updated,
    any_type_t *create_timestamp,
    any_type_t *update_timestamp,
    any_type_t *comment
);

void server_asset_free(server_asset_t *server_asset);

server_asset_t *server_asset_parseFromJSON(cJSON *server_assetJSON);

cJSON *server_asset_convertToJSON(server_asset_t *server_asset);

#endif /* _server_asset_H_ */

