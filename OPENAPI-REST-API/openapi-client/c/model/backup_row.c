#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "backup_row.h"



static backup_row_t *backup_row_create_internal(
    char *backup_id,
    char *backup_name,
    char *backup_cost,
    char *backup_username,
    char *backup_status,
    char *services_name
    ) {
    backup_row_t *backup_row_local_var = malloc(sizeof(backup_row_t));
    if (!backup_row_local_var) {
        return NULL;
    }
    backup_row_local_var->backup_id = backup_id;
    backup_row_local_var->backup_name = backup_name;
    backup_row_local_var->backup_cost = backup_cost;
    backup_row_local_var->backup_username = backup_username;
    backup_row_local_var->backup_status = backup_status;
    backup_row_local_var->services_name = services_name;

    backup_row_local_var->_library_owned = 1;
    return backup_row_local_var;
}

__attribute__((deprecated)) backup_row_t *backup_row_create(
    char *backup_id,
    char *backup_name,
    char *backup_cost,
    char *backup_username,
    char *backup_status,
    char *services_name
    ) {
    return backup_row_create_internal (
        backup_id,
        backup_name,
        backup_cost,
        backup_username,
        backup_status,
        services_name
        );
}

void backup_row_free(backup_row_t *backup_row) {
    if(NULL == backup_row){
        return ;
    }
    if(backup_row->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "backup_row_free");
        return ;
    }
    listEntry_t *listEntry;
    if (backup_row->backup_id) {
        free(backup_row->backup_id);
        backup_row->backup_id = NULL;
    }
    if (backup_row->backup_name) {
        free(backup_row->backup_name);
        backup_row->backup_name = NULL;
    }
    if (backup_row->backup_cost) {
        free(backup_row->backup_cost);
        backup_row->backup_cost = NULL;
    }
    if (backup_row->backup_username) {
        free(backup_row->backup_username);
        backup_row->backup_username = NULL;
    }
    if (backup_row->backup_status) {
        free(backup_row->backup_status);
        backup_row->backup_status = NULL;
    }
    if (backup_row->services_name) {
        free(backup_row->services_name);
        backup_row->services_name = NULL;
    }
    free(backup_row);
}

cJSON *backup_row_convertToJSON(backup_row_t *backup_row) {
    cJSON *item = cJSON_CreateObject();

    // backup_row->backup_id
    if(backup_row->backup_id) {
    if(cJSON_AddStringToObject(item, "backup_id", backup_row->backup_id) == NULL) {
    goto fail; //String
    }
    }


    // backup_row->backup_name
    if(backup_row->backup_name) {
    if(cJSON_AddStringToObject(item, "backup_name", backup_row->backup_name) == NULL) {
    goto fail; //String
    }
    }


    // backup_row->backup_cost
    if(backup_row->backup_cost) {
    if(cJSON_AddStringToObject(item, "backup_cost", backup_row->backup_cost) == NULL) {
    goto fail; //String
    }
    }


    // backup_row->backup_username
    if(backup_row->backup_username) {
    if(cJSON_AddStringToObject(item, "backup_username", backup_row->backup_username) == NULL) {
    goto fail; //String
    }
    }


    // backup_row->backup_status
    if(backup_row->backup_status) {
    if(cJSON_AddStringToObject(item, "backup_status", backup_row->backup_status) == NULL) {
    goto fail; //String
    }
    }


    // backup_row->services_name
    if(backup_row->services_name) {
    if(cJSON_AddStringToObject(item, "services_name", backup_row->services_name) == NULL) {
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

backup_row_t *backup_row_parseFromJSON(cJSON *backup_rowJSON){

    backup_row_t *backup_row_local_var = NULL;

    // backup_row->backup_id
    cJSON *backup_id = cJSON_GetObjectItemCaseSensitive(backup_rowJSON, "backup_id");
    if (cJSON_IsNull(backup_id)) {
        backup_id = NULL;
    }
    if (backup_id) { 
    if(!cJSON_IsString(backup_id) && !cJSON_IsNull(backup_id))
    {
    goto end; //String
    }
    }

    // backup_row->backup_name
    cJSON *backup_name = cJSON_GetObjectItemCaseSensitive(backup_rowJSON, "backup_name");
    if (cJSON_IsNull(backup_name)) {
        backup_name = NULL;
    }
    if (backup_name) { 
    if(!cJSON_IsString(backup_name) && !cJSON_IsNull(backup_name))
    {
    goto end; //String
    }
    }

    // backup_row->backup_cost
    cJSON *backup_cost = cJSON_GetObjectItemCaseSensitive(backup_rowJSON, "backup_cost");
    if (cJSON_IsNull(backup_cost)) {
        backup_cost = NULL;
    }
    if (backup_cost) { 
    if(!cJSON_IsString(backup_cost) && !cJSON_IsNull(backup_cost))
    {
    goto end; //String
    }
    }

    // backup_row->backup_username
    cJSON *backup_username = cJSON_GetObjectItemCaseSensitive(backup_rowJSON, "backup_username");
    if (cJSON_IsNull(backup_username)) {
        backup_username = NULL;
    }
    if (backup_username) { 
    if(!cJSON_IsString(backup_username) && !cJSON_IsNull(backup_username))
    {
    goto end; //String
    }
    }

    // backup_row->backup_status
    cJSON *backup_status = cJSON_GetObjectItemCaseSensitive(backup_rowJSON, "backup_status");
    if (cJSON_IsNull(backup_status)) {
        backup_status = NULL;
    }
    if (backup_status) { 
    if(!cJSON_IsString(backup_status) && !cJSON_IsNull(backup_status))
    {
    goto end; //String
    }
    }

    // backup_row->services_name
    cJSON *services_name = cJSON_GetObjectItemCaseSensitive(backup_rowJSON, "services_name");
    if (cJSON_IsNull(services_name)) {
        services_name = NULL;
    }
    if (services_name) { 
    if(!cJSON_IsString(services_name) && !cJSON_IsNull(services_name))
    {
    goto end; //String
    }
    }


    backup_row_local_var = backup_row_create_internal (
        backup_id && !cJSON_IsNull(backup_id) ? strdup(backup_id->valuestring) : NULL,
        backup_name && !cJSON_IsNull(backup_name) ? strdup(backup_name->valuestring) : NULL,
        backup_cost && !cJSON_IsNull(backup_cost) ? strdup(backup_cost->valuestring) : NULL,
        backup_username && !cJSON_IsNull(backup_username) ? strdup(backup_username->valuestring) : NULL,
        backup_status && !cJSON_IsNull(backup_status) ? strdup(backup_status->valuestring) : NULL,
        services_name && !cJSON_IsNull(services_name) ? strdup(services_name->valuestring) : NULL
        );

    return backup_row_local_var;
end:
    return NULL;

}
