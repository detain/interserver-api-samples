/*
 * website_billing_details.h
 *
 * Billing information for a webhosting service including payment status, billing cycle, and cost.
 */

#ifndef _website_billing_details_H_
#define _website_billing_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct website_billing_details_t website_billing_details_t;

#include "object.h"



typedef struct website_billing_details_t {
    char *service_last_invoice_date; // string
    char *service_payment_status; // string
    char *service_frequency; // string
    char *next_date; // string
    char *service_next_invoice_date; // string
    char *service_currency; // string
    char *service_currency_symbol; // string
    char *service_coupon; // string
    char *service_cost_info; // string
    object_t *service_extra; //object
    char *service_extra_json; // string

    int _library_owned; // Is the library responsible for freeing this object?
} website_billing_details_t;

__attribute__((deprecated)) website_billing_details_t *website_billing_details_create(
    char *service_last_invoice_date,
    char *service_payment_status,
    char *service_frequency,
    char *next_date,
    char *service_next_invoice_date,
    char *service_currency,
    char *service_currency_symbol,
    char *service_coupon,
    char *service_cost_info,
    object_t *service_extra,
    char *service_extra_json
);

void website_billing_details_free(website_billing_details_t *website_billing_details);

website_billing_details_t *website_billing_details_parseFromJSON(cJSON *website_billing_detailsJSON);

cJSON *website_billing_details_convertToJSON(website_billing_details_t *website_billing_details);

#endif /* _website_billing_details_H_ */

