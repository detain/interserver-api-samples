#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_snapshot.h"



static vps_snapshot_t *vps_snapshot_create_internal(
    char *name,
    int *used,
    int *date
    ) {
    vps_snapshot_t *vps_snapshot_local_var = malloc(sizeof(vps_snapshot_t));
    if (!vps_snapshot_local_var) {
        return NULL;
    }
    memset(vps_snapshot_local_var, 0, sizeof(vps_snapshot_t));
    vps_snapshot_local_var->_library_owned = 1;
    vps_snapshot_local_var->name = name;
    vps_snapshot_local_var->used = used;
    vps_snapshot_local_var->date = date;
    return vps_snapshot_local_var;
}

__attribute__((deprecated)) vps_snapshot_t *vps_snapshot_create(
    char *name,
    int *used,
    int *date
    ) {
    int *used_copy = NULL;
    if (used) {
        used_copy = malloc(sizeof(int));
        if (used_copy) *used_copy = *used;
    }
    int *date_copy = NULL;
    if (date) {
        date_copy = malloc(sizeof(int));
        if (date_copy) *date_copy = *date;
    }
    vps_snapshot_t *result = vps_snapshot_create_internal (
        name,
        used_copy,
        date_copy
        );
    if (!result) {
        free(used_copy);
        free(date_copy);
    }
    return result;
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
    if (vps_snapshot->used) {
        free(vps_snapshot->used);
        vps_snapshot->used = NULL;
    }
    if (vps_snapshot->date) {
        free(vps_snapshot->date);
        vps_snapshot->date = NULL;
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
    if(cJSON_AddNumberToObject(item, "used", *vps_snapshot->used) == NULL) {
    goto fail; //Numeric
    }
    }


    // vps_snapshot->date
    if(vps_snapshot->date) {
    if(cJSON_AddNumberToObject(item, "date", *vps_snapshot->date) == NULL) {
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

    char *name_local_str = NULL;

    // define the local variable for vps_snapshot->used
    int *used_local_var = NULL;

    // define the local variable for vps_snapshot->date
    int *date_local_var = NULL;

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
    used_local_var = malloc(sizeof(int));
    if(!used_local_var)
    {
        goto end;
    }
    *used_local_var = used->valuedouble;
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
    date_local_var = malloc(sizeof(int));
    if(!date_local_var)
    {
        goto end;
    }
    *date_local_var = date->valuedouble;
    }


    if (name && !cJSON_IsNull(name)) name_local_str = strdup(name->valuestring);

    vps_snapshot_local_var = vps_snapshot_create_internal (
        name_local_str,
        used_local_var,
        date_local_var
        );

    if (!vps_snapshot_local_var) {
        goto end;
    }

    return vps_snapshot_local_var;
end:
    if (name_local_str) {
        free(name_local_str);
        name_local_str = NULL;
    }
    if (used_local_var) {
        free(used_local_var);
        used_local_var = NULL;
    }
    if (date_local_var) {
        free(date_local_var);
        date_local_var = NULL;
    }
    return NULL;

}
