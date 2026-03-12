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
    vps_ip_info_row_local_var->desc = desc;
    vps_ip_info_row_local_var->value = value;

    vps_ip_info_row_local_var->_library_owned = 1;
    return vps_ip_info_row_local_var;
}

__attribute__((deprecated)) vps_ip_info_row_t *vps_ip_info_row_create(
    char *desc,
    char *value
    ) {
    return vps_ip_info_row_create_internal (
        desc,
        value
        );
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


    vps_ip_info_row_local_var = vps_ip_info_row_create_internal (
        desc && !cJSON_IsNull(desc) ? strdup(desc->valuestring) : NULL,
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL
        );

    return vps_ip_info_row_local_var;
end:
    return NULL;

}
