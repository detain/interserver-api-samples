/*
 * domain_order.h
 *
 * Ordering metadata for domain registration and transfers.
 */

#ifndef _domain_order_H_
#define _domain_order_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_order_t domain_order_t;

#include "domain_order_services.h"
#include "object.h"



typedef struct domain_order_t {
    char *whois_privacy_cost; // string
    struct domain_order_services_t *services; //model
    object_t *tld_services; //object

    int _library_owned; // Is the library responsible for freeing this object?
} domain_order_t;

__attribute__((deprecated)) domain_order_t *domain_order_create(
    char *whois_privacy_cost,
    domain_order_services_t *services,
    object_t *tld_services
);

void domain_order_free(domain_order_t *domain_order);

domain_order_t *domain_order_parseFromJSON(cJSON *domain_orderJSON);

cJSON *domain_order_convertToJSON(domain_order_t *domain_order);

#endif /* _domain_order_H_ */

