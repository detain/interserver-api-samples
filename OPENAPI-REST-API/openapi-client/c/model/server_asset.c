#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server_asset.h"



static server_asset_t *server_asset_create_internal(
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
    char *mac,
    char *ipmi_admin_username,
    char *ipmi_admin_password,
    char *ipmi_client_username,
    char *ipmi_client_password,
    char *ipmi_updated,
    char *create_timestamp,
    char *update_timestamp,
    char *comment
    ) {
    server_asset_t *server_asset_local_var = malloc(sizeof(server_asset_t));
    if (!server_asset_local_var) {
        return NULL;
    }
    memset(server_asset_local_var, 0, sizeof(server_asset_t));
    server_asset_local_var->_library_owned = 1;
    server_asset_local_var->id = id;
    server_asset_local_var->order_id = order_id;
    server_asset_local_var->hostname = hostname;
    server_asset_local_var->status = status;
    server_asset_local_var->primary_ipv4 = primary_ipv4;
    server_asset_local_var->primary_ipv6 = primary_ipv6;
    server_asset_local_var->datacenter = datacenter;
    server_asset_local_var->type_id = type_id;
    server_asset_local_var->asset_tag = asset_tag;
    server_asset_local_var->rack = rack;
    server_asset_local_var->row = row;
    server_asset_local_var->col = col;
    server_asset_local_var->unit_start = unit_start;
    server_asset_local_var->unit_end = unit_end;
    server_asset_local_var->unit_sub = unit_sub;
    server_asset_local_var->ipmi_mac = ipmi_mac;
    server_asset_local_var->ipmi_ip = ipmi_ip;
    server_asset_local_var->ipmi_working = ipmi_working;
    server_asset_local_var->company = company;
    server_asset_local_var->comments = comments;
    server_asset_local_var->make = make;
    server_asset_local_var->model = model;
    server_asset_local_var->description = description;
    server_asset_local_var->customer_id = customer_id;
    server_asset_local_var->external_id = external_id;
    server_asset_local_var->billing_status = billing_status;
    server_asset_local_var->overdue = overdue;
    server_asset_local_var->asset_id = asset_id;
    server_asset_local_var->asset_name = asset_name;
    server_asset_local_var->rack_id = rack_id;
    server_asset_local_var->rack_name = rack_name;
    server_asset_local_var->rack_location = rack_location;
    server_asset_local_var->rack_size = rack_size;
    server_asset_local_var->rack_x = rack_x;
    server_asset_local_var->rack_y = rack_y;
    server_asset_local_var->switchports = switchports;
    server_asset_local_var->vlans = vlans;
    server_asset_local_var->vlans6 = vlans6;
    server_asset_local_var->lease = lease;
    server_asset_local_var->mac = mac;
    server_asset_local_var->ipmi_admin_username = ipmi_admin_username;
    server_asset_local_var->ipmi_admin_password = ipmi_admin_password;
    server_asset_local_var->ipmi_client_username = ipmi_client_username;
    server_asset_local_var->ipmi_client_password = ipmi_client_password;
    server_asset_local_var->ipmi_updated = ipmi_updated;
    server_asset_local_var->create_timestamp = create_timestamp;
    server_asset_local_var->update_timestamp = update_timestamp;
    server_asset_local_var->comment = comment;
    return server_asset_local_var;
}

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
    char *mac,
    char *ipmi_admin_username,
    char *ipmi_admin_password,
    char *ipmi_client_username,
    char *ipmi_client_password,
    char *ipmi_updated,
    char *create_timestamp,
    char *update_timestamp,
    char *comment
    ) {
    int *id_copy = NULL;
    if (id) {
        id_copy = malloc(sizeof(int));
        if (id_copy) *id_copy = *id;
    }
    server_asset_t *result = server_asset_create_internal (
        id_copy,
        order_id,
        hostname,
        status,
        primary_ipv4,
        primary_ipv6,
        datacenter,
        type_id,
        asset_tag,
        rack,
        row,
        col,
        unit_start,
        unit_end,
        unit_sub,
        ipmi_mac,
        ipmi_ip,
        ipmi_working,
        company,
        comments,
        make,
        model,
        description,
        customer_id,
        external_id,
        billing_status,
        overdue,
        asset_id,
        asset_name,
        rack_id,
        rack_name,
        rack_location,
        rack_size,
        rack_x,
        rack_y,
        switchports,
        vlans,
        vlans6,
        lease,
        mac,
        ipmi_admin_username,
        ipmi_admin_password,
        ipmi_client_username,
        ipmi_client_password,
        ipmi_updated,
        create_timestamp,
        update_timestamp,
        comment
        );
    if (!result) {
        free(id_copy);
    }
    return result;
}

