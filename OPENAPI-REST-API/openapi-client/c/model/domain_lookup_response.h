/*
 * domain_lookup_response.h
 *
 * Availability, pricing, and order-field metadata for a domain lookup.
 */

#ifndef _domain_lookup_response_H_
#define _domain_lookup_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_lookup_response_t domain_lookup_response_t;

#include "object.h"



typedef struct domain_lookup_response_t {
    int *available; //boolean
    int *premium; //boolean
    int *website; //boolean
    int *domain_service; //boolean
    object_t *service; //object
    int *whois_privacy; //boolean
    char *_new; // string
    char *renewal; // string
    char *transfer; // string
    object_t *fields; //object
    object_t *currencies; //object

    int _library_owned; // Is the library responsible for freeing this object?
} domain_lookup_response_t;

__attribute__((deprecated)) domain_lookup_response_t *domain_lookup_response_create(
    int *available,
    int *premium,
    int *website,
    int *domain_service,
    object_t *service,
    int *whois_privacy,
    char *_new,
    char *renewal,
    char *transfer,
    object_t *fields,
    object_t *currencies
);

void domain_lookup_response_free(domain_lookup_response_t *domain_lookup_response);

domain_lookup_response_t *domain_lookup_response_parseFromJSON(cJSON *domain_lookup_responseJSON);

cJSON *domain_lookup_response_convertToJSON(domain_lookup_response_t *domain_lookup_response);

#endif /* _domain_lookup_response_H_ */

