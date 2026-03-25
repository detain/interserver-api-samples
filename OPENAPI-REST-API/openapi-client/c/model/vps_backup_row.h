/*
 * vps_backup_row.h
 *
 * A single backed-up item and information about it.
 */

#ifndef _vps_backup_row_H_
#define _vps_backup_row_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_backup_row_t vps_backup_row_t;




typedef struct vps_backup_row_t {
    char *type; // string
    int *service; //numeric
    char *name; // string
    int *size; //numeric
    int *date; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} vps_backup_row_t;

__attribute__((deprecated)) vps_backup_row_t *vps_backup_row_create(
    char *type,
    int *service,
    char *name,
    int *size,
    int *date
);

void vps_backup_row_free(vps_backup_row_t *vps_backup_row);

vps_backup_row_t *vps_backup_row_parseFromJSON(cJSON *vps_backup_rowJSON);

cJSON *vps_backup_row_convertToJSON(vps_backup_row_t *vps_backup_row);

#endif /* _vps_backup_row_H_ */

