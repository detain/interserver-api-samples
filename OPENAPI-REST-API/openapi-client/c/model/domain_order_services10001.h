/*
 * domain_order_services10001.h
 *
 * Example schema for a domain service catalog entry.
 */

#ifndef _domain_order_services10001_H_
#define _domain_order_services10001_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_order_services10001_t domain_order_services10001_t;




typedef struct domain_order_services10001_t {
    char *services_id; // string
    char *services_name; // string
    char *services_cost; // string
    char *services_currency; // string
    char *services_category; // string
    char *services_buyable; // string
    char *services_type; // string
    char *services_field1; // string
    char *services_field2; // string
    char *services_module; // string
    char *services_hidden; // string

    int _library_owned; // Is the library responsible for freeing this object?
} domain_order_services10001_t;

__attribute__((deprecated)) domain_order_services10001_t *domain_order_services10001_create(
    char *services_id,
    char *services_name,
    char *services_cost,
    char *services_currency,
    char *services_category,
    char *services_buyable,
    char *services_type,
    char *services_field1,
    char *services_field2,
    char *services_module,
    char *services_hidden
);

void domain_order_services10001_free(domain_order_services10001_t *domain_order_services10001);

domain_order_services10001_t *domain_order_services10001_parseFromJSON(cJSON *domain_order_services10001JSON);

cJSON *domain_order_services10001_convertToJSON(domain_order_services10001_t *domain_order_services10001);

#endif /* _domain_order_services10001_H_ */

