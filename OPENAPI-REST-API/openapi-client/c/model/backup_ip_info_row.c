#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "backup_ip_info_row.h"



static backup_ip_info_row_t *backup_ip_info_row_create_internal(
    char *desc,
    char *value
    ) {
    backup_ip_info_row_t *backup_ip_info_row_local_var = malloc(sizeof(backup_ip_info_row_t));
    if (!backup_ip_info_row_local_var) {
        return NULL;
    }
    backup_ip_info_row_local_var->desc = desc;
    backup_ip_info_row_local_var->value = value;

    backup_ip_info_row_local_var->_library_owned = 1;
    return backup_ip_info_row_local_var;
}

__attribute__((deprecated)) backup_ip_info_row_t *backup_ip_info_row_create(
    char *desc,
    char *value
    ) {
    return backup_ip_info_row_create_internal (
        desc,
        value
        );
}

void backup_ip_info_row_free(backup_ip_info_row_t *backup_ip_info_row) {
    if(NULL == backup_ip_info_row){
        return ;
    }
    if(backup_ip_info_row->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "backup_ip_info_row_free");
        return ;
    }
    listEntry_t *listEntry;
    if (backup_ip_info_row->desc) {
        free(backup_ip_info_row->desc);
        backup_ip_info_row->desc = NULL;
    }
    if (backup_ip_info_row->value) {
        free(backup_ip_info_row->value);
        backup_ip_info_row->value = NULL;
    }
    free(backup_ip_info_row);
}

cJSON *backup_ip_info_row_convertToJSON(backup_ip_info_row_t *backup_ip_info_row) {
    cJSON *item = cJSON_CreateObject();

    // backup_ip_info_row->desc
    if(backup_ip_info_row->desc) {
    if(cJSON_AddStringToObject(item, "desc", backup_ip_info_row->desc) == NULL) {
    goto fail; //String
    }
    }


    // backup_ip_info_row->value
    if(backup_ip_info_row->value) {
    if(cJSON_AddStringToObject(item, "value", backup_ip_info_row->value) == NULL) {
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

backup_ip_info_row_t *backup_ip_info_row_parseFromJSON(cJSON *backup_ip_info_rowJSON){

    backup_ip_info_row_t *backup_ip_info_row_local_var = NULL;

    // backup_ip_info_row->desc
    cJSON *desc = cJSON_GetObjectItemCaseSensitive(backup_ip_info_rowJSON, "desc");
    if (cJSON_IsNull(desc)) {
        desc = NULL;
    }
    if (desc) { 
    if(!cJSON_IsString(desc) && !cJSON_IsNull(desc))
    {
    goto end; //String
    }
    }

    // backup_ip_info_row->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(backup_ip_info_rowJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }


    backup_ip_info_row_local_var = backup_ip_info_row_create_internal (
        desc && !cJSON_IsNull(desc) ? strdup(desc->valuestring) : NULL,
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL
        );

    return backup_ip_info_row_local_var;
end:
    return NULL;

}
