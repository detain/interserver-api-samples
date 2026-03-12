/*
 * billing_add_cc_request.h
 *
 * Request to add a new creditcard into the system.
 */

#ifndef _billing_add_cc_request_H_
#define _billing_add_cc_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billing_add_cc_request_t billing_add_cc_request_t;




typedef struct billing_add_cc_request_t {
    char *name; // string
    char *address; // string
    char *city; // string
    char *state; // string
    char *country; // string
    char *zip; // string
    char *cc; // string
    char *cc_exp; // string
    char *cc_ccv2; // string

    int _library_owned; // Is the library responsible for freeing this object?
} billing_add_cc_request_t;

__attribute__((deprecated)) billing_add_cc_request_t *billing_add_cc_request_create(
    char *name,
    char *address,
    char *city,
    char *state,
    char *country,
    char *zip,
    char *cc,
    char *cc_exp,
    char *cc_ccv2
);

void billing_add_cc_request_free(billing_add_cc_request_t *billing_add_cc_request);

billing_add_cc_request_t *billing_add_cc_request_parseFromJSON(cJSON *billing_add_cc_requestJSON);

cJSON *billing_add_cc_request_convertToJSON(billing_add_cc_request_t *billing_add_cc_request);

#endif /* _billing_add_cc_request_H_ */

