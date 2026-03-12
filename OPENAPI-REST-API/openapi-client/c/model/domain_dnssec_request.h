/*
 * domain_dnssec_request.h
 *
 * Request payload for adding DNSSEC DS records to a domain.
 */

#ifndef _domain_dnssec_request_H_
#define _domain_dnssec_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_dnssec_request_t domain_dnssec_request_t;




typedef struct domain_dnssec_request_t {
    list_t *algorithm; //primitive container
    list_t *digest_type; //primitive container
    list_t *digest; //primitive container
    list_t *key_tag; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} domain_dnssec_request_t;

__attribute__((deprecated)) domain_dnssec_request_t *domain_dnssec_request_create(
    list_t *algorithm,
    list_t *digest_type,
    list_t *digest,
    list_t *key_tag
);

void domain_dnssec_request_free(domain_dnssec_request_t *domain_dnssec_request);

domain_dnssec_request_t *domain_dnssec_request_parseFromJSON(cJSON *domain_dnssec_requestJSON);

cJSON *domain_dnssec_request_convertToJSON(domain_dnssec_request_t *domain_dnssec_request);

#endif /* _domain_dnssec_request_H_ */

