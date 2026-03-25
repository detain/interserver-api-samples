#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "license_service_info.h"



static license_service_info_t *license_service_info_create_internal(
    char *license_id,
    char *license_type,
    char *license_currency,
    char *license_order_date,
    char *license_custid,
    char *license_ip,
    char *license_status,
    char *license_invoice,
    char *license_coupon,
    char *license_hostname,
    char *license_key,
    char *license_extra
    ) {
    license_service_info_t *license_service_info_local_var = malloc(sizeof(license_service_info_t));
    if (!license_service_info_local_var) {
        return NULL;
    }
    memset(license_service_info_local_var, 0, sizeof(license_service_info_t));
    license_service_info_local_var->_library_owned = 1;
    license_service_info_local_var->license_id = license_id;
    license_service_info_local_var->license_type = license_type;
    license_service_info_local_var->license_currency = license_currency;
    license_service_info_local_var->license_order_date = license_order_date;
    license_service_info_local_var->license_custid = license_custid;
    license_service_info_local_var->license_ip = license_ip;
    license_service_info_local_var->license_status = license_status;
    license_service_info_local_var->license_invoice = license_invoice;
    license_service_info_local_var->license_coupon = license_coupon;
    license_service_info_local_var->license_hostname = license_hostname;
    license_service_info_local_var->license_key = license_key;
    license_service_info_local_var->license_extra = license_extra;
    return license_service_info_local_var;
}

__attribute__((deprecated)) license_service_info_t *license_service_info_create(
    char *license_id,
    char *license_type,
    char *license_currency,
    char *license_order_date,
    char *license_custid,
    char *license_ip,
    char *license_status,
    char *license_invoice,
    char *license_coupon,
    char *license_hostname,
    char *license_key,
    char *license_extra
    ) {
    license_service_info_t *result = license_service_info_create_internal (
        license_id,
        license_type,
        license_currency,
        license_order_date,
        license_custid,
        license_ip,
        license_status,
        license_invoice,
        license_coupon,
        license_hostname,
        license_key,
        license_extra
        );
    if (!result) {
    }
    return result;
}

void license_service_info_free(license_service_info_t *license_service_info) {
    if(NULL == license_service_info){
        return ;
    }
    if(license_service_info->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "license_service_info_free");
        return ;
    }
    listEntry_t *listEntry;
    if (license_service_info->license_id) {
        free(license_service_info->license_id);
        license_service_info->license_id = NULL;
    }
    if (license_service_info->license_type) {
        free(license_service_info->license_type);
        license_service_info->license_type = NULL;
    }
    if (license_service_info->license_currency) {
        free(license_service_info->license_currency);
        license_service_info->license_currency = NULL;
    }
    if (license_service_info->license_order_date) {
        free(license_service_info->license_order_date);
        license_service_info->license_order_date = NULL;
    }
    if (license_service_info->license_custid) {
        free(license_service_info->license_custid);
        license_service_info->license_custid = NULL;
    }
    if (license_service_info->license_ip) {
        free(license_service_info->license_ip);
        license_service_info->license_ip = NULL;
    }
    if (license_service_info->license_status) {
        free(license_service_info->license_status);
        license_service_info->license_status = NULL;
    }
    if (license_service_info->license_invoice) {
        free(license_service_info->license_invoice);
        license_service_info->license_invoice = NULL;
    }
    if (license_service_info->license_coupon) {
        free(license_service_info->license_coupon);
        license_service_info->license_coupon = NULL;
    }
    if (license_service_info->license_hostname) {
        free(license_service_info->license_hostname);
        license_service_info->license_hostname = NULL;
    }
    if (license_service_info->license_key) {
        free(license_service_info->license_key);
        license_service_info->license_key = NULL;
    }
    if (license_service_info->license_extra) {
        free(license_service_info->license_extra);
        license_service_info->license_extra = NULL;
    }
    free(license_service_info);
}

