/*
 * mail_billing_details.h
 *
 * Billing information for a mail service including payment status, billing cycle, and cost.
 */

#ifndef _mail_billing_details_H_
#define _mail_billing_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mail_billing_details_t mail_billing_details_t;




typedef struct mail_billing_details_t {
    char *service_last_invoice_date; // string
    char *service_payment_status; // string
    char *service_frequency; // string
    char *next_date; // string
    char *service_next_invoice_date; // string
    char *service_currency; // string
    char *service_currency_symbol; // string
    char *service_cost_info; // string
    list_t *service_extra; //primitive container
    char *service_extra_json; // string

    int _library_owned; // Is the library responsible for freeing this object?
} mail_billing_details_t;

__attribute__((deprecated)) mail_billing_details_t *mail_billing_details_create(
    char *service_last_invoice_date,
    char *service_payment_status,
    char *service_frequency,
    char *next_date,
    char *service_next_invoice_date,
    char *service_currency,
    char *service_currency_symbol,
    char *service_cost_info,
    list_t *service_extra,
    char *service_extra_json
);

void mail_billing_details_free(mail_billing_details_t *mail_billing_details);

mail_billing_details_t *mail_billing_details_parseFromJSON(cJSON *mail_billing_detailsJSON);

cJSON *mail_billing_details_convertToJSON(mail_billing_details_t *mail_billing_details);

#endif /* _mail_billing_details_H_ */

