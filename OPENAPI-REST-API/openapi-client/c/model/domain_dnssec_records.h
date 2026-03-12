/*
 * domain_dnssec_records.h
 *
 * DNSSEC DS records currently configured for a domain.
 */

#ifndef _domain_dnssec_records_H_
#define _domain_dnssec_records_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_dnssec_records_t domain_dnssec_records_t;

#include "domain_dnssec_records_inner.h"



typedef struct domain_dnssec_records_t {

    int _library_owned; // Is the library responsible for freeing this object?
} domain_dnssec_records_t;

__attribute__((deprecated)) domain_dnssec_records_t *domain_dnssec_records_create(
);

void domain_dnssec_records_free(domain_dnssec_records_t *domain_dnssec_records);

domain_dnssec_records_t *domain_dnssec_records_parseFromJSON(cJSON *domain_dnssec_recordsJSON);

cJSON *domain_dnssec_records_convertToJSON(domain_dnssec_records_t *domain_dnssec_records);

#endif /* _domain_dnssec_records_H_ */