cJSON *license_service_info_convertToJSON(license_service_info_t *license_service_info) {
    cJSON *item = cJSON_CreateObject();

    // license_service_info->license_id
    if (!license_service_info->license_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "license_id", license_service_info->license_id) == NULL) {
    goto fail; //String
    }


    // license_service_info->license_type
    if (!license_service_info->license_type) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "license_type", license_service_info->license_type) == NULL) {
    goto fail; //String
    }


    // license_service_info->license_currency
    if (!license_service_info->license_currency) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "license_currency", license_service_info->license_currency) == NULL) {
    goto fail; //String
    }


    // license_service_info->license_order_date
    if (!license_service_info->license_order_date) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "license_order_date", license_service_info->license_order_date) == NULL) {
    goto fail; //Date-Time
    }


    // license_service_info->license_custid
    if (!license_service_info->license_custid) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "license_custid", license_service_info->license_custid) == NULL) {
    goto fail; //String
    }


    // license_service_info->license_ip
    if (!license_service_info->license_ip) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "license_ip", license_service_info->license_ip) == NULL) {
    goto fail; //String
    }


    // license_service_info->license_status
    if (!license_service_info->license_status) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "license_status", license_service_info->license_status) == NULL) {
    goto fail; //String
    }


    // license_service_info->license_invoice
    if (!license_service_info->license_invoice) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "license_invoice", license_service_info->license_invoice) == NULL) {
    goto fail; //String
    }


    // license_service_info->license_coupon
    if (!license_service_info->license_coupon) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "license_coupon", license_service_info->license_coupon) == NULL) {
    goto fail; //String
    }


    // license_service_info->license_hostname
    if(license_service_info->license_hostname) {
    if(cJSON_AddStringToObject(item, "license_hostname", license_service_info->license_hostname) == NULL) {
    goto fail; //String
    }
    }


    // license_service_info->license_key
    if(license_service_info->license_key) {
    if(cJSON_AddStringToObject(item, "license_key", license_service_info->license_key) == NULL) {
    goto fail; //String
    }
    }


    // license_service_info->license_extra
    if(license_service_info->license_extra) {
    if(cJSON_AddStringToObject(item, "license_extra", license_service_info->license_extra) == NULL) {
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

license_service_info_t *license_service_info_parseFromJSON(cJSON *license_service_infoJSON){

    license_service_info_t *license_service_info_local_var = NULL;

    char *license_id_local_str = NULL;

    char *license_type_local_str = NULL;

    char *license_currency_local_str = NULL;

    char *license_order_date_local_str = NULL;

    char *license_custid_local_str = NULL;

    char *license_ip_local_str = NULL;

    char *license_status_local_str = NULL;

    char *license_invoice_local_str = NULL;

    char *license_coupon_local_str = NULL;

    char *license_hostname_local_str = NULL;

    char *license_key_local_str = NULL;

    char *license_extra_local_str = NULL;

    // license_service_info->license_id
    cJSON *license_id = cJSON_GetObjectItemCaseSensitive(license_service_infoJSON, "license_id");
    if (cJSON_IsNull(license_id)) {
        license_id = NULL;
    }
    if (!license_id) {
        goto end;
    }

    
    if(!cJSON_IsString(license_id))
    {
    goto end; //String
    }

    // license_service_info->license_type
    cJSON *license_type = cJSON_GetObjectItemCaseSensitive(license_service_infoJSON, "license_type");
    if (cJSON_IsNull(license_type)) {
        license_type = NULL;
    }
    if (!license_type) {
        goto end;
    }

    
    if(!cJSON_IsString(license_type))
    {
    goto end; //String
    }

    // license_service_info->license_currency
    cJSON *license_currency = cJSON_GetObjectItemCaseSensitive(license_service_infoJSON, "license_currency");
    if (cJSON_IsNull(license_currency)) {
        license_currency = NULL;
    }
    if (!license_currency) {
        goto end;
    }

    
    if(!cJSON_IsString(license_currency))
    {
    goto end; //String
    }

    // license_service_info->license_order_date
    cJSON *license_order_date = cJSON_GetObjectItemCaseSensitive(license_service_infoJSON, "license_order_date");
    if (cJSON_IsNull(license_order_date)) {
        license_order_date = NULL;
    }
    if (!license_order_date) {
        goto end;
    }

    
    if(!cJSON_IsString(license_order_date) && !cJSON_IsNull(license_order_date))
    {
    goto end; //DateTime
    }

    // license_service_info->license_custid
    cJSON *license_custid = cJSON_GetObjectItemCaseSensitive(license_service_infoJSON, "license_custid");
    if (cJSON_IsNull(license_custid)) {
        license_custid = NULL;
    }
    if (!license_custid) {
        goto end;
    }

    
    if(!cJSON_IsString(license_custid))
    {
    goto end; //String
    }

    // license_service_info->license_ip
    cJSON *license_ip = cJSON_GetObjectItemCaseSensitive(license_service_infoJSON, "license_ip");
    if (cJSON_IsNull(license_ip)) {
        license_ip = NULL;
    }
    if (!license_ip) {
        goto end;
    }

    
    if(!cJSON_IsString(license_ip))
    {
    goto end; //String
    }

    // license_service_info->license_status
    cJSON *license_status = cJSON_GetObjectItemCaseSensitive(license_service_infoJSON, "license_status");
    if (cJSON_IsNull(license_status)) {
        license_status = NULL;
    }
    if (!license_status) {
        goto end;
    }

    
    if(!cJSON_IsString(license_status))
    {
    goto end; //String
    }

    // license_service_info->license_invoice
    cJSON *license_invoice = cJSON_GetObjectItemCaseSensitive(license_service_infoJSON, "license_invoice");
    if (cJSON_IsNull(license_invoice)) {
        license_invoice = NULL;
    }
    if (!license_invoice) {
        goto end;
    }

    
    if(!cJSON_IsString(license_invoice))
    {
    goto end; //String
    }

    // license_service_info->license_coupon
    cJSON *license_coupon = cJSON_GetObjectItemCaseSensitive(license_service_infoJSON, "license_coupon");
    if (cJSON_IsNull(license_coupon)) {
        license_coupon = NULL;
    }
    if (!license_coupon) {
        goto end;
    }

    
    if(!cJSON_IsString(license_coupon))
    {
    goto end; //String
    }

    // license_service_info->license_hostname
    cJSON *license_hostname = cJSON_GetObjectItemCaseSensitive(license_service_infoJSON, "license_hostname");
    if (cJSON_IsNull(license_hostname)) {
        license_hostname = NULL;
    }
    if (license_hostname) { 
    if(!cJSON_IsString(license_hostname) && !cJSON_IsNull(license_hostname))
    {
    goto end; //String
    }
    }

    // license_service_info->license_key
    cJSON *license_key = cJSON_GetObjectItemCaseSensitive(license_service_infoJSON, "license_key");
    if (cJSON_IsNull(license_key)) {
        license_key = NULL;
    }
    if (license_key) { 
    if(!cJSON_IsString(license_key) && !cJSON_IsNull(license_key))
    {
    goto end; //String
    }
    }

    // license_service_info->license_extra
    cJSON *license_extra = cJSON_GetObjectItemCaseSensitive(license_service_infoJSON, "license_extra");
    if (cJSON_IsNull(license_extra)) {
        license_extra = NULL;
    }
    if (license_extra) { 
    if(!cJSON_IsString(license_extra) && !cJSON_IsNull(license_extra))
    {
    goto end; //String
    }
    }


    if (license_id && !cJSON_IsNull(license_id)) license_id_local_str = strdup(license_id->valuestring);
    if (license_type && !cJSON_IsNull(license_type)) license_type_local_str = strdup(license_type->valuestring);
    if (license_currency && !cJSON_IsNull(license_currency)) license_currency_local_str = strdup(license_currency->valuestring);
    if (license_order_date && !cJSON_IsNull(license_order_date)) license_order_date_local_str = strdup(license_order_date->valuestring);
    if (license_custid && !cJSON_IsNull(license_custid)) license_custid_local_str = strdup(license_custid->valuestring);
    if (license_ip && !cJSON_IsNull(license_ip)) license_ip_local_str = strdup(license_ip->valuestring);
    if (license_status && !cJSON_IsNull(license_status)) license_status_local_str = strdup(license_status->valuestring);
    if (license_invoice && !cJSON_IsNull(license_invoice)) license_invoice_local_str = strdup(license_invoice->valuestring);
    if (license_coupon && !cJSON_IsNull(license_coupon)) license_coupon_local_str = strdup(license_coupon->valuestring);
    if (license_hostname && !cJSON_IsNull(license_hostname)) license_hostname_local_str = strdup(license_hostname->valuestring);
    if (license_key && !cJSON_IsNull(license_key)) license_key_local_str = strdup(license_key->valuestring);
    if (license_extra && !cJSON_IsNull(license_extra)) license_extra_local_str = strdup(license_extra->valuestring);

    license_service_info_local_var = license_service_info_create_internal (
        license_id_local_str,
        license_type_local_str,
        license_currency_local_str,
        license_order_date_local_str,
        license_custid_local_str,
        license_ip_local_str,
        license_status_local_str,
        license_invoice_local_str,
        license_coupon_local_str,
        license_hostname_local_str,
        license_key_local_str,
        license_extra_local_str
        );

    if (!license_service_info_local_var) {
        goto end;
    }

    return license_service_info_local_var;
end:
    if (license_id_local_str) {
        free(license_id_local_str);
        license_id_local_str = NULL;
    }
    if (license_type_local_str) {
        free(license_type_local_str);
        license_type_local_str = NULL;
    }
    if (license_currency_local_str) {
        free(license_currency_local_str);
        license_currency_local_str = NULL;
    }
    if (license_order_date_local_str) {
        free(license_order_date_local_str);
        license_order_date_local_str = NULL;
    }
    if (license_custid_local_str) {
        free(license_custid_local_str);
        license_custid_local_str = NULL;
    }
    if (license_ip_local_str) {
        free(license_ip_local_str);
        license_ip_local_str = NULL;
    }
    if (license_status_local_str) {
        free(license_status_local_str);
        license_status_local_str = NULL;
    }
    if (license_invoice_local_str) {
        free(license_invoice_local_str);
        license_invoice_local_str = NULL;
    }
    if (license_coupon_local_str) {
        free(license_coupon_local_str);
        license_coupon_local_str = NULL;
    }
    if (license_hostname_local_str) {
        free(license_hostname_local_str);
        license_hostname_local_str = NULL;
    }
    if (license_key_local_str) {
        free(license_key_local_str);
        license_key_local_str = NULL;
    }
    if (license_extra_local_str) {
        free(license_extra_local_str);
        license_extra_local_str = NULL;
    }
    return NULL;

}
