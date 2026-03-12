/*
 * vps_ip_info.h
 *
 * IP address information table for a VPS service.
 */

#ifndef _vps_ip_info_H_
#define _vps_ip_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_ip_info_t vps_ip_info_t;

#include "vps_ip_info_row.h"



typedef struct vps_ip_info_t {
    char *title; // string
    list_t *rows; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} vps_ip_info_t;

__attribute__((deprecated)) vps_ip_info_t *vps_ip_info_create(
    char *title,
    list_t *rows
);

void vps_ip_info_free(vps_ip_info_t *vps_ip_info);

vps_ip_info_t *vps_ip_info_parseFromJSON(cJSON *vps_ip_infoJSON);

cJSON *vps_ip_info_convertToJSON(vps_ip_info_t *vps_ip_info);

#endif /* _vps_ip_info_H_ */

