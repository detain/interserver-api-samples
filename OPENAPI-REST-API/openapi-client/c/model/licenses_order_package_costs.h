/*
 * licenses_order_package_costs.h
 *
 * Costs of license packages
 */

#ifndef _licenses_order_package_costs_H_
#define _licenses_order_package_costs_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct licenses_order_package_costs_t licenses_order_package_costs_t;




typedef struct licenses_order_package_costs_t {
    double *licenses_order_package_costs11468; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} licenses_order_package_costs_t;

__attribute__((deprecated)) licenses_order_package_costs_t *licenses_order_package_costs_create(
    double *licenses_order_package_costs11468
);

void licenses_order_package_costs_free(licenses_order_package_costs_t *licenses_order_package_costs);

licenses_order_package_costs_t *licenses_order_package_costs_parseFromJSON(cJSON *licenses_order_package_costsJSON);

cJSON *licenses_order_package_costs_convertToJSON(licenses_order_package_costs_t *licenses_order_package_costs);

#endif /* _licenses_order_package_costs_H_ */

