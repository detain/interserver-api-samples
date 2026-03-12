/*
 * quickserver_service_master.h
 *
 * Information about the host node running this QuickServer, including hardware specs and resource utilization.
 */

#ifndef _quickserver_service_master_H_
#define _quickserver_service_master_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct quickserver_service_master_t quickserver_service_master_t;

#include "any_type.h"



typedef struct quickserver_service_master_t {
    char *qs_id; // string
    char *qs_name; // string
    char *qs_ip; // string
    char *qs_type; // string
    char *qs_hdsize; // string
    char *qs_hdfree; // string
    char *qs_bits; // string
    char *qs_load; // string
    char *qs_ram; // string
    char *qs_cpu_model; // string
    char *qs_cpu_mhz; // string
    char *qs_location; // string
    char *qs_available; // string
    char *qs_cost; // string
    char *qs_last_update; // string
    char *qs_cores; // string
    char *qs_iowait; // string
    char *qs_raid_status; // string
    char *qs_drive_type; // string
    char *qs_order; // string
    char *qs_raid_building; // string
    char *qs_kernel; // string
    char *qs_ioping; // string
    char *qs_speed; // string
    char *qs_distro; // string
    char *qs_distro_version; // string
    char *qs_bytes_sec_in; // string
    char *qs_bytes_sec_out; // string
    char *qs_packets_sec_in; // string
    char *qs_packets_sec_out; // string
    any_type_t *qs_last_install_time; // custom
    any_type_t *qs_partitions; // custom
    char *qs_cpu_flags; // string

    int _library_owned; // Is the library responsible for freeing this object?
} quickserver_service_master_t;

__attribute__((deprecated)) quickserver_service_master_t *quickserver_service_master_create(
    char *qs_id,
    char *qs_name,
    char *qs_ip,
    char *qs_type,
    char *qs_hdsize,
    char *qs_hdfree,
    char *qs_bits,
    char *qs_load,
    char *qs_ram,
    char *qs_cpu_model,
    char *qs_cpu_mhz,
    char *qs_location,
    char *qs_available,
    char *qs_cost,
    char *qs_last_update,
    char *qs_cores,
    char *qs_iowait,
    char *qs_raid_status,
    char *qs_drive_type,
    char *qs_order,
    char *qs_raid_building,
    char *qs_kernel,
    char *qs_ioping,
    char *qs_speed,
    char *qs_distro,
    char *qs_distro_version,
    char *qs_bytes_sec_in,
    char *qs_bytes_sec_out,
    char *qs_packets_sec_in,
    char *qs_packets_sec_out,
    any_type_t *qs_last_install_time,
    any_type_t *qs_partitions,
    char *qs_cpu_flags
);

void quickserver_service_master_free(quickserver_service_master_t *quickserver_service_master);

quickserver_service_master_t *quickserver_service_master_parseFromJSON(cJSON *quickserver_service_masterJSON);

cJSON *quickserver_service_master_convertToJSON(quickserver_service_master_t *quickserver_service_master);

#endif /* _quickserver_service_master_H_ */

