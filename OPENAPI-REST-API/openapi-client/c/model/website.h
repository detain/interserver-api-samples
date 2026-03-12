/*
 * website.h
 *
 * Full detail view of a webhosting service including billing, service configuration, and panel access links.
 */

#ifndef _website_H_
#define _website_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct website_t website_t;

#include "object.h"
#include "website_billing_details.h"
#include "website_client_link.h"
#include "website_extra_info_tables.h"
#include "website_service_info.h"
#include "website_service_master.h"



typedef struct website_t {
    struct website_service_info_t *service_info; //model
    list_t *client_links; //nonprimitive container
    struct website_billing_details_t *billing_details; //model
    char *cust_currency; // string
    char *cust_currency_symbol; // string
    struct website_service_master_t *service_master; //model
    char *package; // string
    list_t *service_extra; //nonprimitive container
    struct website_extra_info_tables_t *extra_info_tables; //model

    int _library_owned; // Is the library responsible for freeing this object?
} website_t;

__attribute__((deprecated)) website_t *website_create(
    website_service_info_t *service_info,
    list_t *client_links,
    website_billing_details_t *billing_details,
    char *cust_currency,
    char *cust_currency_symbol,
    website_service_master_t *service_master,
    char *package,
    list_t *service_extra,
    website_extra_info_tables_t *extra_info_tables
);

void website_free(website_t *website);

website_t *website_parseFromJSON(cJSON *websiteJSON);

cJSON *website_convertToJSON(website_t *website);

#endif /* _website_H_ */

