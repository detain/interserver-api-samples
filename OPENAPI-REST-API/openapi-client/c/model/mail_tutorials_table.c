#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mail_tutorials_table.h"



static mail_tutorials_table_t *mail_tutorials_table_create_internal(
    char *title,
    list_t *rows
    ) {
    mail_tutorials_table_t *mail_tutorials_table_local_var = malloc(sizeof(mail_tutorials_table_t));
    if (!mail_tutorials_table_local_var) {
        return NULL;
    }
    mail_tutorials_table_local_var->title = title;
    mail_tutorials_table_local_var->rows = rows;

    mail_tutorials_table_local_var->_library_owned = 1;
    return mail_tutorials_table_local_var;
}

__attribute__((deprecated)) mail_tutorials_table_t *mail_tutorials_table_create(
    char *title,
    list_t *rows
    ) {
    return mail_tutorials_table_create_internal (
        title,
        rows
        );
}

void mail_tutorials_table_free(mail_tutorials_table_t *mail_tutorials_table) {
    if(NULL == mail_tutorials_table){
        return ;
    }
    if(mail_tutorials_table->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "mail_tutorials_table_free");
        return ;
    }
    listEntry_t *listEntry;
    if (mail_tutorials_table->title) {
        free(mail_tutorials_table->title);
        mail_tutorials_table->title = NULL;
    }
    if (mail_tutorials_table->rows) {
        list_ForEach(listEntry, mail_tutorials_table->rows) {
            mail_tutorials_table_row_free(listEntry->data);
        }
        list_freeList(mail_tutorials_table->rows);
        mail_tutorials_table->rows = NULL;
    }
    free(mail_tutorials_table);
}

cJSON *mail_tutorials_table_convertToJSON(mail_tutorials_table_t *mail_tutorials_table) {
    cJSON *item = cJSON_CreateObject();

    // mail_tutorials_table->title
    if(mail_tutorials_table->title) {
    if(cJSON_AddStringToObject(item, "title", mail_tutorials_table->title) == NULL) {
    goto fail; //String
    }
    }


    // mail_tutorials_table->rows
    if(mail_tutorials_table->rows) {
    cJSON *rows = cJSON_AddArrayToObject(item, "rows");
    if(rows == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *rowsListEntry;
    if (mail_tutorials_table->rows) {
    list_ForEach(rowsListEntry, mail_tutorials_table->rows) {
    cJSON *itemLocal = mail_tutorials_table_row_convertToJSON(rowsListEntry->data);
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

mail_tutorials_table_t *mail_tutorials_table_parseFromJSON(cJSON *mail_tutorials_tableJSON){

    mail_tutorials_table_t *mail_tutorials_table_local_var = NULL;

    // define the local list for mail_tutorials_table->rows
    list_t *rowsList = NULL;

    // mail_tutorials_table->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(mail_tutorials_tableJSON, "title");
    if (cJSON_IsNull(title)) {
        title = NULL;
    }
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // mail_tutorials_table->rows
    cJSON *rows = cJSON_GetObjectItemCaseSensitive(mail_tutorials_tableJSON, "rows");
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
        mail_tutorials_table_row_t *rowsItem = mail_tutorials_table_row_parseFromJSON(rows_local_nonprimitive);

        list_addElement(rowsList, rowsItem);
    }
    }


    mail_tutorials_table_local_var = mail_tutorials_table_create_internal (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        rows ? rowsList : NULL
        );

    return mail_tutorials_table_local_var;
end:
    if (rowsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, rowsList) {
            mail_tutorials_table_row_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(rowsList);
        rowsList = NULL;
    }
    return NULL;

}
