/*
 * billing_verify_cc_request.h
 *
 * Payload for verifying a credit card through the verification flow.
 */

#ifndef _billing_verify_cc_request_H_
#define _billing_verify_cc_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billing_verify_cc_request_t billing_verify_cc_request_t;




typedef struct billing_verify_cc_request_t {
    int *idx; //numeric
    char *cc_ccv2; // string
    char *cc_amount1; // string
    char *cc_amount2; // string
    int *terms; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} billing_verify_cc_request_t;

__attribute__((deprecated)) billing_verify_cc_request_t *billing_verify_cc_request_create(
    int *idx,
    char *cc_ccv2,
    char *cc_amount1,
    char *cc_amount2,
    int *terms
);

void billing_verify_cc_request_free(billing_verify_cc_request_t *billing_verify_cc_request);

billing_verify_cc_request_t *billing_verify_cc_request_parseFromJSON(cJSON *billing_verify_cc_requestJSON);

cJSON *billing_verify_cc_request_convertToJSON(billing_verify_cc_request_t *billing_verify_cc_request);

#endif /* _billing_verify_cc_request_H_ */

