/*
 * region.h
 *
 * A datacenter region where a server can be provisioned.
 */

#ifndef _region_H_
#define _region_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct region_t region_t;




typedef struct region_t {
    int region_id; //numeric
    char *region_name; // string

    int _library_owned; // Is the library responsible for freeing this object?
} region_t;

__attribute__((deprecated)) region_t *region_create(
    int region_id,
    char *region_name
);

void region_free(region_t *region);

region_t *region_parseFromJSON(cJSON *regionJSON);

cJSON *region_convertToJSON(region_t *region);

#endif /* _region_H_ */

