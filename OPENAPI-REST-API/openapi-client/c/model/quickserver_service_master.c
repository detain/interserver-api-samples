#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "quickserver_service_master.h"



static quickserver_service_master_t *quickserver_service_master_create_internal(
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
    ) {
    quickserver_service_master_t *quickserver_service_master_local_var = malloc(sizeof(quickserver_service_master_t));
    if (!quickserver_service_master_local_var) {
        return NULL;
    }
    quickserver_service_master_local_var->qs_id = qs_id;
    quickserver_service_master_local_var->qs_name = qs_name;
    quickserver_service_master_local_var->qs_ip = qs_ip;
    quickserver_service_master_local_var->qs_type = qs_type;
    quickserver_service_master_local_var->qs_hdsize = qs_hdsize;
    quickserver_service_master_local_var->qs_hdfree = qs_hdfree;
    quickserver_service_master_local_var->qs_bits = qs_bits;
    quickserver_service_master_local_var->qs_load = qs_load;
    quickserver_service_master_local_var->qs_ram = qs_ram;
    quickserver_service_master_local_var->qs_cpu_model = qs_cpu_model;
    quickserver_service_master_local_var->qs_cpu_mhz = qs_cpu_mhz;
    quickserver_service_master_local_var->qs_location = qs_location;
    quickserver_service_master_local_var->qs_available = qs_available;
    quickserver_service_master_local_var->qs_cost = qs_cost;
    quickserver_service_master_local_var->qs_last_update = qs_last_update;
    quickserver_service_master_local_var->qs_cores = qs_cores;
    quickserver_service_master_local_var->qs_iowait = qs_iowait;
    quickserver_service_master_local_var->qs_raid_status = qs_raid_status;
    quickserver_service_master_local_var->qs_drive_type = qs_drive_type;
    quickserver_service_master_local_var->qs_order = qs_order;
    quickserver_service_master_local_var->qs_raid_building = qs_raid_building;
    quickserver_service_master_local_var->qs_kernel = qs_kernel;
    quickserver_service_master_local_var->qs_ioping = qs_ioping;
    quickserver_service_master_local_var->qs_speed = qs_speed;
    quickserver_service_master_local_var->qs_distro = qs_distro;
    quickserver_service_master_local_var->qs_distro_version = qs_distro_version;
    quickserver_service_master_local_var->qs_bytes_sec_in = qs_bytes_sec_in;
    quickserver_service_master_local_var->qs_bytes_sec_out = qs_bytes_sec_out;
    quickserver_service_master_local_var->qs_packets_sec_in = qs_packets_sec_in;
    quickserver_service_master_local_var->qs_packets_sec_out = qs_packets_sec_out;
    quickserver_service_master_local_var->qs_last_install_time = qs_last_install_time;
    quickserver_service_master_local_var->qs_partitions = qs_partitions;
    quickserver_service_master_local_var->qs_cpu_flags = qs_cpu_flags;

    quickserver_service_master_local_var->_library_owned = 1;
    return quickserver_service_master_local_var;
}

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
    ) {
    return quickserver_service_master_create_internal (
        qs_id,
        qs_name,
        qs_ip,
        qs_type,
        qs_hdsize,
        qs_hdfree,
        qs_bits,
        qs_load,
        qs_ram,
        qs_cpu_model,
        qs_cpu_mhz,
        qs_location,
        qs_available,
        qs_cost,
        qs_last_update,
        qs_cores,
        qs_iowait,
        qs_raid_status,
        qs_drive_type,
        qs_order,
        qs_raid_building,
        qs_kernel,
        qs_ioping,
        qs_speed,
        qs_distro,
        qs_distro_version,
        qs_bytes_sec_in,
        qs_bytes_sec_out,
        qs_packets_sec_in,
        qs_packets_sec_out,
        qs_last_install_time,
        qs_partitions,
        qs_cpu_flags
        );
}

