/*
 * billing_payment_method_request.h
 *
 * Payload for updating the default account payment method.
 */

#ifndef _billing_payment_method_request_H_
#define _billing_payment_method_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billing_payment_method_request_t billing_payment_method_request_t;




typedef struct billing_payment_method_request_t {
    char *payment_method; // string
    char *cc_auto; // string

    int _library_owned; // Is the library responsible for freeing this object?
} billing_payment_method_request_t;

__attribute__((deprecated)) billing_payment_method_request_t *billing_payment_method_request_create(
    char *payment_method,
    char *cc_auto
);

void billing_payment_method_request_free(billing_payment_method_request_t *billing_payment_method_request);

billing_payment_method_request_t *billing_payment_method_request_parseFromJSON(cJSON *billing_payment_method_requestJSON);

cJSON *billing_payment_method_request_convertToJSON(billing_payment_method_request_t *billing_payment_method_request);

#endif /* _billing_payment_method_request_H_ */

