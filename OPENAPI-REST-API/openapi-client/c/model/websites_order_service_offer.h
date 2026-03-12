/*
 * websites_order_service_offer.h
 *
 * 
 */

#ifndef _websites_order_service_offer_H_
#define _websites_order_service_offer_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct websites_order_service_offer_t websites_order_service_offer_t;




typedef struct websites_order_service_offer_t {
    char *service_offer_id; // string
    char *service_id; // string
    char *intro_cost; // string
    char *renewal_cost; // string
    char *intro_frequency; // string
    char *renewal_frequency; // string
    char *allow_coupon; // string
    char *service_module; // string
    char *created_at; // string
    char *updated_at; // string
    char *deleted_at; // string

    int _library_owned; // Is the library responsible for freeing this object?
} websites_order_service_offer_t;

__attribute__((deprecated)) websites_order_service_offer_t *websites_order_service_offer_create(
    char *service_offer_id,
    char *service_id,
    char *intro_cost,
    char *renewal_cost,
    char *intro_frequency,
    char *renewal_frequency,
    char *allow_coupon,
    char *service_module,
    char *created_at,
    char *updated_at,
    char *deleted_at
);

void websites_order_service_offer_free(websites_order_service_offer_t *websites_order_service_offer);

websites_order_service_offer_t *websites_order_service_offer_parseFromJSON(cJSON *websites_order_service_offerJSON);

cJSON *websites_order_service_offer_convertToJSON(websites_order_service_offer_t *websites_order_service_offer);

#endif /* _websites_order_service_offer_H_ */

