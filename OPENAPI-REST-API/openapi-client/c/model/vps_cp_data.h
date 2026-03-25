/*
 * vps_cp_data.h
 *
 * Control panel license options available for a VPS.
 */

#ifndef _vps_cp_data_H_
#define _vps_cp_data_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_cp_data_t vps_cp_data_t;




typedef struct vps_cp_data_t {
    char *name; // string
    int *cost; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} vps_cp_data_t;

__attribute__((deprecated)) vps_cp_data_t *vps_cp_data_create(
    char *name,
    int *cost
);

void vps_cp_data_free(vps_cp_data_t *vps_cp_data);

vps_cp_data_t *vps_cp_data_parseFromJSON(cJSON *vps_cp_dataJSON);

cJSON *vps_cp_data_convertToJSON(vps_cp_data_t *vps_cp_data);

#endif /* _vps_cp_data_H_ */

