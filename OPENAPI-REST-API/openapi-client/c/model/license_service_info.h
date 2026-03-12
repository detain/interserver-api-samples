/*
 * license_service_info.h
 *
 * 
 */

#ifndef _license_service_info_H_
#define _license_service_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct license_service_info_t license_service_info_t;




typedef struct license_service_info_t {
    char *license_id; // string
    char *license_type; // string
    char *license_currency; // string
    char *license_order_date; //date time
    char *license_custid; // string
    char *license_ip; // string
    char *license_status; // string
    char *license_invoice; // string
    char *license_coupon; // string
    char *license_hostname; // string
    char *license_key; // string
    char *license_extra; // string

    int _library_owned; // Is the library responsible for freeing this object?
} license_service_info_t;

__attribute__((deprecated)) license_service_info_t *license_service_info_create(
    char *license_id,
    char *license_type,
    char *license_currency,
    char *license_order_date,
    char *license_custid,
    char *license_ip,
    char *license_status,
    char *license_invoice,
    char *license_coupon,
    char *license_hostname,
    char *license_key,
    char *license_extra
);

void license_service_info_free(license_service_info_t *license_service_info);

license_service_info_t *license_service_info_parseFromJSON(cJSON *license_service_infoJSON);

cJSON *license_service_info_convertToJSON(license_service_info_t *license_service_info);

#endif /* _license_service_info_H_ */

