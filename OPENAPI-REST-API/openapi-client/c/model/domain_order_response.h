/*
 * domain_order_response.h
 *
 * Registrar response metadata returned after a domain order.
 */

#ifndef _domain_order_response_H_
#define _domain_order_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_order_response_t domain_order_response_t;

#include "domain_order_response_attributes.h"



typedef struct domain_order_response_t {
    char *_ops_version; // string
    char *protocol; // string
    char *is_success; // string
    char *action; // string
    struct domain_order_response_attributes_t *attributes; //model
    char *response_text; // string
    char *object; // string
    char *response_code; // string

    int _library_owned; // Is the library responsible for freeing this object?
} domain_order_response_t;

__attribute__((deprecated)) domain_order_response_t *domain_order_response_create(
    char *_ops_version,
    char *protocol,
    char *is_success,
    char *action,
    domain_order_response_attributes_t *attributes,
    char *response_text,
    char *object,
    char *response_code
);

void domain_order_response_free(domain_order_response_t *domain_order_response);

domain_order_response_t *domain_order_response_parseFromJSON(cJSON *domain_order_responseJSON);

cJSON *domain_order_response_convertToJSON(domain_order_response_t *domain_order_response);

#endif /* _domain_order_response_H_ */

