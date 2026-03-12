#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "license_row.h"



static license_row_t *license_row_create_internal(
    char *license_id,
    char *license_hostname,
    char *license_ip,
    char *services_name,
    char *cost,
    char *license_status,
    char *invoices_paid,
    char *invoices_date
    ) {
    license_row_t *license_row_local_var = malloc(sizeof(license_row_t));
    if (!license_row_local_var) {
        return NULL;
    }
    license_row_local_var->license_id = license_id;
    license_row_local_var->license_hostname = license_hostname;
    license_row_local_var->license_ip = license_ip;
    license_row_local_var->services_name = services_name;
    license_row_local_var->cost = cost;
    license_row_local_var->license_status = license_status;
    license_row_local_var->invoices_paid = invoices_paid;
    license_row_local_var->invoices_date = invoices_date;

    license_row_local_var->_library_owned = 1;
    return license_row_local_var;
}

__attribute__((deprecated)) license_row_t *license_row_create(
    char *license_id,
    char *license_hostname,
    char *license_ip,
    char *services_name,
    char *cost,
    char *license_status,
    char *invoices_paid,
    char *invoices_date
    ) {
    return license_row_create_internal (
        license_id,
        license_hostname,
        license_ip,
        services_name,
        cost,
        license_status,
        invoices_paid,
        invoices_date
        );
}

void license_row_free(license_row_t *license_row) {
    if(NULL == license_row){
        return ;
    }
    if(license_row->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "license_row_free");
        return ;
    }
    listEntry_t *listEntry;
    if (license_row->license_id) {
        free(license_row->license_id);
        license_row->license_id = NULL;
    }
    if (license_row->license_hostname) {
        free(license_row->license_hostname);
        license_row->license_hostname = NULL;
    }
    if (license_row->license_ip) {
        free(license_row->license_ip);
        license_row->license_ip = NULL;
    }
    if (license_row->services_name) {
        free(license_row->services_name);
        license_row->services_name = NULL;
    }
    if (license_row->cost) {
        free(license_row->cost);
        license_row->cost = NULL;
    }
    if (license_row->license_status) {
        free(license_row->license_status);
        license_row->license_status = NULL;
    }
    if (license_row->invoices_paid) {
        free(license_row->invoices_paid);
        license_row->invoices_paid = NULL;
    }
    if (license_row->invoices_date) {
        free(license_row->invoices_date);
        license_row->invoices_date = NULL;
    }
    free(license_row);
}

