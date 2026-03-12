/*
 * vps_order_package_costs.h
 *
 * Package Costs
 */

#ifndef _vps_order_package_costs_H_
#define _vps_order_package_costs_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_order_package_costs_t vps_order_package_costs_t;




typedef struct vps_order_package_costs_t {
    double _57; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} vps_order_package_costs_t;

__attribute__((deprecated)) vps_order_package_costs_t *vps_order_package_costs_create(
    double _57
);

void vps_order_package_costs_free(vps_order_package_costs_t *vps_order_package_costs);

vps_order_package_costs_t *vps_order_package_costs_parseFromJSON(cJSON *vps_order_package_costsJSON);

cJSON *vps_order_package_costs_convertToJSON(vps_order_package_costs_t *vps_order_package_costs);

#endif /* _vps_order_package_costs_H_ */

