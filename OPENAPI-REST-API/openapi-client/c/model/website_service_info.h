/*
 * website_service_info.h
 *
 * 
 */

#ifndef _website_service_info_H_
#define _website_service_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct website_service_info_t website_service_info_t;




typedef struct website_service_info_t {
    char *website_id; // string
    char *website_server; // string
    char *website_type; // string
    char *website_currency; // string
    char *website_order_date; // string
    char *website_custid; // string
    char *website_ip; // string
    char *website_status; // string
    char *website_invoice; // string
    char *website_coupon; // string
    char *website_extra; // string
    char *website_hostname; // string
    char *website_comment; // string
    char *website_username; // string
    char *website_server_status; // string

    int _library_owned; // Is the library responsible for freeing this object?
} website_service_info_t;

__attribute__((deprecated)) website_service_info_t *website_service_info_create(
    char *website_id,
    char *website_server,
    char *website_type,
    char *website_currency,
    char *website_order_date,
    char *website_custid,
    char *website_ip,
    char *website_status,
    char *website_invoice,
    char *website_coupon,
    char *website_extra,
    char *website_hostname,
    char *website_comment,
    char *website_username,
    char *website_server_status
);

void website_service_info_free(website_service_info_t *website_service_info);

website_service_info_t *website_service_info_parseFromJSON(cJSON *website_service_infoJSON);

cJSON *website_service_info_convertToJSON(website_service_info_t *website_service_info);

#endif /* _website_service_info_H_ */

