#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billing_invoice_list.h"



static billing_invoice_list_t *billing_invoice_list_create_internal(
    list_t *rows,
    object_t *summary
    ) {
    billing_invoice_list_t *billing_invoice_list_local_var = malloc(sizeof(billing_invoice_list_t));
    if (!billing_invoice_list_local_var) {
        return NULL;
    }
    memset(billing_invoice_list_local_var, 0, sizeof(billing_invoice_list_t));
    billing_invoice_list_local_var->_library_owned = 1;
    billing_invoice_list_local_var->rows = rows;
    billing_invoice_list_local_var->summary = summary;
    return billing_invoice_list_local_var;
}

__attribute__((deprecated)) billing_invoice_list_t *billing_invoice_list_create(
    list_t *rows,
    object_t *summary
    ) {
    billing_invoice_list_t *result = billing_invoice_list_create_internal (
        rows,
        summary
        );
    if (!result) {
    }
    return result;
}

void billing_invoice_list_free(billing_invoice_list_t *billing_invoice_list) {
    if(NULL == billing_invoice_list){
        return ;
    }
    if(billing_invoice_list->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "billing_invoice_list_free");
        return ;
    }
    listEntry_t *listEntry;
    if (billing_invoice_list->rows) {
        list_ForEach(listEntry, billing_invoice_list->rows) {
            object_free(listEntry->data);
        }
        list_freeList(billing_invoice_list->rows);
        billing_invoice_list->rows = NULL;
    }
    if (billing_invoice_list->summary) {
        object_free(billing_invoice_list->summary);
        billing_invoice_list->summary = NULL;
    }
    free(billing_invoice_list);
}

cJSON *billing_invoice_list_convertToJSON(billing_invoice_list_t *billing_invoice_list) {
    cJSON *item = cJSON_CreateObject();

    // billing_invoice_list->rows
    if(billing_invoice_list->rows) {
    cJSON *rows = cJSON_AddArrayToObject(item, "rows");
    if(rows == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *rowsListEntry;
    if (billing_invoice_list->rows) {
    list_ForEach(rowsListEntry, billing_invoice_list->rows) {
    cJSON *itemLocal = object_convertToJSON(rowsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(rows, itemLocal);
    }
    }
    }


    // billing_invoice_list->summary
    if(billing_invoice_list->summary) {
    cJSON *summary_object = object_convertToJSON(billing_invoice_list->summary);
    if(summary_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "summary", summary_object);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

billing_invoice_list_t *billing_invoice_list_parseFromJSON(cJSON *billing_invoice_listJSON){

    billing_invoice_list_t *billing_invoice_list_local_var = NULL;

    // define the local list for billing_invoice_list->rows
    list_t *rowsList = NULL;

    // billing_invoice_list->rows
    cJSON *rows = cJSON_GetObjectItemCaseSensitive(billing_invoice_listJSON, "rows");
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
        object_t *rowsItem = object_parseFromJSON(rows_local_nonprimitive);

        list_addElement(rowsList, rowsItem);
    }
    }

    // billing_invoice_list->summary
    cJSON *summary = cJSON_GetObjectItemCaseSensitive(billing_invoice_listJSON, "summary");
    if (cJSON_IsNull(summary)) {
        summary = NULL;
    }
    object_t *summary_local_object = NULL;
    if (summary) { 
    summary_local_object = object_parseFromJSON(summary); //object
    }



    billing_invoice_list_local_var = billing_invoice_list_create_internal (
        rows ? rowsList : NULL,
        summary ? summary_local_object : NULL
        );

    if (!billing_invoice_list_local_var) {
        goto end;
    }

    return billing_invoice_list_local_var;
end:
    if (rowsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, rowsList) {
            object_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(rowsList);
        rowsList = NULL;
    }
    return NULL;

}
