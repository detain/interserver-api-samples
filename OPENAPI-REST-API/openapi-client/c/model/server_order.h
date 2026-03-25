/*
 * server_order.h
 *
 * Object representing a server order.
 */

#ifndef _server_order_H_
#define _server_order_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct server_order_t server_order_t;

#include "server_order_bandwidth_li.h"
#include "server_order_config_ids.h"
#include "server_order_cp_li.h"
#include "server_order_cpu_li.h"
#include "server_order_field_labels.h"
#include "server_order_form_values.h"
#include "server_order_ips_li.h"
#include "server_order_memory_li.h"
#include "server_order_os_li.h"
#include "server_order_raid.h"



typedef struct server_order_t {
    struct server_order_form_values_t *form_values; //model
    struct server_order_config_ids_t *config_ids; //model
    int *cpu; //numeric
    struct server_order_field_labels_t *field_label; //model
    struct server_order_cpu_li_t *cpu_li; //model
    struct server_order_memory_li_t *memory_li; //model
    struct server_order_bandwidth_li_t *bandwidth_li; //model
    struct server_order_ips_li_t *ips_li; //model
    struct server_order_os_li_t *os_li; //model
    struct server_order_cp_li_t *cp_li; //model
    list_t *raid_li; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} server_order_t;

__attribute__((deprecated)) server_order_t *server_order_create(
    server_order_form_values_t *form_values,
    server_order_config_ids_t *config_ids,
    int *cpu,
    server_order_field_labels_t *field_label,
    server_order_cpu_li_t *cpu_li,
    server_order_memory_li_t *memory_li,
    server_order_bandwidth_li_t *bandwidth_li,
    server_order_ips_li_t *ips_li,
    server_order_os_li_t *os_li,
    server_order_cp_li_t *cp_li,
    list_t *raid_li
);

void server_order_free(server_order_t *server_order);

server_order_t *server_order_parseFromJSON(cJSON *server_orderJSON);

cJSON *server_order_convertToJSON(server_order_t *server_order);

#endif /* _server_order_H_ */

