/*
 * billing_prepay_request.h
 *
 * Request payload for creating a new prepay balance.
 */

#ifndef _billing_prepay_request_H_
#define _billing_prepay_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billing_prepay_request_t billing_prepay_request_t;




typedef struct billing_prepay_request_t {
    char *module; // string
    double *amount; //numeric
    char *automatic_use; // string

    int _library_owned; // Is the library responsible for freeing this object?
} billing_prepay_request_t;

__attribute__((deprecated)) billing_prepay_request_t *billing_prepay_request_create(
    char *module,
    double *amount,
    char *automatic_use
);

void billing_prepay_request_free(billing_prepay_request_t *billing_prepay_request);

billing_prepay_request_t *billing_prepay_request_parseFromJSON(cJSON *billing_prepay_requestJSON);

cJSON *billing_prepay_request_convertToJSON(billing_prepay_request_t *billing_prepay_request);

#endif /* _billing_prepay_request_H_ */

