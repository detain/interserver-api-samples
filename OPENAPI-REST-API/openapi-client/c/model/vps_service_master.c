#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_service_master.h"



static vps_service_master_t *vps_service_master_create_internal(
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
    ) {
    vps_service_master_t *vps_service_master_local_var = malloc(sizeof(vps_service_master_t));
    if (!vps_service_master_local_var) {
        return NULL;
    }
    vps_service_master_local_var->vps_id = vps_id;
    vps_service_master_local_var->vps_name = vps_name;
    vps_service_master_local_var->vps_ip = vps_ip;
    vps_service_master_local_var->vps_type = vps_type;
    vps_service_master_local_var->vps_hdsize = vps_hdsize;
    vps_service_master_local_var->vps_hdfree = vps_hdfree;
    vps_service_master_local_var->vps_bits = vps_bits;
    vps_service_master_local_var->vps_load = vps_load;
    vps_service_master_local_var->vps_ram = vps_ram;
    vps_service_master_local_var->vps_cpu_model = vps_cpu_model;
    vps_service_master_local_var->vps_cpu_mhz = vps_cpu_mhz;
    vps_service_master_local_var->vps_location = vps_location;
    vps_service_master_local_var->vps_last_update = vps_last_update;
    vps_service_master_local_var->vps_raid_building = vps_raid_building;
    vps_service_master_local_var->vps_kernel = vps_kernel;
    vps_service_master_local_var->vps_available = vps_available;
    vps_service_master_local_var->vps_cores = vps_cores;
    vps_service_master_local_var->vps_iowait = vps_iowait;
    vps_service_master_local_var->vps_raid_status = vps_raid_status;
    vps_service_master_local_var->vps_mounts = vps_mounts;
    vps_service_master_local_var->vps_server_max = vps_server_max;
    vps_service_master_local_var->vps_server_max_slices = vps_server_max_slices;
    vps_service_master_local_var->vps_drive_type = vps_drive_type;
    vps_service_master_local_var->vps_order = vps_order;

    vps_service_master_local_var->_library_owned = 1;
    return vps_service_master_local_var;
}

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
    ) {
    return vps_service_master_create_internal (
        vps_id,
        vps_name,
        vps_ip,
        vps_type,
        vps_hdsize,
        vps_hdfree,
        vps_bits,
        vps_load,
        vps_ram,
        vps_cpu_model,
        vps_cpu_mhz,
        vps_location,
        vps_last_update,
        vps_raid_building,
        vps_kernel,
        vps_available,
        vps_cores,
        vps_iowait,
        vps_raid_status,
        vps_mounts,
        vps_server_max,
        vps_server_max_slices,
        vps_drive_type,
        vps_order
        );
}

