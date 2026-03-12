/*
 * ip_limit_range.h
 *
 * The lower and upper bounds of an ip range.
 */

#ifndef _ip_limit_range_H_
#define _ip_limit_range_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ip_limit_range_t ip_limit_range_t;




typedef struct ip_limit_range_t {
    char *start; // string
    char *end; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ip_limit_range_t;

__attribute__((deprecated)) ip_limit_range_t *ip_limit_range_create(
    char *start,
    char *end
);

void ip_limit_range_free(ip_limit_range_t *ip_limit_range);

ip_limit_range_t *ip_limit_range_parseFromJSON(cJSON *ip_limit_rangeJSON);

cJSON *ip_limit_range_convertToJSON(ip_limit_range_t *ip_limit_range);

#endif /* _ip_limit_range_H_ */

