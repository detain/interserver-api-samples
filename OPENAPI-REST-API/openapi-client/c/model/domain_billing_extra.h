/*
 * domain_billing_extra.h
 *
 * Extended billing context for a domain including registrar order details and contact info.
 */

#ifndef _domain_billing_extra_H_
#define _domain_billing_extra_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_billing_extra_t domain_billing_extra_t;

#include "domain_order_response.h"
#include "domain_prov_process_pending.h"



typedef struct domain_billing_extra_t {
    struct domain_order_response_t *order; //model
    char *order_id; // string
    char *domain_id; // string
    struct domain_prov_process_pending_t *prov_process_pending; //model
    char *email; // string
    char *firstname; // string
    char *lastname; // string
    char *company; // string
    char *address; // string
    char *address2; // string
    char *address3; // string
    char *city; // string
    char *state; // string
    char *zip; // string
    char *country; // string
    char *phone; // string
    char *fax; // string

    int _library_owned; // Is the library responsible for freeing this object?
} domain_billing_extra_t;

__attribute__((deprecated)) domain_billing_extra_t *domain_billing_extra_create(
    domain_order_response_t *order,
    char *order_id,
    char *domain_id,
    domain_prov_process_pending_t *prov_process_pending,
    char *email,
    char *firstname,
    char *lastname,
    char *company,
    char *address,
    char *address2,
    char *address3,
    char *city,
    char *state,
    char *zip,
    char *country,
    char *phone,
    char *fax
);

void domain_billing_extra_free(domain_billing_extra_t *domain_billing_extra);

domain_billing_extra_t *domain_billing_extra_parseFromJSON(cJSON *domain_billing_extraJSON);

cJSON *domain_billing_extra_convertToJSON(domain_billing_extra_t *domain_billing_extra);

#endif /* _domain_billing_extra_H_ */

