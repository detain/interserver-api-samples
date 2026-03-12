/*
 * vps_order_service_types_32.h
 *
 * 
 */

#ifndef _vps_order_service_types_32_H_
#define _vps_order_service_types_32_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_order_service_types_32_t vps_order_service_types_32_t;




typedef struct vps_order_service_types_32_t {
    char *services_id; // string
    char *services_name; // string
    char *services_cost; // string
    char *services_category; // string
    char *services_buyable; // string
    char *services_type; // string
    char *services_field1; // string
    char *services_field2; // string
    char *services_module; // string

    int _library_owned; // Is the library responsible for freeing this object?
} vps_order_service_types_32_t;

__attribute__((deprecated)) vps_order_service_types_32_t *vps_order_service_types_32_create(
    char *services_id,
    char *services_name,
    char *services_cost,
    char *services_category,
    char *services_buyable,
    char *services_type,
    char *services_field1,
    char *services_field2,
    char *services_module
);

void vps_order_service_types_32_free(vps_order_service_types_32_t *vps_order_service_types_32);

vps_order_service_types_32_t *vps_order_service_types_32_parseFromJSON(cJSON *vps_order_service_types_32JSON);

cJSON *vps_order_service_types_32_convertToJSON(vps_order_service_types_32_t *vps_order_service_types_32);

#endif /* _vps_order_service_types_32_H_ */

