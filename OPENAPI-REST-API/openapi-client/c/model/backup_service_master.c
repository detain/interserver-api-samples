#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "backup_service_master.h"



static backup_service_master_t *backup_service_master_create_internal(
    int backup_id,
    char *backup_name,
    char *backup_ip,
    int backup_type,
    int backup_hdsize,
    int backup_hdfree,
    char *backup_last_update,
    int backup_available,
    int backup_iowait,
    int backup_order
    ) {
    backup_service_master_t *backup_service_master_local_var = malloc(sizeof(backup_service_master_t));
    if (!backup_service_master_local_var) {
        return NULL;
    }
    backup_service_master_local_var->backup_id = backup_id;
    backup_service_master_local_var->backup_name = backup_name;
    backup_service_master_local_var->backup_ip = backup_ip;
    backup_service_master_local_var->backup_type = backup_type;
    backup_service_master_local_var->backup_hdsize = backup_hdsize;
    backup_service_master_local_var->backup_hdfree = backup_hdfree;
    backup_service_master_local_var->backup_last_update = backup_last_update;
    backup_service_master_local_var->backup_available = backup_available;
    backup_service_master_local_var->backup_iowait = backup_iowait;
    backup_service_master_local_var->backup_order = backup_order;

    backup_service_master_local_var->_library_owned = 1;
    return backup_service_master_local_var;
}

__attribute__((deprecated)) backup_service_master_t *backup_service_master_create(
    int backup_id,
    char *backup_name,
    char *backup_ip,
    int backup_type,
    int backup_hdsize,
    int backup_hdfree,
    char *backup_last_update,
    int backup_available,
    int backup_iowait,
    int backup_order
    ) {
    return backup_service_master_create_internal (
        backup_id,
        backup_name,
        backup_ip,
        backup_type,
        backup_hdsize,
        backup_hdfree,
        backup_last_update,
        backup_available,
        backup_iowait,
        backup_order
        );
}

void backup_service_master_free(backup_service_master_t *backup_service_master) {
    if(NULL == backup_service_master){
        return ;
    }
    if(backup_service_master->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "backup_service_master_free");
        return ;
    }
    listEntry_t *listEntry;
    if (backup_service_master->backup_name) {
        free(backup_service_master->backup_name);
        backup_service_master->backup_name = NULL;
    }
    if (backup_service_master->backup_ip) {
        free(backup_service_master->backup_ip);
        backup_service_master->backup_ip = NULL;
    }
    if (backup_service_master->backup_last_update) {
        free(backup_service_master->backup_last_update);
        backup_service_master->backup_last_update = NULL;
    }
    free(backup_service_master);
}

