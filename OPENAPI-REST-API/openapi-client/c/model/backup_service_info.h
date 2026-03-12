/*
 * backup_service_info.h
 *
 * Core service record for a backup storage service including ID, status, quota, and billing details.
 */

#ifndef _backup_service_info_H_
#define _backup_service_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct backup_service_info_t backup_service_info_t;




typedef struct backup_service_info_t {
    char *backup_id; // string
    char *backup_server; // string
    char *backup_username; // string
    char *backup_type; // string
    char *backup_currency; // string
    char *backup_order_date; // string
    char *backup_custid; // string
    char *backup_quota; // string
    char *backup_ip; // string
    char *backup_status; // string
    char *backup_invoice; // string
    char *backup_coupon; // string
    char *backup_extra; // string
    char *backup_server_status; // string
    char *backup_comment; // string

    int _library_owned; // Is the library responsible for freeing this object?
} backup_service_info_t;

__attribute__((deprecated)) backup_service_info_t *backup_service_info_create(
    char *backup_id,
    char *backup_server,
    char *backup_username,
    char *backup_type,
    char *backup_currency,
    char *backup_order_date,
    char *backup_custid,
    char *backup_quota,
    char *backup_ip,
    char *backup_status,
    char *backup_invoice,
    char *backup_coupon,
    char *backup_extra,
    char *backup_server_status,
    char *backup_comment
);

void backup_service_info_free(backup_service_info_t *backup_service_info);

backup_service_info_t *backup_service_info_parseFromJSON(cJSON *backup_service_infoJSON);

cJSON *backup_service_info_convertToJSON(backup_service_info_t *backup_service_info);

#endif /* _backup_service_info_H_ */

