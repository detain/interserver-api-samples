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
    memset(license_row_local_var, 0, sizeof(license_row_t));
    license_row_local_var->_library_owned = 1;
    license_row_local_var->license_id = license_id;
    license_row_local_var->license_hostname = license_hostname;
    license_row_local_var->license_ip = license_ip;
    license_row_local_var->services_name = services_name;
    license_row_local_var->cost = cost;
    license_row_local_var->license_status = license_status;
    license_row_local_var->invoices_paid = invoices_paid;
    license_row_local_var->invoices_date = invoices_date;
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
    license_row_t *result = license_row_create_internal (
        license_id,
        license_hostname,
        license_ip,
        services_name,
        cost,
        license_status,
        invoices_paid,
        invoices_date
        );
    if (!result) {
    }
    return result;
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

    char *license_id_local_str = NULL;

    char *license_hostname_local_str = NULL;

    char *license_ip_local_str = NULL;

    char *services_name_local_str = NULL;

    char *cost_local_str = NULL;

    char *license_status_local_str = NULL;

    char *invoices_paid_local_str = NULL;

    char *invoices_date_local_str = NULL;

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


    if (license_id && !cJSON_IsNull(license_id)) license_id_local_str = strdup(license_id->valuestring);
    if (license_hostname && !cJSON_IsNull(license_hostname)) license_hostname_local_str = strdup(license_hostname->valuestring);
    if (license_ip && !cJSON_IsNull(license_ip)) license_ip_local_str = strdup(license_ip->valuestring);
    if (services_name && !cJSON_IsNull(services_name)) services_name_local_str = strdup(services_name->valuestring);
    if (cost && !cJSON_IsNull(cost)) cost_local_str = strdup(cost->valuestring);
    if (license_status && !cJSON_IsNull(license_status)) license_status_local_str = strdup(license_status->valuestring);
    if (invoices_paid && !cJSON_IsNull(invoices_paid)) invoices_paid_local_str = strdup(invoices_paid->valuestring);
    if (invoices_date && !cJSON_IsNull(invoices_date)) invoices_date_local_str = strdup(invoices_date->valuestring);

    license_row_local_var = license_row_create_internal (
        license_id_local_str,
        license_hostname_local_str,
        license_ip_local_str,
        services_name_local_str,
        cost_local_str,
        license_status_local_str,
        invoices_paid_local_str,
        invoices_date_local_str
        );

    if (!license_row_local_var) {
        goto end;
    }

    return license_row_local_var;
end:
    if (license_id_local_str) {
        free(license_id_local_str);
        license_id_local_str = NULL;
    }
    if (license_hostname_local_str) {
        free(license_hostname_local_str);
        license_hostname_local_str = NULL;
    }
    if (license_ip_local_str) {
        free(license_ip_local_str);
        license_ip_local_str = NULL;
    }
    if (services_name_local_str) {
        free(services_name_local_str);
        services_name_local_str = NULL;
    }
    if (cost_local_str) {
        free(cost_local_str);
        cost_local_str = NULL;
    }
    if (license_status_local_str) {
        free(license_status_local_str);
        license_status_local_str = NULL;
    }
    if (invoices_paid_local_str) {
        free(invoices_paid_local_str);
        invoices_paid_local_str = NULL;
    }
    if (invoices_date_local_str) {
        free(invoices_date_local_str);
        invoices_date_local_str = NULL;
    }
    return NULL;

}