void quickserver_service_master_free(quickserver_service_master_t *quickserver_service_master) {
    if(NULL == quickserver_service_master){
        return ;
    }
    if(quickserver_service_master->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "quickserver_service_master_free");
        return ;
    }
    listEntry_t *listEntry;
    if (quickserver_service_master->qs_id) {
        free(quickserver_service_master->qs_id);
        quickserver_service_master->qs_id = NULL;
    }
    if (quickserver_service_master->qs_name) {
        free(quickserver_service_master->qs_name);
        quickserver_service_master->qs_name = NULL;
    }
    if (quickserver_service_master->qs_ip) {
        free(quickserver_service_master->qs_ip);
        quickserver_service_master->qs_ip = NULL;
    }
    if (quickserver_service_master->qs_type) {
        free(quickserver_service_master->qs_type);
        quickserver_service_master->qs_type = NULL;
    }
    if (quickserver_service_master->qs_hdsize) {
        free(quickserver_service_master->qs_hdsize);
        quickserver_service_master->qs_hdsize = NULL;
    }
    if (quickserver_service_master->qs_hdfree) {
        free(quickserver_service_master->qs_hdfree);
        quickserver_service_master->qs_hdfree = NULL;
    }
    if (quickserver_service_master->qs_bits) {
        free(quickserver_service_master->qs_bits);
        quickserver_service_master->qs_bits = NULL;
    }
    if (quickserver_service_master->qs_load) {
        free(quickserver_service_master->qs_load);
        quickserver_service_master->qs_load = NULL;
    }
    if (quickserver_service_master->qs_ram) {
        free(quickserver_service_master->qs_ram);
        quickserver_service_master->qs_ram = NULL;
    }
    if (quickserver_service_master->qs_cpu_model) {
        free(quickserver_service_master->qs_cpu_model);
        quickserver_service_master->qs_cpu_model = NULL;
    }
    if (quickserver_service_master->qs_cpu_mhz) {
        free(quickserver_service_master->qs_cpu_mhz);
        quickserver_service_master->qs_cpu_mhz = NULL;
    }
    if (quickserver_service_master->qs_location) {
        free(quickserver_service_master->qs_location);
        quickserver_service_master->qs_location = NULL;
    }
    if (quickserver_service_master->qs_available) {
        free(quickserver_service_master->qs_available);
        quickserver_service_master->qs_available = NULL;
    }
    if (quickserver_service_master->qs_cost) {
        free(quickserver_service_master->qs_cost);
        quickserver_service_master->qs_cost = NULL;
    }
    if (quickserver_service_master->qs_last_update) {
        free(quickserver_service_master->qs_last_update);
        quickserver_service_master->qs_last_update = NULL;
    }
    if (quickserver_service_master->qs_cores) {
        free(quickserver_service_master->qs_cores);
        quickserver_service_master->qs_cores = NULL;
    }
    if (quickserver_service_master->qs_iowait) {
        free(quickserver_service_master->qs_iowait);
        quickserver_service_master->qs_iowait = NULL;
    }
    if (quickserver_service_master->qs_raid_status) {
        free(quickserver_service_master->qs_raid_status);
        quickserver_service_master->qs_raid_status = NULL;
    }
    if (quickserver_service_master->qs_drive_type) {
        free(quickserver_service_master->qs_drive_type);
        quickserver_service_master->qs_drive_type = NULL;
    }
    if (quickserver_service_master->qs_order) {
        free(quickserver_service_master->qs_order);
        quickserver_service_master->qs_order = NULL;
    }
    if (quickserver_service_master->qs_raid_building) {
        free(quickserver_service_master->qs_raid_building);
        quickserver_service_master->qs_raid_building = NULL;
    }
    if (quickserver_service_master->qs_kernel) {
        free(quickserver_service_master->qs_kernel);
        quickserver_service_master->qs_kernel = NULL;
    }
    if (quickserver_service_master->qs_ioping) {
        free(quickserver_service_master->qs_ioping);
        quickserver_service_master->qs_ioping = NULL;
    }
    if (quickserver_service_master->qs_speed) {
        free(quickserver_service_master->qs_speed);
        quickserver_service_master->qs_speed = NULL;
    }
    if (quickserver_service_master->qs_distro) {
        free(quickserver_service_master->qs_distro);
        quickserver_service_master->qs_distro = NULL;
    }
    if (quickserver_service_master->qs_distro_version) {
        free(quickserver_service_master->qs_distro_version);
        quickserver_service_master->qs_distro_version = NULL;
    }
    if (quickserver_service_master->qs_bytes_sec_in) {
        free(quickserver_service_master->qs_bytes_sec_in);
        quickserver_service_master->qs_bytes_sec_in = NULL;
    }
    if (quickserver_service_master->qs_bytes_sec_out) {
        free(quickserver_service_master->qs_bytes_sec_out);
        quickserver_service_master->qs_bytes_sec_out = NULL;
    }
    if (quickserver_service_master->qs_packets_sec_in) {
        free(quickserver_service_master->qs_packets_sec_in);
        quickserver_service_master->qs_packets_sec_in = NULL;
    }
    if (quickserver_service_master->qs_packets_sec_out) {
        free(quickserver_service_master->qs_packets_sec_out);
        quickserver_service_master->qs_packets_sec_out = NULL;
    }
    if (quickserver_service_master->qs_last_install_time) {
        _free(quickserver_service_master->qs_last_install_time);
        quickserver_service_master->qs_last_install_time = NULL;
    }
    if (quickserver_service_master->qs_partitions) {
        _free(quickserver_service_master->qs_partitions);
        quickserver_service_master->qs_partitions = NULL;
    }
    if (quickserver_service_master->qs_cpu_flags) {
        free(quickserver_service_master->qs_cpu_flags);
        quickserver_service_master->qs_cpu_flags = NULL;
    }
    free(quickserver_service_master);
}

