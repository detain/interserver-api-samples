#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "backup_extra_info_tables.h"



static backup_extra_info_tables_t *backup_extra_info_tables_create_internal(
    backup_ip_info_t *ip_info
    ) {
    backup_extra_info_tables_t *backup_extra_info_tables_local_var = malloc(sizeof(backup_extra_info_tables_t));
    if (!backup_extra_info_tables_local_var) {
        return NULL;
    }
    memset(backup_extra_info_tables_local_var, 0, sizeof(backup_extra_info_tables_t));
    backup_extra_info_tables_local_var->_library_owned = 1;
    backup_extra_info_tables_local_var->ip_info = ip_info;
    return backup_extra_info_tables_local_var;
}

__attribute__((deprecated)) backup_extra_info_tables_t *backup_extra_info_tables_create(
    backup_ip_info_t *ip_info
    ) {
    backup_extra_info_tables_t *result = backup_extra_info_tables_create_internal (
        ip_info
        );
    if (!result) {
    }
    return result;
}

void backup_extra_info_tables_free(backup_extra_info_tables_t *backup_extra_info_tables) {
    if(NULL == backup_extra_info_tables){
        return ;
    }
    if(backup_extra_info_tables->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "backup_extra_info_tables_free");
        return ;
    }
    listEntry_t *listEntry;
    if (backup_extra_info_tables->ip_info) {
        backup_ip_info_free(backup_extra_info_tables->ip_info);
        backup_extra_info_tables->ip_info = NULL;
    }
    free(backup_extra_info_tables);
}

cJSON *backup_extra_info_tables_convertToJSON(backup_extra_info_tables_t *backup_extra_info_tables) {
    cJSON *item = cJSON_CreateObject();

    // backup_extra_info_tables->ip_info
    if(backup_extra_info_tables->ip_info) {
    cJSON *ip_info_local_JSON = backup_ip_info_convertToJSON(backup_extra_info_tables->ip_info);
    if(ip_info_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "ip_info", ip_info_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

backup_extra_info_tables_t *backup_extra_info_tables_parseFromJSON(cJSON *backup_extra_info_tablesJSON){

    backup_extra_info_tables_t *backup_extra_info_tables_local_var = NULL;

    // define the local variable for backup_extra_info_tables->ip_info
    backup_ip_info_t *ip_info_local_nonprim = NULL;

    // backup_extra_info_tables->ip_info
    cJSON *ip_info = cJSON_GetObjectItemCaseSensitive(backup_extra_info_tablesJSON, "ip_info");
    if (cJSON_IsNull(ip_info)) {
        ip_info = NULL;
    }
    if (ip_info) { 
    ip_info_local_nonprim = backup_ip_info_parseFromJSON(ip_info); //nonprimitive
    }



    backup_extra_info_tables_local_var = backup_extra_info_tables_create_internal (
        ip_info ? ip_info_local_nonprim : NULL
        );

    if (!backup_extra_info_tables_local_var) {
        goto end;
    }

    return backup_extra_info_tables_local_var;
end:
    if (ip_info_local_nonprim) {
        backup_ip_info_free(ip_info_local_nonprim);
        ip_info_local_nonprim = NULL;
    }
    return NULL;

}
