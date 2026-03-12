/*
 * scrub_ip_filter_types.h
 *
 * Available scrub filter types for building firewall rules.
 */

#ifndef _scrub_ip_filter_types_H_
#define _scrub_ip_filter_types_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct scrub_ip_filter_types_t scrub_ip_filter_types_t;

#include "scrub_ip_filter_types_filters_value.h"



typedef struct scrub_ip_filter_types_t {
    int success; //boolean
    list_t* filters; //map

    int _library_owned; // Is the library responsible for freeing this object?
} scrub_ip_filter_types_t;

__attribute__((deprecated)) scrub_ip_filter_types_t *scrub_ip_filter_types_create(
    int success,
    list_t* filters
);

void scrub_ip_filter_types_free(scrub_ip_filter_types_t *scrub_ip_filter_types);

scrub_ip_filter_types_t *scrub_ip_filter_types_parseFromJSON(cJSON *scrub_ip_filter_typesJSON);

cJSON *scrub_ip_filter_types_convertToJSON(scrub_ip_filter_types_t *scrub_ip_filter_types);

#endif /* _scrub_ip_filter_types_H_ */

