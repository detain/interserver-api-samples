/*
 * vps_service_extra.h
 *
 * 
 */

#ifndef _vps_service_extra_H_
#define _vps_service_extra_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_service_extra_t vps_service_extra_t;

#include "vps_snapshot.h"



typedef struct vps_service_extra_t {
    int *spice; //numeric
    list_t *snapshots; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} vps_service_extra_t;

__attribute__((deprecated)) vps_service_extra_t *vps_service_extra_create(
    int *spice,
    list_t *snapshots
);

void vps_service_extra_free(vps_service_extra_t *vps_service_extra);

vps_service_extra_t *vps_service_extra_parseFromJSON(cJSON *vps_service_extraJSON);

cJSON *vps_service_extra_convertToJSON(vps_service_extra_t *vps_service_extra);

#endif /* _vps_service_extra_H_ */

