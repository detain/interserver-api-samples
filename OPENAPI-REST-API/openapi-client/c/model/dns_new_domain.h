/*
 * dns_new_domain.h
 *
 * The request for a new domain to be managed by the dns servers.
 */

#ifndef _dns_new_domain_H_
#define _dns_new_domain_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dns_new_domain_t dns_new_domain_t;




typedef struct dns_new_domain_t {
    char *domain; // string
    char *ip; // string

    int _library_owned; // Is the library responsible for freeing this object?
} dns_new_domain_t;

__attribute__((deprecated)) dns_new_domain_t *dns_new_domain_create(
    char *domain,
    char *ip
);

void dns_new_domain_free(dns_new_domain_t *dns_new_domain);

dns_new_domain_t *dns_new_domain_parseFromJSON(cJSON *dns_new_domainJSON);

cJSON *dns_new_domain_convertToJSON(dns_new_domain_t *dns_new_domain);

#endif /* _dns_new_domain_H_ */

