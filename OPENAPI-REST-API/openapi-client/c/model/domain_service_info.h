/*
 * domain_service_info.h
 *
 * Detailed domain service record for a domain order.
 */

#ifndef _domain_service_info_H_
#define _domain_service_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_service_info_t domain_service_info_t;




typedef struct domain_service_info_t {
    char *domain_id; // string
    char *domain_hostname; // string
    char *domain_username; // string
    char *domain_password; // string
    char *domain_type; // string
    char *domain_currency; // string
    char *domain_expire_date; // string
    char *domain_order_date; // string
    char *domain_custid; // string
    char *domain_status; // string
    char *domain_invoice; // string
    char *domain_coupon; // string

    int _library_owned; // Is the library responsible for freeing this object?
} domain_service_info_t;

__attribute__((deprecated)) domain_service_info_t *domain_service_info_create(
    char *domain_id,
    char *domain_hostname,
    char *domain_username,
    char *domain_password,
    char *domain_type,
    char *domain_currency,
    char *domain_expire_date,
    char *domain_order_date,
    char *domain_custid,
    char *domain_status,
    char *domain_invoice,
    char *domain_coupon
);

void domain_service_info_free(domain_service_info_t *domain_service_info);

domain_service_info_t *domain_service_info_parseFromJSON(cJSON *domain_service_infoJSON);

cJSON *domain_service_info_convertToJSON(domain_service_info_t *domain_service_info);

#endif /* _domain_service_info_H_ */

