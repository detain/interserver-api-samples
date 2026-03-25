#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "backup_service_info.h"



static backup_service_info_t *backup_service_info_create_internal(
    char *backup_id,
    char *backup_server,
    char *backup_username,
    char *backup_type,
    char *backup_currency,
    char *backup_order_date,
    char *backup_custid,
    char *backup_quota,
    char *backup_ip,
    char *backup_status,
    char *backup_invoice,
    char *backup_coupon,
    char *backup_extra,
    char *backup_server_status,
    char *backup_comment
    ) {
    backup_service_info_t *backup_service_info_local_var = malloc(sizeof(backup_service_info_t));
    if (!backup_service_info_local_var) {
        return NULL;
    }
    memset(backup_service_info_local_var, 0, sizeof(backup_service_info_t));
    backup_service_info_local_var->_library_owned = 1;
    backup_service_info_local_var->backup_id = backup_id;
    backup_service_info_local_var->backup_server = backup_server;
    backup_service_info_local_var->backup_username = backup_username;
    backup_service_info_local_var->backup_type = backup_type;
    backup_service_info_local_var->backup_currency = backup_currency;
    backup_service_info_local_var->backup_order_date = backup_order_date;
    backup_service_info_local_var->backup_custid = backup_custid;
    backup_service_info_local_var->backup_quota = backup_quota;
    backup_service_info_local_var->backup_ip = backup_ip;
    backup_service_info_local_var->backup_status = backup_status;
    backup_service_info_local_var->backup_invoice = backup_invoice;
    backup_service_info_local_var->backup_coupon = backup_coupon;
    backup_service_info_local_var->backup_extra = backup_extra;
    backup_service_info_local_var->backup_server_status = backup_server_status;
    backup_service_info_local_var->backup_comment = backup_comment;
    return backup_service_info_local_var;
}

__attribute__((deprecated)) backup_service_info_t *backup_service_info_create(
    char *backup_id,
    char *backup_server,
    char *backup_username,
    char *backup_type,
    char *backup_currency,
    char *backup_order_date,
    char *backup_custid,
    char *backup_quota,
    char *backup_ip,
    char *backup_status,
    char *backup_invoice,
    char *backup_coupon,
    char *backup_extra,
    char *backup_server_status,
    char *backup_comment
    ) {
    backup_service_info_t *result = backup_service_info_create_internal (
        backup_id,
        backup_server,
        backup_username,
        backup_type,
        backup_currency,
        backup_order_date,
        backup_custid,
        backup_quota,
        backup_ip,
        backup_status,
        backup_invoice,
        backup_coupon,
        backup_extra,
        backup_server_status,
        backup_comment
        );
    if (!result) {
    }
    return result;
}

void backup_service_info_free(backup_service_info_t *backup_service_info) {
    if(NULL == backup_service_info){
        return ;
    }
    if(backup_service_info->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "backup_service_info_free");
        return ;
    }
    listEntry_t *listEntry;
    if (backup_service_info->backup_id) {
        free(backup_service_info->backup_id);
        backup_service_info->backup_id = NULL;
    }
    if (backup_service_info->backup_server) {
        free(backup_service_info->backup_server);
        backup_service_info->backup_server = NULL;
    }
    if (backup_service_info->backup_username) {
        free(backup_service_info->backup_username);
        backup_service_info->backup_username = NULL;
    }
    if (backup_service_info->backup_type) {
        free(backup_service_info->backup_type);
        backup_service_info->backup_type = NULL;
    }
    if (backup_service_info->backup_currency) {
        free(backup_service_info->backup_currency);
        backup_service_info->backup_currency = NULL;
    }
    if (backup_service_info->backup_order_date) {
        free(backup_service_info->backup_order_date);
        backup_service_info->backup_order_date = NULL;
    }
    if (backup_service_info->backup_custid) {
        free(backup_service_info->backup_custid);
        backup_service_info->backup_custid = NULL;
    }
    if (backup_service_info->backup_quota) {
        free(backup_service_info->backup_quota);
        backup_service_info->backup_quota = NULL;
    }
    if (backup_service_info->backup_ip) {
        free(backup_service_info->backup_ip);
        backup_service_info->backup_ip = NULL;
    }
    if (backup_service_info->backup_status) {
        free(backup_service_info->backup_status);
        backup_service_info->backup_status = NULL;
    }
    if (backup_service_info->backup_invoice) {
        free(backup_service_info->backup_invoice);
        backup_service_info->backup_invoice = NULL;
    }
    if (backup_service_info->backup_coupon) {
        free(backup_service_info->backup_coupon);
        backup_service_info->backup_coupon = NULL;
    }
    if (backup_service_info->backup_extra) {
        free(backup_service_info->backup_extra);
        backup_service_info->backup_extra = NULL;
    }
    if (backup_service_info->backup_server_status) {
        free(backup_service_info->backup_server_status);
        backup_service_info->backup_server_status = NULL;
    }
    if (backup_service_info->backup_comment) {
        free(backup_service_info->backup_comment);
        backup_service_info->backup_comment = NULL;
    }
    free(backup_service_info);
}

