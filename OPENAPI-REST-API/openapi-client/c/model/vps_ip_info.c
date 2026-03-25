#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_ip_info.h"



static vps_ip_info_t *vps_ip_info_create_internal(
    char *title,
    list_t *rows
    ) {
    vps_ip_info_t *vps_ip_info_local_var = malloc(sizeof(vps_ip_info_t));
    if (!vps_ip_info_local_var) {
        return NULL;
    }
    memset(vps_ip_info_local_var, 0, sizeof(vps_ip_info_t));
    vps_ip_info_local_var->_library_owned = 1;
    vps_ip_info_local_var->title = title;
    vps_ip_info_local_var->rows = rows;
    return vps_ip_info_local_var;
}

__attribute__((deprecated)) vps_ip_info_t *vps_ip_info_create(
    char *title,
    list_t *rows
    ) {
    vps_ip_info_t *result = vps_ip_info_create_internal (
        title,
        rows
        );
    if (!result) {
    }
    return result;
}

void vps_ip_info_free(vps_ip_info_t *vps_ip_info) {
    if(NULL == vps_ip_info){
        return ;
    }
    if(vps_ip_info->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_ip_info_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_ip_info->title) {
        free(vps_ip_info->title);
        vps_ip_info->title = NULL;
    }
    if (vps_ip_info->rows) {
        list_ForEach(listEntry, vps_ip_info->rows) {
            vps_ip_info_row_free(listEntry->data);
        }
        list_freeList(vps_ip_info->rows);
        vps_ip_info->rows = NULL;
    }
    free(vps_ip_info);
}

cJSON *vps_ip_info_convertToJSON(vps_ip_info_t *vps_ip_info) {
    cJSON *item = cJSON_CreateObject();

    // vps_ip_info->title
    if(vps_ip_info->title) {
    if(cJSON_AddStringToObject(item, "title", vps_ip_info->title) == NULL) {
    goto fail; //String
    }
    }


    // vps_ip_info->rows
    if(vps_ip_info->rows) {
    cJSON *rows = cJSON_AddArrayToObject(item, "rows");
    if(rows == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *rowsListEntry;
    if (vps_ip_info->rows) {
    list_ForEach(rowsListEntry, vps_ip_info->rows) {
    cJSON *itemLocal = vps_ip_info_row_convertToJSON(rowsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(rows, itemLocal);
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

vps_ip_info_t *vps_ip_info_parseFromJSON(cJSON *vps_ip_infoJSON){

    vps_ip_info_t *vps_ip_info_local_var = NULL;

    char *title_local_str = NULL;

    // define the local list for vps_ip_info->rows
    list_t *rowsList = NULL;

    // vps_ip_info->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(vps_ip_infoJSON, "title");
    if (cJSON_IsNull(title)) {
        title = NULL;
    }
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // vps_ip_info->rows
    cJSON *rows = cJSON_GetObjectItemCaseSensitive(vps_ip_infoJSON, "rows");
    if (cJSON_IsNull(rows)) {
        rows = NULL;
    }
    if (rows) { 
    cJSON *rows_local_nonprimitive = NULL;
    if(!cJSON_IsArray(rows)){
        goto end; //nonprimitive container
    }

    rowsList = list_createList();

    cJSON_ArrayForEach(rows_local_nonprimitive,rows )
    {
        if(!cJSON_IsObject(rows_local_nonprimitive)){
            goto end;
        }
        vps_ip_info_row_t *rowsItem = vps_ip_info_row_parseFromJSON(rows_local_nonprimitive);

        list_addElement(rowsList, rowsItem);
    }
    }


    if (title && !cJSON_IsNull(title)) title_local_str = strdup(title->valuestring);

    vps_ip_info_local_var = vps_ip_info_create_internal (
        title_local_str,
        rows ? rowsList : NULL
        );

    if (!vps_ip_info_local_var) {
        goto end;
    }

    return vps_ip_info_local_var;
end:
    if (title_local_str) {
        free(title_local_str);
        title_local_str = NULL;
    }
    if (rowsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, rowsList) {
            vps_ip_info_row_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(rowsList);
        rowsList = NULL;
    }
    return NULL;

}
