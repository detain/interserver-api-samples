#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_row.h"



static vps_row_t *vps_row_create_internal(
    char *vps_id,
    char *vps_name,
    char *repeat_invoices_cost,
    char *vps_hostname,
    char *vps_ip,
    char *vps_status,
    char *services_name,
    char *vps_comment
    ) {
    vps_row_t *vps_row_local_var = malloc(sizeof(vps_row_t));
    if (!vps_row_local_var) {
        return NULL;
    }
    vps_row_local_var->vps_id = vps_id;
    vps_row_local_var->vps_name = vps_name;
    vps_row_local_var->repeat_invoices_cost = repeat_invoices_cost;
    vps_row_local_var->vps_hostname = vps_hostname;
    vps_row_local_var->vps_ip = vps_ip;
    vps_row_local_var->vps_status = vps_status;
    vps_row_local_var->services_name = services_name;
    vps_row_local_var->vps_comment = vps_comment;

    vps_row_local_var->_library_owned = 1;
    return vps_row_local_var;
}

__attribute__((deprecated)) vps_row_t *vps_row_create(
    char *vps_id,
    char *vps_name,
    char *repeat_invoices_cost,
    char *vps_hostname,
    char *vps_ip,
    char *vps_status,
    char *services_name,
    char *vps_comment
    ) {
    return vps_row_create_internal (
        vps_id,
        vps_name,
        repeat_invoices_cost,
        vps_hostname,
        vps_ip,
        vps_status,
        services_name,
        vps_comment
        );
}

void vps_row_free(vps_row_t *vps_row) {
    if(NULL == vps_row){
        return ;
    }
    if(vps_row->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_row_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_row->vps_id) {
        free(vps_row->vps_id);
        vps_row->vps_id = NULL;
    }
    if (vps_row->vps_name) {
        free(vps_row->vps_name);
        vps_row->vps_name = NULL;
    }
    if (vps_row->repeat_invoices_cost) {
        free(vps_row->repeat_invoices_cost);
        vps_row->repeat_invoices_cost = NULL;
    }
    if (vps_row->vps_hostname) {
        free(vps_row->vps_hostname);
        vps_row->vps_hostname = NULL;
    }
    if (vps_row->vps_ip) {
        free(vps_row->vps_ip);
        vps_row->vps_ip = NULL;
    }
    if (vps_row->vps_status) {
        free(vps_row->vps_status);
        vps_row->vps_status = NULL;
    }
    if (vps_row->services_name) {
        free(vps_row->services_name);
        vps_row->services_name = NULL;
    }
    if (vps_row->vps_comment) {
        free(vps_row->vps_comment);
        vps_row->vps_comment = NULL;
    }
    free(vps_row);
}

cJSON *vps_row_convertToJSON(vps_row_t *vps_row) {
    cJSON *item = cJSON_CreateObject();

    // vps_row->vps_id
    if (!vps_row->vps_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "vps_id", vps_row->vps_id) == NULL) {
    goto fail; //String
    }


    // vps_row->vps_name
    if (!vps_row->vps_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "vps_name", vps_row->vps_name) == NULL) {
    goto fail; //String
    }


    // vps_row->repeat_invoices_cost
    if (!vps_row->repeat_invoices_cost) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "repeat_invoices_cost", vps_row->repeat_invoices_cost) == NULL) {
    goto fail; //String
    }


    // vps_row->vps_hostname
    if (!vps_row->vps_hostname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "vps_hostname", vps_row->vps_hostname) == NULL) {
    goto fail; //String
    }


    // vps_row->vps_ip
    if (!vps_row->vps_ip) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "vps_ip", vps_row->vps_ip) == NULL) {
    goto fail; //String
    }


    // vps_row->vps_status
    if (!vps_row->vps_status) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "vps_status", vps_row->vps_status) == NULL) {
    goto fail; //String
    }


    // vps_row->services_name
    if (!vps_row->services_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "services_name", vps_row->services_name) == NULL) {
    goto fail; //String
    }


    // vps_row->vps_comment
    if (!vps_row->vps_comment) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "vps_comment", vps_row->vps_comment) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