void server_asset_free(server_asset_t *server_asset) {
    if(NULL == server_asset){
        return ;
    }
    if(server_asset->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "server_asset_free");
        return ;
    }
    listEntry_t *listEntry;
    if (server_asset->id) {
        free(server_asset->id);
        server_asset->id = NULL;
    }
    if (server_asset->order_id) {
        free(server_asset->order_id);
        server_asset->order_id = NULL;
    }
    if (server_asset->hostname) {
        free(server_asset->hostname);
        server_asset->hostname = NULL;
    }
    if (server_asset->status) {
        free(server_asset->status);
        server_asset->status = NULL;
    }
    if (server_asset->primary_ipv4) {
        free(server_asset->primary_ipv4);
        server_asset->primary_ipv4 = NULL;
    }
    if (server_asset->primary_ipv6) {
        free(server_asset->primary_ipv6);
        server_asset->primary_ipv6 = NULL;
    }
    if (server_asset->datacenter) {
        free(server_asset->datacenter);
        server_asset->datacenter = NULL;
    }
    if (server_asset->type_id) {
        free(server_asset->type_id);
        server_asset->type_id = NULL;
    }
    if (server_asset->asset_tag) {
        free(server_asset->asset_tag);
        server_asset->asset_tag = NULL;
    }
    if (server_asset->rack) {
        free(server_asset->rack);
        server_asset->rack = NULL;
    }
    if (server_asset->row) {
        free(server_asset->row);
        server_asset->row = NULL;
    }
    if (server_asset->col) {
        free(server_asset->col);
        server_asset->col = NULL;
    }
    if (server_asset->unit_start) {
        free(server_asset->unit_start);
        server_asset->unit_start = NULL;
    }
    if (server_asset->unit_end) {
        free(server_asset->unit_end);
        server_asset->unit_end = NULL;
    }
    if (server_asset->unit_sub) {
        free(server_asset->unit_sub);
        server_asset->unit_sub = NULL;
    }
    if (server_asset->ipmi_mac) {
        free(server_asset->ipmi_mac);
        server_asset->ipmi_mac = NULL;
    }
    if (server_asset->ipmi_ip) {
        free(server_asset->ipmi_ip);
        server_asset->ipmi_ip = NULL;
    }
    if (server_asset->ipmi_working) {
        free(server_asset->ipmi_working);
        server_asset->ipmi_working = NULL;
    }
    if (server_asset->company) {
        free(server_asset->company);
        server_asset->company = NULL;
    }
    if (server_asset->comments) {
        free(server_asset->comments);
        server_asset->comments = NULL;
    }
    if (server_asset->make) {
        free(server_asset->make);
        server_asset->make = NULL;
    }
    if (server_asset->model) {
        free(server_asset->model);
        server_asset->model = NULL;
    }
    if (server_asset->description) {
        free(server_asset->description);
        server_asset->description = NULL;
    }
    if (server_asset->customer_id) {
        free(server_asset->customer_id);
        server_asset->customer_id = NULL;
    }
    if (server_asset->external_id) {
        free(server_asset->external_id);
        server_asset->external_id = NULL;
    }
    if (server_asset->billing_status) {
        free(server_asset->billing_status);
        server_asset->billing_status = NULL;
    }
    if (server_asset->overdue) {
        free(server_asset->overdue);
        server_asset->overdue = NULL;
    }
    if (server_asset->asset_id) {
        free(server_asset->asset_id);
        server_asset->asset_id = NULL;
    }
    if (server_asset->asset_name) {
        free(server_asset->asset_name);
        server_asset->asset_name = NULL;
    }
    if (server_asset->rack_id) {
        free(server_asset->rack_id);
        server_asset->rack_id = NULL;
    }
    if (server_asset->rack_name) {
        free(server_asset->rack_name);
        server_asset->rack_name = NULL;
    }
    if (server_asset->rack_location) {
        free(server_asset->rack_location);
        server_asset->rack_location = NULL;
    }
    if (server_asset->rack_size) {
        free(server_asset->rack_size);
        server_asset->rack_size = NULL;
    }
    if (server_asset->rack_x) {
        free(server_asset->rack_x);
        server_asset->rack_x = NULL;
    }
    if (server_asset->rack_y) {
        free(server_asset->rack_y);
        server_asset->rack_y = NULL;
    }
    if (server_asset->switchports) {
        list_ForEach(listEntry, server_asset->switchports) {
            free(listEntry->data);
        }
        list_freeList(server_asset->switchports);
        server_asset->switchports = NULL;
    }
    if (server_asset->vlans) {
        list_ForEach(listEntry, server_asset->vlans) {
            free(listEntry->data);
        }
        list_freeList(server_asset->vlans);
        server_asset->vlans = NULL;
    }
    if (server_asset->vlans6) {
        list_ForEach(listEntry, server_asset->vlans6) {
            free(listEntry->data);
        }
        list_freeList(server_asset->vlans6);
        server_asset->vlans6 = NULL;
    }
    if (server_asset->lease) {
        server_lease_free(server_asset->lease);
        server_asset->lease = NULL;
    }
    if (server_asset->mac) {
        free(server_asset->mac);
        server_asset->mac = NULL;
    }
    if (server_asset->ipmi_admin_username) {
        free(server_asset->ipmi_admin_username);
        server_asset->ipmi_admin_username = NULL;
    }
    if (server_asset->ipmi_admin_password) {
        free(server_asset->ipmi_admin_password);
        server_asset->ipmi_admin_password = NULL;
    }
    if (server_asset->ipmi_client_username) {
        free(server_asset->ipmi_client_username);
        server_asset->ipmi_client_username = NULL;
    }
    if (server_asset->ipmi_client_password) {
        free(server_asset->ipmi_client_password);
        server_asset->ipmi_client_password = NULL;
    }
    if (server_asset->ipmi_updated) {
        free(server_asset->ipmi_updated);
        server_asset->ipmi_updated = NULL;
    }
    if (server_asset->create_timestamp) {
        free(server_asset->create_timestamp);
        server_asset->create_timestamp = NULL;
    }
    if (server_asset->update_timestamp) {
        free(server_asset->update_timestamp);
        server_asset->update_timestamp = NULL;
    }
    if (server_asset->comment) {
        free(server_asset->comment);
        server_asset->comment = NULL;
    }
    free(server_asset);
}

