/*
 * backups_order.h
 *
 * Available backup storage packages and pricing for ordering a new backup service.
 */

#ifndef _backups_order_H_
#define _backups_order_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct backups_order_t backups_order_t;

#include "backups_order_package_costs.h"
#include "backups_order_service_types.h"



typedef struct backups_order_t {
    struct backups_order_package_costs_t *package_costs; //model
    struct backups_order_service_types_t *service_types; //model

    int _library_owned; // Is the library responsible for freeing this object?
} backups_order_t;

__attribute__((deprecated)) backups_order_t *backups_order_create(
    backups_order_package_costs_t *package_costs,
    backups_order_service_types_t *service_types
);

void backups_order_free(backups_order_t *backups_order);

backups_order_t *backups_order_parseFromJSON(cJSON *backups_orderJSON);

cJSON *backups_order_convertToJSON(backups_order_t *backups_order);

#endif /* _backups_order_H_ */

