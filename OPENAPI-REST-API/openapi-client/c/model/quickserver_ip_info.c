#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "quickserver_ip_info.h"



static quickserver_ip_info_t *quickserver_ip_info_create_internal(
    char *title,
    list_t *rows
    ) {
    quickserver_ip_info_t *quickserver_ip_info_local_var = malloc(sizeof(quickserver_ip_info_t));
    if (!quickserver_ip_info_local_var) {
        return NULL;
    }
    quickserver_ip_info_local_var->title = title;
    quickserver_ip_info_local_var->rows = rows;

    quickserver_ip_info_local_var->_library_owned = 1;
    return quickserver_ip_info_local_var;
}

__attribute__((deprecated)) quickserver_ip_info_t *quickserver_ip_info_create(
    char *title,
    list_t *rows
    ) {
    return quickserver_ip_info_create_internal (
        title,
        rows
        );
}

void quickserver_ip_info_free(quickserver_ip_info_t *quickserver_ip_info) {
    if(NULL == quickserver_ip_info){
        return ;
    }
    if(quickserver_ip_info->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "quickserver_ip_info_free");
        return ;
    }
    listEntry_t *listEntry;
    if (quickserver_ip_info->title) {
        free(quickserver_ip_info->title);
        quickserver_ip_info->title = NULL;
    }
    if (quickserver_ip_info->rows) {
        list_ForEach(listEntry, quickserver_ip_info->rows) {
            quickserver_ip_table_row_free(listEntry->data);
        }
        list_freeList(quickserver_ip_info->rows);
        quickserver_ip_info->rows = NULL;
    }
    free(quickserver_ip_info);
}

cJSON *quickserver_ip_info_convertToJSON(quickserver_ip_info_t *quickserver_ip_info) {
    cJSON *item = cJSON_CreateObject();

    // quickserver_ip_info->title
    if(quickserver_ip_info->title) {
    if(cJSON_AddStringToObject(item, "title", quickserver_ip_info->title) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_ip_info->rows
    if(quickserver_ip_info->rows) {
    cJSON *rows = cJSON_AddArrayToObject(item, "rows");
    if(rows == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *rowsListEntry;
    if (quickserver_ip_info->rows) {
    list_ForEach(rowsListEntry, quickserver_ip_info->rows) {
    cJSON *itemLocal = quickserver_ip_table_row_convertToJSON(rowsListEntry->data);
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

quickserver_ip_info_t *quickserver_ip_info_parseFromJSON(cJSON *quickserver_ip_infoJSON){

    quickserver_ip_info_t *quickserver_ip_info_local_var = NULL;

    // define the local list for quickserver_ip_info->rows
    list_t *rowsList = NULL;

    // quickserver_ip_info->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(quickserver_ip_infoJSON, "title");
    if (cJSON_IsNull(title)) {
        title = NULL;
    }
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // quickserver_ip_info->rows
    cJSON *rows = cJSON_GetObjectItemCaseSensitive(quickserver_ip_infoJSON, "rows");
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
        quickserver_ip_table_row_t *rowsItem = quickserver_ip_table_row_parseFromJSON(rows_local_nonprimitive);

        list_addElement(rowsList, rowsItem);
    }
    }


    quickserver_ip_info_local_var = quickserver_ip_info_create_internal (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        rows ? rowsList : NULL
        );

    return quickserver_ip_info_local_var;
end:
    if (rowsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, rowsList) {
            quickserver_ip_table_row_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(rowsList);
        rowsList = NULL;
    }
    return NULL;

}
