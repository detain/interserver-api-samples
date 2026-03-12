#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "website_service_info.h"



static website_service_info_t *website_service_info_create_internal(
    char *website_id,
    char *website_server,
    char *website_type,
    char *website_currency,
    char *website_order_date,
    char *website_custid,
    char *website_ip,
    char *website_status,
    char *website_invoice,
    char *website_coupon,
    char *website_extra,
    char *website_hostname,
    char *website_comment,
    char *website_username,
    char *website_server_status
    ) {
    website_service_info_t *website_service_info_local_var = malloc(sizeof(website_service_info_t));
    if (!website_service_info_local_var) {
        return NULL;
    }
    website_service_info_local_var->website_id = website_id;
    website_service_info_local_var->website_server = website_server;
    website_service_info_local_var->website_type = website_type;
    website_service_info_local_var->website_currency = website_currency;
    website_service_info_local_var->website_order_date = website_order_date;
    website_service_info_local_var->website_custid = website_custid;
    website_service_info_local_var->website_ip = website_ip;
    website_service_info_local_var->website_status = website_status;
    website_service_info_local_var->website_invoice = website_invoice;
    website_service_info_local_var->website_coupon = website_coupon;
    website_service_info_local_var->website_extra = website_extra;
    website_service_info_local_var->website_hostname = website_hostname;
    website_service_info_local_var->website_comment = website_comment;
    website_service_info_local_var->website_username = website_username;
    website_service_info_local_var->website_server_status = website_server_status;

    website_service_info_local_var->_library_owned = 1;
    return website_service_info_local_var;
}

__attribute__((deprecated)) website_service_info_t *website_service_info_create(
    char *website_id,
    char *website_server,
    char *website_type,
    char *website_currency,
    char *website_order_date,
    char *website_custid,
    char *website_ip,
    char *website_status,
    char *website_invoice,
    char *website_coupon,
    char *website_extra,
    char *website_hostname,
    char *website_comment,
    char *website_username,
    char *website_server_status
    ) {
    return website_service_info_create_internal (
        website_id,
        website_server,
        website_type,
        website_currency,
        website_order_date,
        website_custid,
        website_ip,
        website_status,
        website_invoice,
        website_coupon,
        website_extra,
        website_hostname,
        website_comment,
        website_username,
        website_server_status
        );
}

void website_service_info_free(website_service_info_t *website_service_info) {
    if(NULL == website_service_info){
        return ;
    }
    if(website_service_info->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "website_service_info_free");
        return ;
    }
    listEntry_t *listEntry;
    if (website_service_info->website_id) {
        free(website_service_info->website_id);
        website_service_info->website_id = NULL;
    }
    if (website_service_info->website_server) {
        free(website_service_info->website_server);
        website_service_info->website_server = NULL;
    }
    if (website_service_info->website_type) {
        free(website_service_info->website_type);
        website_service_info->website_type = NULL;
    }
    if (website_service_info->website_currency) {
        free(website_service_info->website_currency);
        website_service_info->website_currency = NULL;
    }
    if (website_service_info->website_order_date) {
        free(website_service_info->website_order_date);
        website_service_info->website_order_date = NULL;
    }
    if (website_service_info->website_custid) {
        free(website_service_info->website_custid);
        website_service_info->website_custid = NULL;
    }
    if (website_service_info->website_ip) {
        free(website_service_info->website_ip);
        website_service_info->website_ip = NULL;
    }
    if (website_service_info->website_status) {
        free(website_service_info->website_status);
        website_service_info->website_status = NULL;
    }
    if (website_service_info->website_invoice) {
        free(website_service_info->website_invoice);
        website_service_info->website_invoice = NULL;
    }
    if (website_service_info->website_coupon) {
        free(website_service_info->website_coupon);
        website_service_info->website_coupon = NULL;
    }
    if (website_service_info->website_extra) {
        free(website_service_info->website_extra);
        website_service_info->website_extra = NULL;
    }
    if (website_service_info->website_hostname) {
        free(website_service_info->website_hostname);
        website_service_info->website_hostname = NULL;
    }
    if (website_service_info->website_comment) {
        free(website_service_info->website_comment);
        website_service_info->website_comment = NULL;
    }
    if (website_service_info->website_username) {
        free(website_service_info->website_username);
        website_service_info->website_username = NULL;
    }
    if (website_service_info->website_server_status) {
        free(website_service_info->website_server_status);
        website_service_info->website_server_status = NULL;
    }
    free(website_service_info);
}