cJSON *server_asset_convertToJSON(server_asset_t *server_asset) {
    cJSON *item = cJSON_CreateObject();

    // server_asset->id
    if (!server_asset->id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "id", *server_asset->id) == NULL) {
    goto fail; //Numeric
    }


    // server_asset->order_id
    if (!server_asset->order_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "order_id", server_asset->order_id) == NULL) {
    goto fail; //String
    }


    // server_asset->hostname
    if (!server_asset->hostname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "hostname", server_asset->hostname) == NULL) {
    goto fail; //String
    }


    // server_asset->status
    if (!server_asset->status) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "status", server_asset->status) == NULL) {
    goto fail; //String
    }


    // server_asset->primary_ipv4
    if (!server_asset->primary_ipv4) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "primary_ipv4", server_asset->primary_ipv4) == NULL) {
    goto fail; //String
    }


    // server_asset->primary_ipv6
    if (!server_asset->primary_ipv6) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "primary_ipv6", server_asset->primary_ipv6) == NULL) {
    goto fail; //String
    }


    // server_asset->datacenter
    if (!server_asset->datacenter) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "datacenter", server_asset->datacenter) == NULL) {
    goto fail; //String
    }


    // server_asset->type_id
    if (!server_asset->type_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "type_id", server_asset->type_id) == NULL) {
    goto fail; //String
    }


    // server_asset->asset_tag
    if (!server_asset->asset_tag) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "asset_tag", server_asset->asset_tag) == NULL) {
    goto fail; //String
    }


    // server_asset->rack
    if (!server_asset->rack) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "rack", server_asset->rack) == NULL) {
    goto fail; //String
    }


    // server_asset->row
    if (!server_asset->row) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "row", server_asset->row) == NULL) {
    goto fail; //String
    }


    // server_asset->col
    if (!server_asset->col) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "col", server_asset->col) == NULL) {
    goto fail; //String
    }


    // server_asset->unit_start
    if (!server_asset->unit_start) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "unit_start", server_asset->unit_start) == NULL) {
    goto fail; //String
    }


    // server_asset->unit_end
    if (!server_asset->unit_end) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "unit_end", server_asset->unit_end) == NULL) {
    goto fail; //String
    }


    // server_asset->unit_sub
    if (!server_asset->unit_sub) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "unit_sub", server_asset->unit_sub) == NULL) {
    goto fail; //String
    }


    // server_asset->ipmi_mac
    if (!server_asset->ipmi_mac) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "ipmi_mac", server_asset->ipmi_mac) == NULL) {
    goto fail; //String
    }


    // server_asset->ipmi_ip
    if (!server_asset->ipmi_ip) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "ipmi_ip", server_asset->ipmi_ip) == NULL) {
    goto fail; //String
    }


    // server_asset->ipmi_working
    if (!server_asset->ipmi_working) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "ipmi_working", server_asset->ipmi_working) == NULL) {
    goto fail; //String
    }


    // server_asset->company
    if (!server_asset->company) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "company", server_asset->company) == NULL) {
    goto fail; //String
    }


    // server_asset->comments
    if (!server_asset->comments) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "comments", server_asset->comments) == NULL) {
    goto fail; //String
    }


    // server_asset->make
    if (!server_asset->make) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "make", server_asset->make) == NULL) {
    goto fail; //String
    }


    // server_asset->model
    if (!server_asset->model) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "model", server_asset->model) == NULL) {
    goto fail; //String
    }


    // server_asset->description
    if (!server_asset->description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "description", server_asset->description) == NULL) {
    goto fail; //String
    }


    // server_asset->customer_id
    if (!server_asset->customer_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "customer_id", server_asset->customer_id) == NULL) {
    goto fail; //String
    }


    // server_asset->external_id
    if (!server_asset->external_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "external_id", server_asset->external_id) == NULL) {
    goto fail; //String
    }


    // server_asset->billing_status
    if (!server_asset->billing_status) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "billing_status", server_asset->billing_status) == NULL) {
    goto fail; //String
    }


    // server_asset->overdue
    if (!server_asset->overdue) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "overdue", server_asset->overdue) == NULL) {
    goto fail; //String
    }


    // server_asset->asset_id
    if (!server_asset->asset_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "asset_id", server_asset->asset_id) == NULL) {
    goto fail; //String
    }


    // server_asset->asset_name
    if (!server_asset->asset_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "asset_name", server_asset->asset_name) == NULL) {
    goto fail; //String
    }


    // server_asset->rack_id
    if (!server_asset->rack_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "rack_id", server_asset->rack_id) == NULL) {
    goto fail; //String
    }


    // server_asset->rack_name
    if (!server_asset->rack_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "rack_name", server_asset->rack_name) == NULL) {
    goto fail; //String
    }


    // server_asset->rack_location
    if (!server_asset->rack_location) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "rack_location", server_asset->rack_location) == NULL) {
    goto fail; //String
    }


    // server_asset->rack_size
    if (!server_asset->rack_size) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "rack_size", server_asset->rack_size) == NULL) {
    goto fail; //String
    }


    // server_asset->rack_x
    if (!server_asset->rack_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "rack_x", server_asset->rack_x) == NULL) {
    goto fail; //String
    }


    // server_asset->rack_y
    if (!server_asset->rack_y) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "rack_y", server_asset->rack_y) == NULL) {
    goto fail; //String
    }


    // server_asset->switchports
    if (!server_asset->switchports) {
        goto fail;
    }
    cJSON *switchports = cJSON_AddArrayToObject(item, "switchports");
    if(switchports == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *switchportsListEntry;
    list_ForEach(switchportsListEntry, server_asset->switchports) {
    if(cJSON_AddNumberToObject(switchports, "", *(double *)switchportsListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // server_asset->vlans
    if (!server_asset->vlans) {
        goto fail;
    }
    cJSON *vlans = cJSON_AddArrayToObject(item, "vlans");
    if(vlans == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *vlansListEntry;
    list_ForEach(vlansListEntry, server_asset->vlans) {
    if(cJSON_AddStringToObject(vlans, "", vlansListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // server_asset->vlans6
    if (!server_asset->vlans6) {
        goto fail;
    }
    cJSON *vlans6 = cJSON_AddArrayToObject(item, "vlans6");
    if(vlans6 == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *vlans6ListEntry;
    list_ForEach(vlans6ListEntry, server_asset->vlans6) {
    if(cJSON_AddStringToObject(vlans6, "", vlans6ListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // server_asset->lease
    if (!server_asset->lease) {
        goto fail;
    }
    cJSON *lease_local_JSON = server_lease_convertToJSON(server_asset->lease);
    if(lease_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "lease", lease_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // server_asset->mac
    if(server_asset->mac) {
    if(cJSON_AddStringToObject(item, "mac", server_asset->mac) == NULL) {
    goto fail; //String
    }
    }


    // server_asset->ipmi_admin_username
    if(server_asset->ipmi_admin_username) {
    if(cJSON_AddStringToObject(item, "ipmi_admin_username", server_asset->ipmi_admin_username) == NULL) {
    goto fail; //String
    }
    }


    // server_asset->ipmi_admin_password
    if(server_asset->ipmi_admin_password) {
    if(cJSON_AddStringToObject(item, "ipmi_admin_password", server_asset->ipmi_admin_password) == NULL) {
    goto fail; //String
    }
    }


    // server_asset->ipmi_client_username
    if(server_asset->ipmi_client_username) {
    if(cJSON_AddStringToObject(item, "ipmi_client_username", server_asset->ipmi_client_username) == NULL) {
    goto fail; //String
    }
    }


    // server_asset->ipmi_client_password
    if(server_asset->ipmi_client_password) {
    if(cJSON_AddStringToObject(item, "ipmi_client_password", server_asset->ipmi_client_password) == NULL) {
    goto fail; //String
    }
    }


    // server_asset->ipmi_updated
    if(server_asset->ipmi_updated) {
    if(cJSON_AddStringToObject(item, "ipmi_updated", server_asset->ipmi_updated) == NULL) {
    goto fail; //String
    }
    }


    // server_asset->create_timestamp
    if(server_asset->create_timestamp) {
    if(cJSON_AddStringToObject(item, "create_timestamp", server_asset->create_timestamp) == NULL) {
    goto fail; //String
    }
    }


    // server_asset->update_timestamp
    if(server_asset->update_timestamp) {
    if(cJSON_AddStringToObject(item, "update_timestamp", server_asset->update_timestamp) == NULL) {
    goto fail; //String
    }
    }


    // server_asset->comment
    if(server_asset->comment) {
    if(cJSON_AddStringToObject(item, "comment", server_asset->comment) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

server_asset_t *server_asset_parseFromJSON(cJSON *server_assetJSON){

    server_asset_t *server_asset_local_var = NULL;

    // define the local variable for server_asset->id
    int *id_local_var = NULL;

    char *order_id_local_str = NULL;

    char *hostname_local_str = NULL;

    char *status_local_str = NULL;

    char *primary_ipv4_local_str = NULL;

    char *primary_ipv6_local_str = NULL;

    char *datacenter_local_str = NULL;

    char *type_id_local_str = NULL;

    char *asset_tag_local_str = NULL;

    char *rack_local_str = NULL;

    char *row_local_str = NULL;

    char *col_local_str = NULL;

    char *unit_start_local_str = NULL;

    char *unit_end_local_str = NULL;

    char *unit_sub_local_str = NULL;

    char *ipmi_mac_local_str = NULL;

    char *ipmi_ip_local_str = NULL;

    char *ipmi_working_local_str = NULL;

    char *company_local_str = NULL;

    char *comments_local_str = NULL;

    char *make_local_str = NULL;

    char *model_local_str = NULL;

    char *description_local_str = NULL;

    char *customer_id_local_str = NULL;

    char *external_id_local_str = NULL;

    char *billing_status_local_str = NULL;

    char *overdue_local_str = NULL;

    char *asset_id_local_str = NULL;

    char *asset_name_local_str = NULL;

    char *rack_id_local_str = NULL;

    char *rack_name_local_str = NULL;

    char *rack_location_local_str = NULL;

    char *rack_size_local_str = NULL;

    char *rack_x_local_str = NULL;

    char *rack_y_local_str = NULL;

    // define the local list for server_asset->switchports
    list_t *switchportsList = NULL;

    // define the local list for server_asset->vlans
    list_t *vlansList = NULL;

    // define the local list for server_asset->vlans6
    list_t *vlans6List = NULL;

    // define the local variable for server_asset->lease
    server_lease_t *lease_local_nonprim = NULL;

    char *mac_local_str = NULL;

    char *ipmi_admin_username_local_str = NULL;

    char *ipmi_admin_password_local_str = NULL;

    char *ipmi_client_username_local_str = NULL;

    char *ipmi_client_password_local_str = NULL;

    char *ipmi_updated_local_str = NULL;

    char *create_timestamp_local_str = NULL;

    char *update_timestamp_local_str = NULL;

    char *comment_local_str = NULL;

    // server_asset->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (!id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    id_local_var = malloc(sizeof(int));
    if(!id_local_var)
    {
        goto end;
    }
    *id_local_var = id->valuedouble;

    // server_asset->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "order_id");
    if (cJSON_IsNull(order_id)) {
        order_id = NULL;
    }
    if (!order_id) {
        goto end;
    }

    
    if(!cJSON_IsString(order_id))
    {
    goto end; //String
    }

    // server_asset->hostname
    cJSON *hostname = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "hostname");
    if (cJSON_IsNull(hostname)) {
        hostname = NULL;
    }
    if (!hostname) {
        goto end;
    }

    
    if(!cJSON_IsString(hostname))
    {
    goto end; //String
    }

    // server_asset->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (!status) {
        goto end;
    }

    
    if(!cJSON_IsString(status))
    {
    goto end; //String
    }

    // server_asset->primary_ipv4
    cJSON *primary_ipv4 = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "primary_ipv4");
    if (cJSON_IsNull(primary_ipv4)) {
        primary_ipv4 = NULL;
    }
    if (!primary_ipv4) {
        goto end;
    }

    
    if(!cJSON_IsString(primary_ipv4))
    {
    goto end; //String
    }

    // server_asset->primary_ipv6
    cJSON *primary_ipv6 = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "primary_ipv6");
    if (cJSON_IsNull(primary_ipv6)) {
        primary_ipv6 = NULL;
    }
    if (!primary_ipv6) {
        goto end;
    }

    
    if(!cJSON_IsString(primary_ipv6))
    {
    goto end; //String
    }

    // server_asset->datacenter
    cJSON *datacenter = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "datacenter");
    if (cJSON_IsNull(datacenter)) {
        datacenter = NULL;
    }
    if (!datacenter) {
        goto end;
    }

    
    if(!cJSON_IsString(datacenter))
    {
    goto end; //String
    }

    // server_asset->type_id
    cJSON *type_id = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "type_id");
    if (cJSON_IsNull(type_id)) {
        type_id = NULL;
    }
    if (!type_id) {
        goto end;
    }

    
    if(!cJSON_IsString(type_id))
    {
    goto end; //String
    }

    // server_asset->asset_tag
    cJSON *asset_tag = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "asset_tag");
    if (cJSON_IsNull(asset_tag)) {
        asset_tag = NULL;
    }
    if (!asset_tag) {
        goto end;
    }

    
    if(!cJSON_IsString(asset_tag))
    {
    goto end; //String
    }

    // server_asset->rack
    cJSON *rack = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "rack");
    if (cJSON_IsNull(rack)) {
        rack = NULL;
    }
    if (!rack) {
        goto end;
    }

    
    if(!cJSON_IsString(rack))
    {
    goto end; //String
    }

    // server_asset->row
    cJSON *row = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "row");
    if (cJSON_IsNull(row)) {
        row = NULL;
    }
    if (!row) {
        goto end;
    }

    
    if(!cJSON_IsString(row))
    {
    goto end; //String
    }

    // server_asset->col
    cJSON *col = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "col");
    if (cJSON_IsNull(col)) {
        col = NULL;
    }
    if (!col) {
        goto end;
    }

    
    if(!cJSON_IsString(col))
    {
    goto end; //String
    }

    // server_asset->unit_start
    cJSON *unit_start = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "unit_start");
    if (cJSON_IsNull(unit_start)) {
        unit_start = NULL;
    }
    if (!unit_start) {
        goto end;
    }

    
    if(!cJSON_IsString(unit_start))
    {
    goto end; //String
    }

    // server_asset->unit_end
    cJSON *unit_end = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "unit_end");
    if (cJSON_IsNull(unit_end)) {
        unit_end = NULL;
    }
    if (!unit_end) {
        goto end;
    }

    
    if(!cJSON_IsString(unit_end))
    {
    goto end; //String
    }

    // server_asset->unit_sub
    cJSON *unit_sub = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "unit_sub");
    if (cJSON_IsNull(unit_sub)) {
        unit_sub = NULL;
    }
    if (!unit_sub) {
        goto end;
    }

    
    if(!cJSON_IsString(unit_sub))
    {
    goto end; //String
    }

    // server_asset->ipmi_mac
    cJSON *ipmi_mac = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "ipmi_mac");
    if (cJSON_IsNull(ipmi_mac)) {
        ipmi_mac = NULL;
    }
    if (!ipmi_mac) {
        goto end;
    }

    
    if(!cJSON_IsString(ipmi_mac))
    {
    goto end; //String
    }

    // server_asset->ipmi_ip
    cJSON *ipmi_ip = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "ipmi_ip");
    if (cJSON_IsNull(ipmi_ip)) {
        ipmi_ip = NULL;
    }
    if (!ipmi_ip) {
        goto end;
    }

    
    if(!cJSON_IsString(ipmi_ip))
    {
    goto end; //String
    }

    // server_asset->ipmi_working
    cJSON *ipmi_working = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "ipmi_working");
    if (cJSON_IsNull(ipmi_working)) {
        ipmi_working = NULL;
    }
    if (!ipmi_working) {
        goto end;
    }

    
    if(!cJSON_IsString(ipmi_working))
    {
    goto end; //String
    }

    // server_asset->company
    cJSON *company = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "company");
    if (cJSON_IsNull(company)) {
        company = NULL;
    }
    if (!company) {
        goto end;
    }

    
    if(!cJSON_IsString(company))
    {
    goto end; //String
    }

    // server_asset->comments
    cJSON *comments = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "comments");
    if (cJSON_IsNull(comments)) {
        comments = NULL;
    }
    if (!comments) {
        goto end;
    }

    
    if(!cJSON_IsString(comments))
    {
    goto end; //String
    }

    // server_asset->make
    cJSON *make = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "make");
    if (cJSON_IsNull(make)) {
        make = NULL;
    }
    if (!make) {
        goto end;
    }

    
    if(!cJSON_IsString(make))
    {
    goto end; //String
    }

    // server_asset->model
    cJSON *model = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "model");
    if (cJSON_IsNull(model)) {
        model = NULL;
    }
    if (!model) {
        goto end;
    }

    
    if(!cJSON_IsString(model))
    {
    goto end; //String
    }

    // server_asset->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "description");
    if (cJSON_IsNull(description)) {
        description = NULL;
    }
    if (!description) {
        goto end;
    }

    
    if(!cJSON_IsString(description))
    {
    goto end; //String
    }

    // server_asset->customer_id
    cJSON *customer_id = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "customer_id");
    if (cJSON_IsNull(customer_id)) {
        customer_id = NULL;
    }
    if (!customer_id) {
        goto end;
    }

    
    if(!cJSON_IsString(customer_id))
    {
    goto end; //String
    }

    // server_asset->external_id
    cJSON *external_id = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "external_id");
    if (cJSON_IsNull(external_id)) {
        external_id = NULL;
    }
    if (!external_id) {
        goto end;
    }

    
    if(!cJSON_IsString(external_id))
    {
    goto end; //String
    }

    // server_asset->billing_status
    cJSON *billing_status = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "billing_status");
    if (cJSON_IsNull(billing_status)) {
        billing_status = NULL;
    }
    if (!billing_status) {
        goto end;
    }

    
    if(!cJSON_IsString(billing_status))
    {
    goto end; //String
    }

    // server_asset->overdue
    cJSON *overdue = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "overdue");
    if (cJSON_IsNull(overdue)) {
        overdue = NULL;
    }
    if (!overdue) {
        goto end;
    }

    
    if(!cJSON_IsString(overdue))
    {
    goto end; //String
    }

    // server_asset->asset_id
    cJSON *asset_id = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "asset_id");
    if (cJSON_IsNull(asset_id)) {
        asset_id = NULL;
    }
    if (!asset_id) {
        goto end;
    }

    
    if(!cJSON_IsString(asset_id))
    {
    goto end; //String
    }

    // server_asset->asset_name
    cJSON *asset_name = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "asset_name");
    if (cJSON_IsNull(asset_name)) {
        asset_name = NULL;
    }
    if (!asset_name) {
        goto end;
    }

    
    if(!cJSON_IsString(asset_name))
    {
    goto end; //String
    }

    // server_asset->rack_id
    cJSON *rack_id = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "rack_id");
    if (cJSON_IsNull(rack_id)) {
        rack_id = NULL;
    }
    if (!rack_id) {
        goto end;
    }

    
    if(!cJSON_IsString(rack_id))
    {
    goto end; //String
    }

    // server_asset->rack_name
    cJSON *rack_name = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "rack_name");
    if (cJSON_IsNull(rack_name)) {
        rack_name = NULL;
    }
    if (!rack_name) {
        goto end;
    }

    
    if(!cJSON_IsString(rack_name))
    {
    goto end; //String
    }

    // server_asset->rack_location
    cJSON *rack_location = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "rack_location");
    if (cJSON_IsNull(rack_location)) {
        rack_location = NULL;
    }
    if (!rack_location) {
        goto end;
    }

    
    if(!cJSON_IsString(rack_location))
    {
    goto end; //String
    }

    // server_asset->rack_size
    cJSON *rack_size = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "rack_size");
    if (cJSON_IsNull(rack_size)) {
        rack_size = NULL;
    }
    if (!rack_size) {
        goto end;
    }

    
    if(!cJSON_IsString(rack_size))
    {
    goto end; //String
    }

    // server_asset->rack_x
    cJSON *rack_x = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "rack_x");
    if (cJSON_IsNull(rack_x)) {
        rack_x = NULL;
    }
    if (!rack_x) {
        goto end;
    }

    
    if(!cJSON_IsString(rack_x))
    {
    goto end; //String
    }

    // server_asset->rack_y
    cJSON *rack_y = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "rack_y");
    if (cJSON_IsNull(rack_y)) {
        rack_y = NULL;
    }
    if (!rack_y) {
        goto end;
    }

    
    if(!cJSON_IsString(rack_y))
    {
    goto end; //String
    }

    // server_asset->switchports
    cJSON *switchports = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "switchports");
    if (cJSON_IsNull(switchports)) {
        switchports = NULL;
    }
    if (!switchports) {
        goto end;
    }

    
    cJSON *switchports_local = NULL;
    if(!cJSON_IsArray(switchports)) {
        goto end;//primitive container
    }
    switchportsList = list_createList();

    cJSON_ArrayForEach(switchports_local, switchports)
    {
        if(!cJSON_IsNumber(switchports_local))
        {
            goto end;
        }
        double *switchports_local_value = calloc(1, sizeof(double));
        if(!switchports_local_value)
        {
            goto end;
        }
        *switchports_local_value = switchports_local->valuedouble;
        list_addElement(switchportsList , switchports_local_value);
    }

    // server_asset->vlans
    cJSON *vlans = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "vlans");
    if (cJSON_IsNull(vlans)) {
        vlans = NULL;
    }
    if (!vlans) {
        goto end;
    }

    
    cJSON *vlans_local = NULL;
    if(!cJSON_IsArray(vlans)) {
        goto end;//primitive container
    }
    vlansList = list_createList();

    cJSON_ArrayForEach(vlans_local, vlans)
    {
        if(!cJSON_IsString(vlans_local))
        {
            goto end;
        }
        list_addElement(vlansList , strdup(vlans_local->valuestring));
    }

    // server_asset->vlans6
    cJSON *vlans6 = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "vlans6");
    if (cJSON_IsNull(vlans6)) {
        vlans6 = NULL;
    }
    if (!vlans6) {
        goto end;
    }

    
    cJSON *vlans6_local = NULL;
    if(!cJSON_IsArray(vlans6)) {
        goto end;//primitive container
    }
    vlans6List = list_createList();

    cJSON_ArrayForEach(vlans6_local, vlans6)
    {
        if(!cJSON_IsString(vlans6_local))
        {
            goto end;
        }
        list_addElement(vlans6List , strdup(vlans6_local->valuestring));
    }

    // server_asset->lease
    cJSON *lease = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "lease");
    if (cJSON_IsNull(lease)) {
        lease = NULL;
    }
    if (!lease) {
        goto end;
    }

    
    lease_local_nonprim = server_lease_parseFromJSON(lease); //nonprimitive

    // server_asset->mac
    cJSON *mac = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "mac");
    if (cJSON_IsNull(mac)) {
        mac = NULL;
    }
    if (mac) { 
    if(!cJSON_IsString(mac) && !cJSON_IsNull(mac))
    {
    goto end; //String
    }
    }

    // server_asset->ipmi_admin_username
    cJSON *ipmi_admin_username = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "ipmi_admin_username");
    if (cJSON_IsNull(ipmi_admin_username)) {
        ipmi_admin_username = NULL;
    }
    if (ipmi_admin_username) { 
    if(!cJSON_IsString(ipmi_admin_username) && !cJSON_IsNull(ipmi_admin_username))
    {
    goto end; //String
    }
    }

    // server_asset->ipmi_admin_password
    cJSON *ipmi_admin_password = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "ipmi_admin_password");
    if (cJSON_IsNull(ipmi_admin_password)) {
        ipmi_admin_password = NULL;
    }
    if (ipmi_admin_password) { 
    if(!cJSON_IsString(ipmi_admin_password) && !cJSON_IsNull(ipmi_admin_password))
    {
    goto end; //String
    }
    }

    // server_asset->ipmi_client_username
    cJSON *ipmi_client_username = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "ipmi_client_username");
    if (cJSON_IsNull(ipmi_client_username)) {
        ipmi_client_username = NULL;
    }
    if (ipmi_client_username) { 
    if(!cJSON_IsString(ipmi_client_username) && !cJSON_IsNull(ipmi_client_username))
    {
    goto end; //String
    }
    }

    // server_asset->ipmi_client_password
    cJSON *ipmi_client_password = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "ipmi_client_password");
    if (cJSON_IsNull(ipmi_client_password)) {
        ipmi_client_password = NULL;
    }
    if (ipmi_client_password) { 
    if(!cJSON_IsString(ipmi_client_password) && !cJSON_IsNull(ipmi_client_password))
    {
    goto end; //String
    }
    }

    // server_asset->ipmi_updated
    cJSON *ipmi_updated = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "ipmi_updated");
    if (cJSON_IsNull(ipmi_updated)) {
        ipmi_updated = NULL;
    }
    if (ipmi_updated) { 
    if(!cJSON_IsString(ipmi_updated) && !cJSON_IsNull(ipmi_updated))
    {
    goto end; //String
    }
    }

    // server_asset->create_timestamp
    cJSON *create_timestamp = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "create_timestamp");
    if (cJSON_IsNull(create_timestamp)) {
        create_timestamp = NULL;
    }
    if (create_timestamp) { 
    if(!cJSON_IsString(create_timestamp) && !cJSON_IsNull(create_timestamp))
    {
    goto end; //String
    }
    }

    // server_asset->update_timestamp
    cJSON *update_timestamp = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "update_timestamp");
    if (cJSON_IsNull(update_timestamp)) {
        update_timestamp = NULL;
    }
    if (update_timestamp) { 
    if(!cJSON_IsString(update_timestamp) && !cJSON_IsNull(update_timestamp))
    {
    goto end; //String
    }
    }

    // server_asset->comment
    cJSON *comment = cJSON_GetObjectItemCaseSensitive(server_assetJSON, "comment");
    if (cJSON_IsNull(comment)) {
        comment = NULL;
    }
    if (comment) { 
    if(!cJSON_IsString(comment) && !cJSON_IsNull(comment))
    {
    goto end; //String
    }
    }


    if (order_id && !cJSON_IsNull(order_id)) order_id_local_str = strdup(order_id->valuestring);
    if (hostname && !cJSON_IsNull(hostname)) hostname_local_str = strdup(hostname->valuestring);
    if (status && !cJSON_IsNull(status)) status_local_str = strdup(status->valuestring);
    if (primary_ipv4 && !cJSON_IsNull(primary_ipv4)) primary_ipv4_local_str = strdup(primary_ipv4->valuestring);
    if (primary_ipv6 && !cJSON_IsNull(primary_ipv6)) primary_ipv6_local_str = strdup(primary_ipv6->valuestring);
    if (datacenter && !cJSON_IsNull(datacenter)) datacenter_local_str = strdup(datacenter->valuestring);
    if (type_id && !cJSON_IsNull(type_id)) type_id_local_str = strdup(type_id->valuestring);
    if (asset_tag && !cJSON_IsNull(asset_tag)) asset_tag_local_str = strdup(asset_tag->valuestring);
    if (rack && !cJSON_IsNull(rack)) rack_local_str = strdup(rack->valuestring);
    if (row && !cJSON_IsNull(row)) row_local_str = strdup(row->valuestring);
    if (col && !cJSON_IsNull(col)) col_local_str = strdup(col->valuestring);
    if (unit_start && !cJSON_IsNull(unit_start)) unit_start_local_str = strdup(unit_start->valuestring);
    if (unit_end && !cJSON_IsNull(unit_end)) unit_end_local_str = strdup(unit_end->valuestring);
    if (unit_sub && !cJSON_IsNull(unit_sub)) unit_sub_local_str = strdup(unit_sub->valuestring);
    if (ipmi_mac && !cJSON_IsNull(ipmi_mac)) ipmi_mac_local_str = strdup(ipmi_mac->valuestring);
    if (ipmi_ip && !cJSON_IsNull(ipmi_ip)) ipmi_ip_local_str = strdup(ipmi_ip->valuestring);
    if (ipmi_working && !cJSON_IsNull(ipmi_working)) ipmi_working_local_str = strdup(ipmi_working->valuestring);
    if (company && !cJSON_IsNull(company)) company_local_str = strdup(company->valuestring);
    if (comments && !cJSON_IsNull(comments)) comments_local_str = strdup(comments->valuestring);
    if (make && !cJSON_IsNull(make)) make_local_str = strdup(make->valuestring);
    if (model && !cJSON_IsNull(model)) model_local_str = strdup(model->valuestring);
    if (description && !cJSON_IsNull(description)) description_local_str = strdup(description->valuestring);
    if (customer_id && !cJSON_IsNull(customer_id)) customer_id_local_str = strdup(customer_id->valuestring);
    if (external_id && !cJSON_IsNull(external_id)) external_id_local_str = strdup(external_id->valuestring);
    if (billing_status && !cJSON_IsNull(billing_status)) billing_status_local_str = strdup(billing_status->valuestring);
    if (overdue && !cJSON_IsNull(overdue)) overdue_local_str = strdup(overdue->valuestring);
    if (asset_id && !cJSON_IsNull(asset_id)) asset_id_local_str = strdup(asset_id->valuestring);
    if (asset_name && !cJSON_IsNull(asset_name)) asset_name_local_str = strdup(asset_name->valuestring);
    if (rack_id && !cJSON_IsNull(rack_id)) rack_id_local_str = strdup(rack_id->valuestring);
    if (rack_name && !cJSON_IsNull(rack_name)) rack_name_local_str = strdup(rack_name->valuestring);
    if (rack_location && !cJSON_IsNull(rack_location)) rack_location_local_str = strdup(rack_location->valuestring);
    if (rack_size && !cJSON_IsNull(rack_size)) rack_size_local_str = strdup(rack_size->valuestring);
    if (rack_x && !cJSON_IsNull(rack_x)) rack_x_local_str = strdup(rack_x->valuestring);
    if (rack_y && !cJSON_IsNull(rack_y)) rack_y_local_str = strdup(rack_y->valuestring);
    if (mac && !cJSON_IsNull(mac)) mac_local_str = strdup(mac->valuestring);
    if (ipmi_admin_username && !cJSON_IsNull(ipmi_admin_username)) ipmi_admin_username_local_str = strdup(ipmi_admin_username->valuestring);
    if (ipmi_admin_password && !cJSON_IsNull(ipmi_admin_password)) ipmi_admin_password_local_str = strdup(ipmi_admin_password->valuestring);
    if (ipmi_client_username && !cJSON_IsNull(ipmi_client_username)) ipmi_client_username_local_str = strdup(ipmi_client_username->valuestring);
    if (ipmi_client_password && !cJSON_IsNull(ipmi_client_password)) ipmi_client_password_local_str = strdup(ipmi_client_password->valuestring);
    if (ipmi_updated && !cJSON_IsNull(ipmi_updated)) ipmi_updated_local_str = strdup(ipmi_updated->valuestring);
    if (create_timestamp && !cJSON_IsNull(create_timestamp)) create_timestamp_local_str = strdup(create_timestamp->valuestring);
    if (update_timestamp && !cJSON_IsNull(update_timestamp)) update_timestamp_local_str = strdup(update_timestamp->valuestring);
    if (comment && !cJSON_IsNull(comment)) comment_local_str = strdup(comment->valuestring);

    server_asset_local_var = server_asset_create_internal (
        id_local_var,
        order_id_local_str,
        hostname_local_str,
        status_local_str,
        primary_ipv4_local_str,
        primary_ipv6_local_str,
        datacenter_local_str,
        type_id_local_str,
        asset_tag_local_str,
        rack_local_str,
        row_local_str,
        col_local_str,
        unit_start_local_str,
        unit_end_local_str,
        unit_sub_local_str,
        ipmi_mac_local_str,
        ipmi_ip_local_str,
        ipmi_working_local_str,
        company_local_str,
        comments_local_str,
        make_local_str,
        model_local_str,
        description_local_str,
        customer_id_local_str,
        external_id_local_str,
        billing_status_local_str,
        overdue_local_str,
        asset_id_local_str,
        asset_name_local_str,
        rack_id_local_str,
        rack_name_local_str,
        rack_location_local_str,
        rack_size_local_str,
        rack_x_local_str,
        rack_y_local_str,
        switchportsList,
        vlansList,
        vlans6List,
        lease_local_nonprim,
        mac_local_str,
        ipmi_admin_username_local_str,
        ipmi_admin_password_local_str,
        ipmi_client_username_local_str,
        ipmi_client_password_local_str,
        ipmi_updated_local_str,
        create_timestamp_local_str,
        update_timestamp_local_str,
        comment_local_str
        );

    if (!server_asset_local_var) {
        goto end;
    }

    return server_asset_local_var;
