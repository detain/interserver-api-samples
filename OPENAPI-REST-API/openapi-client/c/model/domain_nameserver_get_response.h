/*
 * domain_nameserver_get_response.h
 *
 * List of registered nameserver hosts with glue record metadata.
 */

#ifndef _domain_nameserver_get_response_H_
#define _domain_nameserver_get_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_nameserver_get_response_t domain_nameserver_get_response_t;

#include "domain_nameserver_get_response_inner.h"



typedef struct domain_nameserver_get_response_t {

    int _library_owned; // Is the library responsible for freeing this object?
} domain_nameserver_get_response_t;

__attribute__((deprecated)) domain_nameserver_get_response_t *domain_nameserver_get_response_create(
);

void domain_nameserver_get_response_free(domain_nameserver_get_response_t *domain_nameserver_get_response);

domain_nameserver_get_response_t *domain_nameserver_get_response_parseFromJSON(cJSON *domain_nameserver_get_responseJSON);

cJSON *domain_nameserver_get_response_convertToJSON(domain_nameserver_get_response_t *domain_nameserver_get_response);

#endif /* _domain_nameserver_get_response_H_ */

