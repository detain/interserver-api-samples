/*
 * vps_service_master.h
 *
 * Information about the host node (hypervisor) running this VPS, including hardware specs and resource utilization.
 */

#ifndef _vps_service_master_H_
#define _vps_service_master_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_service_master_t vps_service_master_t;




typedef struct vps_service_master_t {
    char *vps_id; // string
    char *vps_name; // string
    char *vps_ip; // string
    char *vps_type; // string
    char *vps_hdsize; // string
    char *vps_hdfree; // string
    char *vps_bits; // string
    char *vps_load; // string
    char *vps_ram; // string
    char *vps_cpu_model; // string
    char *vps_cpu_mhz; // string
    char *vps_location; // string
    char *vps_last_update; // string
    char *vps_raid_building; // string
    char *vps_kernel; // string
    char *vps_available; // string
    char *vps_cores; // string
    char *vps_iowait; // string
    char *vps_raid_status; // string
    char *vps_mounts; // string
    char *vps_server_max; // string
    char *vps_server_max_slices; // string
    char *vps_drive_type; // string
    char *vps_order; // string

    int _library_owned; // Is the library responsible for freeing this object?
} vps_service_master_t;

__attribute__((deprecated)) vps_service_master_t *vps_service_master_create(
    char *vps_id,
    char *vps_name,
    char *vps_ip,
    char *vps_type,
    char *vps_hdsize,
    char *vps_hdfree,
    char *vps_bits,
    char *vps_load,
    char *vps_ram,
    char *vps_cpu_model,
    char *vps_cpu_mhz,
    char *vps_location,
    char *vps_last_update,
    char *vps_raid_building,
    char *vps_kernel,
    char *vps_available,
    char *vps_cores,
    char *vps_iowait,
    char *vps_raid_status,
    char *vps_mounts,
    char *vps_server_max,
    char *vps_server_max_slices,
    char *vps_drive_type,
    char *vps_order
);

void vps_service_master_free(vps_service_master_t *vps_service_master);

vps_service_master_t *vps_service_master_parseFromJSON(cJSON *vps_service_masterJSON);

cJSON *vps_service_master_convertToJSON(vps_service_master_t *vps_service_master);

#endif /* _vps_service_master_H_ */

