#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_backup_rows.h"



static vps_backup_rows_t *vps_backup_rows_create_internal(
    ) {
    vps_backup_rows_t *vps_backup_rows_local_var = malloc(sizeof(vps_backup_rows_t));
    if (!vps_backup_rows_local_var) {
        return NULL;
    }
    memset(vps_backup_rows_local_var, 0, sizeof(vps_backup_rows_t));
    vps_backup_rows_local_var->_library_owned = 1;
    return vps_backup_rows_local_var;
}

__attribute__((deprecated)) vps_backup_rows_t *vps_backup_rows_create(
    ) {
    vps_backup_rows_t *result = vps_backup_rows_create_internal (
        );
    if (!result) {
    }
    return result;
}

void vps_backup_rows_free(vps_backup_rows_t *vps_backup_rows) {
    if(NULL == vps_backup_rows){
        return ;
    }
    if(vps_backup_rows->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_backup_rows_free");
        return ;
    }
    listEntry_t *listEntry;
    free(vps_backup_rows);
}

cJSON *vps_backup_rows_convertToJSON(vps_backup_rows_t *vps_backup_rows) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

vps_backup_rows_t *vps_backup_rows_parseFromJSON(cJSON *vps_backup_rowsJSON){

    vps_backup_rows_t *vps_backup_rows_local_var = NULL;



    vps_backup_rows_local_var = vps_backup_rows_create_internal (
        );

    if (!vps_backup_rows_local_var) {
        goto end;
    }

    return vps_backup_rows_local_var;
end:
    return NULL;

}
