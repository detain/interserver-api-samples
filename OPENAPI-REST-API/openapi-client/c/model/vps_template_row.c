#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_template_row.h"



static vps_template_row_t *vps_template_row_create_internal(
    char *template_id,
    char *template_type,
    char *template_os,
    char *template_version,
    char *template_bits,
    char *template_file,
    char *template_available,
    char *template_name,
    char *template_dir
    ) {
    vps_template_row_t *vps_template_row_local_var = malloc(sizeof(vps_template_row_t));
    if (!vps_template_row_local_var) {
        return NULL;
    }
    vps_template_row_local_var->template_id = template_id;
    vps_template_row_local_var->template_type = template_type;
    vps_template_row_local_var->template_os = template_os;
    vps_template_row_local_var->template_version = template_version;
    vps_template_row_local_var->template_bits = template_bits;
    vps_template_row_local_var->template_file = template_file;
    vps_template_row_local_var->template_available = template_available;
    vps_template_row_local_var->template_name = template_name;
    vps_template_row_local_var->template_dir = template_dir;

    vps_template_row_local_var->_library_owned = 1;
    return vps_template_row_local_var;
}

__attribute__((deprecated)) vps_template_row_t *vps_template_row_create(
    char *template_id,
    char *template_type,
    char *template_os,
    char *template_version,
    char *template_bits,
    char *template_file,
    char *template_available,
    char *template_name,
    char *template_dir
    ) {
    return vps_template_row_create_internal (
        template_id,
        template_type,
        template_os,
        template_version,
        template_bits,
        template_file,
        template_available,
        template_name,
        template_dir
        );
}

void vps_template_row_free(vps_template_row_t *vps_template_row) {
    if(NULL == vps_template_row){
        return ;
    }
    if(vps_template_row->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_template_row_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_template_row->template_id) {
        free(vps_template_row->template_id);
        vps_template_row->template_id = NULL;
    }
    if (vps_template_row->template_type) {
        free(vps_template_row->template_type);
        vps_template_row->template_type = NULL;
    }
    if (vps_template_row->template_os) {
        free(vps_template_row->template_os);
        vps_template_row->template_os = NULL;
    }
    if (vps_template_row->template_version) {
        free(vps_template_row->template_version);
        vps_template_row->template_version = NULL;
    }
    if (vps_template_row->template_bits) {
        free(vps_template_row->template_bits);
        vps_template_row->template_bits = NULL;
    }
    if (vps_template_row->template_file) {
        free(vps_template_row->template_file);
        vps_template_row->template_file = NULL;
    }
    if (vps_template_row->template_available) {
        free(vps_template_row->template_available);
        vps_template_row->template_available = NULL;
    }
    if (vps_template_row->template_name) {
        free(vps_template_row->template_name);
        vps_template_row->template_name = NULL;
    }
    if (vps_template_row->template_dir) {
        free(vps_template_row->template_dir);
        vps_template_row->template_dir = NULL;
    }
    free(vps_template_row);
}