cJSON *quickserver_service_master_convertToJSON(quickserver_service_master_t *quickserver_service_master) {
    cJSON *item = cJSON_CreateObject();

    // quickserver_service_master->qs_id
    if(quickserver_service_master->qs_id) {
    if(cJSON_AddStringToObject(item, "qs_id", quickserver_service_master->qs_id) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_master->qs_name
    if(quickserver_service_master->qs_name) {
    if(cJSON_AddStringToObject(item, "qs_name", quickserver_service_master->qs_name) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_master->qs_ip
    if(quickserver_service_master->qs_ip) {
    if(cJSON_AddStringToObject(item, "qs_ip", quickserver_service_master->qs_ip) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_master->qs_type
    if(quickserver_service_master->qs_type) {
    if(cJSON_AddStringToObject(item, "qs_type", quickserver_service_master->qs_type) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_master->qs_hdsize
    if(quickserver_service_master->qs_hdsize) {
    if(cJSON_AddStringToObject(item, "qs_hdsize", quickserver_service_master->qs_hdsize) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_master->qs_hdfree
    if(quickserver_service_master->qs_hdfree) {
    if(cJSON_AddStringToObject(item, "qs_hdfree", quickserver_service_master->qs_hdfree) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_master->qs_bits
    if(quickserver_service_master->qs_bits) {
    if(cJSON_AddStringToObject(item, "qs_bits", quickserver_service_master->qs_bits) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_master->qs_load
    if(quickserver_service_master->qs_load) {
    if(cJSON_AddStringToObject(item, "qs_load", quickserver_service_master->qs_load) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_master->qs_ram
    if(quickserver_service_master->qs_ram) {
    if(cJSON_AddStringToObject(item, "qs_ram", quickserver_service_master->qs_ram) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_master->qs_cpu_model
    if(quickserver_service_master->qs_cpu_model) {
    if(cJSON_AddStringToObject(item, "qs_cpu_model", quickserver_service_master->qs_cpu_model) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_master->qs_cpu_mhz
    if(quickserver_service_master->qs_cpu_mhz) {
    if(cJSON_AddStringToObject(item, "qs_cpu_mhz", quickserver_service_master->qs_cpu_mhz) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_master->qs_location
    if(quickserver_service_master->qs_location) {
    if(cJSON_AddStringToObject(item, "qs_location", quickserver_service_master->qs_location) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_master->qs_available
    if(quickserver_service_master->qs_available) {
    if(cJSON_AddStringToObject(item, "qs_available", quickserver_service_master->qs_available) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_master->qs_cost
    if(quickserver_service_master->qs_cost) {
    if(cJSON_AddStringToObject(item, "qs_cost", quickserver_service_master->qs_cost) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_master->qs_last_update
    if(quickserver_service_master->qs_last_update) {
    if(cJSON_AddStringToObject(item, "qs_last_update", quickserver_service_master->qs_last_update) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_master->qs_cores
    if(quickserver_service_master->qs_cores) {
    if(cJSON_AddStringToObject(item, "qs_cores", quickserver_service_master->qs_cores) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_master->qs_iowait
    if(quickserver_service_master->qs_iowait) {
    if(cJSON_AddStringToObject(item, "qs_iowait", quickserver_service_master->qs_iowait) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_master->qs_raid_status
    if(quickserver_service_master->qs_raid_status) {
    if(cJSON_AddStringToObject(item, "qs_raid_status", quickserver_service_master->qs_raid_status) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_master->qs_drive_type
    if(quickserver_service_master->qs_drive_type) {
    if(cJSON_AddStringToObject(item, "qs_drive_type", quickserver_service_master->qs_drive_type) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_master->qs_order
    if(quickserver_service_master->qs_order) {
    if(cJSON_AddStringToObject(item, "qs_order", quickserver_service_master->qs_order) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_master->qs_raid_building
    if(quickserver_service_master->qs_raid_building) {
    if(cJSON_AddStringToObject(item, "qs_raid_building", quickserver_service_master->qs_raid_building) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_master->qs_kernel
    if(quickserver_service_master->qs_kernel) {
    if(cJSON_AddStringToObject(item, "qs_kernel", quickserver_service_master->qs_kernel) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_master->qs_ioping
    if(quickserver_service_master->qs_ioping) {
    if(cJSON_AddStringToObject(item, "qs_ioping", quickserver_service_master->qs_ioping) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_master->qs_speed
    if(quickserver_service_master->qs_speed) {
    if(cJSON_AddStringToObject(item, "qs_speed", quickserver_service_master->qs_speed) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_master->qs_distro
    if(quickserver_service_master->qs_distro) {
    if(cJSON_AddStringToObject(item, "qs_distro", quickserver_service_master->qs_distro) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_master->qs_distro_version
    if(quickserver_service_master->qs_distro_version) {
    if(cJSON_AddStringToObject(item, "qs_distro_version", quickserver_service_master->qs_distro_version) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_master->qs_bytes_sec_in
    if(quickserver_service_master->qs_bytes_sec_in) {
    if(cJSON_AddStringToObject(item, "qs_bytes_sec_in", quickserver_service_master->qs_bytes_sec_in) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_master->qs_bytes_sec_out
    if(quickserver_service_master->qs_bytes_sec_out) {
    if(cJSON_AddStringToObject(item, "qs_bytes_sec_out", quickserver_service_master->qs_bytes_sec_out) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_master->qs_packets_sec_in
    if(quickserver_service_master->qs_packets_sec_in) {
    if(cJSON_AddStringToObject(item, "qs_packets_sec_in", quickserver_service_master->qs_packets_sec_in) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_master->qs_packets_sec_out
    if(quickserver_service_master->qs_packets_sec_out) {
    if(cJSON_AddStringToObject(item, "qs_packets_sec_out", quickserver_service_master->qs_packets_sec_out) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_master->qs_last_install_time
    if(quickserver_service_master->qs_last_install_time) {
    cJSON *qs_last_install_time_local_JSON = _convertToJSON(quickserver_service_master->qs_last_install_time);
    if(qs_last_install_time_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "qs_last_install_time", qs_last_install_time_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // quickserver_service_master->qs_partitions
    if(quickserver_service_master->qs_partitions) {
    cJSON *qs_partitions_local_JSON = _convertToJSON(quickserver_service_master->qs_partitions);
    if(qs_partitions_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "qs_partitions", qs_partitions_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // quickserver_service_master->qs_cpu_flags
    if(quickserver_service_master->qs_cpu_flags) {
    if(cJSON_AddStringToObject(item, "qs_cpu_flags", quickserver_service_master->qs_cpu_flags) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

quickserver_service_master_t *quickserver_service_master_parseFromJSON(cJSON *quickserver_service_masterJSON){

    quickserver_service_master_t *quickserver_service_master_local_var = NULL;

    // define the local variable for quickserver_service_master->qs_last_install_time
    _t *qs_last_install_time_local_nonprim = NULL;

    // define the local variable for quickserver_service_master->qs_partitions
    _t *qs_partitions_local_nonprim = NULL;

    // quickserver_service_master->qs_id
    cJSON *qs_id = cJSON_GetObjectItemCaseSensitive(quickserver_service_masterJSON, "qs_id");
    if (cJSON_IsNull(qs_id)) {
        qs_id = NULL;
    }
    if (qs_id) { 
    if(!cJSON_IsString(qs_id) && !cJSON_IsNull(qs_id))
    {
    goto end; //String
    }
    }

    // quickserver_service_master->qs_name
    cJSON *qs_name = cJSON_GetObjectItemCaseSensitive(quickserver_service_masterJSON, "qs_name");
    if (cJSON_IsNull(qs_name)) {
        qs_name = NULL;
    }
    if (qs_name) { 
    if(!cJSON_IsString(qs_name) && !cJSON_IsNull(qs_name))
    {
    goto end; //String
    }
    }

    // quickserver_service_master->qs_ip
    cJSON *qs_ip = cJSON_GetObjectItemCaseSensitive(quickserver_service_masterJSON, "qs_ip");
    if (cJSON_IsNull(qs_ip)) {
        qs_ip = NULL;
    }
    if (qs_ip) { 
    if(!cJSON_IsString(qs_ip) && !cJSON_IsNull(qs_ip))
    {
    goto end; //String
    }
    }

    // quickserver_service_master->qs_type
    cJSON *qs_type = cJSON_GetObjectItemCaseSensitive(quickserver_service_masterJSON, "qs_type");
    if (cJSON_IsNull(qs_type)) {
        qs_type = NULL;
    }
    if (qs_type) { 
    if(!cJSON_IsString(qs_type) && !cJSON_IsNull(qs_type))
    {
    goto end; //String
    }
    }

    // quickserver_service_master->qs_hdsize
    cJSON *qs_hdsize = cJSON_GetObjectItemCaseSensitive(quickserver_service_masterJSON, "qs_hdsize");
    if (cJSON_IsNull(qs_hdsize)) {
        qs_hdsize = NULL;
    }
    if (qs_hdsize) { 
    if(!cJSON_IsString(qs_hdsize) && !cJSON_IsNull(qs_hdsize))
    {
    goto end; //String
    }
    }

    // quickserver_service_master->qs_hdfree
    cJSON *qs_hdfree = cJSON_GetObjectItemCaseSensitive(quickserver_service_masterJSON, "qs_hdfree");
    if (cJSON_IsNull(qs_hdfree)) {
        qs_hdfree = NULL;
    }
    if (qs_hdfree) { 
    if(!cJSON_IsString(qs_hdfree) && !cJSON_IsNull(qs_hdfree))
    {
    goto end; //String
    }
    }

    // quickserver_service_master->qs_bits
    cJSON *qs_bits = cJSON_GetObjectItemCaseSensitive(quickserver_service_masterJSON, "qs_bits");
    if (cJSON_IsNull(qs_bits)) {
        qs_bits = NULL;
    }
    if (qs_bits) { 
    if(!cJSON_IsString(qs_bits) && !cJSON_IsNull(qs_bits))
    {
    goto end; //String
    }
    }

    // quickserver_service_master->qs_load
    cJSON *qs_load = cJSON_GetObjectItemCaseSensitive(quickserver_service_masterJSON, "qs_load");
    if (cJSON_IsNull(qs_load)) {
        qs_load = NULL;
    }
    if (qs_load) { 
    if(!cJSON_IsString(qs_load) && !cJSON_IsNull(qs_load))
    {
    goto end; //String
    }
    }

    // quickserver_service_master->qs_ram
    cJSON *qs_ram = cJSON_GetObjectItemCaseSensitive(quickserver_service_masterJSON, "qs_ram");
    if (cJSON_IsNull(qs_ram)) {
        qs_ram = NULL;
    }
    if (qs_ram) { 
    if(!cJSON_IsString(qs_ram) && !cJSON_IsNull(qs_ram))
    {
    goto end; //String
    }
    }

    // quickserver_service_master->qs_cpu_model
    cJSON *qs_cpu_model = cJSON_GetObjectItemCaseSensitive(quickserver_service_masterJSON, "qs_cpu_model");
    if (cJSON_IsNull(qs_cpu_model)) {
        qs_cpu_model = NULL;
    }
    if (qs_cpu_model) { 
    if(!cJSON_IsString(qs_cpu_model) && !cJSON_IsNull(qs_cpu_model))
    {
    goto end; //String
    }
    }

    // quickserver_service_master->qs_cpu_mhz
    cJSON *qs_cpu_mhz = cJSON_GetObjectItemCaseSensitive(quickserver_service_masterJSON, "qs_cpu_mhz");
    if (cJSON_IsNull(qs_cpu_mhz)) {
        qs_cpu_mhz = NULL;
    }
    if (qs_cpu_mhz) { 
    if(!cJSON_IsString(qs_cpu_mhz) && !cJSON_IsNull(qs_cpu_mhz))
    {
    goto end; //String
    }
    }

    // quickserver_service_master->qs_location
    cJSON *qs_location = cJSON_GetObjectItemCaseSensitive(quickserver_service_masterJSON, "qs_location");
    if (cJSON_IsNull(qs_location)) {
        qs_location = NULL;
    }
    if (qs_location) { 
    if(!cJSON_IsString(qs_location) && !cJSON_IsNull(qs_location))
    {
    goto end; //String
    }
    }

    // quickserver_service_master->qs_available
    cJSON *qs_available = cJSON_GetObjectItemCaseSensitive(quickserver_service_masterJSON, "qs_available");
    if (cJSON_IsNull(qs_available)) {
        qs_available = NULL;
    }
    if (qs_available) { 
    if(!cJSON_IsString(qs_available) && !cJSON_IsNull(qs_available))
    {
    goto end; //String
    }
    }

    // quickserver_service_master->qs_cost
    cJSON *qs_cost = cJSON_GetObjectItemCaseSensitive(quickserver_service_masterJSON, "qs_cost");
    if (cJSON_IsNull(qs_cost)) {
        qs_cost = NULL;
    }
    if (qs_cost) { 
    if(!cJSON_IsString(qs_cost) && !cJSON_IsNull(qs_cost))
    {
    goto end; //String
    }
    }

    // quickserver_service_master->qs_last_update
    cJSON *qs_last_update = cJSON_GetObjectItemCaseSensitive(quickserver_service_masterJSON, "qs_last_update");
    if (cJSON_IsNull(qs_last_update)) {
        qs_last_update = NULL;
    }
    if (qs_last_update) { 
    if(!cJSON_IsString(qs_last_update) && !cJSON_IsNull(qs_last_update))
    {
    goto end; //String
    }
    }

    // quickserver_service_master->qs_cores
    cJSON *qs_cores = cJSON_GetObjectItemCaseSensitive(quickserver_service_masterJSON, "qs_cores");
    if (cJSON_IsNull(qs_cores)) {
        qs_cores = NULL;
    }
    if (qs_cores) { 
    if(!cJSON_IsString(qs_cores) && !cJSON_IsNull(qs_cores))
    {
    goto end; //String
    }
    }

    // quickserver_service_master->qs_iowait
    cJSON *qs_iowait = cJSON_GetObjectItemCaseSensitive(quickserver_service_masterJSON, "qs_iowait");
    if (cJSON_IsNull(qs_iowait)) {
        qs_iowait = NULL;
    }
    if (qs_iowait) { 
    if(!cJSON_IsString(qs_iowait) && !cJSON_IsNull(qs_iowait))
    {
    goto end; //String
    }
    }

    // quickserver_service_master->qs_raid_status
    cJSON *qs_raid_status = cJSON_GetObjectItemCaseSensitive(quickserver_service_masterJSON, "qs_raid_status");
    if (cJSON_IsNull(qs_raid_status)) {
        qs_raid_status = NULL;
    }
    if (qs_raid_status) { 
    if(!cJSON_IsString(qs_raid_status) && !cJSON_IsNull(qs_raid_status))
    {
    goto end; //String
    }
    }

    // quickserver_service_master->qs_drive_type
    cJSON *qs_drive_type = cJSON_GetObjectItemCaseSensitive(quickserver_service_masterJSON, "qs_drive_type");
    if (cJSON_IsNull(qs_drive_type)) {
        qs_drive_type = NULL;
    }
    if (qs_drive_type) { 
    if(!cJSON_IsString(qs_drive_type) && !cJSON_IsNull(qs_drive_type))
    {
    goto end; //String
    }
    }

    // quickserver_service_master->qs_order
    cJSON *qs_order = cJSON_GetObjectItemCaseSensitive(quickserver_service_masterJSON, "qs_order");
    if (cJSON_IsNull(qs_order)) {
        qs_order = NULL;
    }
    if (qs_order) { 
    if(!cJSON_IsString(qs_order) && !cJSON_IsNull(qs_order))
    {
    goto end; //String
    }
    }

    // quickserver_service_master->qs_raid_building
    cJSON *qs_raid_building = cJSON_GetObjectItemCaseSensitive(quickserver_service_masterJSON, "qs_raid_building");
    if (cJSON_IsNull(qs_raid_building)) {
        qs_raid_building = NULL;
    }
    if (qs_raid_building) { 
    if(!cJSON_IsString(qs_raid_building) && !cJSON_IsNull(qs_raid_building))
    {
    goto end; //String
    }
    }

    // quickserver_service_master->qs_kernel
    cJSON *qs_kernel = cJSON_GetObjectItemCaseSensitive(quickserver_service_masterJSON, "qs_kernel");
    if (cJSON_IsNull(qs_kernel)) {
        qs_kernel = NULL;
    }
    if (qs_kernel) { 
    if(!cJSON_IsString(qs_kernel) && !cJSON_IsNull(qs_kernel))
    {
    goto end; //String
    }
    }

    // quickserver_service_master->qs_ioping
    cJSON *qs_ioping = cJSON_GetObjectItemCaseSensitive(quickserver_service_masterJSON, "qs_ioping");
    if (cJSON_IsNull(qs_ioping)) {
        qs_ioping = NULL;
    }
    if (qs_ioping) { 
    if(!cJSON_IsString(qs_ioping) && !cJSON_IsNull(qs_ioping))
    {
    goto end; //String
    }
    }

    // quickserver_service_master->qs_speed
    cJSON *qs_speed = cJSON_GetObjectItemCaseSensitive(quickserver_service_masterJSON, "qs_speed");
    if (cJSON_IsNull(qs_speed)) {
        qs_speed = NULL;
    }
    if (qs_speed) { 
    if(!cJSON_IsString(qs_speed) && !cJSON_IsNull(qs_speed))
    {
    goto end; //String
    }
    }

    // quickserver_service_master->qs_distro
    cJSON *qs_distro = cJSON_GetObjectItemCaseSensitive(quickserver_service_masterJSON, "qs_distro");
    if (cJSON_IsNull(qs_distro)) {
        qs_distro = NULL;
    }
    if (qs_distro) { 
    if(!cJSON_IsString(qs_distro) && !cJSON_IsNull(qs_distro))
    {
    goto end; //String
    }
    }

    // quickserver_service_master->qs_distro_version
    cJSON *qs_distro_version = cJSON_GetObjectItemCaseSensitive(quickserver_service_masterJSON, "qs_distro_version");
    if (cJSON_IsNull(qs_distro_version)) {
        qs_distro_version = NULL;
    }
    if (qs_distro_version) { 
    if(!cJSON_IsString(qs_distro_version) && !cJSON_IsNull(qs_distro_version))
    {
    goto end; //String
    }
    }

    // quickserver_service_master->qs_bytes_sec_in
    cJSON *qs_bytes_sec_in = cJSON_GetObjectItemCaseSensitive(quickserver_service_masterJSON, "qs_bytes_sec_in");
    if (cJSON_IsNull(qs_bytes_sec_in)) {
        qs_bytes_sec_in = NULL;
    }
    if (qs_bytes_sec_in) { 
    if(!cJSON_IsString(qs_bytes_sec_in) && !cJSON_IsNull(qs_bytes_sec_in))
    {
    goto end; //String
    }
    }

    // quickserver_service_master->qs_bytes_sec_out
    cJSON *qs_bytes_sec_out = cJSON_GetObjectItemCaseSensitive(quickserver_service_masterJSON, "qs_bytes_sec_out");
    if (cJSON_IsNull(qs_bytes_sec_out)) {
        qs_bytes_sec_out = NULL;
    }
    if (qs_bytes_sec_out) { 
    if(!cJSON_IsString(qs_bytes_sec_out) && !cJSON_IsNull(qs_bytes_sec_out))
    {
    goto end; //String
    }
    }

    // quickserver_service_master->qs_packets_sec_in
    cJSON *qs_packets_sec_in = cJSON_GetObjectItemCaseSensitive(quickserver_service_masterJSON, "qs_packets_sec_in");
    if (cJSON_IsNull(qs_packets_sec_in)) {
        qs_packets_sec_in = NULL;
    }
    if (qs_packets_sec_in) { 
    if(!cJSON_IsString(qs_packets_sec_in) && !cJSON_IsNull(qs_packets_sec_in))
    {
    goto end; //String
    }
    }

    // quickserver_service_master->qs_packets_sec_out
    cJSON *qs_packets_sec_out = cJSON_GetObjectItemCaseSensitive(quickserver_service_masterJSON, "qs_packets_sec_out");
    if (cJSON_IsNull(qs_packets_sec_out)) {
        qs_packets_sec_out = NULL;
    }
    if (qs_packets_sec_out) { 
    if(!cJSON_IsString(qs_packets_sec_out) && !cJSON_IsNull(qs_packets_sec_out))
    {
    goto end; //String
    }
    }

    // quickserver_service_master->qs_last_install_time
    cJSON *qs_last_install_time = cJSON_GetObjectItemCaseSensitive(quickserver_service_masterJSON, "qs_last_install_time");
    if (cJSON_IsNull(qs_last_install_time)) {
        qs_last_install_time = NULL;
    }
    if (qs_last_install_time) { 
    qs_last_install_time_local_nonprim = _parseFromJSON(qs_last_install_time); //custom
    }

    // quickserver_service_master->qs_partitions
    cJSON *qs_partitions = cJSON_GetObjectItemCaseSensitive(quickserver_service_masterJSON, "qs_partitions");
    if (cJSON_IsNull(qs_partitions)) {
        qs_partitions = NULL;
    }
    if (qs_partitions) { 
    qs_partitions_local_nonprim = _parseFromJSON(qs_partitions); //custom
    }

    // quickserver_service_master->qs_cpu_flags
    cJSON *qs_cpu_flags = cJSON_GetObjectItemCaseSensitive(quickserver_service_masterJSON, "qs_cpu_flags");
    if (cJSON_IsNull(qs_cpu_flags)) {
        qs_cpu_flags = NULL;
    }
    if (qs_cpu_flags) { 
    if(!cJSON_IsString(qs_cpu_flags) && !cJSON_IsNull(qs_cpu_flags))
    {
    goto end; //String
    }
    }


    quickserver_service_master_local_var = quickserver_service_master_create_internal (
        qs_id && !cJSON_IsNull(qs_id) ? strdup(qs_id->valuestring) : NULL,
        qs_name && !cJSON_IsNull(qs_name) ? strdup(qs_name->valuestring) : NULL,
        qs_ip && !cJSON_IsNull(qs_ip) ? strdup(qs_ip->valuestring) : NULL,
        qs_type && !cJSON_IsNull(qs_type) ? strdup(qs_type->valuestring) : NULL,
        qs_hdsize && !cJSON_IsNull(qs_hdsize) ? strdup(qs_hdsize->valuestring) : NULL,
        qs_hdfree && !cJSON_IsNull(qs_hdfree) ? strdup(qs_hdfree->valuestring) : NULL,
        qs_bits && !cJSON_IsNull(qs_bits) ? strdup(qs_bits->valuestring) : NULL,
        qs_load && !cJSON_IsNull(qs_load) ? strdup(qs_load->valuestring) : NULL,
        qs_ram && !cJSON_IsNull(qs_ram) ? strdup(qs_ram->valuestring) : NULL,
        qs_cpu_model && !cJSON_IsNull(qs_cpu_model) ? strdup(qs_cpu_model->valuestring) : NULL,
        qs_cpu_mhz && !cJSON_IsNull(qs_cpu_mhz) ? strdup(qs_cpu_mhz->valuestring) : NULL,
        qs_location && !cJSON_IsNull(qs_location) ? strdup(qs_location->valuestring) : NULL,
        qs_available && !cJSON_IsNull(qs_available) ? strdup(qs_available->valuestring) : NULL,
        qs_cost && !cJSON_IsNull(qs_cost) ? strdup(qs_cost->valuestring) : NULL,
        qs_last_update && !cJSON_IsNull(qs_last_update) ? strdup(qs_last_update->valuestring) : NULL,
        qs_cores && !cJSON_IsNull(qs_cores) ? strdup(qs_cores->valuestring) : NULL,
        qs_iowait && !cJSON_IsNull(qs_iowait) ? strdup(qs_iowait->valuestring) : NULL,
        qs_raid_status && !cJSON_IsNull(qs_raid_status) ? strdup(qs_raid_status->valuestring) : NULL,
        qs_drive_type && !cJSON_IsNull(qs_drive_type) ? strdup(qs_drive_type->valuestring) : NULL,
        qs_order && !cJSON_IsNull(qs_order) ? strdup(qs_order->valuestring) : NULL,
        qs_raid_building && !cJSON_IsNull(qs_raid_building) ? strdup(qs_raid_building->valuestring) : NULL,
        qs_kernel && !cJSON_IsNull(qs_kernel) ? strdup(qs_kernel->valuestring) : NULL,
        qs_ioping && !cJSON_IsNull(qs_ioping) ? strdup(qs_ioping->valuestring) : NULL,
        qs_speed && !cJSON_IsNull(qs_speed) ? strdup(qs_speed->valuestring) : NULL,
        qs_distro && !cJSON_IsNull(qs_distro) ? strdup(qs_distro->valuestring) : NULL,
        qs_distro_version && !cJSON_IsNull(qs_distro_version) ? strdup(qs_distro_version->valuestring) : NULL,
        qs_bytes_sec_in && !cJSON_IsNull(qs_bytes_sec_in) ? strdup(qs_bytes_sec_in->valuestring) : NULL,
        qs_bytes_sec_out && !cJSON_IsNull(qs_bytes_sec_out) ? strdup(qs_bytes_sec_out->valuestring) : NULL,
        qs_packets_sec_in && !cJSON_IsNull(qs_packets_sec_in) ? strdup(qs_packets_sec_in->valuestring) : NULL,
        qs_packets_sec_out && !cJSON_IsNull(qs_packets_sec_out) ? strdup(qs_packets_sec_out->valuestring) : NULL,
        qs_last_install_time ? qs_last_install_time_local_nonprim : NULL,
        qs_partitions ? qs_partitions_local_nonprim : NULL,
        qs_cpu_flags && !cJSON_IsNull(qs_cpu_flags) ? strdup(qs_cpu_flags->valuestring) : NULL
        );

    return quickserver_service_master_local_var;
end:
    if (qs_last_install_time_local_nonprim) {
        _free(qs_last_install_time_local_nonprim);
        qs_last_install_time_local_nonprim = NULL;
    }
    if (qs_partitions_local_nonprim) {
        _free(qs_partitions_local_nonprim);
        qs_partitions_local_nonprim = NULL;
    }
    return NULL;

}
