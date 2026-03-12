/*
 * scrub_ip_filter_types_filters_value.h
 *
 * 
 */

#ifndef _scrub_ip_filter_types_filters_value_H_
#define _scrub_ip_filter_types_filters_value_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct scrub_ip_filter_types_filters_value_t scrub_ip_filter_types_filters_value_t;




typedef struct scrub_ip_filter_types_filters_value_t {
    char *name; // string
    char *desc; // string

    int _library_owned; // Is the library responsible for freeing this object?
} scrub_ip_filter_types_filters_value_t;

__attribute__((deprecated)) scrub_ip_filter_types_filters_value_t *scrub_ip_filter_types_filters_value_create(
    char *name,
    char *desc
);

void scrub_ip_filter_types_filters_value_free(scrub_ip_filter_types_filters_value_t *scrub_ip_filter_types_filters_value);

scrub_ip_filter_types_filters_value_t *scrub_ip_filter_types_filters_value_parseFromJSON(cJSON *scrub_ip_filter_types_filters_valueJSON);

cJSON *scrub_ip_filter_types_filters_value_convertToJSON(scrub_ip_filter_types_filters_value_t *scrub_ip_filter_types_filters_value);

#endif /* _scrub_ip_filter_types_filters_value_H_ */

