#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "website_row.h"



static website_row_t *website_row_create_internal(
    char *website_id,
    char *website_hostname,
    char *repeat_invoices_cost,
    char *website_status,
    char *services_name,
    char *website_comment
    ) {
    website_row_t *website_row_local_var = malloc(sizeof(website_row_t));
    if (!website_row_local_var) {
        return NULL;
    }
    website_row_local_var->website_id = website_id;
    website_row_local_var->website_hostname = website_hostname;
    website_row_local_var->repeat_invoices_cost = repeat_invoices_cost;
    website_row_local_var->website_status = website_status;
    website_row_local_var->services_name = services_name;
    website_row_local_var->website_comment = website_comment;

    website_row_local_var->_library_owned = 1;
    return website_row_local_var;
}

__attribute__((deprecated)) website_row_t *website_row_create(
    char *website_id,
    char *website_hostname,
    char *repeat_invoices_cost,
    char *website_status,
    char *services_name,
    char *website_comment
    ) {
    return website_row_create_internal (
        website_id,
        website_hostname,
        repeat_invoices_cost,
        website_status,
        services_name,
        website_comment
        );
}

void website_row_free(website_row_t *website_row) {
    if(NULL == website_row){
        return ;
    }
    if(website_row->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "website_row_free");
        return ;
    }
    listEntry_t *listEntry;
    if (website_row->website_id) {
        free(website_row->website_id);
        website_row->website_id = NULL;
    }
    if (website_row->website_hostname) {
        free(website_row->website_hostname);
        website_row->website_hostname = NULL;
    }
    if (website_row->repeat_invoices_cost) {
        free(website_row->repeat_invoices_cost);
        website_row->repeat_invoices_cost = NULL;
    }
    if (website_row->website_status) {
        free(website_row->website_status);
        website_row->website_status = NULL;
    }
    if (website_row->services_name) {
        free(website_row->services_name);
        website_row->services_name = NULL;
    }
    if (website_row->website_comment) {
        free(website_row->website_comment);
        website_row->website_comment = NULL;
    }
    free(website_row);
}

cJSON *website_row_convertToJSON(website_row_t *website_row) {
    cJSON *item = cJSON_CreateObject();

    // website_row->website_id
    if (!website_row->website_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "website_id", website_row->website_id) == NULL) {
    goto fail; //String
    }


    // website_row->website_hostname
    if (!website_row->website_hostname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "website_hostname", website_row->website_hostname) == NULL) {
    goto fail; //String
    }


    // website_row->repeat_invoices_cost
    if (!website_row->repeat_invoices_cost) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "repeat_invoices_cost", website_row->repeat_invoices_cost) == NULL) {
    goto fail; //String
    }


    // website_row->website_status
    if (!website_row->website_status) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "website_status", website_row->website_status) == NULL) {
    goto fail; //String
    }


    // website_row->services_name
    if (!website_row->services_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "services_name", website_row->services_name) == NULL) {
    goto fail; //String
    }


    // website_row->website_comment
    if (!website_row->website_comment) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "website_comment", website_row->website_comment) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

website_row_t *website_row_parseFromJSON(cJSON *website_rowJSON){

    website_row_t *website_row_local_var = NULL;

    // website_row->website_id
    cJSON *website_id = cJSON_GetObjectItemCaseSensitive(website_rowJSON, "website_id");
    if (cJSON_IsNull(website_id)) {
        website_id = NULL;
    }
    if (!website_id) {
        goto end;
    }

    
    if(!cJSON_IsString(website_id))
    {
    goto end; //String
    }

    // website_row->website_hostname
    cJSON *website_hostname = cJSON_GetObjectItemCaseSensitive(website_rowJSON, "website_hostname");
    if (cJSON_IsNull(website_hostname)) {
        website_hostname = NULL;
    }
    if (!website_hostname) {
        goto end;
    }

    
    if(!cJSON_IsString(website_hostname))
    {
    goto end; //String
    }

    // website_row->repeat_invoices_cost
    cJSON *repeat_invoices_cost = cJSON_GetObjectItemCaseSensitive(website_rowJSON, "repeat_invoices_cost");
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

    // website_row->website_status
    cJSON *website_status = cJSON_GetObjectItemCaseSensitive(website_rowJSON, "website_status");
    if (cJSON_IsNull(website_status)) {
        website_status = NULL;
    }
    if (!website_status) {
        goto end;
    }

    
    if(!cJSON_IsString(website_status))
    {
    goto end; //String
    }

    // website_row->services_name
    cJSON *services_name = cJSON_GetObjectItemCaseSensitive(website_rowJSON, "services_name");
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

    // website_row->website_comment
    cJSON *website_comment = cJSON_GetObjectItemCaseSensitive(website_rowJSON, "website_comment");
    if (cJSON_IsNull(website_comment)) {
        website_comment = NULL;
    }
    if (!website_comment) {
        goto end;
    }

    
    if(!cJSON_IsString(website_comment))
    {
    goto end; //String
    }


    website_row_local_var = website_row_create_internal (
        strdup(website_id->valuestring),
        strdup(website_hostname->valuestring),
        strdup(repeat_invoices_cost->valuestring),
        strdup(website_status->valuestring),
        strdup(services_name->valuestring),
        strdup(website_comment->valuestring)
        );

    return website_row_local_var;
end:
    return NULL;

}
