/*
 * vps_ip_info_row.h
 *
 * 
 */

#ifndef _vps_ip_info_row_H_
#define _vps_ip_info_row_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_ip_info_row_t vps_ip_info_row_t;




typedef struct vps_ip_info_row_t {
    char *desc; // string
    char *value; // string

    int _library_owned; // Is the library responsible for freeing this object?
} vps_ip_info_row_t;

__attribute__((deprecated)) vps_ip_info_row_t *vps_ip_info_row_create(
    char *desc,
    char *value
);

void vps_ip_info_row_free(vps_ip_info_row_t *vps_ip_info_row);

vps_ip_info_row_t *vps_ip_info_row_parseFromJSON(cJSON *vps_ip_info_rowJSON);

cJSON *vps_ip_info_row_convertToJSON(vps_ip_info_row_t *vps_ip_info_row);

#endif /* _vps_ip_info_row_H_ */

