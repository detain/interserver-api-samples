/*
 * vps_da_license.h
 *
 * A DirectAdmin license tier option.
 */

#ifndef _vps_da_license_H_
#define _vps_da_license_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_da_license_t vps_da_license_t;




typedef struct vps_da_license_t {
    char *name; // string
    char *sub_name; // string
    int *cost; //numeric
    char *img_disabled; // string
    char *img_active; // string

    int _library_owned; // Is the library responsible for freeing this object?
} vps_da_license_t;

__attribute__((deprecated)) vps_da_license_t *vps_da_license_create(
    char *name,
    char *sub_name,
    int *cost,
    char *img_disabled,
    char *img_active
);

void vps_da_license_free(vps_da_license_t *vps_da_license);

vps_da_license_t *vps_da_license_parseFromJSON(cJSON *vps_da_licenseJSON);

cJSON *vps_da_license_convertToJSON(vps_da_license_t *vps_da_license);

#endif /* _vps_da_license_H_ */

