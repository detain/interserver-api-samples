/*
 * quickserver_service_info.h
 *
 * Core service record for a QuickServer including ID, status, IP, OS, and billing details.
 */

#ifndef _quickserver_service_info_H_
#define _quickserver_service_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct quickserver_service_info_t quickserver_service_info_t;




typedef struct quickserver_service_info_t {
    char *qs_id; // string
    char *qs_custid; // string
    char *qs_server; // string
    char *qs_ip; // string
    char *qs_ipv6; // string
    char *qs_vzid; // string
    char *qs_currency; // string
    char *qs_type; // string
    char *qs_order_date; // string
    char *qs_status; // string
    char *qs_invoice; // string
    char *qs_coupon; // string
    char *qs_extra; // string
    char *qs_hostname; // string
    char *qs_server_status; // string
    char *qs_comment; // string
    char *qs_slices; // string
    char *qs_vnc; // string
    int *qs_vnc_port; //numeric
    char *qs_rootpass; // string
    char *qs_mac; // string
    char *qs_os; // string
    char *qs_version; // string
    char *qs_location; // string
    char *qs_platform; // string

    int _library_owned; // Is the library responsible for freeing this object?
} quickserver_service_info_t;

__attribute__((deprecated)) quickserver_service_info_t *quickserver_service_info_create(
    char *qs_id,
    char *qs_custid,
    char *qs_server,
    char *qs_ip,
    char *qs_ipv6,
    char *qs_vzid,
    char *qs_currency,
    char *qs_type,
    char *qs_order_date,
    char *qs_status,
    char *qs_invoice,
    char *qs_coupon,
    char *qs_extra,
    char *qs_hostname,
    char *qs_server_status,
    char *qs_comment,
    char *qs_slices,
    char *qs_vnc,
    int *qs_vnc_port,
    char *qs_rootpass,
    char *qs_mac,
    char *qs_os,
    char *qs_version,
    char *qs_location,
    char *qs_platform
);

void quickserver_service_info_free(quickserver_service_info_t *quickserver_service_info);

quickserver_service_info_t *quickserver_service_info_parseFromJSON(cJSON *quickserver_service_infoJSON);

cJSON *quickserver_service_info_convertToJSON(quickserver_service_info_t *quickserver_service_info);

#endif /* _quickserver_service_info_H_ */

