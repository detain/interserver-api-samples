/*
 * domain_order_services.h
 *
 * Available domain service catalog entries keyed by service ID.
 */

#ifndef _domain_order_services_H_
#define _domain_order_services_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_order_services_t domain_order_services_t;

#include "domain_order_services10001.h"



typedef struct domain_order_services_t {
    struct domain_order_services10001_t *domain_order_services10001; //model

    int _library_owned; // Is the library responsible for freeing this object?
} domain_order_services_t;

__attribute__((deprecated)) domain_order_services_t *domain_order_services_create(
    domain_order_services10001_t *domain_order_services10001
);

void domain_order_services_free(domain_order_services_t *domain_order_services);

domain_order_services_t *domain_order_services_parseFromJSON(cJSON *domain_order_servicesJSON);

cJSON *domain_order_services_convertToJSON(domain_order_services_t *domain_order_services);

#endif /* _domain_order_services_H_ */

