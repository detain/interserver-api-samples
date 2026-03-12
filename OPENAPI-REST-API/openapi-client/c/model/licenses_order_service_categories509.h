/*
 * licenses_order_service_categories509.h
 *
 * 
 */

#ifndef _licenses_order_service_categories509_H_
#define _licenses_order_service_categories509_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct licenses_order_service_categories509_t licenses_order_service_categories509_t;




typedef struct licenses_order_service_categories509_t {
    char *category_id; // string
    char *category_name; // string
    char *category_tag; // string
    char *category_module; // string

    int _library_owned; // Is the library responsible for freeing this object?
} licenses_order_service_categories509_t;

__attribute__((deprecated)) licenses_order_service_categories509_t *licenses_order_service_categories509_create(
    char *category_id,
    char *category_name,
    char *category_tag,
    char *category_module
);

void licenses_order_service_categories509_free(licenses_order_service_categories509_t *licenses_order_service_categories509);

licenses_order_service_categories509_t *licenses_order_service_categories509_parseFromJSON(cJSON *licenses_order_service_categories509JSON);

cJSON *licenses_order_service_categories509_convertToJSON(licenses_order_service_categories509_t *licenses_order_service_categories509);

#endif /* _licenses_order_service_categories509_H_ */

