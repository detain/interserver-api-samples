/*
 * create_filter.h
 *
 * Create firewall rule for your ip
 */

#ifndef _create_filter_H_
#define _create_filter_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct create_filter_t create_filter_t;




typedef struct create_filter_t {
    char *filter_type; // string
    int port; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} create_filter_t;

__attribute__((deprecated)) create_filter_t *create_filter_create(
    char *filter_type,
    int port
);

void create_filter_free(create_filter_t *create_filter);

create_filter_t *create_filter_parseFromJSON(cJSON *create_filterJSON);

cJSON *create_filter_convertToJSON(create_filter_t *create_filter);

#endif /* _create_filter_H_ */

