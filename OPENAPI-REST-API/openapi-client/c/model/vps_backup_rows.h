/*
 * vps_backup_rows.h
 *
 * The listing of the backups for your service.
 */

#ifndef _vps_backup_rows_H_
#define _vps_backup_rows_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_backup_rows_t vps_backup_rows_t;

#include "vps_backup_row.h"



typedef struct vps_backup_rows_t {

    int _library_owned; // Is the library responsible for freeing this object?
} vps_backup_rows_t;

__attribute__((deprecated)) vps_backup_rows_t *vps_backup_rows_create(
);

void vps_backup_rows_free(vps_backup_rows_t *vps_backup_rows);

vps_backup_rows_t *vps_backup_rows_parseFromJSON(cJSON *vps_backup_rowsJSON);

cJSON *vps_backup_rows_convertToJSON(vps_backup_rows_t *vps_backup_rows);

#endif /* _vps_backup_rows_H_ */

