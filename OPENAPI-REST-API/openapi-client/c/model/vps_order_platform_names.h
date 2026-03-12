/*
 * vps_order_platform_names.h
 *
 * Platform Names
 */

#ifndef _vps_order_platform_names_H_
#define _vps_order_platform_names_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_order_platform_names_t vps_order_platform_names_t;




typedef struct vps_order_platform_names_t {
    char *kvm; // string
    char *kvmstorage; // string
    char *hyperv; // string

    int _library_owned; // Is the library responsible for freeing this object?
} vps_order_platform_names_t;

__attribute__((deprecated)) vps_order_platform_names_t *vps_order_platform_names_create(
    char *kvm,
    char *kvmstorage,
    char *hyperv
);

void vps_order_platform_names_free(vps_order_platform_names_t *vps_order_platform_names);

vps_order_platform_names_t *vps_order_platform_names_parseFromJSON(cJSON *vps_order_platform_namesJSON);

cJSON *vps_order_platform_names_convertToJSON(vps_order_platform_names_t *vps_order_platform_names);

#endif /* _vps_order_platform_names_H_ */

