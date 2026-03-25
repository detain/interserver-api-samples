#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_ip_info_row.h"



static vps_ip_info_row_t *vps_ip_info_row_create_internal(
    char *desc,
    char *value
    ) {
    vps_ip_info_row_t *vps_ip_info_row_local_var = malloc(sizeof(vps_ip_info_row_t));
    if (!vps_ip_info_row_local_var) {
        return NULL;
    }
    memset(vps_ip_info_row_local_var, 0, sizeof(vps_ip_info_row_t));
    vps_ip_info_row_local_var->_library_owned = 1;
    vps_ip_info_row_local_var->desc = desc;
    vps_ip_info_row_local_var->value = value;
    return vps_ip_info_row_local_var;
}

__attribute__((deprecated)) vps_ip_info_row_t *vps_ip_info_row_create(
    char *desc,
    char *value
    ) {
    vps_ip_info_row_t *result = vps_ip_info_row_create_internal (
        desc,
        value
        );
    if (!result) {
    }
    return result;
}

void vps_ip_info_row_free(vps_ip_info_row_t *vps_ip_info_row) {
    if(NULL == vps_ip_info_row){
        return ;
    }
    if(vps_ip_info_row->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_ip_info_row_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_ip_info_row->desc) {
        free(vps_ip_info_row->desc);
        vps_ip_info_row->desc = NULL;
    }
    if (vps_ip_info_row->value) {
        free(vps_ip_info_row->value);
        vps_ip_info_row->value = NULL;
    }
    free(vps_ip_info_row);
}

cJSON *vps_ip_info_row_convertToJSON(vps_ip_info_row_t *vps_ip_info_row) {
    cJSON *item = cJSON_CreateObject();

    // vps_ip_info_row->desc
    if(vps_ip_info_row->desc) {
    if(cJSON_AddStringToObject(item, "desc", vps_ip_info_row->desc) == NULL) {
    goto fail; //String
    }
    }


    // vps_ip_info_row->value
    if(vps_ip_info_row->value) {
    if(cJSON_AddStringToObject(item, "value", vps_ip_info_row->value) == NULL) {
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

vps_ip_info_row_t *vps_ip_info_row_parseFromJSON(cJSON *vps_ip_info_rowJSON){

    vps_ip_info_row_t *vps_ip_info_row_local_var = NULL;

    char *desc_local_str = NULL;

    char *value_local_str = NULL;

    // vps_ip_info_row->desc
    cJSON *desc = cJSON_GetObjectItemCaseSensitive(vps_ip_info_rowJSON, "desc");
    if (cJSON_IsNull(desc)) {
        desc = NULL;
    }
    if (desc) { 
    if(!cJSON_IsString(desc) && !cJSON_IsNull(desc))
    {
    goto end; //String
    }
    }

    // vps_ip_info_row->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(vps_ip_info_rowJSON, "value");
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

    vps_ip_info_row_local_var = vps_ip_info_row_create_internal (
        desc_local_str,
        value_local_str
        );

    if (!vps_ip_info_row_local_var) {
        goto end;
    }

    return vps_ip_info_row_local_var;
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
