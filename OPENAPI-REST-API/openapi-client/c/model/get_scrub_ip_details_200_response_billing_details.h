/*
 * get_scrub_ip_details_200_response_billing_details.h
 *
 * 
 */

#ifndef _get_scrub_ip_details_200_response_billing_details_H_
#define _get_scrub_ip_details_200_response_billing_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct get_scrub_ip_details_200_response_billing_details_t get_scrub_ip_details_200_response_billing_details_t;




typedef struct get_scrub_ip_details_200_response_billing_details_t {
    char *service_last_invoice_date; // string
    char *service_payment_status; // string
    char *service_frequency; // string
    char *next_date; // string
    char *service_next_invoice_date; // string
    char *service_currency; // string
    char *service_currency_symbol; // string
    char *service_cost_info; // string

    int _library_owned; // Is the library responsible for freeing this object?
} get_scrub_ip_details_200_response_billing_details_t;

__attribute__((deprecated)) get_scrub_ip_details_200_response_billing_details_t *get_scrub_ip_details_200_response_billing_details_create(
    char *service_last_invoice_date,
    char *service_payment_status,
    char *service_frequency,
    char *next_date,
    char *service_next_invoice_date,
    char *service_currency,
    char *service_currency_symbol,
    char *service_cost_info
);

void get_scrub_ip_details_200_response_billing_details_free(get_scrub_ip_details_200_response_billing_details_t *get_scrub_ip_details_200_response_billing_details);

get_scrub_ip_details_200_response_billing_details_t *get_scrub_ip_details_200_response_billing_details_parseFromJSON(cJSON *get_scrub_ip_details_200_response_billing_detailsJSON);

cJSON *get_scrub_ip_details_200_response_billing_details_convertToJSON(get_scrub_ip_details_200_response_billing_details_t *get_scrub_ip_details_200_response_billing_details);

#endif /* _get_scrub_ip_details_200_response_billing_details_H_ */

