/*
 * backup_billing_details.h
 *
 * 
 */

#ifndef _backup_billing_details_H_
#define _backup_billing_details_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct backup_billing_details_t backup_billing_details_t;




typedef struct backup_billing_details_t {
    char *service_last_invoice_date; // string
    char *service_payment_status; // string
    char *service_frequency; // string
    char *next_date; // string
    char *service_next_invoice_date; // string
    char *service_currency; // string
    char *service_currency_symbol; // string
    char *service_cost_info; // string
    char *service_extra; // string
    char *service_extra_json; // string

    int _library_owned; // Is the library responsible for freeing this object?
} backup_billing_details_t;

__attribute__((deprecated)) backup_billing_details_t *backup_billing_details_create(
    char *service_last_invoice_date,
    char *service_payment_status,
    char *service_frequency,
    char *next_date,
    char *service_next_invoice_date,
    char *service_currency,
    char *service_currency_symbol,
    char *service_cost_info,
    char *service_extra,
    char *service_extra_json
);

void backup_billing_details_free(backup_billing_details_t *backup_billing_details);

backup_billing_details_t *backup_billing_details_parseFromJSON(cJSON *backup_billing_detailsJSON);

cJSON *backup_billing_details_convertToJSON(backup_billing_details_t *backup_billing_details);

#endif /* _backup_billing_details_H_ */

