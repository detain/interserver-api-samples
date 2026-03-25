#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "backup_service_master.h"



static backup_service_master_t *backup_service_master_create_internal(
    int *backup_id,
    char *backup_name,
    char *backup_ip,
    int *backup_type,
    int *backup_hdsize,
    int *backup_hdfree,
    char *backup_last_update,
    int *backup_available,
    int *backup_iowait,
    int *backup_order
    ) {
    backup_service_master_t *backup_service_master_local_var = malloc(sizeof(backup_service_master_t));
    if (!backup_service_master_local_var) {
        return NULL;
    }
    memset(backup_service_master_local_var, 0, sizeof(backup_service_master_t));
    backup_service_master_local_var->_library_owned = 1;
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
    return backup_service_master_local_var;
}

__attribute__((deprecated)) backup_service_master_t *backup_service_master_create(
    int *backup_id,
    char *backup_name,
    char *backup_ip,
    int *backup_type,
    int *backup_hdsize,
    int *backup_hdfree,
    char *backup_last_update,
    int *backup_available,
    int *backup_iowait,
    int *backup_order
    ) {
    int *backup_id_copy = NULL;
    if (backup_id) {
        backup_id_copy = malloc(sizeof(int));
        if (backup_id_copy) *backup_id_copy = *backup_id;
    }
    int *backup_type_copy = NULL;
    if (backup_type) {
        backup_type_copy = malloc(sizeof(int));
        if (backup_type_copy) *backup_type_copy = *backup_type;
    }
    int *backup_hdsize_copy = NULL;
    if (backup_hdsize) {
        backup_hdsize_copy = malloc(sizeof(int));
        if (backup_hdsize_copy) *backup_hdsize_copy = *backup_hdsize;
    }
    int *backup_hdfree_copy = NULL;
    if (backup_hdfree) {
        backup_hdfree_copy = malloc(sizeof(int));
        if (backup_hdfree_copy) *backup_hdfree_copy = *backup_hdfree;
    }
    int *backup_available_copy = NULL;
    if (backup_available) {
        backup_available_copy = malloc(sizeof(int));
        if (backup_available_copy) *backup_available_copy = *backup_available;
    }
    int *backup_iowait_copy = NULL;
    if (backup_iowait) {
        backup_iowait_copy = malloc(sizeof(int));
        if (backup_iowait_copy) *backup_iowait_copy = *backup_iowait;
    }
    int *backup_order_copy = NULL;
    if (backup_order) {
        backup_order_copy = malloc(sizeof(int));
        if (backup_order_copy) *backup_order_copy = *backup_order;
    }
    backup_service_master_t *result = backup_service_master_create_internal (
        backup_id_copy,
        backup_name,
        backup_ip,
        backup_type_copy,
        backup_hdsize_copy,
        backup_hdfree_copy,
        backup_last_update,
        backup_available_copy,
        backup_iowait_copy,
        backup_order_copy
        );
    if (!result) {
        free(backup_id_copy);
        free(backup_type_copy);
        free(backup_hdsize_copy);
        free(backup_hdfree_copy);
        free(backup_available_copy);
        free(backup_iowait_copy);
        free(backup_order_copy);
    }
    return result;
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
    if (backup_service_master->backup_id) {
        free(backup_service_master->backup_id);
        backup_service_master->backup_id = NULL;
    }
    if (backup_service_master->backup_name) {
        free(backup_service_master->backup_name);
        backup_service_master->backup_name = NULL;
    }
    if (backup_service_master->backup_ip) {
        free(backup_service_master->backup_ip);
        backup_service_master->backup_ip = NULL;
    }
    if (backup_service_master->backup_type) {
        free(backup_service_master->backup_type);
        backup_service_master->backup_type = NULL;
    }
    if (backup_service_master->backup_hdsize) {
        free(backup_service_master->backup_hdsize);
        backup_service_master->backup_hdsize = NULL;
    }
    if (backup_service_master->backup_hdfree) {
        free(backup_service_master->backup_hdfree);
        backup_service_master->backup_hdfree = NULL;
    }
    if (backup_service_master->backup_last_update) {
        free(backup_service_master->backup_last_update);
        backup_service_master->backup_last_update = NULL;
    }
    if (backup_service_master->backup_available) {
        free(backup_service_master->backup_available);
        backup_service_master->backup_available = NULL;
    }
    if (backup_service_master->backup_iowait) {
        free(backup_service_master->backup_iowait);
        backup_service_master->backup_iowait = NULL;
    }
    if (backup_service_master->backup_order) {
        free(backup_service_master->backup_order);
        backup_service_master->backup_order = NULL;
    }
    free(backup_service_master);
}

