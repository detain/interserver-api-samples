/*
 * websites_order.h
 *
 * Schema for the WebsitesOrder object
 */

#ifndef _websites_order_H_
#define _websites_order_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct websites_order_t websites_order_t;

#include "websites_order_json_service_offers.h"
#include "websites_order_json_services.h"
#include "websites_order_packages.h"
#include "websites_order_packges.h"
#include "websites_order_service_offers.h"
#include "websites_order_service_types.h"



typedef struct websites_order_t {
    char *step; // string
    char *website; // string
    int period; //numeric
    int service_offer_id; //numeric
    struct websites_order_packages_t *packages; //model
    int enable_domain_registering; //boolean
    struct websites_order_json_services_t *json_services; //model
    struct websites_order_json_service_offers_t *json_service_offers; //model
    struct websites_order_service_types_t *service_types; //model
    struct websites_order_service_offers_t *service_offers; //model
    struct websites_order_packges_t *packges; //model

    int _library_owned; // Is the library responsible for freeing this object?
} websites_order_t;

__attribute__((deprecated)) websites_order_t *websites_order_create(
    char *step,
    char *website,
    int period,
    int service_offer_id,
    websites_order_packages_t *packages,
    int enable_domain_registering,
    websites_order_json_services_t *json_services,
    websites_order_json_service_offers_t *json_service_offers,
    websites_order_service_types_t *service_types,
    websites_order_service_offers_t *service_offers,
    websites_order_packges_t *packges
);

void websites_order_free(websites_order_t *websites_order);

websites_order_t *websites_order_parseFromJSON(cJSON *websites_orderJSON);

cJSON *websites_order_convertToJSON(websites_order_t *websites_order);

#endif /* _websites_order_H_ */

