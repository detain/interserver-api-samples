/*
 * vps_plesk12_data.h
 *
 * 
 */

#ifndef _vps_plesk12_data_H_
#define _vps_plesk12_data_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_plesk12_data_t vps_plesk12_data_t;

#include "vps_plesk_license.h"



typedef struct vps_plesk12_data_t {
    struct vps_plesk_license_t *admin; //model
    struct vps_plesk_license_t *pro; //model
    struct vps_plesk_license_t *host; //model

    int _library_owned; // Is the library responsible for freeing this object?
} vps_plesk12_data_t;

__attribute__((deprecated)) vps_plesk12_data_t *vps_plesk12_data_create(
    vps_plesk_license_t *admin,
    vps_plesk_license_t *pro,
    vps_plesk_license_t *host
);

void vps_plesk12_data_free(vps_plesk12_data_t *vps_plesk12_data);

vps_plesk12_data_t *vps_plesk12_data_parseFromJSON(cJSON *vps_plesk12_dataJSON);

cJSON *vps_plesk12_data_convertToJSON(vps_plesk12_data_t *vps_plesk12_data);

#endif /* _vps_plesk12_data_H_ */

