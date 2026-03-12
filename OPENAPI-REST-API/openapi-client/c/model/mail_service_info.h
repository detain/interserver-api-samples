/*
 * mail_service_info.h
 *
 * 
 */

#ifndef _mail_service_info_H_
#define _mail_service_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mail_service_info_t mail_service_info_t;




typedef struct mail_service_info_t {
    char *mail_id; // string
    char *mail_type; // string
    char *mail_currency; // string
    char *mail_order_date; // string
    char *mail_custid; // string
    char *mail_quota; // string
    char *mail_status; // string
    char *mail_invoice; // string
    char *mail_username; // string
    char *mail_ip; // string
    char *mail_coupon; // string
    char *mail_extra; // string
    char *mail_server_status; // string
    char *mail_comment; // string

    int _library_owned; // Is the library responsible for freeing this object?
} mail_service_info_t;

__attribute__((deprecated)) mail_service_info_t *mail_service_info_create(
    char *mail_id,
    char *mail_type,
    char *mail_currency,
    char *mail_order_date,
    char *mail_custid,
    char *mail_quota,
    char *mail_status,
    char *mail_invoice,
    char *mail_username,
    char *mail_ip,
    char *mail_coupon,
    char *mail_extra,
    char *mail_server_status,
    char *mail_comment
);

void mail_service_info_free(mail_service_info_t *mail_service_info);

mail_service_info_t *mail_service_info_parseFromJSON(cJSON *mail_service_infoJSON);

cJSON *mail_service_info_convertToJSON(mail_service_info_t *mail_service_info);

#endif /* _mail_service_info_H_ */

