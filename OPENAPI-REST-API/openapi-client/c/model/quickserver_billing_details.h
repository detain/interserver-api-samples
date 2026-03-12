/*
 * quickserver_billing_details.h
 *
 * Billing information for a QuickServer service including payment status, billing cycle, and cost.
 */

#ifndef _quickserver_billing_details_H_
#define _quickserver_billing_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct quickserver_billing_details_t quickserver_billing_details_t;

#include "quickserver_service_extra.h"



typedef struct quickserver_billing_details_t {
    char *service_last_invoice_date; // string
    char *service_payment_status; // string
    char *service_frequency; // string
    char *next_date; // string
    char *service_next_invoice_date; // string
    char *service_currency; // string
    char *service_currency_symbol; // string
    char *service_cost_info; // string
    struct quickserver_service_extra_t *service_extra; //model
    char *service_extra_json; // string

    int _library_owned; // Is the library responsible for freeing this object?
} quickserver_billing_details_t;

__attribute__((deprecated)) quickserver_billing_details_t *quickserver_billing_details_create(
    char *service_last_invoice_date,
    char *service_payment_status,
    char *service_frequency,
    char *next_date,
    char *service_next_invoice_date,
    char *service_currency,
    char *service_currency_symbol,
    char *service_cost_info,
    quickserver_service_extra_t *service_extra,
    char *service_extra_json
);

void quickserver_billing_details_free(quickserver_billing_details_t *quickserver_billing_details);

quickserver_billing_details_t *quickserver_billing_details_parseFromJSON(cJSON *quickserver_billing_detailsJSON);

cJSON *quickserver_billing_details_convertToJSON(quickserver_billing_details_t *quickserver_billing_details);

#endif /* _quickserver_billing_details_H_ */

