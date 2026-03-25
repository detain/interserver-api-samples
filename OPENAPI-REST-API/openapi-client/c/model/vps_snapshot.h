/*
 * vps_snapshot.h
 *
 * A VPS snapshot (point-in-time backup) stored on the host node.
 */

#ifndef _vps_snapshot_H_
#define _vps_snapshot_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_snapshot_t vps_snapshot_t;




typedef struct vps_snapshot_t {
    char *name; // string
    int *used; //numeric
    int *date; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} vps_snapshot_t;

__attribute__((deprecated)) vps_snapshot_t *vps_snapshot_create(
    char *name,
    int *used,
    int *date
);

void vps_snapshot_free(vps_snapshot_t *vps_snapshot);

vps_snapshot_t *vps_snapshot_parseFromJSON(cJSON *vps_snapshotJSON);

cJSON *vps_snapshot_convertToJSON(vps_snapshot_t *vps_snapshot);

#endif /* _vps_snapshot_H_ */

