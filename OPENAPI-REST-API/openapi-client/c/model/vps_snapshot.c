#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_snapshot.h"



static vps_snapshot_t *vps_snapshot_create_internal(
    char *name,
    int used,
    int date
    ) {
    vps_snapshot_t *vps_snapshot_local_var = malloc(sizeof(vps_snapshot_t));
    if (!vps_snapshot_local_var) {
        return NULL;
    }
    vps_snapshot_local_var->name = name;
    vps_snapshot_local_var->used = used;
    vps_snapshot_local_var->date = date;

    vps_snapshot_local_var->_library_owned = 1;
    return vps_snapshot_local_var;
}

__attribute__((deprecated)) vps_snapshot_t *vps_snapshot_create(
    char *name,
    int used,
    int date
    ) {
    return vps_snapshot_create_internal (
        name,
        used,
        date
        );
}

void vps_snapshot_free(vps_snapshot_t *vps_snapshot) {
    if(NULL == vps_snapshot){
        return ;
    }
    if(vps_snapshot->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_snapshot_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_snapshot->name) {
        free(vps_snapshot->name);
        vps_snapshot->name = NULL;
    }
    free(vps_snapshot);
}

cJSON *vps_snapshot_convertToJSON(vps_snapshot_t *vps_snapshot) {
    cJSON *item = cJSON_CreateObject();

    // vps_snapshot->name
    if(vps_snapshot->name) {
    if(cJSON_AddStringToObject(item, "name", vps_snapshot->name) == NULL) {
    goto fail; //String
    }
    }


    // vps_snapshot->used
    if(vps_snapshot->used) {
    if(cJSON_AddNumberToObject(item, "used", vps_snapshot->used) == NULL) {
    goto fail; //Numeric
    }
    }


    // vps_snapshot->date
    if(vps_snapshot->date) {
    if(cJSON_AddNumberToObject(item, "date", vps_snapshot->date) == NULL) {
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

vps_snapshot_t *vps_snapshot_parseFromJSON(cJSON *vps_snapshotJSON){

    vps_snapshot_t *vps_snapshot_local_var = NULL;

    // vps_snapshot->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(vps_snapshotJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // vps_snapshot->used
    cJSON *used = cJSON_GetObjectItemCaseSensitive(vps_snapshotJSON, "used");
    if (cJSON_IsNull(used)) {
        used = NULL;
    }
    if (used) { 
    if(!cJSON_IsNumber(used))
    {
    goto end; //Numeric
    }
    }

    // vps_snapshot->date
    cJSON *date = cJSON_GetObjectItemCaseSensitive(vps_snapshotJSON, "date");
    if (cJSON_IsNull(date)) {
        date = NULL;
    }
    if (date) { 
    if(!cJSON_IsNumber(date))
    {
    goto end; //Numeric
    }
    }


    vps_snapshot_local_var = vps_snapshot_create_internal (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        used ? used->valuedouble : 0,
        date ? date->valuedouble : 0
        );

    return vps_snapshot_local_var;
end:
    return NULL;

}
