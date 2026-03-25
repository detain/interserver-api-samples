#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "quickserver_addons.h"



static quickserver_addons_t *quickserver_addons_create_internal(
    char *title,
    list_t *rows
    ) {
    quickserver_addons_t *quickserver_addons_local_var = malloc(sizeof(quickserver_addons_t));
    if (!quickserver_addons_local_var) {
        return NULL;
    }
    memset(quickserver_addons_local_var, 0, sizeof(quickserver_addons_t));
    quickserver_addons_local_var->_library_owned = 1;
    quickserver_addons_local_var->title = title;
    quickserver_addons_local_var->rows = rows;
    return quickserver_addons_local_var;
}

__attribute__((deprecated)) quickserver_addons_t *quickserver_addons_create(
    char *title,
    list_t *rows
    ) {
    quickserver_addons_t *result = quickserver_addons_create_internal (
        title,
        rows
        );
    if (!result) {
    }
    return result;
}

void quickserver_addons_free(quickserver_addons_t *quickserver_addons) {
    if(NULL == quickserver_addons){
        return ;
    }
    if(quickserver_addons->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "quickserver_addons_free");
        return ;
    }
    listEntry_t *listEntry;
    if (quickserver_addons->title) {
        free(quickserver_addons->title);
        quickserver_addons->title = NULL;
    }
    if (quickserver_addons->rows) {
        list_ForEach(listEntry, quickserver_addons->rows) {
            quickserver_addons_row_free(listEntry->data);
        }
        list_freeList(quickserver_addons->rows);
        quickserver_addons->rows = NULL;
    }
    free(quickserver_addons);
}

cJSON *quickserver_addons_convertToJSON(quickserver_addons_t *quickserver_addons) {
    cJSON *item = cJSON_CreateObject();

    // quickserver_addons->title
    if(quickserver_addons->title) {
    if(cJSON_AddStringToObject(item, "title", quickserver_addons->title) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_addons->rows
    if(quickserver_addons->rows) {
    cJSON *rows = cJSON_AddArrayToObject(item, "rows");
    if(rows == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *rowsListEntry;
    if (quickserver_addons->rows) {
    list_ForEach(rowsListEntry, quickserver_addons->rows) {
    cJSON *itemLocal = quickserver_addons_row_convertToJSON(rowsListEntry->data);
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

quickserver_addons_t *quickserver_addons_parseFromJSON(cJSON *quickserver_addonsJSON){

    quickserver_addons_t *quickserver_addons_local_var = NULL;

    char *title_local_str = NULL;

    // define the local list for quickserver_addons->rows
    list_t *rowsList = NULL;

    // quickserver_addons->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(quickserver_addonsJSON, "title");
    if (cJSON_IsNull(title)) {
        title = NULL;
    }
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // quickserver_addons->rows
    cJSON *rows = cJSON_GetObjectItemCaseSensitive(quickserver_addonsJSON, "rows");
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
        quickserver_addons_row_t *rowsItem = quickserver_addons_row_parseFromJSON(rows_local_nonprimitive);

        list_addElement(rowsList, rowsItem);
    }
    }


    if (title && !cJSON_IsNull(title)) title_local_str = strdup(title->valuestring);

    quickserver_addons_local_var = quickserver_addons_create_internal (
        title_local_str,
        rows ? rowsList : NULL
        );

    if (!quickserver_addons_local_var) {
        goto end;
    }

    return quickserver_addons_local_var;
end:
    if (title_local_str) {
        free(title_local_str);
        title_local_str = NULL;
    }
    if (rowsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, rowsList) {
            quickserver_addons_row_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(rowsList);
        rowsList = NULL;
    }
    return NULL;

}
