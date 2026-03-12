/*
 * domain_billing_details.h
 *
 * Billing information for a domain service including payment status, dates, and cost.
 */

#ifndef _domain_billing_details_H_
#define _domain_billing_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_billing_details_t domain_billing_details_t;

#include "domain_billing_extra.h"



typedef struct domain_billing_details_t {
    char *service_last_invoice_date; // string
    char *service_payment_status; // string
    char *service_frequency; // string
    char *next_date; // string
    char *service_next_invoice_date; // string
    char *service_currency; // string
    char *service_currency_symbol; // string
    char *service_cost_info; // string
    struct domain_billing_extra_t *service_extra; //model
    char *service_extra_json; // string

    int _library_owned; // Is the library responsible for freeing this object?
} domain_billing_details_t;

__attribute__((deprecated)) domain_billing_details_t *domain_billing_details_create(
    char *service_last_invoice_date,
    char *service_payment_status,
    char *service_frequency,
    char *next_date,
    char *service_next_invoice_date,
    char *service_currency,
    char *service_currency_symbol,
    char *service_cost_info,
    domain_billing_extra_t *service_extra,
    char *service_extra_json
);

void domain_billing_details_free(domain_billing_details_t *domain_billing_details);

domain_billing_details_t *domain_billing_details_parseFromJSON(cJSON *domain_billing_detailsJSON);

cJSON *domain_billing_details_convertToJSON(domain_billing_details_t *domain_billing_details);

#endif /* _domain_billing_details_H_ */

