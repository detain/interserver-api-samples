#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "quickserver_addons_row.h"



static quickserver_addons_row_t *quickserver_addons_row_create_internal(
    char *desc,
    char *value
    ) {
    quickserver_addons_row_t *quickserver_addons_row_local_var = malloc(sizeof(quickserver_addons_row_t));
    if (!quickserver_addons_row_local_var) {
        return NULL;
    }
    memset(quickserver_addons_row_local_var, 0, sizeof(quickserver_addons_row_t));
    quickserver_addons_row_local_var->_library_owned = 1;
    quickserver_addons_row_local_var->desc = desc;
    quickserver_addons_row_local_var->value = value;
    return quickserver_addons_row_local_var;
}

__attribute__((deprecated)) quickserver_addons_row_t *quickserver_addons_row_create(
    char *desc,
    char *value
    ) {
    quickserver_addons_row_t *result = quickserver_addons_row_create_internal (
        desc,
        value
        );
    if (!result) {
    }
    return result;
}

void quickserver_addons_row_free(quickserver_addons_row_t *quickserver_addons_row) {
    if(NULL == quickserver_addons_row){
        return ;
    }
    if(quickserver_addons_row->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "quickserver_addons_row_free");
        return ;
    }
    listEntry_t *listEntry;
    if (quickserver_addons_row->desc) {
        free(quickserver_addons_row->desc);
        quickserver_addons_row->desc = NULL;
    }
    if (quickserver_addons_row->value) {
        free(quickserver_addons_row->value);
        quickserver_addons_row->value = NULL;
    }
    free(quickserver_addons_row);
}

cJSON *quickserver_addons_row_convertToJSON(quickserver_addons_row_t *quickserver_addons_row) {
    cJSON *item = cJSON_CreateObject();

    // quickserver_addons_row->desc
    if(quickserver_addons_row->desc) {
    if(cJSON_AddStringToObject(item, "desc", quickserver_addons_row->desc) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_addons_row->value
    if(quickserver_addons_row->value) {
    if(cJSON_AddStringToObject(item, "value", quickserver_addons_row->value) == NULL) {
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

quickserver_addons_row_t *quickserver_addons_row_parseFromJSON(cJSON *quickserver_addons_rowJSON){

    quickserver_addons_row_t *quickserver_addons_row_local_var = NULL;

    char *desc_local_str = NULL;

    char *value_local_str = NULL;

    // quickserver_addons_row->desc
    cJSON *desc = cJSON_GetObjectItemCaseSensitive(quickserver_addons_rowJSON, "desc");
    if (cJSON_IsNull(desc)) {
        desc = NULL;
    }
    if (desc) { 
    if(!cJSON_IsString(desc) && !cJSON_IsNull(desc))
    {
    goto end; //String
    }
    }

    // quickserver_addons_row->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(quickserver_addons_rowJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }


    if (desc && !cJSON_IsNull(desc)) desc_local_str = strdup(desc->valuestring);
    if (value && !cJSON_IsNull(value)) value_local_str = strdup(value->valuestring);

    quickserver_addons_row_local_var = quickserver_addons_row_create_internal (
        desc_local_str,
        value_local_str
        );

    if (!quickserver_addons_row_local_var) {
        goto end;
    }

    return quickserver_addons_row_local_var;
end:
    if (desc_local_str) {
        free(desc_local_str);
        desc_local_str = NULL;
    }
    if (value_local_str) {
        free(value_local_str);
        value_local_str = NULL;
    }
    return NULL;

}
