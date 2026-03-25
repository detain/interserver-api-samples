#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "get_scrub_ip_details_200_response_extra_info_tables_scrub_ips.h"



static get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_t *get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_create_internal(
    char *title,
    list_t *rows
    ) {
    get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_t *get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_local_var = malloc(sizeof(get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_t));
    if (!get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_local_var) {
        return NULL;
    }
    memset(get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_local_var, 0, sizeof(get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_t));
    get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_local_var->_library_owned = 1;
    get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_local_var->title = title;
    get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_local_var->rows = rows;
    return get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_local_var;
}

__attribute__((deprecated)) get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_t *get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_create(
    char *title,
    list_t *rows
    ) {
    get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_t *result = get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_create_internal (
        title,
        rows
        );
    if (!result) {
    }
    return result;
}

void get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_free(get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_t *get_scrub_ip_details_200_response_extra_info_tables_scrub_ips) {
    if(NULL == get_scrub_ip_details_200_response_extra_info_tables_scrub_ips){
        return ;
    }
    if(get_scrub_ip_details_200_response_extra_info_tables_scrub_ips->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_free");
        return ;
    }
    listEntry_t *listEntry;
    if (get_scrub_ip_details_200_response_extra_info_tables_scrub_ips->title) {
        free(get_scrub_ip_details_200_response_extra_info_tables_scrub_ips->title);
        get_scrub_ip_details_200_response_extra_info_tables_scrub_ips->title = NULL;
    }
    if (get_scrub_ip_details_200_response_extra_info_tables_scrub_ips->rows) {
        list_ForEach(listEntry, get_scrub_ip_details_200_response_extra_info_tables_scrub_ips->rows) {
            get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_free(listEntry->data);
        }
        list_freeList(get_scrub_ip_details_200_response_extra_info_tables_scrub_ips->rows);
        get_scrub_ip_details_200_response_extra_info_tables_scrub_ips->rows = NULL;
    }
    free(get_scrub_ip_details_200_response_extra_info_tables_scrub_ips);
}

cJSON *get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_convertToJSON(get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_t *get_scrub_ip_details_200_response_extra_info_tables_scrub_ips) {
    cJSON *item = cJSON_CreateObject();

    // get_scrub_ip_details_200_response_extra_info_tables_scrub_ips->title
    if(get_scrub_ip_details_200_response_extra_info_tables_scrub_ips->title) {
    if(cJSON_AddStringToObject(item, "title", get_scrub_ip_details_200_response_extra_info_tables_scrub_ips->title) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_extra_info_tables_scrub_ips->rows
    if(get_scrub_ip_details_200_response_extra_info_tables_scrub_ips->rows) {
    cJSON *rows = cJSON_AddArrayToObject(item, "rows");
    if(rows == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *rowsListEntry;
    if (get_scrub_ip_details_200_response_extra_info_tables_scrub_ips->rows) {
    list_ForEach(rowsListEntry, get_scrub_ip_details_200_response_extra_info_tables_scrub_ips->rows) {
    cJSON *itemLocal = get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_convertToJSON(rowsListEntry->data);
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

get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_t *get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_parseFromJSON(cJSON *get_scrub_ip_details_200_response_extra_info_tables_scrub_ipsJSON){

    get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_t *get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_local_var = NULL;

    char *title_local_str = NULL;

    // define the local list for get_scrub_ip_details_200_response_extra_info_tables_scrub_ips->rows
    list_t *rowsList = NULL;

    // get_scrub_ip_details_200_response_extra_info_tables_scrub_ips->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_extra_info_tables_scrub_ipsJSON, "title");
    if (cJSON_IsNull(title)) {
        title = NULL;
    }
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_extra_info_tables_scrub_ips->rows
    cJSON *rows = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_extra_info_tables_scrub_ipsJSON, "rows");
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
        get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_t *rowsItem = get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_parseFromJSON(rows_local_nonprimitive);

        list_addElement(rowsList, rowsItem);
    }
    }


    if (title && !cJSON_IsNull(title)) title_local_str = strdup(title->valuestring);

    get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_local_var = get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_create_internal (
        title_local_str,
        rows ? rowsList : NULL
        );

    if (!get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_local_var) {
        goto end;
    }

    return get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_local_var;
end:
    if (title_local_str) {
        free(title_local_str);
        title_local_str = NULL;
    }
    if (rowsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, rowsList) {
            get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(rowsList);
        rowsList = NULL;
    }
    return NULL;

}