cJSON *backup_service_info_convertToJSON(backup_service_info_t *backup_service_info) {
    cJSON *item = cJSON_CreateObject();

    // backup_service_info->backup_id
    if(backup_service_info->backup_id) {
    if(cJSON_AddStringToObject(item, "backup_id", backup_service_info->backup_id) == NULL) {
    goto fail; //String
    }
    }


    // backup_service_info->backup_server
    if(backup_service_info->backup_server) {
    if(cJSON_AddStringToObject(item, "backup_server", backup_service_info->backup_server) == NULL) {
    goto fail; //String
    }
    }


    // backup_service_info->backup_username
    if(backup_service_info->backup_username) {
    if(cJSON_AddStringToObject(item, "backup_username", backup_service_info->backup_username) == NULL) {
    goto fail; //String
    }
    }


    // backup_service_info->backup_type
    if(backup_service_info->backup_type) {
    if(cJSON_AddStringToObject(item, "backup_type", backup_service_info->backup_type) == NULL) {
    goto fail; //String
    }
    }


    // backup_service_info->backup_currency
    if(backup_service_info->backup_currency) {
    if(cJSON_AddStringToObject(item, "backup_currency", backup_service_info->backup_currency) == NULL) {
    goto fail; //String
    }
    }


    // backup_service_info->backup_order_date
    if(backup_service_info->backup_order_date) {
    if(cJSON_AddStringToObject(item, "backup_order_date", backup_service_info->backup_order_date) == NULL) {
    goto fail; //String
    }
    }


    // backup_service_info->backup_custid
    if(backup_service_info->backup_custid) {
    if(cJSON_AddStringToObject(item, "backup_custid", backup_service_info->backup_custid) == NULL) {
    goto fail; //String
    }
    }


    // backup_service_info->backup_quota
    if(backup_service_info->backup_quota) {
    if(cJSON_AddStringToObject(item, "backup_quota", backup_service_info->backup_quota) == NULL) {
    goto fail; //String
    }
    }


    // backup_service_info->backup_ip
    if(backup_service_info->backup_ip) {
    if(cJSON_AddStringToObject(item, "backup_ip", backup_service_info->backup_ip) == NULL) {
    goto fail; //String
    }
    }


    // backup_service_info->backup_status
    if(backup_service_info->backup_status) {
    if(cJSON_AddStringToObject(item, "backup_status", backup_service_info->backup_status) == NULL) {
    goto fail; //String
    }
    }


    // backup_service_info->backup_invoice
    if(backup_service_info->backup_invoice) {
    if(cJSON_AddStringToObject(item, "backup_invoice", backup_service_info->backup_invoice) == NULL) {
    goto fail; //String
    }
    }


    // backup_service_info->backup_coupon
    if(backup_service_info->backup_coupon) {
    if(cJSON_AddStringToObject(item, "backup_coupon", backup_service_info->backup_coupon) == NULL) {
    goto fail; //String
    }
    }


    // backup_service_info->backup_extra
    if(backup_service_info->backup_extra) {
    if(cJSON_AddStringToObject(item, "backup_extra", backup_service_info->backup_extra) == NULL) {
    goto fail; //String
    }
    }


    // backup_service_info->backup_server_status
    if(backup_service_info->backup_server_status) {
    if(cJSON_AddStringToObject(item, "backup_server_status", backup_service_info->backup_server_status) == NULL) {
    goto fail; //String
    }
    }


    // backup_service_info->backup_comment
    if(backup_service_info->backup_comment) {
    if(cJSON_AddStringToObject(item, "backup_comment", backup_service_info->backup_comment) == NULL) {
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

backup_service_info_t *backup_service_info_parseFromJSON(cJSON *backup_service_infoJSON){

    backup_service_info_t *backup_service_info_local_var = NULL;

    char *backup_id_local_str = NULL;

    char *backup_server_local_str = NULL;

    char *backup_username_local_str = NULL;

    char *backup_type_local_str = NULL;

    char *backup_currency_local_str = NULL;

    char *backup_order_date_local_str = NULL;

    char *backup_custid_local_str = NULL;

    char *backup_quota_local_str = NULL;

    char *backup_ip_local_str = NULL;

    char *backup_status_local_str = NULL;

    char *backup_invoice_local_str = NULL;

    char *backup_coupon_local_str = NULL;

    char *backup_extra_local_str = NULL;

    char *backup_server_status_local_str = NULL;

    char *backup_comment_local_str = NULL;

    // backup_service_info->backup_id
    cJSON *backup_id = cJSON_GetObjectItemCaseSensitive(backup_service_infoJSON, "backup_id");
    if (cJSON_IsNull(backup_id)) {
        backup_id = NULL;
    }
    if (backup_id) { 
    if(!cJSON_IsString(backup_id) && !cJSON_IsNull(backup_id))
    {
    goto end; //String
    }
    }

    // backup_service_info->backup_server
    cJSON *backup_server = cJSON_GetObjectItemCaseSensitive(backup_service_infoJSON, "backup_server");
    if (cJSON_IsNull(backup_server)) {
        backup_server = NULL;
    }
    if (backup_server) { 
    if(!cJSON_IsString(backup_server) && !cJSON_IsNull(backup_server))
    {
    goto end; //String
    }
    }

    // backup_service_info->backup_username
    cJSON *backup_username = cJSON_GetObjectItemCaseSensitive(backup_service_infoJSON, "backup_username");
    if (cJSON_IsNull(backup_username)) {
        backup_username = NULL;
    }
    if (backup_username) { 
    if(!cJSON_IsString(backup_username) && !cJSON_IsNull(backup_username))
    {
    goto end; //String
    }
    }

    // backup_service_info->backup_type
    cJSON *backup_type = cJSON_GetObjectItemCaseSensitive(backup_service_infoJSON, "backup_type");
    if (cJSON_IsNull(backup_type)) {
        backup_type = NULL;
    }
    if (backup_type) { 
    if(!cJSON_IsString(backup_type) && !cJSON_IsNull(backup_type))
    {
    goto end; //String
    }
    }

    // backup_service_info->backup_currency
    cJSON *backup_currency = cJSON_GetObjectItemCaseSensitive(backup_service_infoJSON, "backup_currency");
    if (cJSON_IsNull(backup_currency)) {
        backup_currency = NULL;
    }
    if (backup_currency) { 
    if(!cJSON_IsString(backup_currency) && !cJSON_IsNull(backup_currency))
    {
    goto end; //String
    }
    }

    // backup_service_info->backup_order_date
    cJSON *backup_order_date = cJSON_GetObjectItemCaseSensitive(backup_service_infoJSON, "backup_order_date");
    if (cJSON_IsNull(backup_order_date)) {
        backup_order_date = NULL;
    }
    if (backup_order_date) { 
    if(!cJSON_IsString(backup_order_date) && !cJSON_IsNull(backup_order_date))
    {
    goto end; //String
    }
    }

    // backup_service_info->backup_custid
    cJSON *backup_custid = cJSON_GetObjectItemCaseSensitive(backup_service_infoJSON, "backup_custid");
    if (cJSON_IsNull(backup_custid)) {
        backup_custid = NULL;
    }
    if (backup_custid) { 
    if(!cJSON_IsString(backup_custid) && !cJSON_IsNull(backup_custid))
    {
    goto end; //String
    }
    }

    // backup_service_info->backup_quota
    cJSON *backup_quota = cJSON_GetObjectItemCaseSensitive(backup_service_infoJSON, "backup_quota");
    if (cJSON_IsNull(backup_quota)) {
        backup_quota = NULL;
    }
    if (backup_quota) { 
    if(!cJSON_IsString(backup_quota) && !cJSON_IsNull(backup_quota))
    {
    goto end; //String
    }
    }

    // backup_service_info->backup_ip
    cJSON *backup_ip = cJSON_GetObjectItemCaseSensitive(backup_service_infoJSON, "backup_ip");
    if (cJSON_IsNull(backup_ip)) {
        backup_ip = NULL;
    }
    if (backup_ip) { 
    if(!cJSON_IsString(backup_ip) && !cJSON_IsNull(backup_ip))
    {
    goto end; //String
    }
    }

    // backup_service_info->backup_status
    cJSON *backup_status = cJSON_GetObjectItemCaseSensitive(backup_service_infoJSON, "backup_status");
    if (cJSON_IsNull(backup_status)) {
        backup_status = NULL;
    }
    if (backup_status) { 
    if(!cJSON_IsString(backup_status) && !cJSON_IsNull(backup_status))
    {
    goto end; //String
    }
    }

    // backup_service_info->backup_invoice
    cJSON *backup_invoice = cJSON_GetObjectItemCaseSensitive(backup_service_infoJSON, "backup_invoice");
    if (cJSON_IsNull(backup_invoice)) {
        backup_invoice = NULL;
    }
    if (backup_invoice) { 
    if(!cJSON_IsString(backup_invoice) && !cJSON_IsNull(backup_invoice))
    {
    goto end; //String
    }
    }

    // backup_service_info->backup_coupon
    cJSON *backup_coupon = cJSON_GetObjectItemCaseSensitive(backup_service_infoJSON, "backup_coupon");
    if (cJSON_IsNull(backup_coupon)) {
        backup_coupon = NULL;
    }
    if (backup_coupon) { 
    if(!cJSON_IsString(backup_coupon) && !cJSON_IsNull(backup_coupon))
    {
    goto end; //String
    }
    }

    // backup_service_info->backup_extra
    cJSON *backup_extra = cJSON_GetObjectItemCaseSensitive(backup_service_infoJSON, "backup_extra");
    if (cJSON_IsNull(backup_extra)) {
        backup_extra = NULL;
    }
    if (backup_extra) { 
    if(!cJSON_IsString(backup_extra) && !cJSON_IsNull(backup_extra))
    {
    goto end; //String
    }
    }

    // backup_service_info->backup_server_status
    cJSON *backup_server_status = cJSON_GetObjectItemCaseSensitive(backup_service_infoJSON, "backup_server_status");
    if (cJSON_IsNull(backup_server_status)) {
        backup_server_status = NULL;
    }
    if (backup_server_status) { 
    if(!cJSON_IsString(backup_server_status) && !cJSON_IsNull(backup_server_status))
    {
    goto end; //String
    }
    }

    // backup_service_info->backup_comment
    cJSON *backup_comment = cJSON_GetObjectItemCaseSensitive(backup_service_infoJSON, "backup_comment");
    if (cJSON_IsNull(backup_comment)) {
        backup_comment = NULL;
    }
    if (backup_comment) { 
    if(!cJSON_IsString(backup_comment) && !cJSON_IsNull(backup_comment))
    {
    goto end; //String
    }
    }


    if (backup_id && !cJSON_IsNull(backup_id)) backup_id_local_str = strdup(backup_id->valuestring);
    if (backup_server && !cJSON_IsNull(backup_server)) backup_server_local_str = strdup(backup_server->valuestring);
    if (backup_username && !cJSON_IsNull(backup_username)) backup_username_local_str = strdup(backup_username->valuestring);
    if (backup_type && !cJSON_IsNull(backup_type)) backup_type_local_str = strdup(backup_type->valuestring);
    if (backup_currency && !cJSON_IsNull(backup_currency)) backup_currency_local_str = strdup(backup_currency->valuestring);
    if (backup_order_date && !cJSON_IsNull(backup_order_date)) backup_order_date_local_str = strdup(backup_order_date->valuestring);
    if (backup_custid && !cJSON_IsNull(backup_custid)) backup_custid_local_str = strdup(backup_custid->valuestring);
    if (backup_quota && !cJSON_IsNull(backup_quota)) backup_quota_local_str = strdup(backup_quota->valuestring);
    if (backup_ip && !cJSON_IsNull(backup_ip)) backup_ip_local_str = strdup(backup_ip->valuestring);
    if (backup_status && !cJSON_IsNull(backup_status)) backup_status_local_str = strdup(backup_status->valuestring);
    if (backup_invoice && !cJSON_IsNull(backup_invoice)) backup_invoice_local_str = strdup(backup_invoice->valuestring);
    if (backup_coupon && !cJSON_IsNull(backup_coupon)) backup_coupon_local_str = strdup(backup_coupon->valuestring);
    if (backup_extra && !cJSON_IsNull(backup_extra)) backup_extra_local_str = strdup(backup_extra->valuestring);
    if (backup_server_status && !cJSON_IsNull(backup_server_status)) backup_server_status_local_str = strdup(backup_server_status->valuestring);
    if (backup_comment && !cJSON_IsNull(backup_comment)) backup_comment_local_str = strdup(backup_comment->valuestring);

    backup_service_info_local_var = backup_service_info_create_internal (
        backup_id_local_str,
        backup_server_local_str,
        backup_username_local_str,
        backup_type_local_str,
        backup_currency_local_str,
        backup_order_date_local_str,
        backup_custid_local_str,
        backup_quota_local_str,
        backup_ip_local_str,
        backup_status_local_str,
        backup_invoice_local_str,
        backup_coupon_local_str,
        backup_extra_local_str,
        backup_server_status_local_str,
        backup_comment_local_str
        );

    if (!backup_service_info_local_var) {
        goto end;
    }

    return backup_service_info_local_var;
end:
    if (backup_id_local_str) {
        free(backup_id_local_str);
        backup_id_local_str = NULL;
    }
    if (backup_server_local_str) {
        free(backup_server_local_str);
        backup_server_local_str = NULL;
    }
    if (backup_username_local_str) {
        free(backup_username_local_str);
        backup_username_local_str = NULL;
    }
    if (backup_type_local_str) {
        free(backup_type_local_str);
        backup_type_local_str = NULL;
    }
    if (backup_currency_local_str) {
        free(backup_currency_local_str);
        backup_currency_local_str = NULL;
    }
    if (backup_order_date_local_str) {
        free(backup_order_date_local_str);
        backup_order_date_local_str = NULL;
    }
    if (backup_custid_local_str) {
        free(backup_custid_local_str);
        backup_custid_local_str = NULL;
    }
    if (backup_quota_local_str) {
        free(backup_quota_local_str);
        backup_quota_local_str = NULL;
    }
    if (backup_ip_local_str) {
        free(backup_ip_local_str);
        backup_ip_local_str = NULL;
    }
    if (backup_status_local_str) {
        free(backup_status_local_str);
        backup_status_local_str = NULL;
    }
    if (backup_invoice_local_str) {
        free(backup_invoice_local_str);
        backup_invoice_local_str = NULL;
    }
    if (backup_coupon_local_str) {
        free(backup_coupon_local_str);
        backup_coupon_local_str = NULL;
    }
    if (backup_extra_local_str) {
        free(backup_extra_local_str);
        backup_extra_local_str = NULL;
    }
    if (backup_server_status_local_str) {
        free(backup_server_status_local_str);
        backup_server_status_local_str = NULL;
    }
    if (backup_comment_local_str) {
        free(backup_comment_local_str);
        backup_comment_local_str = NULL;
    }
    return NULL;

}
