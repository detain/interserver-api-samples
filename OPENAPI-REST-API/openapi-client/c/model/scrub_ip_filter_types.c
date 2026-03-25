#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "scrub_ip_filter_types.h"



static scrub_ip_filter_types_t *scrub_ip_filter_types_create_internal(
    int *success,
    list_t* filters
    ) {
    scrub_ip_filter_types_t *scrub_ip_filter_types_local_var = malloc(sizeof(scrub_ip_filter_types_t));
    if (!scrub_ip_filter_types_local_var) {
        return NULL;
    }
    memset(scrub_ip_filter_types_local_var, 0, sizeof(scrub_ip_filter_types_t));
    scrub_ip_filter_types_local_var->_library_owned = 1;
    scrub_ip_filter_types_local_var->success = success;
    scrub_ip_filter_types_local_var->filters = filters;
    return scrub_ip_filter_types_local_var;
}

__attribute__((deprecated)) scrub_ip_filter_types_t *scrub_ip_filter_types_create(
    int *success,
    list_t* filters
    ) {
    int *success_copy = NULL;
    if (success) {
        success_copy = malloc(sizeof(int));
        if (success_copy) *success_copy = *success;
    }
    scrub_ip_filter_types_t *result = scrub_ip_filter_types_create_internal (
        success_copy,
        filters
        );
    if (!result) {
        free(success_copy);
    }
    return result;
}

void scrub_ip_filter_types_free(scrub_ip_filter_types_t *scrub_ip_filter_types) {
    if(NULL == scrub_ip_filter_types){
        return ;
    }
    if(scrub_ip_filter_types->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "scrub_ip_filter_types_free");
        return ;
    }
    listEntry_t *listEntry;
    if (scrub_ip_filter_types->success) {
        free(scrub_ip_filter_types->success);
        scrub_ip_filter_types->success = NULL;
    }
    if (scrub_ip_filter_types->filters) {
        list_ForEach(listEntry, scrub_ip_filter_types->filters) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(scrub_ip_filter_types->filters);
        scrub_ip_filter_types->filters = NULL;
    }
    free(scrub_ip_filter_types);
}

cJSON *scrub_ip_filter_types_convertToJSON(scrub_ip_filter_types_t *scrub_ip_filter_types) {
    cJSON *item = cJSON_CreateObject();

    // scrub_ip_filter_types->success
    if(scrub_ip_filter_types->success) {
    if(cJSON_AddBoolToObject(item, "success", *scrub_ip_filter_types->success) == NULL) {
    goto fail; //Bool
    }
    }


    // scrub_ip_filter_types->filters
    if(scrub_ip_filter_types->filters) {
    cJSON *filters = cJSON_AddObjectToObject(item, "filters");
    if(filters == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = filters;
    listEntry_t *filtersListEntry;
    if (scrub_ip_filter_types->filters) {
    list_ForEach(filtersListEntry, scrub_ip_filter_types->filters) {
        keyValuePair_t *localKeyValue = filtersListEntry->data;
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

scrub_ip_filter_types_t *scrub_ip_filter_types_parseFromJSON(cJSON *scrub_ip_filter_typesJSON){

    scrub_ip_filter_types_t *scrub_ip_filter_types_local_var = NULL;

    // define the local variable for scrub_ip_filter_types->success
    int *success_local_var = NULL;

    // define the local map for scrub_ip_filter_types->filters
    list_t *filtersList = NULL;

    // scrub_ip_filter_types->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(scrub_ip_filter_typesJSON, "success");
    if (cJSON_IsNull(success)) {
        success = NULL;
    }
    if (success) { 
    if(!cJSON_IsBool(success))
    {
    goto end; //Bool
    }
    success_local_var = malloc(sizeof(int));
    if(!success_local_var)
    {
        goto end;
    }
    *success_local_var = success->valueint;
    }

    // scrub_ip_filter_types->filters
    cJSON *filters = cJSON_GetObjectItemCaseSensitive(scrub_ip_filter_typesJSON, "filters");
    if (cJSON_IsNull(filters)) {
        filters = NULL;
    }
    if (filters) { 

    // The data type of the elements in scrub_ip_filter_types->filters is currently not supported.

    }



    scrub_ip_filter_types_local_var = scrub_ip_filter_types_create_internal (
        success_local_var,
        filters ? filtersList : NULL
        );

    if (!scrub_ip_filter_types_local_var) {
        goto end;
    }

    return scrub_ip_filter_types_local_var;
end:
    if (success_local_var) {
        free(success_local_var);
        success_local_var = NULL;
    }

    // The data type of the elements in scrub_ip_filter_types->filters is currently not supported.

    return NULL;

}
