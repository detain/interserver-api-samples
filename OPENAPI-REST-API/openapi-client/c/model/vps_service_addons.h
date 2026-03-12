/*
 * vps_service_addons.h
 *
 * Add-on services and IP address information for a VPS, including control panel licenses and extra IP assignments.
 */

#ifndef _vps_service_addons_H_
#define _vps_service_addons_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_service_addons_t vps_service_addons_t;




typedef struct vps_service_addons_t {
    int has_cpanel; //boolean
    int has_directadmin; //boolean
    int has_fantastico; //boolean
    int has_softaculous; //boolean
    int has_hdspace; //boolean
    int dedicated_ip; //boolean
    list_t *extra_ips; //primitive container
    list_t *extra_ips6; //primitive container
    list_t *unpaid_ips; //primitive container
    list_t *ips; //primitive container
    list_t *ips6; //primitive container
    int cpanel_id; //numeric
    int cost; //numeric
    list_t *ids; //primitive container
    list_t *rdata; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} vps_service_addons_t;

__attribute__((deprecated)) vps_service_addons_t *vps_service_addons_create(
    int has_cpanel,
    int has_directadmin,
    int has_fantastico,
    int has_softaculous,
    int has_hdspace,
    int dedicated_ip,
    list_t *extra_ips,
    list_t *extra_ips6,
    list_t *unpaid_ips,
    list_t *ips,
    list_t *ips6,
    int cpanel_id,
    int cost,
    list_t *ids,
    list_t *rdata
);

void vps_service_addons_free(vps_service_addons_t *vps_service_addons);

vps_service_addons_t *vps_service_addons_parseFromJSON(cJSON *vps_service_addonsJSON);

cJSON *vps_service_addons_convertToJSON(vps_service_addons_t *vps_service_addons);

#endif /* _vps_service_addons_H_ */

