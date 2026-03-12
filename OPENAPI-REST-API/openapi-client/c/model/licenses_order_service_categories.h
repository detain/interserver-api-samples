/*
 * licenses_order_service_categories.h
 *
 * License service categories
 */

#ifndef _licenses_order_service_categories_H_
#define _licenses_order_service_categories_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct licenses_order_service_categories_t licenses_order_service_categories_t;

#include "licenses_order_service_categories509.h"



typedef struct licenses_order_service_categories_t {
    struct licenses_order_service_categories509_t *licenses_order_service_categories509; //model

    int _library_owned; // Is the library responsible for freeing this object?
} licenses_order_service_categories_t;

__attribute__((deprecated)) licenses_order_service_categories_t *licenses_order_service_categories_create(
    licenses_order_service_categories509_t *licenses_order_service_categories509
);

void licenses_order_service_categories_free(licenses_order_service_categories_t *licenses_order_service_categories);

licenses_order_service_categories_t *licenses_order_service_categories_parseFromJSON(cJSON *licenses_order_service_categoriesJSON);

cJSON *licenses_order_service_categories_convertToJSON(licenses_order_service_categories_t *licenses_order_service_categories);

#endif /* _licenses_order_service_categories_H_ */

