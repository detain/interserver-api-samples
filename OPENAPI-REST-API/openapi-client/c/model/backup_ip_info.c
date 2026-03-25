#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "backup_ip_info.h"



static backup_ip_info_t *backup_ip_info_create_internal(
    char *title,
    list_t *rows
    ) {
    backup_ip_info_t *backup_ip_info_local_var = malloc(sizeof(backup_ip_info_t));
    if (!backup_ip_info_local_var) {
        return NULL;
    }
    memset(backup_ip_info_local_var, 0, sizeof(backup_ip_info_t));
    backup_ip_info_local_var->_library_owned = 1;
    backup_ip_info_local_var->title = title;
    backup_ip_info_local_var->rows = rows;
    return backup_ip_info_local_var;
}

__attribute__((deprecated)) backup_ip_info_t *backup_ip_info_create(
    char *title,
    list_t *rows
    ) {
    backup_ip_info_t *result = backup_ip_info_create_internal (
        title,
        rows
        );
    if (!result) {
    }
    return result;
}

void backup_ip_info_free(backup_ip_info_t *backup_ip_info) {
    if(NULL == backup_ip_info){
        return ;
    }
    if(backup_ip_info->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "backup_ip_info_free");
        return ;
    }
    listEntry_t *listEntry;
    if (backup_ip_info->title) {
        free(backup_ip_info->title);
        backup_ip_info->title = NULL;
    }
    if (backup_ip_info->rows) {
        list_ForEach(listEntry, backup_ip_info->rows) {
            backup_ip_info_row_free(listEntry->data);
        }
        list_freeList(backup_ip_info->rows);
        backup_ip_info->rows = NULL;
    }
    free(backup_ip_info);
}

cJSON *backup_ip_info_convertToJSON(backup_ip_info_t *backup_ip_info) {
    cJSON *item = cJSON_CreateObject();

    // backup_ip_info->title
    if(backup_ip_info->title) {
    if(cJSON_AddStringToObject(item, "title", backup_ip_info->title) == NULL) {
    goto fail; //String
    }
    }


    // backup_ip_info->rows
    if(backup_ip_info->rows) {
    cJSON *rows = cJSON_AddArrayToObject(item, "rows");
    if(rows == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *rowsListEntry;
    if (backup_ip_info->rows) {
    list_ForEach(rowsListEntry, backup_ip_info->rows) {
    cJSON *itemLocal = backup_ip_info_row_convertToJSON(rowsListEntry->data);
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

backup_ip_info_t *backup_ip_info_parseFromJSON(cJSON *backup_ip_infoJSON){

    backup_ip_info_t *backup_ip_info_local_var = NULL;

    char *title_local_str = NULL;

    // define the local list for backup_ip_info->rows
    list_t *rowsList = NULL;

    // backup_ip_info->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(backup_ip_infoJSON, "title");
    if (cJSON_IsNull(title)) {
        title = NULL;
    }
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // backup_ip_info->rows
    cJSON *rows = cJSON_GetObjectItemCaseSensitive(backup_ip_infoJSON, "rows");
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
        backup_ip_info_row_t *rowsItem = backup_ip_info_row_parseFromJSON(rows_local_nonprimitive);

        list_addElement(rowsList, rowsItem);
    }
    }


    if (title && !cJSON_IsNull(title)) title_local_str = strdup(title->valuestring);

    backup_ip_info_local_var = backup_ip_info_create_internal (
        title_local_str,
        rows ? rowsList : NULL
        );

    if (!backup_ip_info_local_var) {
        goto end;
    }

    return backup_ip_info_local_var;
end:
    if (title_local_str) {
        free(title_local_str);
        title_local_str = NULL;
    }
    if (rowsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, rowsList) {
            backup_ip_info_row_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(rowsList);
        rowsList = NULL;
    }
    return NULL;

}
