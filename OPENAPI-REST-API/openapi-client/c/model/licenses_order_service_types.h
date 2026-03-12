/*
 * licenses_order_service_types.h
 *
 * Types of license services
 */

#ifndef _licenses_order_service_types_H_
#define _licenses_order_service_types_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct licenses_order_service_types_t licenses_order_service_types_t;

#include "licenses_order_service_types11482.h"



typedef struct licenses_order_service_types_t {
    struct licenses_order_service_types11482_t *licenses_order_service_types11482; //model

    int _library_owned; // Is the library responsible for freeing this object?
} licenses_order_service_types_t;

__attribute__((deprecated)) licenses_order_service_types_t *licenses_order_service_types_create(
    licenses_order_service_types11482_t *licenses_order_service_types11482
);

void licenses_order_service_types_free(licenses_order_service_types_t *licenses_order_service_types);

licenses_order_service_types_t *licenses_order_service_types_parseFromJSON(cJSON *licenses_order_service_typesJSON);

cJSON *licenses_order_service_types_convertToJSON(licenses_order_service_types_t *licenses_order_service_types);

#endif /* _licenses_order_service_types_H_ */

