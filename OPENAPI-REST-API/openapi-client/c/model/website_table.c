#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "website_table.h"



static website_table_t *website_table_create_internal(
    char *title,
    list_t *rows
    ) {
    website_table_t *website_table_local_var = malloc(sizeof(website_table_t));
    if (!website_table_local_var) {
        return NULL;
    }
    memset(website_table_local_var, 0, sizeof(website_table_t));
    website_table_local_var->_library_owned = 1;
    website_table_local_var->title = title;
    website_table_local_var->rows = rows;
    return website_table_local_var;
}

__attribute__((deprecated)) website_table_t *website_table_create(
    char *title,
    list_t *rows
    ) {
    website_table_t *result = website_table_create_internal (
        title,
        rows
        );
    if (!result) {
    }
    return result;
}

void website_table_free(website_table_t *website_table) {
    if(NULL == website_table){
        return ;
    }
    if(website_table->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "website_table_free");
        return ;
    }
    listEntry_t *listEntry;
    if (website_table->title) {
        free(website_table->title);
        website_table->title = NULL;
    }
    if (website_table->rows) {
        list_ForEach(listEntry, website_table->rows) {
            website_table_row_free(listEntry->data);
        }
        list_freeList(website_table->rows);
        website_table->rows = NULL;
    }
    free(website_table);
}

cJSON *website_table_convertToJSON(website_table_t *website_table) {
    cJSON *item = cJSON_CreateObject();

    // website_table->title
    if(website_table->title) {
    if(cJSON_AddStringToObject(item, "title", website_table->title) == NULL) {
    goto fail; //String
    }
    }


    // website_table->rows
    if(website_table->rows) {
    cJSON *rows = cJSON_AddArrayToObject(item, "rows");
    if(rows == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *rowsListEntry;
    if (website_table->rows) {
    list_ForEach(rowsListEntry, website_table->rows) {
    cJSON *itemLocal = website_table_row_convertToJSON(rowsListEntry->data);
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

website_table_t *website_table_parseFromJSON(cJSON *website_tableJSON){

    website_table_t *website_table_local_var = NULL;

    char *title_local_str = NULL;

    // define the local list for website_table->rows
    list_t *rowsList = NULL;

    // website_table->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(website_tableJSON, "title");
    if (cJSON_IsNull(title)) {
        title = NULL;
    }
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // website_table->rows
    cJSON *rows = cJSON_GetObjectItemCaseSensitive(website_tableJSON, "rows");
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
        website_table_row_t *rowsItem = website_table_row_parseFromJSON(rows_local_nonprimitive);

        list_addElement(rowsList, rowsItem);
    }
    }


    if (title && !cJSON_IsNull(title)) title_local_str = strdup(title->valuestring);

    website_table_local_var = website_table_create_internal (
        title_local_str,
        rows ? rowsList : NULL
        );

    if (!website_table_local_var) {
        goto end;
    }

    return website_table_local_var;
end:
    if (title_local_str) {
        free(title_local_str);
        title_local_str = NULL;
    }
    if (rowsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, rowsList) {
            website_table_row_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(rowsList);
        rowsList = NULL;
    }
    return NULL;

}
