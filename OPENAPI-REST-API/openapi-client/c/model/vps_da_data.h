/*
 * vps_da_data.h
 *
 * DirectAdmin license options available for a VPS.
 */

#ifndef _vps_da_data_H_
#define _vps_da_data_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_da_data_t vps_da_data_t;

#include "vps_da_license.h"



typedef struct vps_da_data_t {
    struct vps_da_license_t *free; //model

    int _library_owned; // Is the library responsible for freeing this object?
} vps_da_data_t;

__attribute__((deprecated)) vps_da_data_t *vps_da_data_create(
    vps_da_license_t *free
);

void vps_da_data_free(vps_da_data_t *vps_da_data);

vps_da_data_t *vps_da_data_parseFromJSON(cJSON *vps_da_dataJSON);

cJSON *vps_da_data_convertToJSON(vps_da_data_t *vps_da_data);

#endif /* _vps_da_data_H_ */