cJSON *backup_service_master_convertToJSON(backup_service_master_t *backup_service_master) {
    cJSON *item = cJSON_CreateObject();

    // backup_service_master->backup_id
    if(backup_service_master->backup_id) {
    if(cJSON_AddNumberToObject(item, "backup_id", *backup_service_master->backup_id) == NULL) {
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
    if(cJSON_AddNumberToObject(item, "backup_type", *backup_service_master->backup_type) == NULL) {
    goto fail; //Numeric
    }
    }


    // backup_service_master->backup_hdsize
    if(backup_service_master->backup_hdsize) {
    if(cJSON_AddNumberToObject(item, "backup_hdsize", *backup_service_master->backup_hdsize) == NULL) {
    goto fail; //Numeric
    }
    }


    // backup_service_master->backup_hdfree
    if(backup_service_master->backup_hdfree) {
    if(cJSON_AddNumberToObject(item, "backup_hdfree", *backup_service_master->backup_hdfree) == NULL) {
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
    if(cJSON_AddNumberToObject(item, "backup_available", *backup_service_master->backup_available) == NULL) {
    goto fail; //Numeric
    }
    }


    // backup_service_master->backup_iowait
    if(backup_service_master->backup_iowait) {
    if(cJSON_AddNumberToObject(item, "backup_iowait", *backup_service_master->backup_iowait) == NULL) {
    goto fail; //Numeric
    }
    }


    // backup_service_master->backup_order
    if(backup_service_master->backup_order) {
    if(cJSON_AddNumberToObject(item, "backup_order", *backup_service_master->backup_order) == NULL) {
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

    // define the local variable for backup_service_master->backup_id
    int *backup_id_local_var = NULL;

    char *backup_name_local_str = NULL;

    char *backup_ip_local_str = NULL;

    // define the local variable for backup_service_master->backup_type
    int *backup_type_local_var = NULL;

    // define the local variable for backup_service_master->backup_hdsize
    int *backup_hdsize_local_var = NULL;

    // define the local variable for backup_service_master->backup_hdfree
    int *backup_hdfree_local_var = NULL;

    char *backup_last_update_local_str = NULL;

    // define the local variable for backup_service_master->backup_available
    int *backup_available_local_var = NULL;

    // define the local variable for backup_service_master->backup_iowait
    int *backup_iowait_local_var = NULL;

    // define the local variable for backup_service_master->backup_order
    int *backup_order_local_var = NULL;

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
    backup_id_local_var = malloc(sizeof(int));
    if(!backup_id_local_var)
    {
        goto end;
    }
    *backup_id_local_var = backup_id->valuedouble;
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
    backup_type_local_var = malloc(sizeof(int));
    if(!backup_type_local_var)
    {
        goto end;
    }
    *backup_type_local_var = backup_type->valuedouble;
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
    backup_hdsize_local_var = malloc(sizeof(int));
    if(!backup_hdsize_local_var)
    {
        goto end;
    }
    *backup_hdsize_local_var = backup_hdsize->valuedouble;
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
    backup_hdfree_local_var = malloc(sizeof(int));
    if(!backup_hdfree_local_var)
    {
        goto end;
    }
    *backup_hdfree_local_var = backup_hdfree->valuedouble;
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
    backup_available_local_var = malloc(sizeof(int));
    if(!backup_available_local_var)
    {
        goto end;
    }
    *backup_available_local_var = backup_available->valuedouble;
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
    backup_iowait_local_var = malloc(sizeof(int));
    if(!backup_iowait_local_var)
    {
        goto end;
    }
    *backup_iowait_local_var = backup_iowait->valuedouble;
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
    backup_order_local_var = malloc(sizeof(int));
    if(!backup_order_local_var)
    {
        goto end;
    }
    *backup_order_local_var = backup_order->valuedouble;
    }


    if (backup_name && !cJSON_IsNull(backup_name)) backup_name_local_str = strdup(backup_name->valuestring);
    if (backup_ip && !cJSON_IsNull(backup_ip)) backup_ip_local_str = strdup(backup_ip->valuestring);
    if (backup_last_update && !cJSON_IsNull(backup_last_update)) backup_last_update_local_str = strdup(backup_last_update->valuestring);

    backup_service_master_local_var = backup_service_master_create_internal (
        backup_id_local_var,
        backup_name_local_str,
        backup_ip_local_str,
        backup_type_local_var,
        backup_hdsize_local_var,
        backup_hdfree_local_var,
        backup_last_update_local_str,
        backup_available_local_var,
        backup_iowait_local_var,
        backup_order_local_var
        );

    if (!backup_service_master_local_var) {
        goto end;
    }

    return backup_service_master_local_var;
end:
    if (backup_id_local_var) {
        free(backup_id_local_var);
        backup_id_local_var = NULL;
    }
    if (backup_name_local_str) {
        free(backup_name_local_str);
        backup_name_local_str = NULL;
    }
    if (backup_ip_local_str) {
        free(backup_ip_local_str);
        backup_ip_local_str = NULL;
    }
    if (backup_type_local_var) {
        free(backup_type_local_var);
        backup_type_local_var = NULL;
    }
    if (backup_hdsize_local_var) {
        free(backup_hdsize_local_var);
        backup_hdsize_local_var = NULL;
    }
    if (backup_hdfree_local_var) {
        free(backup_hdfree_local_var);
        backup_hdfree_local_var = NULL;
    }
    if (backup_last_update_local_str) {
        free(backup_last_update_local_str);
        backup_last_update_local_str = NULL;
    }
    if (backup_available_local_var) {
        free(backup_available_local_var);
        backup_available_local_var = NULL;
    }
    if (backup_iowait_local_var) {
        free(backup_iowait_local_var);
        backup_iowait_local_var = NULL;
    }
    if (backup_order_local_var) {
        free(backup_order_local_var);
        backup_order_local_var = NULL;
    }
    return NULL;

}
