/*
 * affiliate_payment_setup.h
 *
 * Affiliate Payment Setup.  Here you can set if you want the payments to go to &#x60;prepay&#x60; or &#x60;paypal&#x60; and the PayPal email address.
 */

#ifndef _affiliate_payment_setup_H_
#define _affiliate_payment_setup_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct affiliate_payment_setup_t affiliate_payment_setup_t;




typedef struct affiliate_payment_setup_t {
    char *affiliate_paypal; // string
    char *affiliate_payment_method; // string

    int _library_owned; // Is the library responsible for freeing this object?
} affiliate_payment_setup_t;

__attribute__((deprecated)) affiliate_payment_setup_t *affiliate_payment_setup_create(
    char *affiliate_paypal,
    char *affiliate_payment_method
);

void affiliate_payment_setup_free(affiliate_payment_setup_t *affiliate_payment_setup);

affiliate_payment_setup_t *affiliate_payment_setup_parseFromJSON(cJSON *affiliate_payment_setupJSON);

cJSON *affiliate_payment_setup_convertToJSON(affiliate_payment_setup_t *affiliate_payment_setup);

#endif /* _affiliate_payment_setup_H_ */

