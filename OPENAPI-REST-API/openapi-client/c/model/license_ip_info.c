#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "license_ip_info.h"



static license_ip_info_t *license_ip_info_create_internal(
    char *title,
    list_t *rows
    ) {
    license_ip_info_t *license_ip_info_local_var = malloc(sizeof(license_ip_info_t));
    if (!license_ip_info_local_var) {
        return NULL;
    }
    license_ip_info_local_var->title = title;
    license_ip_info_local_var->rows = rows;

    license_ip_info_local_var->_library_owned = 1;
    return license_ip_info_local_var;
}

__attribute__((deprecated)) license_ip_info_t *license_ip_info_create(
    char *title,
    list_t *rows
    ) {
    return license_ip_info_create_internal (
        title,
        rows
        );
}

void license_ip_info_free(license_ip_info_t *license_ip_info) {
    if(NULL == license_ip_info){
        return ;
    }
    if(license_ip_info->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "license_ip_info_free");
        return ;
    }
    listEntry_t *listEntry;
    if (license_ip_info->title) {
        free(license_ip_info->title);
        license_ip_info->title = NULL;
    }
    if (license_ip_info->rows) {
        list_ForEach(listEntry, license_ip_info->rows) {
            license_ip_info_row_free(listEntry->data);
        }
        list_freeList(license_ip_info->rows);
        license_ip_info->rows = NULL;
    }
    free(license_ip_info);
}

cJSON *license_ip_info_convertToJSON(license_ip_info_t *license_ip_info) {
    cJSON *item = cJSON_CreateObject();

    // license_ip_info->title
    if(license_ip_info->title) {
    if(cJSON_AddStringToObject(item, "title", license_ip_info->title) == NULL) {
    goto fail; //String
    }
    }


    // license_ip_info->rows
    if(license_ip_info->rows) {
    cJSON *rows = cJSON_AddArrayToObject(item, "rows");
    if(rows == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *rowsListEntry;
    if (license_ip_info->rows) {
    list_ForEach(rowsListEntry, license_ip_info->rows) {
    cJSON *itemLocal = license_ip_info_row_convertToJSON(rowsListEntry->data);
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

license_ip_info_t *license_ip_info_parseFromJSON(cJSON *license_ip_infoJSON){

    license_ip_info_t *license_ip_info_local_var = NULL;

    // define the local list for license_ip_info->rows
    list_t *rowsList = NULL;

    // license_ip_info->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(license_ip_infoJSON, "title");
    if (cJSON_IsNull(title)) {
        title = NULL;
    }
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // license_ip_info->rows
    cJSON *rows = cJSON_GetObjectItemCaseSensitive(license_ip_infoJSON, "rows");
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
        license_ip_info_row_t *rowsItem = license_ip_info_row_parseFromJSON(rows_local_nonprimitive);

        list_addElement(rowsList, rowsItem);
    }
    }


    license_ip_info_local_var = license_ip_info_create_internal (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        rows ? rowsList : NULL
        );

    return license_ip_info_local_var;
end:
    if (rowsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, rowsList) {
            license_ip_info_row_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(rowsList);
        rowsList = NULL;
    }
    return NULL;

}
