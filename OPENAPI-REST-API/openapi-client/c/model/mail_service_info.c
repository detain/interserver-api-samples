#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mail_service_info.h"



static mail_service_info_t *mail_service_info_create_internal(
    char *mail_id,
    char *mail_type,
    char *mail_currency,
    char *mail_order_date,
    char *mail_custid,
    char *mail_quota,
    char *mail_status,
    char *mail_invoice,
    char *mail_username,
    char *mail_ip,
    char *mail_coupon,
    char *mail_extra,
    char *mail_server_status,
    char *mail_comment
    ) {
    mail_service_info_t *mail_service_info_local_var = malloc(sizeof(mail_service_info_t));
    if (!mail_service_info_local_var) {
        return NULL;
    }
    mail_service_info_local_var->mail_id = mail_id;
    mail_service_info_local_var->mail_type = mail_type;
    mail_service_info_local_var->mail_currency = mail_currency;
    mail_service_info_local_var->mail_order_date = mail_order_date;
    mail_service_info_local_var->mail_custid = mail_custid;
    mail_service_info_local_var->mail_quota = mail_quota;
    mail_service_info_local_var->mail_status = mail_status;
    mail_service_info_local_var->mail_invoice = mail_invoice;
    mail_service_info_local_var->mail_username = mail_username;
    mail_service_info_local_var->mail_ip = mail_ip;
    mail_service_info_local_var->mail_coupon = mail_coupon;
    mail_service_info_local_var->mail_extra = mail_extra;
    mail_service_info_local_var->mail_server_status = mail_server_status;
    mail_service_info_local_var->mail_comment = mail_comment;

    mail_service_info_local_var->_library_owned = 1;
    return mail_service_info_local_var;
}

__attribute__((deprecated)) mail_service_info_t *mail_service_info_create(
    char *mail_id,
    char *mail_type,
    char *mail_currency,
    char *mail_order_date,
    char *mail_custid,
    char *mail_quota,
    char *mail_status,
    char *mail_invoice,
    char *mail_username,
    char *mail_ip,
    char *mail_coupon,
    char *mail_extra,
    char *mail_server_status,
    char *mail_comment
    ) {
    return mail_service_info_create_internal (
        mail_id,
        mail_type,
        mail_currency,
        mail_order_date,
        mail_custid,
        mail_quota,
        mail_status,
        mail_invoice,
        mail_username,
        mail_ip,
        mail_coupon,
        mail_extra,
        mail_server_status,
        mail_comment
        );
}

void mail_service_info_free(mail_service_info_t *mail_service_info) {
    if(NULL == mail_service_info){
        return ;
    }
    if(mail_service_info->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "mail_service_info_free");
        return ;
    }
    listEntry_t *listEntry;
    if (mail_service_info->mail_id) {
        free(mail_service_info->mail_id);
        mail_service_info->mail_id = NULL;
    }
    if (mail_service_info->mail_type) {
        free(mail_service_info->mail_type);
        mail_service_info->mail_type = NULL;
    }
    if (mail_service_info->mail_currency) {
        free(mail_service_info->mail_currency);
        mail_service_info->mail_currency = NULL;
    }
    if (mail_service_info->mail_order_date) {
        free(mail_service_info->mail_order_date);
        mail_service_info->mail_order_date = NULL;
    }
    if (mail_service_info->mail_custid) {
        free(mail_service_info->mail_custid);
        mail_service_info->mail_custid = NULL;
    }
    if (mail_service_info->mail_quota) {
        free(mail_service_info->mail_quota);
        mail_service_info->mail_quota = NULL;
    }
    if (mail_service_info->mail_status) {
        free(mail_service_info->mail_status);
        mail_service_info->mail_status = NULL;
    }
    if (mail_service_info->mail_invoice) {
        free(mail_service_info->mail_invoice);
        mail_service_info->mail_invoice = NULL;
    }
    if (mail_service_info->mail_username) {
        free(mail_service_info->mail_username);
        mail_service_info->mail_username = NULL;
    }
    if (mail_service_info->mail_ip) {
        free(mail_service_info->mail_ip);
        mail_service_info->mail_ip = NULL;
    }
    if (mail_service_info->mail_coupon) {
        free(mail_service_info->mail_coupon);
        mail_service_info->mail_coupon = NULL;
    }
    if (mail_service_info->mail_extra) {
        free(mail_service_info->mail_extra);
        mail_service_info->mail_extra = NULL;
    }
    if (mail_service_info->mail_server_status) {
        free(mail_service_info->mail_server_status);
        mail_service_info->mail_server_status = NULL;
    }
    if (mail_service_info->mail_comment) {
        free(mail_service_info->mail_comment);
        mail_service_info->mail_comment = NULL;
    }
    free(mail_service_info);
}

