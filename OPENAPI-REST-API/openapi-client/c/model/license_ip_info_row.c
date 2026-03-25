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
    memset(license_ip_info_row_local_var, 0, sizeof(license_ip_info_row_t));
    license_ip_info_row_local_var->_library_owned = 1;
    license_ip_info_row_local_var->desc = desc;
    license_ip_info_row_local_var->value = value;
    return license_ip_info_row_local_var;
}

__attribute__((deprecated)) license_ip_info_row_t *license_ip_info_row_create(
    char *desc,
    char *value
    ) {
    license_ip_info_row_t *result = license_ip_info_row_create_internal (
        desc,
        value
        );
    if (!result) {
    }
    return result;
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

    char *desc_local_str = NULL;

    char *value_local_str = NULL;

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


    if (desc && !cJSON_IsNull(desc)) desc_local_str = strdup(desc->valuestring);
    if (value && !cJSON_IsNull(value)) value_local_str = strdup(value->valuestring);

    license_ip_info_row_local_var = license_ip_info_row_create_internal (
        desc_local_str,
        value_local_str
        );

    if (!license_ip_info_row_local_var) {
        goto end;
    }

    return license_ip_info_row_local_var;
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
