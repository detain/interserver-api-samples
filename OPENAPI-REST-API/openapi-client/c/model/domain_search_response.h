/*
 * domain_search_response.h
 *
 * Lookup and suggestion results returned for a domain search.
 */

#ifndef _domain_search_response_H_
#define _domain_search_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_search_response_t domain_search_response_t;

#include "object.h"



typedef struct domain_search_response_t {
    int *success; //boolean
    char *response_text; // string
    char *response_time; // string
    list_t *lookup; //nonprimitive container
    list_t *suggest; //nonprimitive container
    list_t *tlds; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} domain_search_response_t;

__attribute__((deprecated)) domain_search_response_t *domain_search_response_create(
    int *success,
    char *response_text,
    char *response_time,
    list_t *lookup,
    list_t *suggest,
    list_t *tlds
);

void domain_search_response_free(domain_search_response_t *domain_search_response);

domain_search_response_t *domain_search_response_parseFromJSON(cJSON *domain_search_responseJSON);

cJSON *domain_search_response_convertToJSON(domain_search_response_t *domain_search_response);

#endif /* _domain_search_response_H_ */

