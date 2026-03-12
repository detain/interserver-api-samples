/*
 * vps_service_info.h
 *
 * 
 */

#ifndef _vps_service_info_H_
#define _vps_service_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_service_info_t vps_service_info_t;

#include "any_type.h"



typedef struct vps_service_info_t {
    char *vps_id; // string
    char *vps_custid; // string
    char *vps_server; // string
    char *vps_ip; // string
    any_type_t *vps_ipv6; // custom
    char *vps_vzid; // string
    char *vps_currency; // string
    char *vps_type; // string
    char *vps_order_date; // string
    char *vps_status; // string
    char *vps_invoice; // string
    char *vps_coupon; // string
    char *vps_extra; // string
    char *vps_hostname; // string
    char *vps_server_status; // string
    char *vps_comment; // string
    char *vps_slices; // string
    char *vps_vnc; // string
    char *vps_vnc_port; // string
    char *vps_rootpass; // string
    char *vps_mac; // string
    char *vps_os; // string
    char *vps_version; // string
    char *vps_location; // string
    char *vps_platform; // string
    char *vps_diskused; // string
    char *vps_diskmax; // string

    int _library_owned; // Is the library responsible for freeing this object?
} vps_service_info_t;

__attribute__((deprecated)) vps_service_info_t *vps_service_info_create(
    char *vps_id,
    char *vps_custid,
    char *vps_server,
    char *vps_ip,
    any_type_t *vps_ipv6,
    char *vps_vzid,
    char *vps_currency,
    char *vps_type,
    char *vps_order_date,
    char *vps_status,
    char *vps_invoice,
    char *vps_coupon,
    char *vps_extra,
    char *vps_hostname,
    char *vps_server_status,
    char *vps_comment,
    char *vps_slices,
    char *vps_vnc,
    char *vps_vnc_port,
    char *vps_rootpass,
    char *vps_mac,
    char *vps_os,
    char *vps_version,
    char *vps_location,
    char *vps_platform,
    char *vps_diskused,
    char *vps_diskmax
);

void vps_service_info_free(vps_service_info_t *vps_service_info);

vps_service_info_t *vps_service_info_parseFromJSON(cJSON *vps_service_infoJSON);

cJSON *vps_service_info_convertToJSON(vps_service_info_t *vps_service_info);

#endif /* _vps_service_info_H_ */

