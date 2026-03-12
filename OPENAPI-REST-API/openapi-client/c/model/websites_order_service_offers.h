/*
 * websites_order_service_offers.h
 *
 * The service offers data.
 */

#ifndef _websites_order_service_offers_H_
#define _websites_order_service_offers_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct websites_order_service_offers_t websites_order_service_offers_t;

#include "websites_order_service_offer.h"



typedef struct websites_order_service_offers_t {
    list_t *_1026; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} websites_order_service_offers_t;

__attribute__((deprecated)) websites_order_service_offers_t *websites_order_service_offers_create(
    list_t *_1026
);

void websites_order_service_offers_free(websites_order_service_offers_t *websites_order_service_offers);

websites_order_service_offers_t *websites_order_service_offers_parseFromJSON(cJSON *websites_order_service_offersJSON);

cJSON *websites_order_service_offers_convertToJSON(websites_order_service_offers_t *websites_order_service_offers);

#endif /* _websites_order_service_offers_H_ */