cJSON *backup_service_master_convertToJSON(backup_service_master_t *backup_service_master) {
    cJSON *item = cJSON_CreateObject();

    // backup_service_master->backup_id
    if(backup_service_master->backup_id) {
    if(cJSON_AddNumberToObject(item, "backup_id", backup_service_master->backup_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // backup_service_master->backup_name
    if(backup_service_master->backup_name) {
    if(cJSON_AddStringToObject(item, "backup_name", backup_service_master->backup_name) == NULL) {
    goto fail; //String
    }
    }


    // backup_service_master->backup_ip
    if(backup_service_master->backup_ip) {
    if(cJSON_AddStringToObject(item, "backup_ip", backup_service_master->backup_ip) == NULL) {
    goto fail; //String
    }
    }


    // backup_service_master->backup_type
    if(backup_service_master->backup_type) {
    if(cJSON_AddNumberToObject(item, "backup_type", backup_service_master->backup_type) == NULL) {
    goto fail; //Numeric
    }
    }


    // backup_service_master->backup_hdsize
    if(backup_service_master->backup_hdsize) {
    if(cJSON_AddNumberToObject(item, "backup_hdsize", backup_service_master->backup_hdsize) == NULL) {
    goto fail; //Numeric
    }
    }


    // backup_service_master->backup_hdfree
    if(backup_service_master->backup_hdfree) {
    if(cJSON_AddNumberToObject(item, "backup_hdfree", backup_service_master->backup_hdfree) == NULL) {
    goto fail; //Numeric
    }
    }


    // backup_service_master->backup_last_update
    if(backup_service_master->backup_last_update) {
    if(cJSON_AddStringToObject(item, "backup_last_update", backup_service_master->backup_last_update) == NULL) {
    goto fail; //String
    }
    }


    // backup_service_master->backup_available
    if(backup_service_master->backup_available) {
    if(cJSON_AddNumberToObject(item, "backup_available", backup_service_master->backup_available) == NULL) {
    goto fail; //Numeric
    }
    }


    // backup_service_master->backup_iowait
    if(backup_service_master->backup_iowait) {
    if(cJSON_AddNumberToObject(item, "backup_iowait", backup_service_master->backup_iowait) == NULL) {
    goto fail; //Numeric
    }
    }


    // backup_service_master->backup_order
    if(backup_service_master->backup_order) {
    if(cJSON_AddNumberToObject(item, "backup_order", backup_service_master->backup_order) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

backup_service_master_t *backup_service_master_parseFromJSON(cJSON *backup_service_masterJSON){

    backup_service_master_t *backup_service_master_local_var = NULL;

    // backup_service_master->backup_id
    cJSON *backup_id = cJSON_GetObjectItemCaseSensitive(backup_service_masterJSON, "backup_id");
    if (cJSON_IsNull(backup_id)) {
        backup_id = NULL;
    }
    if (backup_id) { 
    if(!cJSON_IsNumber(backup_id))
    {
    goto end; //Numeric
    }
    }

    // backup_service_master->backup_name
    cJSON *backup_name = cJSON_GetObjectItemCaseSensitive(backup_service_masterJSON, "backup_name");
    if (cJSON_IsNull(backup_name)) {
        backup_name = NULL;
    }
    if (backup_name) { 
    if(!cJSON_IsString(backup_name) && !cJSON_IsNull(backup_name))
    {
    goto end; //String
    }
    }

    // backup_service_master->backup_ip
    cJSON *backup_ip = cJSON_GetObjectItemCaseSensitive(backup_service_masterJSON, "backup_ip");
    if (cJSON_IsNull(backup_ip)) {
        backup_ip = NULL;
    }
    if (backup_ip) { 
    if(!cJSON_IsString(backup_ip) && !cJSON_IsNull(backup_ip))
    {
    goto end; //String
    }
    }

    // backup_service_master->backup_type
    cJSON *backup_type = cJSON_GetObjectItemCaseSensitive(backup_service_masterJSON, "backup_type");
    if (cJSON_IsNull(backup_type)) {
        backup_type = NULL;
    }
    if (backup_type) { 
    if(!cJSON_IsNumber(backup_type))
    {
    goto end; //Numeric
    }
    }

    // backup_service_master->backup_hdsize
    cJSON *backup_hdsize = cJSON_GetObjectItemCaseSensitive(backup_service_masterJSON, "backup_hdsize");
    if (cJSON_IsNull(backup_hdsize)) {
        backup_hdsize = NULL;
    }
    if (backup_hdsize) { 
    if(!cJSON_IsNumber(backup_hdsize))
    {
    goto end; //Numeric
    }
    }

    // backup_service_master->backup_hdfree
    cJSON *backup_hdfree = cJSON_GetObjectItemCaseSensitive(backup_service_masterJSON, "backup_hdfree");
    if (cJSON_IsNull(backup_hdfree)) {
        backup_hdfree = NULL;
    }
    if (backup_hdfree) { 
    if(!cJSON_IsNumber(backup_hdfree))
    {
    goto end; //Numeric
    }
    }

    // backup_service_master->backup_last_update
    cJSON *backup_last_update = cJSON_GetObjectItemCaseSensitive(backup_service_masterJSON, "backup_last_update");
    if (cJSON_IsNull(backup_last_update)) {
        backup_last_update = NULL;
    }
    if (backup_last_update) { 
    if(!cJSON_IsString(backup_last_update) && !cJSON_IsNull(backup_last_update))
    {
    goto end; //String
    }
    }

    // backup_service_master->backup_available
    cJSON *backup_available = cJSON_GetObjectItemCaseSensitive(backup_service_masterJSON, "backup_available");
    if (cJSON_IsNull(backup_available)) {
        backup_available = NULL;
    }
    if (backup_available) { 
    if(!cJSON_IsNumber(backup_available))
    {
    goto end; //Numeric
    }
    }

    // backup_service_master->backup_iowait
    cJSON *backup_iowait = cJSON_GetObjectItemCaseSensitive(backup_service_masterJSON, "backup_iowait");
    if (cJSON_IsNull(backup_iowait)) {
        backup_iowait = NULL;
    }
    if (backup_iowait) { 
    if(!cJSON_IsNumber(backup_iowait))
    {
    goto end; //Numeric
    }
    }

    // backup_service_master->backup_order
    cJSON *backup_order = cJSON_GetObjectItemCaseSensitive(backup_service_masterJSON, "backup_order");
    if (cJSON_IsNull(backup_order)) {
        backup_order = NULL;
    }
    if (backup_order) { 
    if(!cJSON_IsNumber(backup_order))
    {
    goto end; //Numeric
    }
    }


    backup_service_master_local_var = backup_service_master_create_internal (
        backup_id ? backup_id->valuedouble : 0,
        backup_name && !cJSON_IsNull(backup_name) ? strdup(backup_name->valuestring) : NULL,
        backup_ip && !cJSON_IsNull(backup_ip) ? strdup(backup_ip->valuestring) : NULL,
        backup_type ? backup_type->valuedouble : 0,
        backup_hdsize ? backup_hdsize->valuedouble : 0,
        backup_hdfree ? backup_hdfree->valuedouble : 0,
        backup_last_update && !cJSON_IsNull(backup_last_update) ? strdup(backup_last_update->valuestring) : NULL,
        backup_available ? backup_available->valuedouble : 0,
        backup_iowait ? backup_iowait->valuedouble : 0,
        backup_order ? backup_order->valuedouble : 0
        );

    return backup_service_master_local_var;
end:
    return NULL;

}
