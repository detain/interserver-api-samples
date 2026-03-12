/*
 * domain_nameserver_put_request.h
 *
 * Payload for replacing the assigned nameserver list for a domain.
 */

#ifndef _domain_nameserver_put_request_H_
#define _domain_nameserver_put_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_nameserver_put_request_t domain_nameserver_put_request_t;




typedef struct domain_nameserver_put_request_t {
    list_t *nameserver; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} domain_nameserver_put_request_t;

__attribute__((deprecated)) domain_nameserver_put_request_t *domain_nameserver_put_request_create(
    list_t *nameserver
);

void domain_nameserver_put_request_free(domain_nameserver_put_request_t *domain_nameserver_put_request);

domain_nameserver_put_request_t *domain_nameserver_put_request_parseFromJSON(cJSON *domain_nameserver_put_requestJSON);

cJSON *domain_nameserver_put_request_convertToJSON(domain_nameserver_put_request_t *domain_nameserver_put_request);

#endif /* _domain_nameserver_put_request_H_ */