cJSON *license_row_convertToJSON(license_row_t *license_row) {
    cJSON *item = cJSON_CreateObject();

    // license_row->license_id
    if(license_row->license_id) {
    if(cJSON_AddStringToObject(item, "license_id", license_row->license_id) == NULL) {
    goto fail; //String
    }
    }


    // license_row->license_hostname
    if(license_row->license_hostname) {
    if(cJSON_AddStringToObject(item, "license_hostname", license_row->license_hostname) == NULL) {
    goto fail; //String
    }
    }


    // license_row->license_ip
    if(license_row->license_ip) {
    if(cJSON_AddStringToObject(item, "license_ip", license_row->license_ip) == NULL) {
    goto fail; //String
    }
    }


    // license_row->services_name
    if(license_row->services_name) {
    if(cJSON_AddStringToObject(item, "services_name", license_row->services_name) == NULL) {
    goto fail; //String
    }
    }


    // license_row->cost
    if(license_row->cost) {
    if(cJSON_AddStringToObject(item, "cost", license_row->cost) == NULL) {
    goto fail; //String
    }
    }


    // license_row->license_status
    if(license_row->license_status) {
    if(cJSON_AddStringToObject(item, "license_status", license_row->license_status) == NULL) {
    goto fail; //String
    }
    }


    // license_row->invoices_paid
    if(license_row->invoices_paid) {
    if(cJSON_AddStringToObject(item, "invoices_paid", license_row->invoices_paid) == NULL) {
    goto fail; //String
    }
    }


    // license_row->invoices_date
    if(license_row->invoices_date) {
    if(cJSON_AddStringToObject(item, "invoices_date", license_row->invoices_date) == NULL) {
    goto fail; //Date-Time
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

license_row_t *license_row_parseFromJSON(cJSON *license_rowJSON){

    license_row_t *license_row_local_var = NULL;

    // license_row->license_id
    cJSON *license_id = cJSON_GetObjectItemCaseSensitive(license_rowJSON, "license_id");
    if (cJSON_IsNull(license_id)) {
        license_id = NULL;
    }
    if (license_id) { 
    if(!cJSON_IsString(license_id) && !cJSON_IsNull(license_id))
    {
    goto end; //String
    }
    }

    // license_row->license_hostname
    cJSON *license_hostname = cJSON_GetObjectItemCaseSensitive(license_rowJSON, "license_hostname");
    if (cJSON_IsNull(license_hostname)) {
        license_hostname = NULL;
    }
    if (license_hostname) { 
    if(!cJSON_IsString(license_hostname) && !cJSON_IsNull(license_hostname))
    {
    goto end; //String
    }
    }

    // license_row->license_ip
    cJSON *license_ip = cJSON_GetObjectItemCaseSensitive(license_rowJSON, "license_ip");
    if (cJSON_IsNull(license_ip)) {
        license_ip = NULL;
    }
    if (license_ip) { 
    if(!cJSON_IsString(license_ip) && !cJSON_IsNull(license_ip))
    {
    goto end; //String
    }
    }

    // license_row->services_name
    cJSON *services_name = cJSON_GetObjectItemCaseSensitive(license_rowJSON, "services_name");
    if (cJSON_IsNull(services_name)) {
        services_name = NULL;
    }
    if (services_name) { 
    if(!cJSON_IsString(services_name) && !cJSON_IsNull(services_name))
    {
    goto end; //String
    }
    }

    // license_row->cost
    cJSON *cost = cJSON_GetObjectItemCaseSensitive(license_rowJSON, "cost");
    if (cJSON_IsNull(cost)) {
        cost = NULL;
    }
    if (cost) { 
    if(!cJSON_IsString(cost) && !cJSON_IsNull(cost))
    {
    goto end; //String
    }
    }

    // license_row->license_status
    cJSON *license_status = cJSON_GetObjectItemCaseSensitive(license_rowJSON, "license_status");
    if (cJSON_IsNull(license_status)) {
        license_status = NULL;
    }
    if (license_status) { 
    if(!cJSON_IsString(license_status) && !cJSON_IsNull(license_status))
    {
    goto end; //String
    }
    }

    // license_row->invoices_paid
    cJSON *invoices_paid = cJSON_GetObjectItemCaseSensitive(license_rowJSON, "invoices_paid");
    if (cJSON_IsNull(invoices_paid)) {
        invoices_paid = NULL;
    }
    if (invoices_paid) { 
    if(!cJSON_IsString(invoices_paid) && !cJSON_IsNull(invoices_paid))
    {
    goto end; //String
    }
    }

    // license_row->invoices_date
    cJSON *invoices_date = cJSON_GetObjectItemCaseSensitive(license_rowJSON, "invoices_date");
    if (cJSON_IsNull(invoices_date)) {
        invoices_date = NULL;
    }
    if (invoices_date) { 
    if(!cJSON_IsString(invoices_date) && !cJSON_IsNull(invoices_date))
    {
    goto end; //DateTime
    }
    }


    license_row_local_var = license_row_create_internal (
        license_id && !cJSON_IsNull(license_id) ? strdup(license_id->valuestring) : NULL,
        license_hostname && !cJSON_IsNull(license_hostname) ? strdup(license_hostname->valuestring) : NULL,
        license_ip && !cJSON_IsNull(license_ip) ? strdup(license_ip->valuestring) : NULL,
        services_name && !cJSON_IsNull(services_name) ? strdup(services_name->valuestring) : NULL,
        cost && !cJSON_IsNull(cost) ? strdup(cost->valuestring) : NULL,
        license_status && !cJSON_IsNull(license_status) ? strdup(license_status->valuestring) : NULL,
        invoices_paid && !cJSON_IsNull(invoices_paid) ? strdup(invoices_paid->valuestring) : NULL,
        invoices_date && !cJSON_IsNull(invoices_date) ? strdup(invoices_date->valuestring) : NULL
        );

    return license_row_local_var;
end:
    return NULL;

}
