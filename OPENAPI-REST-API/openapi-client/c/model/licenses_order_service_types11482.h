/*
 * licenses_order_service_types11482.h
 *
 * 
 */

#ifndef _licenses_order_service_types11482_H_
#define _licenses_order_service_types11482_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct licenses_order_service_types11482_t licenses_order_service_types11482_t;




typedef struct licenses_order_service_types11482_t {
    char *services_id; // string
    char *services_name; // string
    char *services_cost; // string
    char *services_category; // string
    char *services_buyable; // string
    char *services_type; // string
    char *services_field1; // string
    char *services_field2; // string
    char *services_module; // string

    int _library_owned; // Is the library responsible for freeing this object?
} licenses_order_service_types11482_t;

__attribute__((deprecated)) licenses_order_service_types11482_t *licenses_order_service_types11482_create(
    char *services_id,
    char *services_name,
    char *services_cost,
    char *services_category,
    char *services_buyable,
    char *services_type,
    char *services_field1,
    char *services_field2,
    char *services_module
);

void licenses_order_service_types11482_free(licenses_order_service_types11482_t *licenses_order_service_types11482);

licenses_order_service_types11482_t *licenses_order_service_types11482_parseFromJSON(cJSON *licenses_order_service_types11482JSON);

cJSON *licenses_order_service_types11482_convertToJSON(licenses_order_service_types11482_t *licenses_order_service_types11482);

#endif /* _licenses_order_service_types11482_H_ */

