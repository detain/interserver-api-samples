/*
 * vps_order_location_names.h
 *
 * Location Names
 */

#ifndef _vps_order_location_names_H_
#define _vps_order_location_names_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_order_location_names_t vps_order_location_names_t;




typedef struct vps_order_location_names_t {
    char *_3; // string

    int _library_owned; // Is the library responsible for freeing this object?
} vps_order_location_names_t;

__attribute__((deprecated)) vps_order_location_names_t *vps_order_location_names_create(
    char *_3
);

void vps_order_location_names_free(vps_order_location_names_t *vps_order_location_names);

vps_order_location_names_t *vps_order_location_names_parseFromJSON(cJSON *vps_order_location_namesJSON);

cJSON *vps_order_location_names_convertToJSON(vps_order_location_names_t *vps_order_location_names);

#endif /* _vps_order_location_names_H_ */

