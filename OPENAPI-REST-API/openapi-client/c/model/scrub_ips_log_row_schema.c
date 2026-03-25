#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "scrub_ips_log_row_schema.h"



static scrub_ips_log_row_schema_t *scrub_ips_log_row_schema_create_internal(
    char *date,
    char *filter,
    char *blocked_ip,
    char *target_ip,
    double *target_port,
    char *protocol,
    double *byte_count,
    char *xdp_action
    ) {
    scrub_ips_log_row_schema_t *scrub_ips_log_row_schema_local_var = malloc(sizeof(scrub_ips_log_row_schema_t));
    if (!scrub_ips_log_row_schema_local_var) {
        return NULL;
    }
    memset(scrub_ips_log_row_schema_local_var, 0, sizeof(scrub_ips_log_row_schema_t));
    scrub_ips_log_row_schema_local_var->_library_owned = 1;
    scrub_ips_log_row_schema_local_var->date = date;
    scrub_ips_log_row_schema_local_var->filter = filter;
    scrub_ips_log_row_schema_local_var->blocked_ip = blocked_ip;
    scrub_ips_log_row_schema_local_var->target_ip = target_ip;
    scrub_ips_log_row_schema_local_var->target_port = target_port;
    scrub_ips_log_row_schema_local_var->protocol = protocol;
    scrub_ips_log_row_schema_local_var->byte_count = byte_count;
    scrub_ips_log_row_schema_local_var->xdp_action = xdp_action;
    return scrub_ips_log_row_schema_local_var;
}

__attribute__((deprecated)) scrub_ips_log_row_schema_t *scrub_ips_log_row_schema_create(
    char *date,
    char *filter,
    char *blocked_ip,
    char *target_ip,
    double *target_port,
    char *protocol,
    double *byte_count,
    char *xdp_action
    ) {
    double *target_port_copy = NULL;
    if (target_port) {
        target_port_copy = malloc(sizeof(double));
        if (target_port_copy) *target_port_copy = *target_port;
    }
    double *byte_count_copy = NULL;
    if (byte_count) {
        byte_count_copy = malloc(sizeof(double));
        if (byte_count_copy) *byte_count_copy = *byte_count;
    }
    scrub_ips_log_row_schema_t *result = scrub_ips_log_row_schema_create_internal (
        date,
        filter,
        blocked_ip,
        target_ip,
        target_port_copy,
        protocol,
        byte_count_copy,
        xdp_action
        );
    if (!result) {
        free(target_port_copy);
        free(byte_count_copy);
    }
    return result;
}

void scrub_ips_log_row_schema_free(scrub_ips_log_row_schema_t *scrub_ips_log_row_schema) {
    if(NULL == scrub_ips_log_row_schema){
        return ;
    }
    if(scrub_ips_log_row_schema->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "scrub_ips_log_row_schema_free");
        return ;
    }
    listEntry_t *listEntry;
    if (scrub_ips_log_row_schema->date) {
        free(scrub_ips_log_row_schema->date);
        scrub_ips_log_row_schema->date = NULL;
    }
    if (scrub_ips_log_row_schema->filter) {
        free(scrub_ips_log_row_schema->filter);
        scrub_ips_log_row_schema->filter = NULL;
    }
    if (scrub_ips_log_row_schema->blocked_ip) {
        free(scrub_ips_log_row_schema->blocked_ip);
        scrub_ips_log_row_schema->blocked_ip = NULL;
    }
    if (scrub_ips_log_row_schema->target_ip) {
        free(scrub_ips_log_row_schema->target_ip);
        scrub_ips_log_row_schema->target_ip = NULL;
    }
    if (scrub_ips_log_row_schema->target_port) {
        free(scrub_ips_log_row_schema->target_port);
        scrub_ips_log_row_schema->target_port = NULL;
    }
    if (scrub_ips_log_row_schema->protocol) {
        free(scrub_ips_log_row_schema->protocol);
        scrub_ips_log_row_schema->protocol = NULL;
    }
    if (scrub_ips_log_row_schema->byte_count) {
        free(scrub_ips_log_row_schema->byte_count);
        scrub_ips_log_row_schema->byte_count = NULL;
    }
    if (scrub_ips_log_row_schema->xdp_action) {
        free(scrub_ips_log_row_schema->xdp_action);
        scrub_ips_log_row_schema->xdp_action = NULL;
    }
    free(scrub_ips_log_row_schema);
}

