#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "website_table_row.h"



static website_table_row_t *website_table_row_create_internal(
    char *desc,
    char *value
    ) {
    website_table_row_t *website_table_row_local_var = malloc(sizeof(website_table_row_t));
    if (!website_table_row_local_var) {
        return NULL;
    }
    website_table_row_local_var->desc = desc;
    website_table_row_local_var->value = value;

    website_table_row_local_var->_library_owned = 1;
    return website_table_row_local_var;
}

__attribute__((deprecated)) website_table_row_t *website_table_row_create(
    char *desc,
    char *value
    ) {
    return website_table_row_create_internal (
        desc,
        value
        );
}

void website_table_row_free(website_table_row_t *website_table_row) {
    if(NULL == website_table_row){
        return ;
    }
    if(website_table_row->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "website_table_row_free");
        return ;
    }
    listEntry_t *listEntry;
    if (website_table_row->desc) {
        free(website_table_row->desc);
        website_table_row->desc = NULL;
    }
    if (website_table_row->value) {
        free(website_table_row->value);
        website_table_row->value = NULL;
    }
    free(website_table_row);
}

cJSON *website_table_row_convertToJSON(website_table_row_t *website_table_row) {
    cJSON *item = cJSON_CreateObject();

    // website_table_row->desc
    if(website_table_row->desc) {
    if(cJSON_AddStringToObject(item, "desc", website_table_row->desc) == NULL) {
    goto fail; //String
    }
    }


    // website_table_row->value
    if(website_table_row->value) {
    if(cJSON_AddStringToObject(item, "value", website_table_row->value) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

website_table_row_t *website_table_row_parseFromJSON(cJSON *website_table_rowJSON){

    website_table_row_t *website_table_row_local_var = NULL;

    // website_table_row->desc
    cJSON *desc = cJSON_GetObjectItemCaseSensitive(website_table_rowJSON, "desc");
    if (cJSON_IsNull(desc)) {
        desc = NULL;
    }
    if (desc) { 
    if(!cJSON_IsString(desc) && !cJSON_IsNull(desc))
    {
    goto end; //String
    }
    }

    // website_table_row->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(website_table_rowJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }


    website_table_row_local_var = website_table_row_create_internal (
        desc && !cJSON_IsNull(desc) ? strdup(desc->valuestring) : NULL,
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL
        );

    return website_table_row_local_var;
end:
    return NULL;

}