vps_row_t *vps_row_parseFromJSON(cJSON *vps_rowJSON){

    vps_row_t *vps_row_local_var = NULL;

    // vps_row->vps_id
    cJSON *vps_id = cJSON_GetObjectItemCaseSensitive(vps_rowJSON, "vps_id");
    if (cJSON_IsNull(vps_id)) {
        vps_id = NULL;
    }
    if (!vps_id) {
        goto end;
    }

    
    if(!cJSON_IsString(vps_id))
    {
    goto end; //String
    }

    // vps_row->vps_name
    cJSON *vps_name = cJSON_GetObjectItemCaseSensitive(vps_rowJSON, "vps_name");
    if (cJSON_IsNull(vps_name)) {
        vps_name = NULL;
    }
    if (!vps_name) {
        goto end;
    }

    
    if(!cJSON_IsString(vps_name))
    {
    goto end; //String
    }

    // vps_row->repeat_invoices_cost
    cJSON *repeat_invoices_cost = cJSON_GetObjectItemCaseSensitive(vps_rowJSON, "repeat_invoices_cost");
    if (cJSON_IsNull(repeat_invoices_cost)) {
        repeat_invoices_cost = NULL;
    }
    if (!repeat_invoices_cost) {
        goto end;
    }

    
    if(!cJSON_IsString(repeat_invoices_cost))
    {
    goto end; //String
    }

    // vps_row->vps_hostname
    cJSON *vps_hostname = cJSON_GetObjectItemCaseSensitive(vps_rowJSON, "vps_hostname");
    if (cJSON_IsNull(vps_hostname)) {
        vps_hostname = NULL;
    }
    if (!vps_hostname) {
        goto end;
    }

    
    if(!cJSON_IsString(vps_hostname))
    {
    goto end; //String
    }

    // vps_row->vps_ip
    cJSON *vps_ip = cJSON_GetObjectItemCaseSensitive(vps_rowJSON, "vps_ip");
    if (cJSON_IsNull(vps_ip)) {
        vps_ip = NULL;
    }
    if (!vps_ip) {
        goto end;
    }

    
    if(!cJSON_IsString(vps_ip))
    {
    goto end; //String
    }

    // vps_row->vps_status
    cJSON *vps_status = cJSON_GetObjectItemCaseSensitive(vps_rowJSON, "vps_status");
    if (cJSON_IsNull(vps_status)) {
        vps_status = NULL;
    }
    if (!vps_status) {
        goto end;
    }

    
    if(!cJSON_IsString(vps_status))
    {
    goto end; //String
    }

    // vps_row->services_name
    cJSON *services_name = cJSON_GetObjectItemCaseSensitive(vps_rowJSON, "services_name");
    if (cJSON_IsNull(services_name)) {
        services_name = NULL;
    }
    if (!services_name) {
        goto end;
    }

    
    if(!cJSON_IsString(services_name))
    {
    goto end; //String
    }

    // vps_row->vps_comment
    cJSON *vps_comment = cJSON_GetObjectItemCaseSensitive(vps_rowJSON, "vps_comment");
    if (cJSON_IsNull(vps_comment)) {
        vps_comment = NULL;
    }
    if (!vps_comment) {
        goto end;
    }

    
    if(!cJSON_IsString(vps_comment))
    {
    goto end; //String
    }


    vps_row_local_var = vps_row_create_internal (
        strdup(vps_id->valuestring),
        strdup(vps_name->valuestring),
        strdup(repeat_invoices_cost->valuestring),
        strdup(vps_hostname->valuestring),
        strdup(vps_ip->valuestring),
        strdup(vps_status->valuestring),
        strdup(services_name->valuestring),
        strdup(vps_comment->valuestring)
        );

    return vps_row_local_var;
end:
    return NULL;

}
