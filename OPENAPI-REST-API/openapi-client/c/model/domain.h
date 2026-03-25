/*
 * domain.h
 *
 * Full detail view of a domain service including billing, contacts, DNS, and configuration.
 */

#ifndef _domain_H_
#define _domain_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_t domain_t;

#include "backup_extra_info_tables.h"
#include "domain_all_info.h"
#include "domain_billing_details.h"
#include "domain_billing_extra.h"
#include "domain_client_link.h"
#include "domain_contact_details.h"
#include "domain_service_info.h"
#include "domain_service_type.h"



typedef struct domain_t {
    struct domain_service_info_t *service_info; //model
    list_t* service_types; //map
    list_t *client_links; //nonprimitive container
    struct domain_billing_details_t *billing_details; //model
    char *cust_currency; // string
    char *cust_currency_symbol; // string
    struct domain_billing_extra_t *service_extra; //model
    struct backup_extra_info_tables_t *extra_info_tables; //model
    struct domain_service_type_t *service_type; //model
    struct domain_contact_details_t *contact_details; //model
    char *pwarning; // string
    char *transfer_info; // string
    int *errors; //boolean
    list_t *domain_logs; //primitive container
    struct domain_all_info_t *all_info; //model
    char *registrar_status; // string
    char *locked; // string
    char *whois_privacy; // string
    char *auto_renew; // string

    int _library_owned; // Is the library responsible for freeing this object?
} domain_t;

__attribute__((deprecated)) domain_t *domain_create(
    domain_service_info_t *service_info,
    list_t* service_types,
    list_t *client_links,
    domain_billing_details_t *billing_details,
    char *cust_currency,
    char *cust_currency_symbol,
    domain_billing_extra_t *service_extra,
    backup_extra_info_tables_t *extra_info_tables,
    domain_service_type_t *service_type,
    domain_contact_details_t *contact_details,
    char *pwarning,
    char *transfer_info,
    int *errors,
    list_t *domain_logs,
    domain_all_info_t *all_info,
    char *registrar_status,
    char *locked,
    char *whois_privacy,
    char *auto_renew
);

void domain_free(domain_t *domain);

domain_t *domain_parseFromJSON(cJSON *domainJSON);

cJSON *domain_convertToJSON(domain_t *domain);

#endif /* _domain_H_ */

