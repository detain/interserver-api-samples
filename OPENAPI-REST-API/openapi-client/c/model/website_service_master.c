#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "website_service_master.h"



static website_service_master_t *website_service_master_create_internal(
    char *website_id,
    char *website_name,
    char *website_ip,
    char *website_type,
    char *website_available,
    char *website_hdsize,
    char *website_hdfree,
    char *website_load,
    char *website_last_update,
    char *website_max_sites,
    char *website_order,
    char *website_partitions,
    char *website_dns1,
    char *website_dns2
    ) {
    website_service_master_t *website_service_master_local_var = malloc(sizeof(website_service_master_t));
    if (!website_service_master_local_var) {
        return NULL;
    }
    website_service_master_local_var->website_id = website_id;
    website_service_master_local_var->website_name = website_name;
    website_service_master_local_var->website_ip = website_ip;
    website_service_master_local_var->website_type = website_type;
    website_service_master_local_var->website_available = website_available;
    website_service_master_local_var->website_hdsize = website_hdsize;
    website_service_master_local_var->website_hdfree = website_hdfree;
    website_service_master_local_var->website_load = website_load;
    website_service_master_local_var->website_last_update = website_last_update;
    website_service_master_local_var->website_max_sites = website_max_sites;
    website_service_master_local_var->website_order = website_order;
    website_service_master_local_var->website_partitions = website_partitions;
    website_service_master_local_var->website_dns1 = website_dns1;
    website_service_master_local_var->website_dns2 = website_dns2;

    website_service_master_local_var->_library_owned = 1;
    return website_service_master_local_var;
}

__attribute__((deprecated)) website_service_master_t *website_service_master_create(
    char *website_id,
    char *website_name,
    char *website_ip,
    char *website_type,
    char *website_available,
    char *website_hdsize,
    char *website_hdfree,
    char *website_load,
    char *website_last_update,
    char *website_max_sites,
    char *website_order,
    char *website_partitions,
    char *website_dns1,
    char *website_dns2
    ) {
    return website_service_master_create_internal (
        website_id,
        website_name,
        website_ip,
        website_type,
        website_available,
        website_hdsize,
        website_hdfree,
        website_load,
        website_last_update,
        website_max_sites,
        website_order,
        website_partitions,
        website_dns1,
        website_dns2
        );
}

void website_service_master_free(website_service_master_t *website_service_master) {
    if(NULL == website_service_master){
        return ;
    }
    if(website_service_master->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "website_service_master_free");
        return ;
    }
    listEntry_t *listEntry;
    if (website_service_master->website_id) {
        free(website_service_master->website_id);
        website_service_master->website_id = NULL;
    }
    if (website_service_master->website_name) {
        free(website_service_master->website_name);
        website_service_master->website_name = NULL;
    }
    if (website_service_master->website_ip) {
        free(website_service_master->website_ip);
        website_service_master->website_ip = NULL;
    }
    if (website_service_master->website_type) {
        free(website_service_master->website_type);
        website_service_master->website_type = NULL;
    }
    if (website_service_master->website_available) {
        free(website_service_master->website_available);
        website_service_master->website_available = NULL;
    }
    if (website_service_master->website_hdsize) {
        free(website_service_master->website_hdsize);
        website_service_master->website_hdsize = NULL;
    }
    if (website_service_master->website_hdfree) {
        free(website_service_master->website_hdfree);
        website_service_master->website_hdfree = NULL;
    }
    if (website_service_master->website_load) {
        free(website_service_master->website_load);
        website_service_master->website_load = NULL;
    }
    if (website_service_master->website_last_update) {
        free(website_service_master->website_last_update);
        website_service_master->website_last_update = NULL;
    }
    if (website_service_master->website_max_sites) {
        free(website_service_master->website_max_sites);
        website_service_master->website_max_sites = NULL;
    }
    if (website_service_master->website_order) {
        free(website_service_master->website_order);
        website_service_master->website_order = NULL;
    }
    if (website_service_master->website_partitions) {
        free(website_service_master->website_partitions);
        website_service_master->website_partitions = NULL;
    }
    if (website_service_master->website_dns1) {
        free(website_service_master->website_dns1);
        website_service_master->website_dns1 = NULL;
    }
    if (website_service_master->website_dns2) {
        free(website_service_master->website_dns2);
        website_service_master->website_dns2 = NULL;
    }
    free(website_service_master);
}

