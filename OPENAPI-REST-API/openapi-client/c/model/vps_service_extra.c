#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_service_extra.h"



static vps_service_extra_t *vps_service_extra_create_internal(
    int *spice,
    list_t *snapshots
    ) {
    vps_service_extra_t *vps_service_extra_local_var = malloc(sizeof(vps_service_extra_t));
    if (!vps_service_extra_local_var) {
        return NULL;
    }
    memset(vps_service_extra_local_var, 0, sizeof(vps_service_extra_t));
    vps_service_extra_local_var->_library_owned = 1;
    vps_service_extra_local_var->spice = spice;
    vps_service_extra_local_var->snapshots = snapshots;
    return vps_service_extra_local_var;
}

__attribute__((deprecated)) vps_service_extra_t *vps_service_extra_create(
    int *spice,
    list_t *snapshots
    ) {
    int *spice_copy = NULL;
    if (spice) {
        spice_copy = malloc(sizeof(int));
        if (spice_copy) *spice_copy = *spice;
    }
    vps_service_extra_t *result = vps_service_extra_create_internal (
        spice_copy,
        snapshots
        );
    if (!result) {
        free(spice_copy);
    }
    return result;
}

void vps_service_extra_free(vps_service_extra_t *vps_service_extra) {
    if(NULL == vps_service_extra){
        return ;
    }
    if(vps_service_extra->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_service_extra_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_service_extra->spice) {
        free(vps_service_extra->spice);
        vps_service_extra->spice = NULL;
    }
    if (vps_service_extra->snapshots) {
        list_ForEach(listEntry, vps_service_extra->snapshots) {
            vps_snapshot_free(listEntry->data);
        }
        list_freeList(vps_service_extra->snapshots);
        vps_service_extra->snapshots = NULL;
    }
    free(vps_service_extra);
}

cJSON *vps_service_extra_convertToJSON(vps_service_extra_t *vps_service_extra) {
    cJSON *item = cJSON_CreateObject();

    // vps_service_extra->spice
    if(vps_service_extra->spice) {
    if(cJSON_AddNumberToObject(item, "spice", *vps_service_extra->spice) == NULL) {
    goto fail; //Numeric
    }
    }


    // vps_service_extra->snapshots
    if(vps_service_extra->snapshots) {
    cJSON *snapshots = cJSON_AddArrayToObject(item, "snapshots");
    if(snapshots == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *snapshotsListEntry;
    if (vps_service_extra->snapshots) {
    list_ForEach(snapshotsListEntry, vps_service_extra->snapshots) {
    cJSON *itemLocal = vps_snapshot_convertToJSON(snapshotsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(snapshots, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

vps_service_extra_t *vps_service_extra_parseFromJSON(cJSON *vps_service_extraJSON){

    vps_service_extra_t *vps_service_extra_local_var = NULL;

    // define the local variable for vps_service_extra->spice
    int *spice_local_var = NULL;

    // define the local list for vps_service_extra->snapshots
    list_t *snapshotsList = NULL;

    // vps_service_extra->spice
    cJSON *spice = cJSON_GetObjectItemCaseSensitive(vps_service_extraJSON, "spice");
    if (cJSON_IsNull(spice)) {
        spice = NULL;
    }
    if (spice) { 
    if(!cJSON_IsNumber(spice))
    {
    goto end; //Numeric
    }
    spice_local_var = malloc(sizeof(int));
    if(!spice_local_var)
    {
        goto end;
    }
    *spice_local_var = spice->valuedouble;
    }

    // vps_service_extra->snapshots
    cJSON *snapshots = cJSON_GetObjectItemCaseSensitive(vps_service_extraJSON, "snapshots");
    if (cJSON_IsNull(snapshots)) {
        snapshots = NULL;
    }
    if (snapshots) { 
    cJSON *snapshots_local_nonprimitive = NULL;
    if(!cJSON_IsArray(snapshots)){
        goto end; //nonprimitive container
    }

    snapshotsList = list_createList();

    cJSON_ArrayForEach(snapshots_local_nonprimitive,snapshots )
    {
        if(!cJSON_IsObject(snapshots_local_nonprimitive)){
            goto end;
        }
        vps_snapshot_t *snapshotsItem = vps_snapshot_parseFromJSON(snapshots_local_nonprimitive);

        list_addElement(snapshotsList, snapshotsItem);
    }
    }



    vps_service_extra_local_var = vps_service_extra_create_internal (
        spice_local_var,
        snapshots ? snapshotsList : NULL
        );

    if (!vps_service_extra_local_var) {
        goto end;
    }

    return vps_service_extra_local_var;
end:
    if (spice_local_var) {
        free(spice_local_var);
        spice_local_var = NULL;
    }
    if (snapshotsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, snapshotsList) {
            vps_snapshot_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(snapshotsList);
        snapshotsList = NULL;
    }
    return NULL;

}
