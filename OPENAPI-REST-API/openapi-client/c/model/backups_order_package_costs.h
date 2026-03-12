/*
 * backups_order_package_costs.h
 *
 * 
 */

#ifndef _backups_order_package_costs_H_
#define _backups_order_package_costs_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct backups_order_package_costs_t backups_order_package_costs_t;




typedef struct backups_order_package_costs_t {
    int _11006; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} backups_order_package_costs_t;

__attribute__((deprecated)) backups_order_package_costs_t *backups_order_package_costs_create(
    int _11006
);

void backups_order_package_costs_free(backups_order_package_costs_t *backups_order_package_costs);

backups_order_package_costs_t *backups_order_package_costs_parseFromJSON(cJSON *backups_order_package_costsJSON);

cJSON *backups_order_package_costs_convertToJSON(backups_order_package_costs_t *backups_order_package_costs);

#endif /* _backups_order_package_costs_H_ */

