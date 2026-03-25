#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "scrub_ip_filter_types_filters_value.h"



static scrub_ip_filter_types_filters_value_t *scrub_ip_filter_types_filters_value_create_internal(
    char *name,
    char *desc
    ) {
    scrub_ip_filter_types_filters_value_t *scrub_ip_filter_types_filters_value_local_var = malloc(sizeof(scrub_ip_filter_types_filters_value_t));
    if (!scrub_ip_filter_types_filters_value_local_var) {
        return NULL;
    }
    memset(scrub_ip_filter_types_filters_value_local_var, 0, sizeof(scrub_ip_filter_types_filters_value_t));
    scrub_ip_filter_types_filters_value_local_var->_library_owned = 1;
    scrub_ip_filter_types_filters_value_local_var->name = name;
    scrub_ip_filter_types_filters_value_local_var->desc = desc;
    return scrub_ip_filter_types_filters_value_local_var;
}

__attribute__((deprecated)) scrub_ip_filter_types_filters_value_t *scrub_ip_filter_types_filters_value_create(
    char *name,
    char *desc
    ) {
    scrub_ip_filter_types_filters_value_t *result = scrub_ip_filter_types_filters_value_create_internal (
        name,
        desc
        );
    if (!result) {
    }
    return result;
}

void scrub_ip_filter_types_filters_value_free(scrub_ip_filter_types_filters_value_t *scrub_ip_filter_types_filters_value) {
    if(NULL == scrub_ip_filter_types_filters_value){
        return ;
    }
    if(scrub_ip_filter_types_filters_value->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "scrub_ip_filter_types_filters_value_free");
        return ;
    }
    listEntry_t *listEntry;
    if (scrub_ip_filter_types_filters_value->name) {
        free(scrub_ip_filter_types_filters_value->name);
        scrub_ip_filter_types_filters_value->name = NULL;
    }
    if (scrub_ip_filter_types_filters_value->desc) {
        free(scrub_ip_filter_types_filters_value->desc);
        scrub_ip_filter_types_filters_value->desc = NULL;
    }
    free(scrub_ip_filter_types_filters_value);
}

cJSON *scrub_ip_filter_types_filters_value_convertToJSON(scrub_ip_filter_types_filters_value_t *scrub_ip_filter_types_filters_value) {
    cJSON *item = cJSON_CreateObject();

    // scrub_ip_filter_types_filters_value->name
    if(scrub_ip_filter_types_filters_value->name) {
    if(cJSON_AddStringToObject(item, "name", scrub_ip_filter_types_filters_value->name) == NULL) {
    goto fail; //String
    }
    }


    // scrub_ip_filter_types_filters_value->desc
    if(scrub_ip_filter_types_filters_value->desc) {
    if(cJSON_AddStringToObject(item, "desc", scrub_ip_filter_types_filters_value->desc) == NULL) {
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

scrub_ip_filter_types_filters_value_t *scrub_ip_filter_types_filters_value_parseFromJSON(cJSON *scrub_ip_filter_types_filters_valueJSON){

    scrub_ip_filter_types_filters_value_t *scrub_ip_filter_types_filters_value_local_var = NULL;

    char *name_local_str = NULL;

    char *desc_local_str = NULL;

    // scrub_ip_filter_types_filters_value->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(scrub_ip_filter_types_filters_valueJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // scrub_ip_filter_types_filters_value->desc
    cJSON *desc = cJSON_GetObjectItemCaseSensitive(scrub_ip_filter_types_filters_valueJSON, "desc");
    if (cJSON_IsNull(desc)) {
        desc = NULL;
    }
    if (desc) { 
    if(!cJSON_IsString(desc) && !cJSON_IsNull(desc))
    {
    goto end; //String
    }
    }


    if (name && !cJSON_IsNull(name)) name_local_str = strdup(name->valuestring);
    if (desc && !cJSON_IsNull(desc)) desc_local_str = strdup(desc->valuestring);

    scrub_ip_filter_types_filters_value_local_var = scrub_ip_filter_types_filters_value_create_internal (
        name_local_str,
        desc_local_str
        );

    if (!scrub_ip_filter_types_filters_value_local_var) {
        goto end;
    }

    return scrub_ip_filter_types_filters_value_local_var;
end:
    if (name_local_str) {
        free(name_local_str);
        name_local_str = NULL;
    }
    if (desc_local_str) {
        free(desc_local_str);
        desc_local_str = NULL;
    }
    return NULL;

}
