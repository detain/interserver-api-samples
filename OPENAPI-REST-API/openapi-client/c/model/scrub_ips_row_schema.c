#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "scrub_ips_row_schema.h"



static scrub_ips_row_schema_t *scrub_ips_row_schema_create_internal(
    int *scrub_ip_id,
    double *repeat_invoices_cost,
    char *scrub_ip_ip,
    char *scrub_ip_status,
    char *services_name
    ) {
    scrub_ips_row_schema_t *scrub_ips_row_schema_local_var = malloc(sizeof(scrub_ips_row_schema_t));
    if (!scrub_ips_row_schema_local_var) {
        return NULL;
    }
    memset(scrub_ips_row_schema_local_var, 0, sizeof(scrub_ips_row_schema_t));
    scrub_ips_row_schema_local_var->_library_owned = 1;
    scrub_ips_row_schema_local_var->scrub_ip_id = scrub_ip_id;
    scrub_ips_row_schema_local_var->repeat_invoices_cost = repeat_invoices_cost;
    scrub_ips_row_schema_local_var->scrub_ip_ip = scrub_ip_ip;
    scrub_ips_row_schema_local_var->scrub_ip_status = scrub_ip_status;
    scrub_ips_row_schema_local_var->services_name = services_name;
    return scrub_ips_row_schema_local_var;
}

__attribute__((deprecated)) scrub_ips_row_schema_t *scrub_ips_row_schema_create(
    int *scrub_ip_id,
    double *repeat_invoices_cost,
    char *scrub_ip_ip,
    char *scrub_ip_status,
    char *services_name
    ) {
    int *scrub_ip_id_copy = NULL;
    if (scrub_ip_id) {
        scrub_ip_id_copy = malloc(sizeof(int));
        if (scrub_ip_id_copy) *scrub_ip_id_copy = *scrub_ip_id;
    }
    double *repeat_invoices_cost_copy = NULL;
    if (repeat_invoices_cost) {
        repeat_invoices_cost_copy = malloc(sizeof(double));
        if (repeat_invoices_cost_copy) *repeat_invoices_cost_copy = *repeat_invoices_cost;
    }
    scrub_ips_row_schema_t *result = scrub_ips_row_schema_create_internal (
        scrub_ip_id_copy,
        repeat_invoices_cost_copy,
        scrub_ip_ip,
        scrub_ip_status,
        services_name
        );
    if (!result) {
        free(scrub_ip_id_copy);
        free(repeat_invoices_cost_copy);
    }
    return result;
}

void scrub_ips_row_schema_free(scrub_ips_row_schema_t *scrub_ips_row_schema) {
    if(NULL == scrub_ips_row_schema){
        return ;
    }
    if(scrub_ips_row_schema->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "scrub_ips_row_schema_free");
        return ;
    }
    listEntry_t *listEntry;
    if (scrub_ips_row_schema->scrub_ip_id) {
        free(scrub_ips_row_schema->scrub_ip_id);
        scrub_ips_row_schema->scrub_ip_id = NULL;
    }
    if (scrub_ips_row_schema->repeat_invoices_cost) {
        free(scrub_ips_row_schema->repeat_invoices_cost);
        scrub_ips_row_schema->repeat_invoices_cost = NULL;
    }
    if (scrub_ips_row_schema->scrub_ip_ip) {
        free(scrub_ips_row_schema->scrub_ip_ip);
        scrub_ips_row_schema->scrub_ip_ip = NULL;
    }
    if (scrub_ips_row_schema->scrub_ip_status) {
        free(scrub_ips_row_schema->scrub_ip_status);
        scrub_ips_row_schema->scrub_ip_status = NULL;
    }
    if (scrub_ips_row_schema->services_name) {
        free(scrub_ips_row_schema->services_name);
        scrub_ips_row_schema->services_name = NULL;
    }
    free(scrub_ips_row_schema);
}