end:
    if (id_local_var) {
        free(id_local_var);
        id_local_var = NULL;
    }
    if (order_id_local_str) {
        free(order_id_local_str);
        order_id_local_str = NULL;
    }
    if (hostname_local_str) {
        free(hostname_local_str);
        hostname_local_str = NULL;
    }
    if (status_local_str) {
        free(status_local_str);
        status_local_str = NULL;
    }
    if (primary_ipv4_local_str) {
        free(primary_ipv4_local_str);
        primary_ipv4_local_str = NULL;
    }
    if (primary_ipv6_local_str) {
        free(primary_ipv6_local_str);
        primary_ipv6_local_str = NULL;
    }
    if (datacenter_local_str) {
        free(datacenter_local_str);
        datacenter_local_str = NULL;
    }
    if (type_id_local_str) {
        free(type_id_local_str);
        type_id_local_str = NULL;
    }
    if (asset_tag_local_str) {
        free(asset_tag_local_str);
        asset_tag_local_str = NULL;
    }
    if (rack_local_str) {
        free(rack_local_str);
        rack_local_str = NULL;
    }
    if (row_local_str) {
        free(row_local_str);
        row_local_str = NULL;
    }
    if (col_local_str) {
        free(col_local_str);
        col_local_str = NULL;
    }
    if (unit_start_local_str) {
        free(unit_start_local_str);
        unit_start_local_str = NULL;
    }
    if (unit_end_local_str) {
        free(unit_end_local_str);
        unit_end_local_str = NULL;
    }
    if (unit_sub_local_str) {
        free(unit_sub_local_str);
        unit_sub_local_str = NULL;
    }
    if (ipmi_mac_local_str) {
        free(ipmi_mac_local_str);
        ipmi_mac_local_str = NULL;
    }
    if (ipmi_ip_local_str) {
        free(ipmi_ip_local_str);
        ipmi_ip_local_str = NULL;
    }
    if (ipmi_working_local_str) {
        free(ipmi_working_local_str);
        ipmi_working_local_str = NULL;
    }
    if (company_local_str) {
        free(company_local_str);
        company_local_str = NULL;
    }
    if (comments_local_str) {
        free(comments_local_str);
        comments_local_str = NULL;
    }
    if (make_local_str) {
        free(make_local_str);
        make_local_str = NULL;
    }
    if (model_local_str) {
        free(model_local_str);
        model_local_str = NULL;
    }
    if (description_local_str) {
        free(description_local_str);
        description_local_str = NULL;
    }
    if (customer_id_local_str) {
        free(customer_id_local_str);
        customer_id_local_str = NULL;
    }
    if (external_id_local_str) {
        free(external_id_local_str);
        external_id_local_str = NULL;
    }
    if (billing_status_local_str) {
        free(billing_status_local_str);
        billing_status_local_str = NULL;
    }
    if (overdue_local_str) {
        free(overdue_local_str);
        overdue_local_str = NULL;
    }
    if (asset_id_local_str) {
        free(asset_id_local_str);
        asset_id_local_str = NULL;
    }
    if (asset_name_local_str) {
        free(asset_name_local_str);
        asset_name_local_str = NULL;
    }
    if (rack_id_local_str) {
        free(rack_id_local_str);
        rack_id_local_str = NULL;
    }
    if (rack_name_local_str) {
        free(rack_name_local_str);
        rack_name_local_str = NULL;
    }
    if (rack_location_local_str) {
        free(rack_location_local_str);
        rack_location_local_str = NULL;
    }
    if (rack_size_local_str) {
        free(rack_size_local_str);
        rack_size_local_str = NULL;
    }
    if (rack_x_local_str) {
        free(rack_x_local_str);
        rack_x_local_str = NULL;
    }
    if (rack_y_local_str) {
        free(rack_y_local_str);
        rack_y_local_str = NULL;
    }
    if (switchportsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, switchportsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(switchportsList);
        switchportsList = NULL;
    }
    if (vlansList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, vlansList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(vlansList);
        vlansList = NULL;
    }
    if (vlans6List) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, vlans6List) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(vlans6List);
        vlans6List = NULL;
    }
    if (lease_local_nonprim) {
        server_lease_free(lease_local_nonprim);
        lease_local_nonprim = NULL;
    }
    if (mac_local_str) {
        free(mac_local_str);
        mac_local_str = NULL;
    }
    if (ipmi_admin_username_local_str) {
        free(ipmi_admin_username_local_str);
        ipmi_admin_username_local_str = NULL;
    }
    if (ipmi_admin_password_local_str) {
        free(ipmi_admin_password_local_str);
        ipmi_admin_password_local_str = NULL;
    }
    if (ipmi_client_username_local_str) {
        free(ipmi_client_username_local_str);
        ipmi_client_username_local_str = NULL;
    }
    if (ipmi_client_password_local_str) {
        free(ipmi_client_password_local_str);
        ipmi_client_password_local_str = NULL;
    }
    if (ipmi_updated_local_str) {
        free(ipmi_updated_local_str);
        ipmi_updated_local_str = NULL;
    }
    if (create_timestamp_local_str) {
        free(create_timestamp_local_str);
        create_timestamp_local_str = NULL;
    }
    if (update_timestamp_local_str) {
        free(update_timestamp_local_str);
        update_timestamp_local_str = NULL;
    }
    if (comment_local_str) {
        free(comment_local_str);
        comment_local_str = NULL;
    }
    return NULL;

}
