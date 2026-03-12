#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_service_info.h"



static domain_service_info_t *domain_service_info_create_internal(
    char *domain_id,
    char *domain_hostname,
    char *domain_username,
    char *domain_password,
    char *domain_type,
    char *domain_currency,
    char *domain_expire_date,
    char *domain_order_date,
    char *domain_custid,
    char *domain_status,
    char *domain_invoice,
    char *domain_coupon
    ) {
    domain_service_info_t *domain_service_info_local_var = malloc(sizeof(domain_service_info_t));
    if (!domain_service_info_local_var) {
        return NULL;
    }
    domain_service_info_local_var->domain_id = domain_id;
    domain_service_info_local_var->domain_hostname = domain_hostname;
    domain_service_info_local_var->domain_username = domain_username;
    domain_service_info_local_var->domain_password = domain_password;
    domain_service_info_local_var->domain_type = domain_type;
    domain_service_info_local_var->domain_currency = domain_currency;
    domain_service_info_local_var->domain_expire_date = domain_expire_date;
    domain_service_info_local_var->domain_order_date = domain_order_date;
    domain_service_info_local_var->domain_custid = domain_custid;
    domain_service_info_local_var->domain_status = domain_status;
    domain_service_info_local_var->domain_invoice = domain_invoice;
    domain_service_info_local_var->domain_coupon = domain_coupon;

    domain_service_info_local_var->_library_owned = 1;
    return domain_service_info_local_var;
}

__attribute__((deprecated)) domain_service_info_t *domain_service_info_create(
    char *domain_id,
    char *domain_hostname,
    char *domain_username,
    char *domain_password,
    char *domain_type,
    char *domain_currency,
    char *domain_expire_date,
    char *domain_order_date,
    char *domain_custid,
    char *domain_status,
    char *domain_invoice,
    char *domain_coupon
    ) {
    return domain_service_info_create_internal (
        domain_id,
        domain_hostname,
        domain_username,
        domain_password,
        domain_type,
        domain_currency,
        domain_expire_date,
        domain_order_date,
        domain_custid,
        domain_status,
        domain_invoice,
        domain_coupon
        );
}

void domain_service_info_free(domain_service_info_t *domain_service_info) {
    if(NULL == domain_service_info){
        return ;
    }
    if(domain_service_info->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_service_info_free");
        return ;
    }
    listEntry_t *listEntry;
    if (domain_service_info->domain_id) {
        free(domain_service_info->domain_id);
        domain_service_info->domain_id = NULL;
    }
    if (domain_service_info->domain_hostname) {
        free(domain_service_info->domain_hostname);
        domain_service_info->domain_hostname = NULL;
    }
    if (domain_service_info->domain_username) {
        free(domain_service_info->domain_username);
        domain_service_info->domain_username = NULL;
    }
    if (domain_service_info->domain_password) {
        free(domain_service_info->domain_password);
        domain_service_info->domain_password = NULL;
    }
    if (domain_service_info->domain_type) {
        free(domain_service_info->domain_type);
        domain_service_info->domain_type = NULL;
    }
    if (domain_service_info->domain_currency) {
        free(domain_service_info->domain_currency);
        domain_service_info->domain_currency = NULL;
    }
    if (domain_service_info->domain_expire_date) {
        free(domain_service_info->domain_expire_date);
        domain_service_info->domain_expire_date = NULL;
    }
    if (domain_service_info->domain_order_date) {
        free(domain_service_info->domain_order_date);
        domain_service_info->domain_order_date = NULL;
    }
    if (domain_service_info->domain_custid) {
        free(domain_service_info->domain_custid);
        domain_service_info->domain_custid = NULL;
    }
    if (domain_service_info->domain_status) {
        free(domain_service_info->domain_status);
        domain_service_info->domain_status = NULL;
    }
    if (domain_service_info->domain_invoice) {
        free(domain_service_info->domain_invoice);
        domain_service_info->domain_invoice = NULL;
    }
    if (domain_service_info->domain_coupon) {
        free(domain_service_info->domain_coupon);
        domain_service_info->domain_coupon = NULL;
    }
    free(domain_service_info);
}