cJSON *website_service_info_convertToJSON(website_service_info_t *website_service_info) {
    cJSON *item = cJSON_CreateObject();

    // website_service_info->website_id
    if(website_service_info->website_id) {
    if(cJSON_AddStringToObject(item, "website_id", website_service_info->website_id) == NULL) {
    goto fail; //String
    }
    }


    // website_service_info->website_server
    if(website_service_info->website_server) {
    if(cJSON_AddStringToObject(item, "website_server", website_service_info->website_server) == NULL) {
    goto fail; //String
    }
    }


    // website_service_info->website_type
    if(website_service_info->website_type) {
    if(cJSON_AddStringToObject(item, "website_type", website_service_info->website_type) == NULL) {
    goto fail; //String
    }
    }


    // website_service_info->website_currency
    if(website_service_info->website_currency) {
    if(cJSON_AddStringToObject(item, "website_currency", website_service_info->website_currency) == NULL) {
    goto fail; //String
    }
    }


    // website_service_info->website_order_date
    if(website_service_info->website_order_date) {
    if(cJSON_AddStringToObject(item, "website_order_date", website_service_info->website_order_date) == NULL) {
    goto fail; //String
    }
    }


    // website_service_info->website_custid
    if(website_service_info->website_custid) {
    if(cJSON_AddStringToObject(item, "website_custid", website_service_info->website_custid) == NULL) {
    goto fail; //String
    }
    }


    // website_service_info->website_ip
    if(website_service_info->website_ip) {
    if(cJSON_AddStringToObject(item, "website_ip", website_service_info->website_ip) == NULL) {
    goto fail; //String
    }
    }


    // website_service_info->website_status
    if(website_service_info->website_status) {
    if(cJSON_AddStringToObject(item, "website_status", website_service_info->website_status) == NULL) {
    goto fail; //String
    }
    }


    // website_service_info->website_invoice
    if(website_service_info->website_invoice) {
    if(cJSON_AddStringToObject(item, "website_invoice", website_service_info->website_invoice) == NULL) {
    goto fail; //String
    }
    }


    // website_service_info->website_coupon
    if(website_service_info->website_coupon) {
    if(cJSON_AddStringToObject(item, "website_coupon", website_service_info->website_coupon) == NULL) {
    goto fail; //String
    }
    }


    // website_service_info->website_extra
    if(website_service_info->website_extra) {
    if(cJSON_AddStringToObject(item, "website_extra", website_service_info->website_extra) == NULL) {
    goto fail; //String
    }
    }


    // website_service_info->website_hostname
    if(website_service_info->website_hostname) {
    if(cJSON_AddStringToObject(item, "website_hostname", website_service_info->website_hostname) == NULL) {
    goto fail; //String
    }
    }


    // website_service_info->website_comment
    if(website_service_info->website_comment) {
    if(cJSON_AddStringToObject(item, "website_comment", website_service_info->website_comment) == NULL) {
    goto fail; //String
    }
    }


    // website_service_info->website_username
    if(website_service_info->website_username) {
    if(cJSON_AddStringToObject(item, "website_username", website_service_info->website_username) == NULL) {
    goto fail; //String
    }
    }


    // website_service_info->website_server_status
    if(website_service_info->website_server_status) {
    if(cJSON_AddStringToObject(item, "website_server_status", website_service_info->website_server_status) == NULL) {
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

website_service_info_t *website_service_info_parseFromJSON(cJSON *website_service_infoJSON){

    website_service_info_t *website_service_info_local_var = NULL;

    // website_service_info->website_id
    cJSON *website_id = cJSON_GetObjectItemCaseSensitive(website_service_infoJSON, "website_id");
    if (cJSON_IsNull(website_id)) {
        website_id = NULL;
    }
    if (website_id) { 
    if(!cJSON_IsString(website_id) && !cJSON_IsNull(website_id))
    {
    goto end; //String
    }
    }

    // website_service_info->website_server
    cJSON *website_server = cJSON_GetObjectItemCaseSensitive(website_service_infoJSON, "website_server");
    if (cJSON_IsNull(website_server)) {
        website_server = NULL;
    }
    if (website_server) { 
    if(!cJSON_IsString(website_server) && !cJSON_IsNull(website_server))
    {
    goto end; //String
    }
    }

    // website_service_info->website_type
    cJSON *website_type = cJSON_GetObjectItemCaseSensitive(website_service_infoJSON, "website_type");
    if (cJSON_IsNull(website_type)) {
        website_type = NULL;
    }
    if (website_type) { 
    if(!cJSON_IsString(website_type) && !cJSON_IsNull(website_type))
    {
    goto end; //String
    }
    }

    // website_service_info->website_currency
    cJSON *website_currency = cJSON_GetObjectItemCaseSensitive(website_service_infoJSON, "website_currency");
    if (cJSON_IsNull(website_currency)) {
        website_currency = NULL;
    }
    if (website_currency) { 
    if(!cJSON_IsString(website_currency) && !cJSON_IsNull(website_currency))
    {
    goto end; //String
    }
    }

    // website_service_info->website_order_date
    cJSON *website_order_date = cJSON_GetObjectItemCaseSensitive(website_service_infoJSON, "website_order_date");
    if (cJSON_IsNull(website_order_date)) {
        website_order_date = NULL;
    }
    if (website_order_date) { 
    if(!cJSON_IsString(website_order_date) && !cJSON_IsNull(website_order_date))
    {
    goto end; //String
    }
    }

    // website_service_info->website_custid
    cJSON *website_custid = cJSON_GetObjectItemCaseSensitive(website_service_infoJSON, "website_custid");
    if (cJSON_IsNull(website_custid)) {
        website_custid = NULL;
    }
    if (website_custid) { 
    if(!cJSON_IsString(website_custid) && !cJSON_IsNull(website_custid))
    {
    goto end; //String
    }
    }

    // website_service_info->website_ip
    cJSON *website_ip = cJSON_GetObjectItemCaseSensitive(website_service_infoJSON, "website_ip");
    if (cJSON_IsNull(website_ip)) {
        website_ip = NULL;
    }
    if (website_ip) { 
    if(!cJSON_IsString(website_ip) && !cJSON_IsNull(website_ip))
    {
    goto end; //String
    }
    }

    // website_service_info->website_status
    cJSON *website_status = cJSON_GetObjectItemCaseSensitive(website_service_infoJSON, "website_status");
    if (cJSON_IsNull(website_status)) {
        website_status = NULL;
    }
    if (website_status) { 
    if(!cJSON_IsString(website_status) && !cJSON_IsNull(website_status))
    {
    goto end; //String
    }
    }

    // website_service_info->website_invoice
    cJSON *website_invoice = cJSON_GetObjectItemCaseSensitive(website_service_infoJSON, "website_invoice");
    if (cJSON_IsNull(website_invoice)) {
        website_invoice = NULL;
    }
    if (website_invoice) { 
    if(!cJSON_IsString(website_invoice) && !cJSON_IsNull(website_invoice))
    {
    goto end; //String
    }
    }

    // website_service_info->website_coupon
    cJSON *website_coupon = cJSON_GetObjectItemCaseSensitive(website_service_infoJSON, "website_coupon");
    if (cJSON_IsNull(website_coupon)) {
        website_coupon = NULL;
    }
    if (website_coupon) { 
    if(!cJSON_IsString(website_coupon) && !cJSON_IsNull(website_coupon))
    {
    goto end; //String
    }
    }

    // website_service_info->website_extra
    cJSON *website_extra = cJSON_GetObjectItemCaseSensitive(website_service_infoJSON, "website_extra");
    if (cJSON_IsNull(website_extra)) {
        website_extra = NULL;
    }
    if (website_extra) { 
    if(!cJSON_IsString(website_extra) && !cJSON_IsNull(website_extra))
    {
    goto end; //String
    }
    }

    // website_service_info->website_hostname
    cJSON *website_hostname = cJSON_GetObjectItemCaseSensitive(website_service_infoJSON, "website_hostname");
    if (cJSON_IsNull(website_hostname)) {
        website_hostname = NULL;
    }
    if (website_hostname) { 
    if(!cJSON_IsString(website_hostname) && !cJSON_IsNull(website_hostname))
    {
    goto end; //String
    }
    }

    // website_service_info->website_comment
    cJSON *website_comment = cJSON_GetObjectItemCaseSensitive(website_service_infoJSON, "website_comment");
    if (cJSON_IsNull(website_comment)) {
        website_comment = NULL;
    }
    if (website_comment) { 
    if(!cJSON_IsString(website_comment) && !cJSON_IsNull(website_comment))
    {
    goto end; //String
    }
    }

    // website_service_info->website_username
    cJSON *website_username = cJSON_GetObjectItemCaseSensitive(website_service_infoJSON, "website_username");
    if (cJSON_IsNull(website_username)) {
        website_username = NULL;
    }
    if (website_username) { 
    if(!cJSON_IsString(website_username) && !cJSON_IsNull(website_username))
    {
    goto end; //String
    }
    }

    // website_service_info->website_server_status
    cJSON *website_server_status = cJSON_GetObjectItemCaseSensitive(website_service_infoJSON, "website_server_status");
    if (cJSON_IsNull(website_server_status)) {
        website_server_status = NULL;
    }
    if (website_server_status) { 
    if(!cJSON_IsString(website_server_status) && !cJSON_IsNull(website_server_status))
    {
    goto end; //String
    }
    }


    website_service_info_local_var = website_service_info_create_internal (
        website_id && !cJSON_IsNull(website_id) ? strdup(website_id->valuestring) : NULL,
        website_server && !cJSON_IsNull(website_server) ? strdup(website_server->valuestring) : NULL,
        website_type && !cJSON_IsNull(website_type) ? strdup(website_type->valuestring) : NULL,
        website_currency && !cJSON_IsNull(website_currency) ? strdup(website_currency->valuestring) : NULL,
        website_order_date && !cJSON_IsNull(website_order_date) ? strdup(website_order_date->valuestring) : NULL,
        website_custid && !cJSON_IsNull(website_custid) ? strdup(website_custid->valuestring) : NULL,
        website_ip && !cJSON_IsNull(website_ip) ? strdup(website_ip->valuestring) : NULL,
        website_status && !cJSON_IsNull(website_status) ? strdup(website_status->valuestring) : NULL,
        website_invoice && !cJSON_IsNull(website_invoice) ? strdup(website_invoice->valuestring) : NULL,
        website_coupon && !cJSON_IsNull(website_coupon) ? strdup(website_coupon->valuestring) : NULL,
        website_extra && !cJSON_IsNull(website_extra) ? strdup(website_extra->valuestring) : NULL,
        website_hostname && !cJSON_IsNull(website_hostname) ? strdup(website_hostname->valuestring) : NULL,
        website_comment && !cJSON_IsNull(website_comment) ? strdup(website_comment->valuestring) : NULL,
        website_username && !cJSON_IsNull(website_username) ? strdup(website_username->valuestring) : NULL,
        website_server_status && !cJSON_IsNull(website_server_status) ? strdup(website_server_status->valuestring) : NULL
        );

    return website_service_info_local_var;
end:
    return NULL;

}
