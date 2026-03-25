#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mail_extra_info_table.h"



static mail_extra_info_table_t *mail_extra_info_table_create_internal(
    char *title,
    list_t *rows
    ) {
    mail_extra_info_table_t *mail_extra_info_table_local_var = malloc(sizeof(mail_extra_info_table_t));
    if (!mail_extra_info_table_local_var) {
        return NULL;
    }
    memset(mail_extra_info_table_local_var, 0, sizeof(mail_extra_info_table_t));
    mail_extra_info_table_local_var->_library_owned = 1;
    mail_extra_info_table_local_var->title = title;
    mail_extra_info_table_local_var->rows = rows;
    return mail_extra_info_table_local_var;
}

__attribute__((deprecated)) mail_extra_info_table_t *mail_extra_info_table_create(
    char *title,
    list_t *rows
    ) {
    mail_extra_info_table_t *result = mail_extra_info_table_create_internal (
        title,
        rows
        );
    if (!result) {
    }
    return result;
}

void mail_extra_info_table_free(mail_extra_info_table_t *mail_extra_info_table) {
    if(NULL == mail_extra_info_table){
        return ;
    }
    if(mail_extra_info_table->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "mail_extra_info_table_free");
        return ;
    }
    listEntry_t *listEntry;
    if (mail_extra_info_table->title) {
        free(mail_extra_info_table->title);
        mail_extra_info_table->title = NULL;
    }
    if (mail_extra_info_table->rows) {
        list_ForEach(listEntry, mail_extra_info_table->rows) {
            mail_extra_info_table_row_free(listEntry->data);
        }
        list_freeList(mail_extra_info_table->rows);
        mail_extra_info_table->rows = NULL;
    }
    free(mail_extra_info_table);
}

cJSON *mail_extra_info_table_convertToJSON(mail_extra_info_table_t *mail_extra_info_table) {
    cJSON *item = cJSON_CreateObject();

    // mail_extra_info_table->title
    if(mail_extra_info_table->title) {
    if(cJSON_AddStringToObject(item, "title", mail_extra_info_table->title) == NULL) {
    goto fail; //String
    }
    }


    // mail_extra_info_table->rows
    if(mail_extra_info_table->rows) {
    cJSON *rows = cJSON_AddArrayToObject(item, "rows");
    if(rows == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *rowsListEntry;
    if (mail_extra_info_table->rows) {
    list_ForEach(rowsListEntry, mail_extra_info_table->rows) {
    cJSON *itemLocal = mail_extra_info_table_row_convertToJSON(rowsListEntry->data);
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

mail_extra_info_table_t *mail_extra_info_table_parseFromJSON(cJSON *mail_extra_info_tableJSON){

    mail_extra_info_table_t *mail_extra_info_table_local_var = NULL;

    char *title_local_str = NULL;

    // define the local list for mail_extra_info_table->rows
    list_t *rowsList = NULL;

    // mail_extra_info_table->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(mail_extra_info_tableJSON, "title");
    if (cJSON_IsNull(title)) {
        title = NULL;
    }
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // mail_extra_info_table->rows
    cJSON *rows = cJSON_GetObjectItemCaseSensitive(mail_extra_info_tableJSON, "rows");
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
        mail_extra_info_table_row_t *rowsItem = mail_extra_info_table_row_parseFromJSON(rows_local_nonprimitive);

        list_addElement(rowsList, rowsItem);
    }
    }


    if (title && !cJSON_IsNull(title)) title_local_str = strdup(title->valuestring);

    mail_extra_info_table_local_var = mail_extra_info_table_create_internal (
        title_local_str,
        rows ? rowsList : NULL
        );

    if (!mail_extra_info_table_local_var) {
        goto end;
    }

    return mail_extra_info_table_local_var;
end:
    if (title_local_str) {
        free(title_local_str);
        title_local_str = NULL;
    }
    if (rowsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, rowsList) {
            mail_extra_info_table_row_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(rowsList);
        rowsList = NULL;
    }
    return NULL;

}
