/*
 * licenses_order.h
 *
 * Available license packages and pricing for ordering a new software license.
 */

#ifndef _licenses_order_H_
#define _licenses_order_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct licenses_order_t licenses_order_t;

#include "licenses_order_package_costs.h"
#include "licenses_order_service_categories.h"
#include "licenses_order_service_types.h"



typedef struct licenses_order_t {
    struct licenses_order_service_categories_t *service_categories; //model
    struct licenses_order_package_costs_t *package_costs; //model
    struct licenses_order_service_types_t *service_types; //model

    int _library_owned; // Is the library responsible for freeing this object?
} licenses_order_t;

__attribute__((deprecated)) licenses_order_t *licenses_order_create(
    licenses_order_service_categories_t *service_categories,
    licenses_order_package_costs_t *package_costs,
    licenses_order_service_types_t *service_types
);

void licenses_order_free(licenses_order_t *licenses_order);

licenses_order_t *licenses_order_parseFromJSON(cJSON *licenses_orderJSON);

cJSON *licenses_order_convertToJSON(licenses_order_t *licenses_order);

#endif /* _licenses_order_H_ */