void vps_service_master_free(vps_service_master_t *vps_service_master) {
    if(NULL == vps_service_master){
        return ;
    }
    if(vps_service_master->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_service_master_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_service_master->vps_id) {
        free(vps_service_master->vps_id);
        vps_service_master->vps_id = NULL;
    }
    if (vps_service_master->vps_name) {
        free(vps_service_master->vps_name);
        vps_service_master->vps_name = NULL;
    }
    if (vps_service_master->vps_ip) {
        free(vps_service_master->vps_ip);
        vps_service_master->vps_ip = NULL;
    }
    if (vps_service_master->vps_type) {
        free(vps_service_master->vps_type);
        vps_service_master->vps_type = NULL;
    }
    if (vps_service_master->vps_hdsize) {
        free(vps_service_master->vps_hdsize);
        vps_service_master->vps_hdsize = NULL;
    }
    if (vps_service_master->vps_hdfree) {
        free(vps_service_master->vps_hdfree);
        vps_service_master->vps_hdfree = NULL;
    }
    if (vps_service_master->vps_bits) {
        free(vps_service_master->vps_bits);
        vps_service_master->vps_bits = NULL;
    }
    if (vps_service_master->vps_load) {
        free(vps_service_master->vps_load);
        vps_service_master->vps_load = NULL;
    }
    if (vps_service_master->vps_ram) {
        free(vps_service_master->vps_ram);
        vps_service_master->vps_ram = NULL;
    }
    if (vps_service_master->vps_cpu_model) {
        free(vps_service_master->vps_cpu_model);
        vps_service_master->vps_cpu_model = NULL;
    }
    if (vps_service_master->vps_cpu_mhz) {
        free(vps_service_master->vps_cpu_mhz);
        vps_service_master->vps_cpu_mhz = NULL;
    }
    if (vps_service_master->vps_location) {
        free(vps_service_master->vps_location);
        vps_service_master->vps_location = NULL;
    }
    if (vps_service_master->vps_last_update) {
        free(vps_service_master->vps_last_update);
        vps_service_master->vps_last_update = NULL;
    }
    if (vps_service_master->vps_raid_building) {
        free(vps_service_master->vps_raid_building);
        vps_service_master->vps_raid_building = NULL;
    }
    if (vps_service_master->vps_kernel) {
        free(vps_service_master->vps_kernel);
        vps_service_master->vps_kernel = NULL;
    }
    if (vps_service_master->vps_available) {
        free(vps_service_master->vps_available);
        vps_service_master->vps_available = NULL;
    }
    if (vps_service_master->vps_cores) {
        free(vps_service_master->vps_cores);
        vps_service_master->vps_cores = NULL;
    }
    if (vps_service_master->vps_iowait) {
        free(vps_service_master->vps_iowait);
        vps_service_master->vps_iowait = NULL;
    }
    if (vps_service_master->vps_raid_status) {
        free(vps_service_master->vps_raid_status);
        vps_service_master->vps_raid_status = NULL;
    }
    if (vps_service_master->vps_mounts) {
        free(vps_service_master->vps_mounts);
        vps_service_master->vps_mounts = NULL;
    }
    if (vps_service_master->vps_server_max) {
        free(vps_service_master->vps_server_max);
        vps_service_master->vps_server_max = NULL;
    }
    if (vps_service_master->vps_server_max_slices) {
        free(vps_service_master->vps_server_max_slices);
        vps_service_master->vps_server_max_slices = NULL;
    }
    if (vps_service_master->vps_drive_type) {
        free(vps_service_master->vps_drive_type);
        vps_service_master->vps_drive_type = NULL;
    }
    if (vps_service_master->vps_order) {
        free(vps_service_master->vps_order);
        vps_service_master->vps_order = NULL;
    }
    free(vps_service_master);
}