cJSON *mail_service_info_convertToJSON(mail_service_info_t *mail_service_info) {
    cJSON *item = cJSON_CreateObject();

    // mail_service_info->mail_id
    if (!mail_service_info->mail_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "mail_id", mail_service_info->mail_id) == NULL) {
    goto fail; //String
    }


    // mail_service_info->mail_type
    if (!mail_service_info->mail_type) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "mail_type", mail_service_info->mail_type) == NULL) {
    goto fail; //String
    }


    // mail_service_info->mail_currency
    if (!mail_service_info->mail_currency) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "mail_currency", mail_service_info->mail_currency) == NULL) {
    goto fail; //String
    }


    // mail_service_info->mail_order_date
    if (!mail_service_info->mail_order_date) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "mail_order_date", mail_service_info->mail_order_date) == NULL) {
    goto fail; //String
    }


    // mail_service_info->mail_custid
    if (!mail_service_info->mail_custid) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "mail_custid", mail_service_info->mail_custid) == NULL) {
    goto fail; //String
    }


    // mail_service_info->mail_quota
    if (!mail_service_info->mail_quota) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "mail_quota", mail_service_info->mail_quota) == NULL) {
    goto fail; //String
    }


    // mail_service_info->mail_status
    if (!mail_service_info->mail_status) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "mail_status", mail_service_info->mail_status) == NULL) {
    goto fail; //String
    }


    // mail_service_info->mail_invoice
    if (!mail_service_info->mail_invoice) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "mail_invoice", mail_service_info->mail_invoice) == NULL) {
    goto fail; //String
    }


    // mail_service_info->mail_username
    if(mail_service_info->mail_username) {
    if(cJSON_AddStringToObject(item, "mail_username", mail_service_info->mail_username) == NULL) {
    goto fail; //String
    }
    }


    // mail_service_info->mail_ip
    if(mail_service_info->mail_ip) {
    if(cJSON_AddStringToObject(item, "mail_ip", mail_service_info->mail_ip) == NULL) {
    goto fail; //String
    }
    }


    // mail_service_info->mail_coupon
    if(mail_service_info->mail_coupon) {
    if(cJSON_AddStringToObject(item, "mail_coupon", mail_service_info->mail_coupon) == NULL) {
    goto fail; //String
    }
    }


    // mail_service_info->mail_extra
    if(mail_service_info->mail_extra) {
    if(cJSON_AddStringToObject(item, "mail_extra", mail_service_info->mail_extra) == NULL) {
    goto fail; //String
    }
    }


    // mail_service_info->mail_server_status
    if(mail_service_info->mail_server_status) {
    if(cJSON_AddStringToObject(item, "mail_server_status", mail_service_info->mail_server_status) == NULL) {
    goto fail; //String
    }
    }


    // mail_service_info->mail_comment
    if(mail_service_info->mail_comment) {
    if(cJSON_AddStringToObject(item, "mail_comment", mail_service_info->mail_comment) == NULL) {
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

mail_service_info_t *mail_service_info_parseFromJSON(cJSON *mail_service_infoJSON){

    mail_service_info_t *mail_service_info_local_var = NULL;

    // mail_service_info->mail_id
    cJSON *mail_id = cJSON_GetObjectItemCaseSensitive(mail_service_infoJSON, "mail_id");
    if (cJSON_IsNull(mail_id)) {
        mail_id = NULL;
    }
    if (!mail_id) {
        goto end;
    }

    
    if(!cJSON_IsString(mail_id))
    {
    goto end; //String
    }

    // mail_service_info->mail_type
    cJSON *mail_type = cJSON_GetObjectItemCaseSensitive(mail_service_infoJSON, "mail_type");
    if (cJSON_IsNull(mail_type)) {
        mail_type = NULL;
    }
    if (!mail_type) {
        goto end;
    }

    
    if(!cJSON_IsString(mail_type))
    {
    goto end; //String
    }

    // mail_service_info->mail_currency
    cJSON *mail_currency = cJSON_GetObjectItemCaseSensitive(mail_service_infoJSON, "mail_currency");
    if (cJSON_IsNull(mail_currency)) {
        mail_currency = NULL;
    }
    if (!mail_currency) {
        goto end;
    }

    
    if(!cJSON_IsString(mail_currency))
    {
    goto end; //String
    }

    // mail_service_info->mail_order_date
    cJSON *mail_order_date = cJSON_GetObjectItemCaseSensitive(mail_service_infoJSON, "mail_order_date");
    if (cJSON_IsNull(mail_order_date)) {
        mail_order_date = NULL;
    }
    if (!mail_order_date) {
        goto end;
    }

    
    if(!cJSON_IsString(mail_order_date))
    {
    goto end; //String
    }

    // mail_service_info->mail_custid
    cJSON *mail_custid = cJSON_GetObjectItemCaseSensitive(mail_service_infoJSON, "mail_custid");
    if (cJSON_IsNull(mail_custid)) {
        mail_custid = NULL;
    }
    if (!mail_custid) {
        goto end;
    }

    
    if(!cJSON_IsString(mail_custid))
    {
    goto end; //String
    }

    // mail_service_info->mail_quota
    cJSON *mail_quota = cJSON_GetObjectItemCaseSensitive(mail_service_infoJSON, "mail_quota");
    if (cJSON_IsNull(mail_quota)) {
        mail_quota = NULL;
    }
    if (!mail_quota) {
        goto end;
    }

    
    if(!cJSON_IsString(mail_quota))
    {
    goto end; //String
    }

    // mail_service_info->mail_status
    cJSON *mail_status = cJSON_GetObjectItemCaseSensitive(mail_service_infoJSON, "mail_status");
    if (cJSON_IsNull(mail_status)) {
        mail_status = NULL;
    }
    if (!mail_status) {
        goto end;
    }

    
    if(!cJSON_IsString(mail_status))
    {
    goto end; //String
    }

    // mail_service_info->mail_invoice
    cJSON *mail_invoice = cJSON_GetObjectItemCaseSensitive(mail_service_infoJSON, "mail_invoice");
    if (cJSON_IsNull(mail_invoice)) {
        mail_invoice = NULL;
    }
    if (!mail_invoice) {
        goto end;
    }

    
    if(!cJSON_IsString(mail_invoice))
    {
    goto end; //String
    }

    // mail_service_info->mail_username
    cJSON *mail_username = cJSON_GetObjectItemCaseSensitive(mail_service_infoJSON, "mail_username");
    if (cJSON_IsNull(mail_username)) {
        mail_username = NULL;
    }
    if (mail_username) { 
    if(!cJSON_IsString(mail_username) && !cJSON_IsNull(mail_username))
    {
    goto end; //String
    }
    }

    // mail_service_info->mail_ip
    cJSON *mail_ip = cJSON_GetObjectItemCaseSensitive(mail_service_infoJSON, "mail_ip");
    if (cJSON_IsNull(mail_ip)) {
        mail_ip = NULL;
    }
    if (mail_ip) { 
    if(!cJSON_IsString(mail_ip) && !cJSON_IsNull(mail_ip))
    {
    goto end; //String
    }
    }

    // mail_service_info->mail_coupon
    cJSON *mail_coupon = cJSON_GetObjectItemCaseSensitive(mail_service_infoJSON, "mail_coupon");
    if (cJSON_IsNull(mail_coupon)) {
        mail_coupon = NULL;
    }
    if (mail_coupon) { 
    if(!cJSON_IsString(mail_coupon) && !cJSON_IsNull(mail_coupon))
    {
    goto end; //String
    }
    }

    // mail_service_info->mail_extra
    cJSON *mail_extra = cJSON_GetObjectItemCaseSensitive(mail_service_infoJSON, "mail_extra");
    if (cJSON_IsNull(mail_extra)) {
        mail_extra = NULL;
    }
    if (mail_extra) { 
    if(!cJSON_IsString(mail_extra) && !cJSON_IsNull(mail_extra))
    {
    goto end; //String
    }
    }

    // mail_service_info->mail_server_status
    cJSON *mail_server_status = cJSON_GetObjectItemCaseSensitive(mail_service_infoJSON, "mail_server_status");
    if (cJSON_IsNull(mail_server_status)) {
        mail_server_status = NULL;
    }
    if (mail_server_status) { 
    if(!cJSON_IsString(mail_server_status) && !cJSON_IsNull(mail_server_status))
    {
    goto end; //String
    }
    }

    // mail_service_info->mail_comment
    cJSON *mail_comment = cJSON_GetObjectItemCaseSensitive(mail_service_infoJSON, "mail_comment");
    if (cJSON_IsNull(mail_comment)) {
        mail_comment = NULL;
    }
    if (mail_comment) { 
    if(!cJSON_IsString(mail_comment) && !cJSON_IsNull(mail_comment))
    {
    goto end; //String
    }
    }


    mail_service_info_local_var = mail_service_info_create_internal (
        strdup(mail_id->valuestring),
        strdup(mail_type->valuestring),
        strdup(mail_currency->valuestring),
        strdup(mail_order_date->valuestring),
        strdup(mail_custid->valuestring),
        strdup(mail_quota->valuestring),
        strdup(mail_status->valuestring),
        strdup(mail_invoice->valuestring),
        mail_username && !cJSON_IsNull(mail_username) ? strdup(mail_username->valuestring) : NULL,
        mail_ip && !cJSON_IsNull(mail_ip) ? strdup(mail_ip->valuestring) : NULL,
        mail_coupon && !cJSON_IsNull(mail_coupon) ? strdup(mail_coupon->valuestring) : NULL,
        mail_extra && !cJSON_IsNull(mail_extra) ? strdup(mail_extra->valuestring) : NULL,
        mail_server_status && !cJSON_IsNull(mail_server_status) ? strdup(mail_server_status->valuestring) : NULL,
        mail_comment && !cJSON_IsNull(mail_comment) ? strdup(mail_comment->valuestring) : NULL
        );

    return mail_service_info_local_var;
end:
    return NULL;

}
