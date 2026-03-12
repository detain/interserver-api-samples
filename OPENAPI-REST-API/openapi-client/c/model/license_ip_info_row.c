#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "license_ip_info_row.h"



static license_ip_info_row_t *license_ip_info_row_create_internal(
    char *desc,
    char *value
    ) {
    license_ip_info_row_t *license_ip_info_row_local_var = malloc(sizeof(license_ip_info_row_t));
    if (!license_ip_info_row_local_var) {
        return NULL;
    }
    license_ip_info_row_local_var->desc = desc;
    license_ip_info_row_local_var->value = value;

    license_ip_info_row_local_var->_library_owned = 1;
    return license_ip_info_row_local_var;
}

__attribute__((deprecated)) license_ip_info_row_t *license_ip_info_row_create(
    char *desc,
    char *value
    ) {
    return license_ip_info_row_create_internal (
        desc,
        value
        );
}

void license_ip_info_row_free(license_ip_info_row_t *license_ip_info_row) {
    if(NULL == license_ip_info_row){
        return ;
    }
    if(license_ip_info_row->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "license_ip_info_row_free");
        return ;
    }
    listEntry_t *listEntry;
    if (license_ip_info_row->desc) {
        free(license_ip_info_row->desc);
        license_ip_info_row->desc = NULL;
    }
    if (license_ip_info_row->value) {
        free(license_ip_info_row->value);
        license_ip_info_row->value = NULL;
    }
    free(license_ip_info_row);
}

cJSON *license_ip_info_row_convertToJSON(license_ip_info_row_t *license_ip_info_row) {
    cJSON *item = cJSON_CreateObject();

    // license_ip_info_row->desc
    if(license_ip_info_row->desc) {
    if(cJSON_AddStringToObject(item, "desc", license_ip_info_row->desc) == NULL) {
    goto fail; //String
    }
    }


    // license_ip_info_row->value
    if(license_ip_info_row->value) {
    if(cJSON_AddStringToObject(item, "value", license_ip_info_row->value) == NULL) {
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

license_ip_info_row_t *license_ip_info_row_parseFromJSON(cJSON *license_ip_info_rowJSON){

    license_ip_info_row_t *license_ip_info_row_local_var = NULL;

    // license_ip_info_row->desc
    cJSON *desc = cJSON_GetObjectItemCaseSensitive(license_ip_info_rowJSON, "desc");
    if (cJSON_IsNull(desc)) {
        desc = NULL;
    }
    if (desc) { 
    if(!cJSON_IsString(desc) && !cJSON_IsNull(desc))
    {
    goto end; //String
    }
    }

    // license_ip_info_row->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(license_ip_info_rowJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }


    license_ip_info_row_local_var = license_ip_info_row_create_internal (
        desc && !cJSON_IsNull(desc) ? strdup(desc->valuestring) : NULL,
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL
        );

    return license_ip_info_row_local_var;
end:
    return NULL;

}