cJSON *vps_service_master_convertToJSON(vps_service_master_t *vps_service_master) {
    cJSON *item = cJSON_CreateObject();

    // vps_service_master->vps_id
    if(vps_service_master->vps_id) {
    if(cJSON_AddStringToObject(item, "vps_id", vps_service_master->vps_id) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_master->vps_name
    if(vps_service_master->vps_name) {
    if(cJSON_AddStringToObject(item, "vps_name", vps_service_master->vps_name) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_master->vps_ip
    if(vps_service_master->vps_ip) {
    if(cJSON_AddStringToObject(item, "vps_ip", vps_service_master->vps_ip) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_master->vps_type
    if(vps_service_master->vps_type) {
    if(cJSON_AddStringToObject(item, "vps_type", vps_service_master->vps_type) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_master->vps_hdsize
    if(vps_service_master->vps_hdsize) {
    if(cJSON_AddStringToObject(item, "vps_hdsize", vps_service_master->vps_hdsize) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_master->vps_hdfree
    if(vps_service_master->vps_hdfree) {
    if(cJSON_AddStringToObject(item, "vps_hdfree", vps_service_master->vps_hdfree) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_master->vps_bits
    if(vps_service_master->vps_bits) {
    if(cJSON_AddStringToObject(item, "vps_bits", vps_service_master->vps_bits) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_master->vps_load
    if(vps_service_master->vps_load) {
    if(cJSON_AddStringToObject(item, "vps_load", vps_service_master->vps_load) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_master->vps_ram
    if(vps_service_master->vps_ram) {
    if(cJSON_AddStringToObject(item, "vps_ram", vps_service_master->vps_ram) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_master->vps_cpu_model
    if(vps_service_master->vps_cpu_model) {
    if(cJSON_AddStringToObject(item, "vps_cpu_model", vps_service_master->vps_cpu_model) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_master->vps_cpu_mhz
    if(vps_service_master->vps_cpu_mhz) {
    if(cJSON_AddStringToObject(item, "vps_cpu_mhz", vps_service_master->vps_cpu_mhz) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_master->vps_location
    if(vps_service_master->vps_location) {
    if(cJSON_AddStringToObject(item, "vps_location", vps_service_master->vps_location) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_master->vps_last_update
    if(vps_service_master->vps_last_update) {
    if(cJSON_AddStringToObject(item, "vps_last_update", vps_service_master->vps_last_update) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_master->vps_raid_building
    if(vps_service_master->vps_raid_building) {
    if(cJSON_AddStringToObject(item, "vps_raid_building", vps_service_master->vps_raid_building) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_master->vps_kernel
    if(vps_service_master->vps_kernel) {
    if(cJSON_AddStringToObject(item, "vps_kernel", vps_service_master->vps_kernel) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_master->vps_available
    if(vps_service_master->vps_available) {
    if(cJSON_AddStringToObject(item, "vps_available", vps_service_master->vps_available) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_master->vps_cores
    if(vps_service_master->vps_cores) {
    if(cJSON_AddStringToObject(item, "vps_cores", vps_service_master->vps_cores) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_master->vps_iowait
    if(vps_service_master->vps_iowait) {
    if(cJSON_AddStringToObject(item, "vps_iowait", vps_service_master->vps_iowait) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_master->vps_raid_status
    if(vps_service_master->vps_raid_status) {
    if(cJSON_AddStringToObject(item, "vps_raid_status", vps_service_master->vps_raid_status) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_master->vps_mounts
    if(vps_service_master->vps_mounts) {
    if(cJSON_AddStringToObject(item, "vps_mounts", vps_service_master->vps_mounts) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_master->vps_server_max
    if(vps_service_master->vps_server_max) {
    if(cJSON_AddStringToObject(item, "vps_server_max", vps_service_master->vps_server_max) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_master->vps_server_max_slices
    if(vps_service_master->vps_server_max_slices) {
    if(cJSON_AddStringToObject(item, "vps_server_max_slices", vps_service_master->vps_server_max_slices) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_master->vps_drive_type
    if(vps_service_master->vps_drive_type) {
    if(cJSON_AddStringToObject(item, "vps_drive_type", vps_service_master->vps_drive_type) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_master->vps_order
    if(vps_service_master->vps_order) {
    if(cJSON_AddStringToObject(item, "vps_order", vps_service_master->vps_order) == NULL) {
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

vps_service_master_t *vps_service_master_parseFromJSON(cJSON *vps_service_masterJSON){

    vps_service_master_t *vps_service_master_local_var = NULL;

    // vps_service_master->vps_id
    cJSON *vps_id = cJSON_GetObjectItemCaseSensitive(vps_service_masterJSON, "vps_id");
    if (cJSON_IsNull(vps_id)) {
        vps_id = NULL;
    }
    if (vps_id) { 
    if(!cJSON_IsString(vps_id) && !cJSON_IsNull(vps_id))
    {
    goto end; //String
    }
    }

    // vps_service_master->vps_name
    cJSON *vps_name = cJSON_GetObjectItemCaseSensitive(vps_service_masterJSON, "vps_name");
    if (cJSON_IsNull(vps_name)) {
        vps_name = NULL;
    }
    if (vps_name) { 
    if(!cJSON_IsString(vps_name) && !cJSON_IsNull(vps_name))
    {
    goto end; //String
    }
    }

    // vps_service_master->vps_ip
    cJSON *vps_ip = cJSON_GetObjectItemCaseSensitive(vps_service_masterJSON, "vps_ip");
    if (cJSON_IsNull(vps_ip)) {
        vps_ip = NULL;
    }
    if (vps_ip) { 
    if(!cJSON_IsString(vps_ip) && !cJSON_IsNull(vps_ip))
    {
    goto end; //String
    }
    }

    // vps_service_master->vps_type
    cJSON *vps_type = cJSON_GetObjectItemCaseSensitive(vps_service_masterJSON, "vps_type");
    if (cJSON_IsNull(vps_type)) {
        vps_type = NULL;
    }
    if (vps_type) { 
    if(!cJSON_IsString(vps_type) && !cJSON_IsNull(vps_type))
    {
    goto end; //String
    }
    }

    // vps_service_master->vps_hdsize
    cJSON *vps_hdsize = cJSON_GetObjectItemCaseSensitive(vps_service_masterJSON, "vps_hdsize");
    if (cJSON_IsNull(vps_hdsize)) {
        vps_hdsize = NULL;
    }
    if (vps_hdsize) { 
    if(!cJSON_IsString(vps_hdsize) && !cJSON_IsNull(vps_hdsize))
    {
    goto end; //String
    }
    }

    // vps_service_master->vps_hdfree
    cJSON *vps_hdfree = cJSON_GetObjectItemCaseSensitive(vps_service_masterJSON, "vps_hdfree");
    if (cJSON_IsNull(vps_hdfree)) {
        vps_hdfree = NULL;
    }
    if (vps_hdfree) { 
    if(!cJSON_IsString(vps_hdfree) && !cJSON_IsNull(vps_hdfree))
    {
    goto end; //String
    }
    }

    // vps_service_master->vps_bits
    cJSON *vps_bits = cJSON_GetObjectItemCaseSensitive(vps_service_masterJSON, "vps_bits");
    if (cJSON_IsNull(vps_bits)) {
        vps_bits = NULL;
    }
    if (vps_bits) { 
    if(!cJSON_IsString(vps_bits) && !cJSON_IsNull(vps_bits))
    {
    goto end; //String
    }
    }

    // vps_service_master->vps_load
    cJSON *vps_load = cJSON_GetObjectItemCaseSensitive(vps_service_masterJSON, "vps_load");
    if (cJSON_IsNull(vps_load)) {
        vps_load = NULL;
    }
    if (vps_load) { 
    if(!cJSON_IsString(vps_load) && !cJSON_IsNull(vps_load))
    {
    goto end; //String
    }
    }

    // vps_service_master->vps_ram
    cJSON *vps_ram = cJSON_GetObjectItemCaseSensitive(vps_service_masterJSON, "vps_ram");
    if (cJSON_IsNull(vps_ram)) {
        vps_ram = NULL;
    }
    if (vps_ram) { 
    if(!cJSON_IsString(vps_ram) && !cJSON_IsNull(vps_ram))
    {
    goto end; //String
    }
    }

    // vps_service_master->vps_cpu_model
    cJSON *vps_cpu_model = cJSON_GetObjectItemCaseSensitive(vps_service_masterJSON, "vps_cpu_model");
    if (cJSON_IsNull(vps_cpu_model)) {
        vps_cpu_model = NULL;
    }
    if (vps_cpu_model) { 
    if(!cJSON_IsString(vps_cpu_model) && !cJSON_IsNull(vps_cpu_model))
    {
    goto end; //String
    }
    }

    // vps_service_master->vps_cpu_mhz
    cJSON *vps_cpu_mhz = cJSON_GetObjectItemCaseSensitive(vps_service_masterJSON, "vps_cpu_mhz");
    if (cJSON_IsNull(vps_cpu_mhz)) {
        vps_cpu_mhz = NULL;
    }
    if (vps_cpu_mhz) { 
    if(!cJSON_IsString(vps_cpu_mhz) && !cJSON_IsNull(vps_cpu_mhz))
    {
    goto end; //String
    }
    }

    // vps_service_master->vps_location
    cJSON *vps_location = cJSON_GetObjectItemCaseSensitive(vps_service_masterJSON, "vps_location");
    if (cJSON_IsNull(vps_location)) {
        vps_location = NULL;
    }
    if (vps_location) { 
    if(!cJSON_IsString(vps_location) && !cJSON_IsNull(vps_location))
    {
    goto end; //String
    }
    }

    // vps_service_master->vps_last_update
    cJSON *vps_last_update = cJSON_GetObjectItemCaseSensitive(vps_service_masterJSON, "vps_last_update");
    if (cJSON_IsNull(vps_last_update)) {
        vps_last_update = NULL;
    }
    if (vps_last_update) { 
    if(!cJSON_IsString(vps_last_update) && !cJSON_IsNull(vps_last_update))
    {
    goto end; //String
    }
    }

    // vps_service_master->vps_raid_building
    cJSON *vps_raid_building = cJSON_GetObjectItemCaseSensitive(vps_service_masterJSON, "vps_raid_building");
    if (cJSON_IsNull(vps_raid_building)) {
        vps_raid_building = NULL;
    }
    if (vps_raid_building) { 
    if(!cJSON_IsString(vps_raid_building) && !cJSON_IsNull(vps_raid_building))
    {
    goto end; //String
    }
    }

    // vps_service_master->vps_kernel
    cJSON *vps_kernel = cJSON_GetObjectItemCaseSensitive(vps_service_masterJSON, "vps_kernel");
    if (cJSON_IsNull(vps_kernel)) {
        vps_kernel = NULL;
    }
    if (vps_kernel) { 
    if(!cJSON_IsString(vps_kernel) && !cJSON_IsNull(vps_kernel))
    {
    goto end; //String
    }
    }

    // vps_service_master->vps_available
    cJSON *vps_available = cJSON_GetObjectItemCaseSensitive(vps_service_masterJSON, "vps_available");
    if (cJSON_IsNull(vps_available)) {
        vps_available = NULL;
    }
    if (vps_available) { 
    if(!cJSON_IsString(vps_available) && !cJSON_IsNull(vps_available))
    {
    goto end; //String
    }
    }

    // vps_service_master->vps_cores
    cJSON *vps_cores = cJSON_GetObjectItemCaseSensitive(vps_service_masterJSON, "vps_cores");
    if (cJSON_IsNull(vps_cores)) {
        vps_cores = NULL;
    }
    if (vps_cores) { 
    if(!cJSON_IsString(vps_cores) && !cJSON_IsNull(vps_cores))
    {
    goto end; //String
    }
    }

    // vps_service_master->vps_iowait
    cJSON *vps_iowait = cJSON_GetObjectItemCaseSensitive(vps_service_masterJSON, "vps_iowait");
    if (cJSON_IsNull(vps_iowait)) {
        vps_iowait = NULL;
    }
    if (vps_iowait) { 
    if(!cJSON_IsString(vps_iowait) && !cJSON_IsNull(vps_iowait))
    {
    goto end; //String
    }
    }

    // vps_service_master->vps_raid_status
    cJSON *vps_raid_status = cJSON_GetObjectItemCaseSensitive(vps_service_masterJSON, "vps_raid_status");
    if (cJSON_IsNull(vps_raid_status)) {
        vps_raid_status = NULL;
    }
    if (vps_raid_status) { 
    if(!cJSON_IsString(vps_raid_status) && !cJSON_IsNull(vps_raid_status))
    {
    goto end; //String
    }
    }

    // vps_service_master->vps_mounts
    cJSON *vps_mounts = cJSON_GetObjectItemCaseSensitive(vps_service_masterJSON, "vps_mounts");
    if (cJSON_IsNull(vps_mounts)) {
        vps_mounts = NULL;
    }
    if (vps_mounts) { 
    if(!cJSON_IsString(vps_mounts) && !cJSON_IsNull(vps_mounts))
    {
    goto end; //String
    }
    }

    // vps_service_master->vps_server_max
    cJSON *vps_server_max = cJSON_GetObjectItemCaseSensitive(vps_service_masterJSON, "vps_server_max");
    if (cJSON_IsNull(vps_server_max)) {
        vps_server_max = NULL;
    }
    if (vps_server_max) { 
    if(!cJSON_IsString(vps_server_max) && !cJSON_IsNull(vps_server_max))
    {
    goto end; //String
    }
    }

    // vps_service_master->vps_server_max_slices
    cJSON *vps_server_max_slices = cJSON_GetObjectItemCaseSensitive(vps_service_masterJSON, "vps_server_max_slices");
    if (cJSON_IsNull(vps_server_max_slices)) {
        vps_server_max_slices = NULL;
    }
    if (vps_server_max_slices) { 
    if(!cJSON_IsString(vps_server_max_slices) && !cJSON_IsNull(vps_server_max_slices))
    {
    goto end; //String
    }
    }

    // vps_service_master->vps_drive_type
    cJSON *vps_drive_type = cJSON_GetObjectItemCaseSensitive(vps_service_masterJSON, "vps_drive_type");
    if (cJSON_IsNull(vps_drive_type)) {
        vps_drive_type = NULL;
    }
    if (vps_drive_type) { 
    if(!cJSON_IsString(vps_drive_type) && !cJSON_IsNull(vps_drive_type))
    {
    goto end; //String
    }
    }

    // vps_service_master->vps_order
    cJSON *vps_order = cJSON_GetObjectItemCaseSensitive(vps_service_masterJSON, "vps_order");
    if (cJSON_IsNull(vps_order)) {
        vps_order = NULL;
    }
    if (vps_order) { 
    if(!cJSON_IsString(vps_order) && !cJSON_IsNull(vps_order))
    {
    goto end; //String
    }
    }


    vps_service_master_local_var = vps_service_master_create_internal (
        vps_id && !cJSON_IsNull(vps_id) ? strdup(vps_id->valuestring) : NULL,
        vps_name && !cJSON_IsNull(vps_name) ? strdup(vps_name->valuestring) : NULL,
        vps_ip && !cJSON_IsNull(vps_ip) ? strdup(vps_ip->valuestring) : NULL,
        vps_type && !cJSON_IsNull(vps_type) ? strdup(vps_type->valuestring) : NULL,
        vps_hdsize && !cJSON_IsNull(vps_hdsize) ? strdup(vps_hdsize->valuestring) : NULL,
        vps_hdfree && !cJSON_IsNull(vps_hdfree) ? strdup(vps_hdfree->valuestring) : NULL,
        vps_bits && !cJSON_IsNull(vps_bits) ? strdup(vps_bits->valuestring) : NULL,
        vps_load && !cJSON_IsNull(vps_load) ? strdup(vps_load->valuestring) : NULL,
        vps_ram && !cJSON_IsNull(vps_ram) ? strdup(vps_ram->valuestring) : NULL,
        vps_cpu_model && !cJSON_IsNull(vps_cpu_model) ? strdup(vps_cpu_model->valuestring) : NULL,
        vps_cpu_mhz && !cJSON_IsNull(vps_cpu_mhz) ? strdup(vps_cpu_mhz->valuestring) : NULL,
        vps_location && !cJSON_IsNull(vps_location) ? strdup(vps_location->valuestring) : NULL,
        vps_last_update && !cJSON_IsNull(vps_last_update) ? strdup(vps_last_update->valuestring) : NULL,
        vps_raid_building && !cJSON_IsNull(vps_raid_building) ? strdup(vps_raid_building->valuestring) : NULL,
        vps_kernel && !cJSON_IsNull(vps_kernel) ? strdup(vps_kernel->valuestring) : NULL,
        vps_available && !cJSON_IsNull(vps_available) ? strdup(vps_available->valuestring) : NULL,
        vps_cores && !cJSON_IsNull(vps_cores) ? strdup(vps_cores->valuestring) : NULL,
        vps_iowait && !cJSON_IsNull(vps_iowait) ? strdup(vps_iowait->valuestring) : NULL,
        vps_raid_status && !cJSON_IsNull(vps_raid_status) ? strdup(vps_raid_status->valuestring) : NULL,
        vps_mounts && !cJSON_IsNull(vps_mounts) ? strdup(vps_mounts->valuestring) : NULL,
        vps_server_max && !cJSON_IsNull(vps_server_max) ? strdup(vps_server_max->valuestring) : NULL,
        vps_server_max_slices && !cJSON_IsNull(vps_server_max_slices) ? strdup(vps_server_max_slices->valuestring) : NULL,
        vps_drive_type && !cJSON_IsNull(vps_drive_type) ? strdup(vps_drive_type->valuestring) : NULL,
        vps_order && !cJSON_IsNull(vps_order) ? strdup(vps_order->valuestring) : NULL
        );

    return vps_service_master_local_var;
end:
    return NULL;

}
