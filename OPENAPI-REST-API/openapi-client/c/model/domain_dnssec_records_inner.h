/*
 * domain_dnssec_records_inner.h
 *
 * 
 */

#ifndef _domain_dnssec_records_inner_H_
#define _domain_dnssec_records_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_dnssec_records_inner_t domain_dnssec_records_inner_t;




typedef struct domain_dnssec_records_inner_t {
    char *algorithm; // string
    char *digest_type; // string
    char *digest; // string
    char *key_tag; // string

    int _library_owned; // Is the library responsible for freeing this object?
} domain_dnssec_records_inner_t;

__attribute__((deprecated)) domain_dnssec_records_inner_t *domain_dnssec_records_inner_create(
    char *algorithm,
    char *digest_type,
    char *digest,
    char *key_tag
);

void domain_dnssec_records_inner_free(domain_dnssec_records_inner_t *domain_dnssec_records_inner);

domain_dnssec_records_inner_t *domain_dnssec_records_inner_parseFromJSON(cJSON *domain_dnssec_records_innerJSON);

cJSON *domain_dnssec_records_inner_convertToJSON(domain_dnssec_records_inner_t *domain_dnssec_records_inner);

#endif /* _domain_dnssec_records_inner_H_ */

