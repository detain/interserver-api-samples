/*
 * domain_order_tld_services.h
 *
 * Example map of TLDs to service IDs for domain ordering.
 */

#ifndef _domain_order_tld_services_H_
#define _domain_order_tld_services_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_order_tld_services_t domain_order_tld_services_t;




typedef struct domain_order_tld_services_t {
    int _asia; //numeric
    int _be; //numeric
    int _biz; //numeric
    int _ca; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} domain_order_tld_services_t;

__attribute__((deprecated)) domain_order_tld_services_t *domain_order_tld_services_create(
    int _asia,
    int _be,
    int _biz,
    int _ca
);

void domain_order_tld_services_free(domain_order_tld_services_t *domain_order_tld_services);

domain_order_tld_services_t *domain_order_tld_services_parseFromJSON(cJSON *domain_order_tld_servicesJSON);

cJSON *domain_order_tld_services_convertToJSON(domain_order_tld_services_t *domain_order_tld_services);

#endif /* _domain_order_tld_services_H_ */