cJSON *domain_service_info_convertToJSON(domain_service_info_t *domain_service_info) {
    cJSON *item = cJSON_CreateObject();

    // domain_service_info->domain_id
    if(domain_service_info->domain_id) {
    if(cJSON_AddStringToObject(item, "domain_id", domain_service_info->domain_id) == NULL) {
    goto fail; //String
    }
    }


    // domain_service_info->domain_hostname
    if(domain_service_info->domain_hostname) {
    if(cJSON_AddStringToObject(item, "domain_hostname", domain_service_info->domain_hostname) == NULL) {
    goto fail; //String
    }
    }


    // domain_service_info->domain_username
    if(domain_service_info->domain_username) {
    if(cJSON_AddStringToObject(item, "domain_username", domain_service_info->domain_username) == NULL) {
    goto fail; //String
    }
    }


    // domain_service_info->domain_password
    if(domain_service_info->domain_password) {
    if(cJSON_AddStringToObject(item, "domain_password", domain_service_info->domain_password) == NULL) {
    goto fail; //String
    }
    }


    // domain_service_info->domain_type
    if(domain_service_info->domain_type) {
    if(cJSON_AddStringToObject(item, "domain_type", domain_service_info->domain_type) == NULL) {
    goto fail; //String
    }
    }


    // domain_service_info->domain_currency
    if(domain_service_info->domain_currency) {
    if(cJSON_AddStringToObject(item, "domain_currency", domain_service_info->domain_currency) == NULL) {
    goto fail; //String
    }
    }


    // domain_service_info->domain_expire_date
    if(domain_service_info->domain_expire_date) {
    if(cJSON_AddStringToObject(item, "domain_expire_date", domain_service_info->domain_expire_date) == NULL) {
    goto fail; //String
    }
    }


    // domain_service_info->domain_order_date
    if(domain_service_info->domain_order_date) {
    if(cJSON_AddStringToObject(item, "domain_order_date", domain_service_info->domain_order_date) == NULL) {
    goto fail; //String
    }
    }


    // domain_service_info->domain_custid
    if(domain_service_info->domain_custid) {
    if(cJSON_AddStringToObject(item, "domain_custid", domain_service_info->domain_custid) == NULL) {
    goto fail; //String
    }
    }


    // domain_service_info->domain_status
    if(domain_service_info->domain_status) {
    if(cJSON_AddStringToObject(item, "domain_status", domain_service_info->domain_status) == NULL) {
    goto fail; //String
    }
    }


    // domain_service_info->domain_invoice
    if(domain_service_info->domain_invoice) {
    if(cJSON_AddStringToObject(item, "domain_invoice", domain_service_info->domain_invoice) == NULL) {
    goto fail; //String
    }
    }


    // domain_service_info->domain_coupon
    if(domain_service_info->domain_coupon) {
    if(cJSON_AddStringToObject(item, "domain_coupon", domain_service_info->domain_coupon) == NULL) {
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

domain_service_info_t *domain_service_info_parseFromJSON(cJSON *domain_service_infoJSON){

    domain_service_info_t *domain_service_info_local_var = NULL;

    // domain_service_info->domain_id
    cJSON *domain_id = cJSON_GetObjectItemCaseSensitive(domain_service_infoJSON, "domain_id");
    if (cJSON_IsNull(domain_id)) {
        domain_id = NULL;
    }
    if (domain_id) { 
    if(!cJSON_IsString(domain_id) && !cJSON_IsNull(domain_id))
    {
    goto end; //String
    }
    }

    // domain_service_info->domain_hostname
    cJSON *domain_hostname = cJSON_GetObjectItemCaseSensitive(domain_service_infoJSON, "domain_hostname");
    if (cJSON_IsNull(domain_hostname)) {
        domain_hostname = NULL;
    }
    if (domain_hostname) { 
    if(!cJSON_IsString(domain_hostname) && !cJSON_IsNull(domain_hostname))
    {
    goto end; //String
    }
    }

    // domain_service_info->domain_username
    cJSON *domain_username = cJSON_GetObjectItemCaseSensitive(domain_service_infoJSON, "domain_username");
    if (cJSON_IsNull(domain_username)) {
        domain_username = NULL;
    }
    if (domain_username) { 
    if(!cJSON_IsString(domain_username) && !cJSON_IsNull(domain_username))
    {
    goto end; //String
    }
    }

    // domain_service_info->domain_password
    cJSON *domain_password = cJSON_GetObjectItemCaseSensitive(domain_service_infoJSON, "domain_password");
    if (cJSON_IsNull(domain_password)) {
        domain_password = NULL;
    }
    if (domain_password) { 
    if(!cJSON_IsString(domain_password) && !cJSON_IsNull(domain_password))
    {
    goto end; //String
    }
    }

    // domain_service_info->domain_type
    cJSON *domain_type = cJSON_GetObjectItemCaseSensitive(domain_service_infoJSON, "domain_type");
    if (cJSON_IsNull(domain_type)) {
        domain_type = NULL;
    }
    if (domain_type) { 
    if(!cJSON_IsString(domain_type) && !cJSON_IsNull(domain_type))
    {
    goto end; //String
    }
    }

    // domain_service_info->domain_currency
    cJSON *domain_currency = cJSON_GetObjectItemCaseSensitive(domain_service_infoJSON, "domain_currency");
    if (cJSON_IsNull(domain_currency)) {
        domain_currency = NULL;
    }
    if (domain_currency) { 
    if(!cJSON_IsString(domain_currency) && !cJSON_IsNull(domain_currency))
    {
    goto end; //String
    }
    }

    // domain_service_info->domain_expire_date
    cJSON *domain_expire_date = cJSON_GetObjectItemCaseSensitive(domain_service_infoJSON, "domain_expire_date");
    if (cJSON_IsNull(domain_expire_date)) {
        domain_expire_date = NULL;
    }
    if (domain_expire_date) { 
    if(!cJSON_IsString(domain_expire_date) && !cJSON_IsNull(domain_expire_date))
    {
    goto end; //String
    }
    }

    // domain_service_info->domain_order_date
    cJSON *domain_order_date = cJSON_GetObjectItemCaseSensitive(domain_service_infoJSON, "domain_order_date");
    if (cJSON_IsNull(domain_order_date)) {
        domain_order_date = NULL;
    }
    if (domain_order_date) { 
    if(!cJSON_IsString(domain_order_date) && !cJSON_IsNull(domain_order_date))
    {
    goto end; //String
    }
    }

    // domain_service_info->domain_custid
    cJSON *domain_custid = cJSON_GetObjectItemCaseSensitive(domain_service_infoJSON, "domain_custid");
    if (cJSON_IsNull(domain_custid)) {
        domain_custid = NULL;
    }
    if (domain_custid) { 
    if(!cJSON_IsString(domain_custid) && !cJSON_IsNull(domain_custid))
    {
    goto end; //String
    }
    }

    // domain_service_info->domain_status
    cJSON *domain_status = cJSON_GetObjectItemCaseSensitive(domain_service_infoJSON, "domain_status");
    if (cJSON_IsNull(domain_status)) {
        domain_status = NULL;
    }
    if (domain_status) { 
    if(!cJSON_IsString(domain_status) && !cJSON_IsNull(domain_status))
    {
    goto end; //String
    }
    }

    // domain_service_info->domain_invoice
    cJSON *domain_invoice = cJSON_GetObjectItemCaseSensitive(domain_service_infoJSON, "domain_invoice");
    if (cJSON_IsNull(domain_invoice)) {
        domain_invoice = NULL;
    }
    if (domain_invoice) { 
    if(!cJSON_IsString(domain_invoice) && !cJSON_IsNull(domain_invoice))
    {
    goto end; //String
    }
    }

    // domain_service_info->domain_coupon
    cJSON *domain_coupon = cJSON_GetObjectItemCaseSensitive(domain_service_infoJSON, "domain_coupon");
    if (cJSON_IsNull(domain_coupon)) {
        domain_coupon = NULL;
    }
    if (domain_coupon) { 
    if(!cJSON_IsString(domain_coupon) && !cJSON_IsNull(domain_coupon))
    {
    goto end; //String
    }
    }


    domain_service_info_local_var = domain_service_info_create_internal (
        domain_id && !cJSON_IsNull(domain_id) ? strdup(domain_id->valuestring) : NULL,
        domain_hostname && !cJSON_IsNull(domain_hostname) ? strdup(domain_hostname->valuestring) : NULL,
        domain_username && !cJSON_IsNull(domain_username) ? strdup(domain_username->valuestring) : NULL,
        domain_password && !cJSON_IsNull(domain_password) ? strdup(domain_password->valuestring) : NULL,
        domain_type && !cJSON_IsNull(domain_type) ? strdup(domain_type->valuestring) : NULL,
        domain_currency && !cJSON_IsNull(domain_currency) ? strdup(domain_currency->valuestring) : NULL,
        domain_expire_date && !cJSON_IsNull(domain_expire_date) ? strdup(domain_expire_date->valuestring) : NULL,
        domain_order_date && !cJSON_IsNull(domain_order_date) ? strdup(domain_order_date->valuestring) : NULL,
        domain_custid && !cJSON_IsNull(domain_custid) ? strdup(domain_custid->valuestring) : NULL,
        domain_status && !cJSON_IsNull(domain_status) ? strdup(domain_status->valuestring) : NULL,
        domain_invoice && !cJSON_IsNull(domain_invoice) ? strdup(domain_invoice->valuestring) : NULL,
        domain_coupon && !cJSON_IsNull(domain_coupon) ? strdup(domain_coupon->valuestring) : NULL
        );

    return domain_service_info_local_var;
end:
    return NULL;

}