cJSON *website_service_master_convertToJSON(website_service_master_t *website_service_master) {
    cJSON *item = cJSON_CreateObject();

    // website_service_master->website_id
    if(website_service_master->website_id) {
    if(cJSON_AddStringToObject(item, "website_id", website_service_master->website_id) == NULL) {
    goto fail; //String
    }
    }


    // website_service_master->website_name
    if(website_service_master->website_name) {
    if(cJSON_AddStringToObject(item, "website_name", website_service_master->website_name) == NULL) {
    goto fail; //String
    }
    }


    // website_service_master->website_ip
    if(website_service_master->website_ip) {
    if(cJSON_AddStringToObject(item, "website_ip", website_service_master->website_ip) == NULL) {
    goto fail; //String
    }
    }


    // website_service_master->website_type
    if(website_service_master->website_type) {
    if(cJSON_AddStringToObject(item, "website_type", website_service_master->website_type) == NULL) {
    goto fail; //String
    }
    }


    // website_service_master->website_available
    if(website_service_master->website_available) {
    if(cJSON_AddStringToObject(item, "website_available", website_service_master->website_available) == NULL) {
    goto fail; //String
    }
    }


    // website_service_master->website_hdsize
    if(website_service_master->website_hdsize) {
    if(cJSON_AddStringToObject(item, "website_hdsize", website_service_master->website_hdsize) == NULL) {
    goto fail; //String
    }
    }


    // website_service_master->website_hdfree
    if(website_service_master->website_hdfree) {
    if(cJSON_AddStringToObject(item, "website_hdfree", website_service_master->website_hdfree) == NULL) {
    goto fail; //String
    }
    }


    // website_service_master->website_load
    if(website_service_master->website_load) {
    if(cJSON_AddStringToObject(item, "website_load", website_service_master->website_load) == NULL) {
    goto fail; //String
    }
    }


    // website_service_master->website_last_update
    if(website_service_master->website_last_update) {
    if(cJSON_AddStringToObject(item, "website_last_update", website_service_master->website_last_update) == NULL) {
    goto fail; //String
    }
    }


    // website_service_master->website_max_sites
    if(website_service_master->website_max_sites) {
    if(cJSON_AddStringToObject(item, "website_max_sites", website_service_master->website_max_sites) == NULL) {
    goto fail; //String
    }
    }


    // website_service_master->website_order
    if(website_service_master->website_order) {
    if(cJSON_AddStringToObject(item, "website_order", website_service_master->website_order) == NULL) {
    goto fail; //String
    }
    }


    // website_service_master->website_partitions
    if(website_service_master->website_partitions) {
    if(cJSON_AddStringToObject(item, "website_partitions", website_service_master->website_partitions) == NULL) {
    goto fail; //String
    }
    }


    // website_service_master->website_dns1
    if(website_service_master->website_dns1) {
    if(cJSON_AddStringToObject(item, "website_dns1", website_service_master->website_dns1) == NULL) {
    goto fail; //String
    }
    }


    // website_service_master->website_dns2
    if(website_service_master->website_dns2) {
    if(cJSON_AddStringToObject(item, "website_dns2", website_service_master->website_dns2) == NULL) {
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

website_service_master_t *website_service_master_parseFromJSON(cJSON *website_service_masterJSON){

    website_service_master_t *website_service_master_local_var = NULL;

    // website_service_master->website_id
    cJSON *website_id = cJSON_GetObjectItemCaseSensitive(website_service_masterJSON, "website_id");
    if (cJSON_IsNull(website_id)) {
        website_id = NULL;
    }
    if (website_id) { 
    if(!cJSON_IsString(website_id) && !cJSON_IsNull(website_id))
    {
    goto end; //String
    }
    }

    // website_service_master->website_name
    cJSON *website_name = cJSON_GetObjectItemCaseSensitive(website_service_masterJSON, "website_name");
    if (cJSON_IsNull(website_name)) {
        website_name = NULL;
    }
    if (website_name) { 
    if(!cJSON_IsString(website_name) && !cJSON_IsNull(website_name))
    {
    goto end; //String
    }
    }

    // website_service_master->website_ip
    cJSON *website_ip = cJSON_GetObjectItemCaseSensitive(website_service_masterJSON, "website_ip");
    if (cJSON_IsNull(website_ip)) {
        website_ip = NULL;
    }
    if (website_ip) { 
    if(!cJSON_IsString(website_ip) && !cJSON_IsNull(website_ip))
    {
    goto end; //String
    }
    }

    // website_service_master->website_type
    cJSON *website_type = cJSON_GetObjectItemCaseSensitive(website_service_masterJSON, "website_type");
    if (cJSON_IsNull(website_type)) {
        website_type = NULL;
    }
    if (website_type) { 
    if(!cJSON_IsString(website_type) && !cJSON_IsNull(website_type))
    {
    goto end; //String
    }
    }

    // website_service_master->website_available
    cJSON *website_available = cJSON_GetObjectItemCaseSensitive(website_service_masterJSON, "website_available");
    if (cJSON_IsNull(website_available)) {
        website_available = NULL;
    }
    if (website_available) { 
    if(!cJSON_IsString(website_available) && !cJSON_IsNull(website_available))
    {
    goto end; //String
    }
    }

    // website_service_master->website_hdsize
    cJSON *website_hdsize = cJSON_GetObjectItemCaseSensitive(website_service_masterJSON, "website_hdsize");
    if (cJSON_IsNull(website_hdsize)) {
        website_hdsize = NULL;
    }
    if (website_hdsize) { 
    if(!cJSON_IsString(website_hdsize) && !cJSON_IsNull(website_hdsize))
    {
    goto end; //String
    }
    }

    // website_service_master->website_hdfree
    cJSON *website_hdfree = cJSON_GetObjectItemCaseSensitive(website_service_masterJSON, "website_hdfree");
    if (cJSON_IsNull(website_hdfree)) {
        website_hdfree = NULL;
    }
    if (website_hdfree) { 
    if(!cJSON_IsString(website_hdfree) && !cJSON_IsNull(website_hdfree))
    {
    goto end; //String
    }
    }

    // website_service_master->website_load
    cJSON *website_load = cJSON_GetObjectItemCaseSensitive(website_service_masterJSON, "website_load");
    if (cJSON_IsNull(website_load)) {
        website_load = NULL;
    }
    if (website_load) { 
    if(!cJSON_IsString(website_load) && !cJSON_IsNull(website_load))
    {
    goto end; //String
    }
    }

    // website_service_master->website_last_update
    cJSON *website_last_update = cJSON_GetObjectItemCaseSensitive(website_service_masterJSON, "website_last_update");
    if (cJSON_IsNull(website_last_update)) {
        website_last_update = NULL;
    }
    if (website_last_update) { 
    if(!cJSON_IsString(website_last_update) && !cJSON_IsNull(website_last_update))
    {
    goto end; //String
    }
    }

    // website_service_master->website_max_sites
    cJSON *website_max_sites = cJSON_GetObjectItemCaseSensitive(website_service_masterJSON, "website_max_sites");
    if (cJSON_IsNull(website_max_sites)) {
        website_max_sites = NULL;
    }
    if (website_max_sites) { 
    if(!cJSON_IsString(website_max_sites) && !cJSON_IsNull(website_max_sites))
    {
    goto end; //String
    }
    }

    // website_service_master->website_order
    cJSON *website_order = cJSON_GetObjectItemCaseSensitive(website_service_masterJSON, "website_order");
    if (cJSON_IsNull(website_order)) {
        website_order = NULL;
    }
    if (website_order) { 
    if(!cJSON_IsString(website_order) && !cJSON_IsNull(website_order))
    {
    goto end; //String
    }
    }

    // website_service_master->website_partitions
    cJSON *website_partitions = cJSON_GetObjectItemCaseSensitive(website_service_masterJSON, "website_partitions");
    if (cJSON_IsNull(website_partitions)) {
        website_partitions = NULL;
    }
    if (website_partitions) { 
    if(!cJSON_IsString(website_partitions) && !cJSON_IsNull(website_partitions))
    {
    goto end; //String
    }
    }

    // website_service_master->website_dns1
    cJSON *website_dns1 = cJSON_GetObjectItemCaseSensitive(website_service_masterJSON, "website_dns1");
    if (cJSON_IsNull(website_dns1)) {
        website_dns1 = NULL;
    }
    if (website_dns1) { 
    if(!cJSON_IsString(website_dns1) && !cJSON_IsNull(website_dns1))
    {
    goto end; //String
    }
    }

    // website_service_master->website_dns2
    cJSON *website_dns2 = cJSON_GetObjectItemCaseSensitive(website_service_masterJSON, "website_dns2");
    if (cJSON_IsNull(website_dns2)) {
        website_dns2 = NULL;
    }
    if (website_dns2) { 
    if(!cJSON_IsString(website_dns2) && !cJSON_IsNull(website_dns2))
    {
    goto end; //String
    }
    }


    website_service_master_local_var = website_service_master_create_internal (
        website_id && !cJSON_IsNull(website_id) ? strdup(website_id->valuestring) : NULL,
        website_name && !cJSON_IsNull(website_name) ? strdup(website_name->valuestring) : NULL,
        website_ip && !cJSON_IsNull(website_ip) ? strdup(website_ip->valuestring) : NULL,
        website_type && !cJSON_IsNull(website_type) ? strdup(website_type->valuestring) : NULL,
        website_available && !cJSON_IsNull(website_available) ? strdup(website_available->valuestring) : NULL,
        website_hdsize && !cJSON_IsNull(website_hdsize) ? strdup(website_hdsize->valuestring) : NULL,
        website_hdfree && !cJSON_IsNull(website_hdfree) ? strdup(website_hdfree->valuestring) : NULL,
        website_load && !cJSON_IsNull(website_load) ? strdup(website_load->valuestring) : NULL,
        website_last_update && !cJSON_IsNull(website_last_update) ? strdup(website_last_update->valuestring) : NULL,
        website_max_sites && !cJSON_IsNull(website_max_sites) ? strdup(website_max_sites->valuestring) : NULL,
        website_order && !cJSON_IsNull(website_order) ? strdup(website_order->valuestring) : NULL,
        website_partitions && !cJSON_IsNull(website_partitions) ? strdup(website_partitions->valuestring) : NULL,
        website_dns1 && !cJSON_IsNull(website_dns1) ? strdup(website_dns1->valuestring) : NULL,
        website_dns2 && !cJSON_IsNull(website_dns2) ? strdup(website_dns2->valuestring) : NULL
        );

    return website_service_master_local_var;
end:
    return NULL;

}