cJSON *scrub_ips_row_schema_convertToJSON(scrub_ips_row_schema_t *scrub_ips_row_schema) {
    cJSON *item = cJSON_CreateObject();

    // scrub_ips_row_schema->scrub_ip_id
    if(scrub_ips_row_schema->scrub_ip_id) {
    if(cJSON_AddNumberToObject(item, "scrub_ip_id", *scrub_ips_row_schema->scrub_ip_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // scrub_ips_row_schema->repeat_invoices_cost
    if(scrub_ips_row_schema->repeat_invoices_cost) {
    if(cJSON_AddNumberToObject(item, "repeat_invoices_cost", *scrub_ips_row_schema->repeat_invoices_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // scrub_ips_row_schema->scrub_ip_ip
    if(scrub_ips_row_schema->scrub_ip_ip) {
    if(cJSON_AddStringToObject(item, "scrub_ip_ip", scrub_ips_row_schema->scrub_ip_ip) == NULL) {
    goto fail; //String
    }
    }


    // scrub_ips_row_schema->scrub_ip_status
    if(scrub_ips_row_schema->scrub_ip_status) {
    if(cJSON_AddStringToObject(item, "scrub_ip_status", scrub_ips_row_schema->scrub_ip_status) == NULL) {
    goto fail; //String
    }
    }


    // scrub_ips_row_schema->services_name
    if(scrub_ips_row_schema->services_name) {
    if(cJSON_AddStringToObject(item, "services_name", scrub_ips_row_schema->services_name) == NULL) {
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

scrub_ips_row_schema_t *scrub_ips_row_schema_parseFromJSON(cJSON *scrub_ips_row_schemaJSON){

    scrub_ips_row_schema_t *scrub_ips_row_schema_local_var = NULL;

    // define the local variable for scrub_ips_row_schema->scrub_ip_id
    int *scrub_ip_id_local_var = NULL;

    // define the local variable for scrub_ips_row_schema->repeat_invoices_cost
    double *repeat_invoices_cost_local_var = NULL;

    char *scrub_ip_ip_local_str = NULL;

    char *scrub_ip_status_local_str = NULL;

    char *services_name_local_str = NULL;

    // scrub_ips_row_schema->scrub_ip_id
    cJSON *scrub_ip_id = cJSON_GetObjectItemCaseSensitive(scrub_ips_row_schemaJSON, "scrub_ip_id");
    if (cJSON_IsNull(scrub_ip_id)) {
        scrub_ip_id = NULL;
    }
    if (scrub_ip_id) { 
    if(!cJSON_IsNumber(scrub_ip_id))
    {
    goto end; //Numeric
    }
    scrub_ip_id_local_var = malloc(sizeof(int));
    if(!scrub_ip_id_local_var)
    {
        goto end;
    }
    *scrub_ip_id_local_var = scrub_ip_id->valuedouble;
    }

    // scrub_ips_row_schema->repeat_invoices_cost
    cJSON *repeat_invoices_cost = cJSON_GetObjectItemCaseSensitive(scrub_ips_row_schemaJSON, "repeat_invoices_cost");
    if (cJSON_IsNull(repeat_invoices_cost)) {
        repeat_invoices_cost = NULL;
    }
    if (repeat_invoices_cost) { 
    if(!cJSON_IsNumber(repeat_invoices_cost))
    {
    goto end; //Numeric
    }
    repeat_invoices_cost_local_var = malloc(sizeof(double));
    if(!repeat_invoices_cost_local_var)
    {
        goto end;
    }
    *repeat_invoices_cost_local_var = repeat_invoices_cost->valuedouble;
    }

    // scrub_ips_row_schema->scrub_ip_ip
    cJSON *scrub_ip_ip = cJSON_GetObjectItemCaseSensitive(scrub_ips_row_schemaJSON, "scrub_ip_ip");
    if (cJSON_IsNull(scrub_ip_ip)) {
        scrub_ip_ip = NULL;
    }
    if (scrub_ip_ip) { 
    if(!cJSON_IsString(scrub_ip_ip) && !cJSON_IsNull(scrub_ip_ip))
    {
    goto end; //String
    }
    }

    // scrub_ips_row_schema->scrub_ip_status
    cJSON *scrub_ip_status = cJSON_GetObjectItemCaseSensitive(scrub_ips_row_schemaJSON, "scrub_ip_status");
    if (cJSON_IsNull(scrub_ip_status)) {
        scrub_ip_status = NULL;
    }
    if (scrub_ip_status) { 
    if(!cJSON_IsString(scrub_ip_status) && !cJSON_IsNull(scrub_ip_status))
    {
    goto end; //String
    }
    }

    // scrub_ips_row_schema->services_name
    cJSON *services_name = cJSON_GetObjectItemCaseSensitive(scrub_ips_row_schemaJSON, "services_name");
    if (cJSON_IsNull(services_name)) {
        services_name = NULL;
    }
    if (services_name) { 
    if(!cJSON_IsString(services_name) && !cJSON_IsNull(services_name))
    {
    goto end; //String
    }
    }


    if (scrub_ip_ip && !cJSON_IsNull(scrub_ip_ip)) scrub_ip_ip_local_str = strdup(scrub_ip_ip->valuestring);
    if (scrub_ip_status && !cJSON_IsNull(scrub_ip_status)) scrub_ip_status_local_str = strdup(scrub_ip_status->valuestring);
    if (services_name && !cJSON_IsNull(services_name)) services_name_local_str = strdup(services_name->valuestring);

    scrub_ips_row_schema_local_var = scrub_ips_row_schema_create_internal (
        scrub_ip_id_local_var,
        repeat_invoices_cost_local_var,
        scrub_ip_ip_local_str,
        scrub_ip_status_local_str,
        services_name_local_str
        );

    if (!scrub_ips_row_schema_local_var) {
        goto end;
    }

    return scrub_ips_row_schema_local_var;
end:
    if (scrub_ip_id_local_var) {
        free(scrub_ip_id_local_var);
        scrub_ip_id_local_var = NULL;
    }
    if (repeat_invoices_cost_local_var) {
        free(repeat_invoices_cost_local_var);
        repeat_invoices_cost_local_var = NULL;
    }
    if (scrub_ip_ip_local_str) {
        free(scrub_ip_ip_local_str);
        scrub_ip_ip_local_str = NULL;
    }
    if (scrub_ip_status_local_str) {
        free(scrub_ip_status_local_str);
        scrub_ip_status_local_str = NULL;
    }
    if (services_name_local_str) {
        free(services_name_local_str);
        services_name_local_str = NULL;
    }
    return NULL;

}
