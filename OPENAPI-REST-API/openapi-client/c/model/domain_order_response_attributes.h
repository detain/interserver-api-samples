/*
 * domain_order_response_attributes.h
 *
 * 
 */

#ifndef _domain_order_response_attributes_H_
#define _domain_order_response_attributes_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_order_response_attributes_t domain_order_response_attributes_t;




typedef struct domain_order_response_attributes_t {
    char *id; // string
    char *admin_email; // string

    int _library_owned; // Is the library responsible for freeing this object?
} domain_order_response_attributes_t;

__attribute__((deprecated)) domain_order_response_attributes_t *domain_order_response_attributes_create(
    char *id,
    char *admin_email
);

void domain_order_response_attributes_free(domain_order_response_attributes_t *domain_order_response_attributes);

domain_order_response_attributes_t *domain_order_response_attributes_parseFromJSON(cJSON *domain_order_response_attributesJSON);

cJSON *domain_order_response_attributes_convertToJSON(domain_order_response_attributes_t *domain_order_response_attributes);

#endif /* _domain_order_response_attributes_H_ */

