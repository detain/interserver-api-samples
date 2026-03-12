/*
 * vps_plesk_license.h
 *
 * 
 */

#ifndef _vps_plesk_license_H_
#define _vps_plesk_license_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_plesk_license_t vps_plesk_license_t;




typedef struct vps_plesk_license_t {
    int id; //numeric
    char *name; // string
    char *sub_name; // string
    int cost; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} vps_plesk_license_t;

__attribute__((deprecated)) vps_plesk_license_t *vps_plesk_license_create(
    int id,
    char *name,
    char *sub_name,
    int cost
);

void vps_plesk_license_free(vps_plesk_license_t *vps_plesk_license);

vps_plesk_license_t *vps_plesk_license_parseFromJSON(cJSON *vps_plesk_licenseJSON);

cJSON *vps_plesk_license_convertToJSON(vps_plesk_license_t *vps_plesk_license);

#endif /* _vps_plesk_license_H_ */

