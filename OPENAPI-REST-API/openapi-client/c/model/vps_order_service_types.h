/*
 * vps_order_service_types.h
 *
 * Service Types
 */

#ifndef _vps_order_service_types_H_
#define _vps_order_service_types_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_order_service_types_t vps_order_service_types_t;

#include "vps_order_service_types_32.h"



typedef struct vps_order_service_types_t {
    struct vps_order_service_types_32_t *_32; //model

    int _library_owned; // Is the library responsible for freeing this object?
} vps_order_service_types_t;

__attribute__((deprecated)) vps_order_service_types_t *vps_order_service_types_create(
    vps_order_service_types_32_t *_32
);

void vps_order_service_types_free(vps_order_service_types_t *vps_order_service_types);

vps_order_service_types_t *vps_order_service_types_parseFromJSON(cJSON *vps_order_service_typesJSON);

cJSON *vps_order_service_types_convertToJSON(vps_order_service_types_t *vps_order_service_types);

#endif /* _vps_order_service_types_H_ */