cJSON *scrub_ips_log_row_schema_convertToJSON(scrub_ips_log_row_schema_t *scrub_ips_log_row_schema) {
    cJSON *item = cJSON_CreateObject();

    // scrub_ips_log_row_schema->date
    if(scrub_ips_log_row_schema->date) {
    if(cJSON_AddStringToObject(item, "date", scrub_ips_log_row_schema->date) == NULL) {
    goto fail; //String
    }
    }


    // scrub_ips_log_row_schema->filter
    if(scrub_ips_log_row_schema->filter) {
    if(cJSON_AddStringToObject(item, "filter", scrub_ips_log_row_schema->filter) == NULL) {
    goto fail; //String
    }
    }


    // scrub_ips_log_row_schema->blocked_ip
    if(scrub_ips_log_row_schema->blocked_ip) {
    if(cJSON_AddStringToObject(item, "blocked_ip", scrub_ips_log_row_schema->blocked_ip) == NULL) {
    goto fail; //String
    }
    }


    // scrub_ips_log_row_schema->target_ip
    if(scrub_ips_log_row_schema->target_ip) {
    if(cJSON_AddStringToObject(item, "target_ip", scrub_ips_log_row_schema->target_ip) == NULL) {
    goto fail; //String
    }
    }


    // scrub_ips_log_row_schema->target_port
    if(scrub_ips_log_row_schema->target_port) {
    if(cJSON_AddNumberToObject(item, "target_port", *scrub_ips_log_row_schema->target_port) == NULL) {
    goto fail; //Numeric
    }
    }


    // scrub_ips_log_row_schema->protocol
    if(scrub_ips_log_row_schema->protocol) {
    if(cJSON_AddStringToObject(item, "protocol", scrub_ips_log_row_schema->protocol) == NULL) {
    goto fail; //String
    }
    }


    // scrub_ips_log_row_schema->byte_count
    if(scrub_ips_log_row_schema->byte_count) {
    if(cJSON_AddNumberToObject(item, "byte_count", *scrub_ips_log_row_schema->byte_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // scrub_ips_log_row_schema->xdp_action
    if(scrub_ips_log_row_schema->xdp_action) {
    if(cJSON_AddStringToObject(item, "xdp_action", scrub_ips_log_row_schema->xdp_action) == NULL) {
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

scrub_ips_log_row_schema_t *scrub_ips_log_row_schema_parseFromJSON(cJSON *scrub_ips_log_row_schemaJSON){

    scrub_ips_log_row_schema_t *scrub_ips_log_row_schema_local_var = NULL;

    char *date_local_str = NULL;

    char *filter_local_str = NULL;

    char *blocked_ip_local_str = NULL;

    char *target_ip_local_str = NULL;

    // define the local variable for scrub_ips_log_row_schema->target_port
    double *target_port_local_var = NULL;

    char *protocol_local_str = NULL;

    // define the local variable for scrub_ips_log_row_schema->byte_count
    double *byte_count_local_var = NULL;

    char *xdp_action_local_str = NULL;

    // scrub_ips_log_row_schema->date
    cJSON *date = cJSON_GetObjectItemCaseSensitive(scrub_ips_log_row_schemaJSON, "date");
    if (cJSON_IsNull(date)) {
        date = NULL;
    }
    if (date) { 
    if(!cJSON_IsString(date) && !cJSON_IsNull(date))
    {
    goto end; //String
    }
    }

    // scrub_ips_log_row_schema->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(scrub_ips_log_row_schemaJSON, "filter");
    if (cJSON_IsNull(filter)) {
        filter = NULL;
    }
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }

    // scrub_ips_log_row_schema->blocked_ip
    cJSON *blocked_ip = cJSON_GetObjectItemCaseSensitive(scrub_ips_log_row_schemaJSON, "blocked_ip");
    if (cJSON_IsNull(blocked_ip)) {
        blocked_ip = NULL;
    }
    if (blocked_ip) { 
    if(!cJSON_IsString(blocked_ip) && !cJSON_IsNull(blocked_ip))
    {
    goto end; //String
    }
    }

    // scrub_ips_log_row_schema->target_ip
    cJSON *target_ip = cJSON_GetObjectItemCaseSensitive(scrub_ips_log_row_schemaJSON, "target_ip");
    if (cJSON_IsNull(target_ip)) {
        target_ip = NULL;
    }
    if (target_ip) { 
    if(!cJSON_IsString(target_ip) && !cJSON_IsNull(target_ip))
    {
    goto end; //String
    }
    }

    // scrub_ips_log_row_schema->target_port
    cJSON *target_port = cJSON_GetObjectItemCaseSensitive(scrub_ips_log_row_schemaJSON, "target_port");
    if (cJSON_IsNull(target_port)) {
        target_port = NULL;
    }
    if (target_port) { 
    if(!cJSON_IsNumber(target_port))
    {
    goto end; //Numeric
    }
    target_port_local_var = malloc(sizeof(double));
    if(!target_port_local_var)
    {
        goto end;
    }
    *target_port_local_var = target_port->valuedouble;
    }

    // scrub_ips_log_row_schema->protocol
    cJSON *protocol = cJSON_GetObjectItemCaseSensitive(scrub_ips_log_row_schemaJSON, "protocol");
    if (cJSON_IsNull(protocol)) {
        protocol = NULL;
    }
    if (protocol) { 
    if(!cJSON_IsString(protocol) && !cJSON_IsNull(protocol))
    {
    goto end; //String
    }
    }

    // scrub_ips_log_row_schema->byte_count
    cJSON *byte_count = cJSON_GetObjectItemCaseSensitive(scrub_ips_log_row_schemaJSON, "byte_count");
    if (cJSON_IsNull(byte_count)) {
        byte_count = NULL;
    }
    if (byte_count) { 
    if(!cJSON_IsNumber(byte_count))
    {
    goto end; //Numeric
    }
    byte_count_local_var = malloc(sizeof(double));
    if(!byte_count_local_var)
    {
        goto end;
    }
    *byte_count_local_var = byte_count->valuedouble;
    }

    // scrub_ips_log_row_schema->xdp_action
    cJSON *xdp_action = cJSON_GetObjectItemCaseSensitive(scrub_ips_log_row_schemaJSON, "xdp_action");
    if (cJSON_IsNull(xdp_action)) {
        xdp_action = NULL;
    }
    if (xdp_action) { 
    if(!cJSON_IsString(xdp_action) && !cJSON_IsNull(xdp_action))
    {
    goto end; //String
    }
    }


    if (date && !cJSON_IsNull(date)) date_local_str = strdup(date->valuestring);
    if (filter && !cJSON_IsNull(filter)) filter_local_str = strdup(filter->valuestring);
    if (blocked_ip && !cJSON_IsNull(blocked_ip)) blocked_ip_local_str = strdup(blocked_ip->valuestring);
    if (target_ip && !cJSON_IsNull(target_ip)) target_ip_local_str = strdup(target_ip->valuestring);
    if (protocol && !cJSON_IsNull(protocol)) protocol_local_str = strdup(protocol->valuestring);
    if (xdp_action && !cJSON_IsNull(xdp_action)) xdp_action_local_str = strdup(xdp_action->valuestring);

    scrub_ips_log_row_schema_local_var = scrub_ips_log_row_schema_create_internal (
        date_local_str,
        filter_local_str,
        blocked_ip_local_str,
        target_ip_local_str,
        target_port_local_var,
        protocol_local_str,
        byte_count_local_var,
        xdp_action_local_str
        );

    if (!scrub_ips_log_row_schema_local_var) {
        goto end;
    }

    return scrub_ips_log_row_schema_local_var;
end:
    if (date_local_str) {
        free(date_local_str);
        date_local_str = NULL;
    }
    if (filter_local_str) {
        free(filter_local_str);
        filter_local_str = NULL;
    }
    if (blocked_ip_local_str) {
        free(blocked_ip_local_str);
        blocked_ip_local_str = NULL;
    }
    if (target_ip_local_str) {
        free(target_ip_local_str);
        target_ip_local_str = NULL;
    }
    if (target_port_local_var) {
        free(target_port_local_var);
        target_port_local_var = NULL;
    }
    if (protocol_local_str) {
        free(protocol_local_str);
        protocol_local_str = NULL;
    }
    if (byte_count_local_var) {
        free(byte_count_local_var);
        byte_count_local_var = NULL;
    }
    if (xdp_action_local_str) {
        free(xdp_action_local_str);
        xdp_action_local_str = NULL;
    }
    return NULL;

}