cJSON *vps_template_row_convertToJSON(vps_template_row_t *vps_template_row) {
    cJSON *item = cJSON_CreateObject();

    // vps_template_row->template_id
    if(vps_template_row->template_id) {
    if(cJSON_AddStringToObject(item, "template_id", vps_template_row->template_id) == NULL) {
    goto fail; //String
    }
    }


    // vps_template_row->template_type
    if(vps_template_row->template_type) {
    if(cJSON_AddStringToObject(item, "template_type", vps_template_row->template_type) == NULL) {
    goto fail; //String
    }
    }


    // vps_template_row->template_os
    if(vps_template_row->template_os) {
    if(cJSON_AddStringToObject(item, "template_os", vps_template_row->template_os) == NULL) {
    goto fail; //String
    }
    }


    // vps_template_row->template_version
    if(vps_template_row->template_version) {
    if(cJSON_AddStringToObject(item, "template_version", vps_template_row->template_version) == NULL) {
    goto fail; //String
    }
    }


    // vps_template_row->template_bits
    if(vps_template_row->template_bits) {
    if(cJSON_AddStringToObject(item, "template_bits", vps_template_row->template_bits) == NULL) {
    goto fail; //String
    }
    }


    // vps_template_row->template_file
    if(vps_template_row->template_file) {
    if(cJSON_AddStringToObject(item, "template_file", vps_template_row->template_file) == NULL) {
    goto fail; //String
    }
    }


    // vps_template_row->template_available
    if(vps_template_row->template_available) {
    if(cJSON_AddStringToObject(item, "template_available", vps_template_row->template_available) == NULL) {
    goto fail; //String
    }
    }


    // vps_template_row->template_name
    if(vps_template_row->template_name) {
    if(cJSON_AddStringToObject(item, "template_name", vps_template_row->template_name) == NULL) {
    goto fail; //String
    }
    }


    // vps_template_row->template_dir
    if(vps_template_row->template_dir) {
    if(cJSON_AddStringToObject(item, "template_dir", vps_template_row->template_dir) == NULL) {
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

vps_template_row_t *vps_template_row_parseFromJSON(cJSON *vps_template_rowJSON){

    vps_template_row_t *vps_template_row_local_var = NULL;

    // vps_template_row->template_id
    cJSON *template_id = cJSON_GetObjectItemCaseSensitive(vps_template_rowJSON, "template_id");
    if (cJSON_IsNull(template_id)) {
        template_id = NULL;
    }
    if (template_id) { 
    if(!cJSON_IsString(template_id) && !cJSON_IsNull(template_id))
    {
    goto end; //String
    }
    }

    // vps_template_row->template_type
    cJSON *template_type = cJSON_GetObjectItemCaseSensitive(vps_template_rowJSON, "template_type");
    if (cJSON_IsNull(template_type)) {
        template_type = NULL;
    }
    if (template_type) { 
    if(!cJSON_IsString(template_type) && !cJSON_IsNull(template_type))
    {
    goto end; //String
    }
    }

    // vps_template_row->template_os
    cJSON *template_os = cJSON_GetObjectItemCaseSensitive(vps_template_rowJSON, "template_os");
    if (cJSON_IsNull(template_os)) {
        template_os = NULL;
    }
    if (template_os) { 
    if(!cJSON_IsString(template_os) && !cJSON_IsNull(template_os))
    {
    goto end; //String
    }
    }

    // vps_template_row->template_version
    cJSON *template_version = cJSON_GetObjectItemCaseSensitive(vps_template_rowJSON, "template_version");
    if (cJSON_IsNull(template_version)) {
        template_version = NULL;
    }
    if (template_version) { 
    if(!cJSON_IsString(template_version) && !cJSON_IsNull(template_version))
    {
    goto end; //String
    }
    }

    // vps_template_row->template_bits
    cJSON *template_bits = cJSON_GetObjectItemCaseSensitive(vps_template_rowJSON, "template_bits");
    if (cJSON_IsNull(template_bits)) {
        template_bits = NULL;
    }
    if (template_bits) { 
    if(!cJSON_IsString(template_bits) && !cJSON_IsNull(template_bits))
    {
    goto end; //String
    }
    }

    // vps_template_row->template_file
    cJSON *template_file = cJSON_GetObjectItemCaseSensitive(vps_template_rowJSON, "template_file");
    if (cJSON_IsNull(template_file)) {
        template_file = NULL;
    }
    if (template_file) { 
    if(!cJSON_IsString(template_file) && !cJSON_IsNull(template_file))
    {
    goto end; //String
    }
    }

    // vps_template_row->template_available
    cJSON *template_available = cJSON_GetObjectItemCaseSensitive(vps_template_rowJSON, "template_available");
    if (cJSON_IsNull(template_available)) {
        template_available = NULL;
    }
    if (template_available) { 
    if(!cJSON_IsString(template_available) && !cJSON_IsNull(template_available))
    {
    goto end; //String
    }
    }

    // vps_template_row->template_name
    cJSON *template_name = cJSON_GetObjectItemCaseSensitive(vps_template_rowJSON, "template_name");
    if (cJSON_IsNull(template_name)) {
        template_name = NULL;
    }
    if (template_name) { 
    if(!cJSON_IsString(template_name) && !cJSON_IsNull(template_name))
    {
    goto end; //String
    }
    }

    // vps_template_row->template_dir
    cJSON *template_dir = cJSON_GetObjectItemCaseSensitive(vps_template_rowJSON, "template_dir");
    if (cJSON_IsNull(template_dir)) {
        template_dir = NULL;
    }
    if (template_dir) { 
    if(!cJSON_IsString(template_dir) && !cJSON_IsNull(template_dir))
    {
    goto end; //String
    }
    }


    vps_template_row_local_var = vps_template_row_create_internal (
        template_id && !cJSON_IsNull(template_id) ? strdup(template_id->valuestring) : NULL,
        template_type && !cJSON_IsNull(template_type) ? strdup(template_type->valuestring) : NULL,
        template_os && !cJSON_IsNull(template_os) ? strdup(template_os->valuestring) : NULL,
        template_version && !cJSON_IsNull(template_version) ? strdup(template_version->valuestring) : NULL,
        template_bits && !cJSON_IsNull(template_bits) ? strdup(template_bits->valuestring) : NULL,
        template_file && !cJSON_IsNull(template_file) ? strdup(template_file->valuestring) : NULL,
        template_available && !cJSON_IsNull(template_available) ? strdup(template_available->valuestring) : NULL,
        template_name && !cJSON_IsNull(template_name) ? strdup(template_name->valuestring) : NULL,
        template_dir && !cJSON_IsNull(template_dir) ? strdup(template_dir->valuestring) : NULL
        );

    return vps_template_row_local_var;
end:
    return NULL;

}
