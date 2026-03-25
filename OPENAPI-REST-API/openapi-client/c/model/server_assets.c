#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server_assets.h"



static server_assets_t *server_assets_create_internal(
    char *title,
    int *size,
    char *type,
    list_t *header,
    list_t *rows
    ) {
    server_assets_t *server_assets_local_var = malloc(sizeof(server_assets_t));
    if (!server_assets_local_var) {
        return NULL;
    }
    memset(server_assets_local_var, 0, sizeof(server_assets_t));
    server_assets_local_var->_library_owned = 1;
    server_assets_local_var->title = title;
    server_assets_local_var->size = size;
    server_assets_local_var->type = type;
    server_assets_local_var->header = header;
    server_assets_local_var->rows = rows;
    return server_assets_local_var;
}

__attribute__((deprecated)) server_assets_t *server_assets_create(
    char *title,
    int *size,
    char *type,
    list_t *header,
    list_t *rows
    ) {
    int *size_copy = NULL;
    if (size) {
        size_copy = malloc(sizeof(int));
        if (size_copy) *size_copy = *size;
    }
    server_assets_t *result = server_assets_create_internal (
        title,
        size_copy,
        type,
        header,
        rows
        );
    if (!result) {
        free(size_copy);
    }
    return result;
}

void server_assets_free(server_assets_t *server_assets) {
    if(NULL == server_assets){
        return ;
    }
    if(server_assets->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "server_assets_free");
        return ;
    }
    listEntry_t *listEntry;
    if (server_assets->title) {
        free(server_assets->title);
        server_assets->title = NULL;
    }
    if (server_assets->size) {
        free(server_assets->size);
        server_assets->size = NULL;
    }
    if (server_assets->type) {
        free(server_assets->type);
        server_assets->type = NULL;
    }
    if (server_assets->header) {
        list_ForEach(listEntry, server_assets->header) {
            free(listEntry->data);
        }
        list_freeList(server_assets->header);
        server_assets->header = NULL;
    }
    if (server_assets->rows) {
        list_ForEach(listEntry, server_assets->rows) {
            free(listEntry->data);
        }
        list_freeList(server_assets->rows);
        server_assets->rows = NULL;
    }
    free(server_assets);
}

cJSON *server_assets_convertToJSON(server_assets_t *server_assets) {
    cJSON *item = cJSON_CreateObject();

    // server_assets->title
    if(server_assets->title) {
    if(cJSON_AddStringToObject(item, "title", server_assets->title) == NULL) {
    goto fail; //String
    }
    }


    // server_assets->size
    if(server_assets->size) {
    if(cJSON_AddNumberToObject(item, "size", *server_assets->size) == NULL) {
    goto fail; //Numeric
    }
    }


    // server_assets->type
    if(server_assets->type) {
    if(cJSON_AddStringToObject(item, "type", server_assets->type) == NULL) {
    goto fail; //String
    }
    }


    // server_assets->header
    if(server_assets->header) {
    cJSON *header = cJSON_AddArrayToObject(item, "header");
    if(header == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *headerListEntry;
    list_ForEach(headerListEntry, server_assets->header) {
    if(cJSON_AddStringToObject(header, "", headerListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // server_assets->rows
    if(server_assets->rows) {
    cJSON *rows = cJSON_AddArrayToObject(item, "rows");
    if(rows == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *rowsListEntry;
    list_ForEach(rowsListEntry, server_assets->rows) {
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

server_assets_t *server_assets_parseFromJSON(cJSON *server_assetsJSON){

    server_assets_t *server_assets_local_var = NULL;

    char *title_local_str = NULL;

    // define the local variable for server_assets->size
    int *size_local_var = NULL;

    char *type_local_str = NULL;

    // define the local list for server_assets->header
    list_t *headerList = NULL;

    // define the local list for server_assets->rows
    list_t *rowsList = NULL;

    // server_assets->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(server_assetsJSON, "title");
    if (cJSON_IsNull(title)) {
        title = NULL;
    }
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // server_assets->size
    cJSON *size = cJSON_GetObjectItemCaseSensitive(server_assetsJSON, "size");
    if (cJSON_IsNull(size)) {
        size = NULL;
    }
    if (size) { 
    if(!cJSON_IsNumber(size))
    {
    goto end; //Numeric
    }
    size_local_var = malloc(sizeof(int));
    if(!size_local_var)
    {
        goto end;
    }
    *size_local_var = size->valuedouble;
    }

    // server_assets->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(server_assetsJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // server_assets->header
    cJSON *header = cJSON_GetObjectItemCaseSensitive(server_assetsJSON, "header");
    if (cJSON_IsNull(header)) {
        header = NULL;
    }
    if (header) { 
    cJSON *header_local = NULL;
    if(!cJSON_IsArray(header)) {
        goto end;//primitive container
    }
    headerList = list_createList();

    cJSON_ArrayForEach(header_local, header)
    {
        if(!cJSON_IsString(header_local))
        {
            goto end;
        }
        list_addElement(headerList , strdup(header_local->valuestring));
    }
    }

    // server_assets->rows
    cJSON *rows = cJSON_GetObjectItemCaseSensitive(server_assetsJSON, "rows");
    if (cJSON_IsNull(rows)) {
        rows = NULL;
    }
    if (rows) { 
    cJSON *rows_local = NULL;
    if(!cJSON_IsArray(rows)) {
        goto end;//primitive container
    }
    rowsList = list_createList();

    cJSON_ArrayForEach(rows_local, rows)
    {
    }
    }


    if (title && !cJSON_IsNull(title)) title_local_str = strdup(title->valuestring);
    if (type && !cJSON_IsNull(type)) type_local_str = strdup(type->valuestring);

    server_assets_local_var = server_assets_create_internal (
        title_local_str,
        size_local_var,
        type_local_str,
        header ? headerList : NULL,
        rows ? rowsList : NULL
        );

    if (!server_assets_local_var) {
        goto end;
    }

    return server_assets_local_var;
end:
    if (title_local_str) {
        free(title_local_str);
        title_local_str = NULL;
    }
    if (size_local_var) {
        free(size_local_var);
        size_local_var = NULL;
    }
    if (type_local_str) {
        free(type_local_str);
        type_local_str = NULL;
    }
    if (headerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, headerList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(headerList);
        headerList = NULL;
    }
    if (rowsList) {
        list_freeList(rowsList);
        rowsList = NULL;
    }
    return NULL;

}
