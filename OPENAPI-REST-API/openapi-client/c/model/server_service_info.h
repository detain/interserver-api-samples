/*
 * server_service_info.h
 *
 * 
 */

#ifndef _server_service_info_H_
#define _server_service_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct server_service_info_t server_service_info_t;

#include "any_type.h"



typedef struct server_service_info_t {
    char *server_id; // string
    char *server_hostname; // string
    char *server_custid; // string
    char *server_type; // string
    char *server_currency; // string
    char *server_order_date; // string
    char *server_invoice; // string
    char *server_coupon; // string
    char *server_status; // string
    char *server_root; // string
    char *server_dedicated_tag; // string
    char *server_custom_tag; // string
    char *server_comment; // string
    char *server_initial_bill; // string
    char *server_hardware; // string
    char *server_ips; // string
    char *server_monthly_bill; // string
    char *server_setup; // string
    any_type_t *server_discount; // custom
    char *server_rep; // string
    char *server_date; // string
    char *server_total_cost; // string
    any_type_t *server_location; // custom
    char *server_hardware_ordered; // string
    char *server_billed; // string
    char *server_welcome_email; // string
    char *server_dedicated_cpu; // string
    char *server_dedicated_memory; // string
    char *server_dedicated_hd1; // string
    any_type_t *server_dedicated_hd2; // custom
    char *server_dedicated_bandwidth; // string
    char *server_dedicated_ips; // string
    char *server_dedicated_os; // string
    any_type_t *server_dedicated_cp; // custom
    char *server_dedicated_raid; // string
    char *server_extra; // string

    int _library_owned; // Is the library responsible for freeing this object?
} server_service_info_t;

__attribute__((deprecated)) server_service_info_t *server_service_info_create(
    char *server_id,
    char *server_hostname,
    char *server_custid,
    char *server_type,
    char *server_currency,
    char *server_order_date,
    char *server_invoice,
    char *server_coupon,
    char *server_status,
    char *server_root,
    char *server_dedicated_tag,
    char *server_custom_tag,
    char *server_comment,
    char *server_initial_bill,
    char *server_hardware,
    char *server_ips,
    char *server_monthly_bill,
    char *server_setup,
    any_type_t *server_discount,
    char *server_rep,
    char *server_date,
    char *server_total_cost,
    any_type_t *server_location,
    char *server_hardware_ordered,
    char *server_billed,
    char *server_welcome_email,
    char *server_dedicated_cpu,
    char *server_dedicated_memory,
    char *server_dedicated_hd1,
    any_type_t *server_dedicated_hd2,
    char *server_dedicated_bandwidth,
    char *server_dedicated_ips,
    char *server_dedicated_os,
    any_type_t *server_dedicated_cp,
    char *server_dedicated_raid,
    char *server_extra
);

void server_service_info_free(server_service_info_t *server_service_info);

server_service_info_t *server_service_info_parseFromJSON(cJSON *server_service_infoJSON);

cJSON *server_service_info_convertToJSON(server_service_info_t *server_service_info);

#endif /* _server_service_info_H_ */

