/*
 * license.h
 *
 * 
 */

#ifndef _license_H_
#define _license_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct license_t license_t;

#include "license_billing_details.h"
#include "license_client_link.h"
#include "license_extra_info_tables.h"
#include "license_service_info.h"
#include "license_service_type.h"



typedef struct license_t {
    struct license_service_info_t *service_info; //model
    list_t *client_links; //nonprimitive container
    struct license_billing_details_t *billing_details; //model
    char *cust_currency; // string
    char *cust_currency_symbol; // string
    char *package; // string
    list_t *service_extra; //primitive container
    struct license_extra_info_tables_t *extra_info_tables; //model
    char *service_overview_extra; // string
    struct license_service_type_t *service_type; //model
    char *license_key; // string

    int _library_owned; // Is the library responsible for freeing this object?
} license_t;

__attribute__((deprecated)) license_t *license_create(
    license_service_info_t *service_info,
    list_t *client_links,
    license_billing_details_t *billing_details,
    char *cust_currency,
    char *cust_currency_symbol,
    char *package,
    list_t *service_extra,
    license_extra_info_tables_t *extra_info_tables,
    char *service_overview_extra,
    license_service_type_t *service_type,
    char *license_key
);

void license_free(license_t *license);

license_t *license_parseFromJSON(cJSON *licenseJSON);

cJSON *license_convertToJSON(license_t *license);

#endif /* _license_H_ */

