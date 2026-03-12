/*
 * domain_nameserver_post_request.h
 *
 * Payload for adding a registered nameserver (glue record).
 */

#ifndef _domain_nameserver_post_request_H_
#define _domain_nameserver_post_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_nameserver_post_request_t domain_nameserver_post_request_t;




typedef struct domain_nameserver_post_request_t {
    char *name; // string
    char *ip_address; // string

    int _library_owned; // Is the library responsible for freeing this object?
} domain_nameserver_post_request_t;

__attribute__((deprecated)) domain_nameserver_post_request_t *domain_nameserver_post_request_create(
    char *name,
    char *ip_address
);

void domain_nameserver_post_request_free(domain_nameserver_post_request_t *domain_nameserver_post_request);

domain_nameserver_post_request_t *domain_nameserver_post_request_parseFromJSON(cJSON *domain_nameserver_post_requestJSON);

cJSON *domain_nameserver_post_request_convertToJSON(domain_nameserver_post_request_t *domain_nameserver_post_request);

#endif /* _domain_nameserver_post_request_H_ */

