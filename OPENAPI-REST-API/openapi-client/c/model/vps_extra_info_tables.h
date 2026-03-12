/*
 * vps_extra_info_tables.h
 *
 * Additional informational tables displayed for a VPS service.
 */

#ifndef _vps_extra_info_tables_H_
#define _vps_extra_info_tables_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_extra_info_tables_t vps_extra_info_tables_t;

#include "vps_ip_info.h"



typedef struct vps_extra_info_tables_t {
    struct vps_ip_info_t *ip_info; //model

    int _library_owned; // Is the library responsible for freeing this object?
} vps_extra_info_tables_t;

__attribute__((deprecated)) vps_extra_info_tables_t *vps_extra_info_tables_create(
    vps_ip_info_t *ip_info
);

void vps_extra_info_tables_free(vps_extra_info_tables_t *vps_extra_info_tables);

vps_extra_info_tables_t *vps_extra_info_tables_parseFromJSON(cJSON *vps_extra_info_tablesJSON);

cJSON *vps_extra_info_tables_convertToJSON(vps_extra_info_tables_t *vps_extra_info_tables);

#endif /* _vps_extra_info_tables_H_ */

