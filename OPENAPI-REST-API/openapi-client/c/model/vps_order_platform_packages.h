/*
 * vps_order_platform_packages.h
 *
 * Platform Packages
 */

#ifndef _vps_order_platform_packages_H_
#define _vps_order_platform_packages_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_order_platform_packages_t vps_order_platform_packages_t;




typedef struct vps_order_platform_packages_t {
    double *kvm; //numeric
    double *kvmstorage; //numeric
    double *hyperv; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} vps_order_platform_packages_t;

__attribute__((deprecated)) vps_order_platform_packages_t *vps_order_platform_packages_create(
    double *kvm,
    double *kvmstorage,
    double *hyperv
);

void vps_order_platform_packages_free(vps_order_platform_packages_t *vps_order_platform_packages);

vps_order_platform_packages_t *vps_order_platform_packages_parseFromJSON(cJSON *vps_order_platform_packagesJSON);

cJSON *vps_order_platform_packages_convertToJSON(vps_order_platform_packages_t *vps_order_platform_packages);

#endif /* _vps_order_platform_packages_H_ */

