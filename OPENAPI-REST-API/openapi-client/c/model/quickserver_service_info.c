#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "quickserver_service_info.h"



static quickserver_service_info_t *quickserver_service_info_create_internal(
    char *qs_id,
    char *qs_custid,
    char *qs_server,
    char *qs_ip,
    any_type_t *qs_ipv6,
    char *qs_vzid,
    char *qs_currency,
    char *qs_type,
    char *qs_order_date,
    char *qs_status,
    char *qs_invoice,
    char *qs_coupon,
    char *qs_extra,
    char *qs_hostname,
    char *qs_server_status,
    char *qs_comment,
    char *qs_slices,
    char *qs_vnc,
    any_type_t *qs_vnc_port,
    char *qs_rootpass,
    char *qs_mac,
    char *qs_os,
    char *qs_version,
    char *qs_location,
    any_type_t *qs_platform
    ) {
    quickserver_service_info_t *quickserver_service_info_local_var = malloc(sizeof(quickserver_service_info_t));
    if (!quickserver_service_info_local_var) {
        return NULL;
    }
    quickserver_service_info_local_var->qs_id = qs_id;
    quickserver_service_info_local_var->qs_custid = qs_custid;
    quickserver_service_info_local_var->qs_server = qs_server;
    quickserver_service_info_local_var->qs_ip = qs_ip;
    quickserver_service_info_local_var->qs_ipv6 = qs_ipv6;
    quickserver_service_info_local_var->qs_vzid = qs_vzid;
    quickserver_service_info_local_var->qs_currency = qs_currency;
    quickserver_service_info_local_var->qs_type = qs_type;
    quickserver_service_info_local_var->qs_order_date = qs_order_date;
    quickserver_service_info_local_var->qs_status = qs_status;
    quickserver_service_info_local_var->qs_invoice = qs_invoice;
    quickserver_service_info_local_var->qs_coupon = qs_coupon;
    quickserver_service_info_local_var->qs_extra = qs_extra;
    quickserver_service_info_local_var->qs_hostname = qs_hostname;
    quickserver_service_info_local_var->qs_server_status = qs_server_status;
    quickserver_service_info_local_var->qs_comment = qs_comment;
    quickserver_service_info_local_var->qs_slices = qs_slices;
    quickserver_service_info_local_var->qs_vnc = qs_vnc;
    quickserver_service_info_local_var->qs_vnc_port = qs_vnc_port;
    quickserver_service_info_local_var->qs_rootpass = qs_rootpass;
    quickserver_service_info_local_var->qs_mac = qs_mac;
    quickserver_service_info_local_var->qs_os = qs_os;
    quickserver_service_info_local_var->qs_version = qs_version;
    quickserver_service_info_local_var->qs_location = qs_location;
    quickserver_service_info_local_var->qs_platform = qs_platform;

    quickserver_service_info_local_var->_library_owned = 1;
    return quickserver_service_info_local_var;
}

__attribute__((deprecated)) quickserver_service_info_t *quickserver_service_info_create(
    char *qs_id,
    char *qs_custid,
    char *qs_server,
    char *qs_ip,
    any_type_t *qs_ipv6,
    char *qs_vzid,
    char *qs_currency,
    char *qs_type,
    char *qs_order_date,
    char *qs_status,
    char *qs_invoice,
    char *qs_coupon,
    char *qs_extra,
    char *qs_hostname,
    char *qs_server_status,
    char *qs_comment,
    char *qs_slices,
    char *qs_vnc,
    any_type_t *qs_vnc_port,
    char *qs_rootpass,
    char *qs_mac,
    char *qs_os,
    char *qs_version,
    char *qs_location,
    any_type_t *qs_platform
    ) {
    return quickserver_service_info_create_internal (
        qs_id,
        qs_custid,
        qs_server,
        qs_ip,
        qs_ipv6,
        qs_vzid,
        qs_currency,
        qs_type,
        qs_order_date,
        qs_status,
        qs_invoice,
        qs_coupon,
        qs_extra,
        qs_hostname,
        qs_server_status,
        qs_comment,
        qs_slices,
        qs_vnc,
        qs_vnc_port,
        qs_rootpass,
        qs_mac,
        qs_os,
        qs_version,
        qs_location,
        qs_platform
        );
}

void quickserver_service_info_free(quickserver_service_info_t *quickserver_service_info) {
    if(NULL == quickserver_service_info){
        return ;
    }
    if(quickserver_service_info->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "quickserver_service_info_free");
        return ;
    }
    listEntry_t *listEntry;
    if (quickserver_service_info->qs_id) {
        free(quickserver_service_info->qs_id);
        quickserver_service_info->qs_id = NULL;
    }
    if (quickserver_service_info->qs_custid) {
        free(quickserver_service_info->qs_custid);
        quickserver_service_info->qs_custid = NULL;
    }
    if (quickserver_service_info->qs_server) {
        free(quickserver_service_info->qs_server);
        quickserver_service_info->qs_server = NULL;
    }
    if (quickserver_service_info->qs_ip) {
        free(quickserver_service_info->qs_ip);
        quickserver_service_info->qs_ip = NULL;
    }
    if (quickserver_service_info->qs_ipv6) {
        _free(quickserver_service_info->qs_ipv6);
        quickserver_service_info->qs_ipv6 = NULL;
    }
    if (quickserver_service_info->qs_vzid) {
        free(quickserver_service_info->qs_vzid);
        quickserver_service_info->qs_vzid = NULL;
    }
    if (quickserver_service_info->qs_currency) {
        free(quickserver_service_info->qs_currency);
        quickserver_service_info->qs_currency = NULL;
    }
    if (quickserver_service_info->qs_type) {
        free(quickserver_service_info->qs_type);
        quickserver_service_info->qs_type = NULL;
    }
    if (quickserver_service_info->qs_order_date) {
        free(quickserver_service_info->qs_order_date);
        quickserver_service_info->qs_order_date = NULL;
    }
    if (quickserver_service_info->qs_status) {
        free(quickserver_service_info->qs_status);
        quickserver_service_info->qs_status = NULL;
    }
    if (quickserver_service_info->qs_invoice) {
        free(quickserver_service_info->qs_invoice);
        quickserver_service_info->qs_invoice = NULL;
    }
    if (quickserver_service_info->qs_coupon) {
        free(quickserver_service_info->qs_coupon);
        quickserver_service_info->qs_coupon = NULL;
    }
    if (quickserver_service_info->qs_extra) {
        free(quickserver_service_info->qs_extra);
        quickserver_service_info->qs_extra = NULL;
    }
    if (quickserver_service_info->qs_hostname) {
        free(quickserver_service_info->qs_hostname);
        quickserver_service_info->qs_hostname = NULL;
    }
    if (quickserver_service_info->qs_server_status) {
        free(quickserver_service_info->qs_server_status);
        quickserver_service_info->qs_server_status = NULL;
    }
    if (quickserver_service_info->qs_comment) {
        free(quickserver_service_info->qs_comment);
        quickserver_service_info->qs_comment = NULL;
    }
    if (quickserver_service_info->qs_slices) {
        free(quickserver_service_info->qs_slices);
        quickserver_service_info->qs_slices = NULL;
    }
    if (quickserver_service_info->qs_vnc) {
        free(quickserver_service_info->qs_vnc);
        quickserver_service_info->qs_vnc = NULL;
    }
    if (quickserver_service_info->qs_vnc_port) {
        _free(quickserver_service_info->qs_vnc_port);
        quickserver_service_info->qs_vnc_port = NULL;
    }
    if (quickserver_service_info->qs_rootpass) {
        free(quickserver_service_info->qs_rootpass);
        quickserver_service_info->qs_rootpass = NULL;
    }
    if (quickserver_service_info->qs_mac) {
        free(quickserver_service_info->qs_mac);
        quickserver_service_info->qs_mac = NULL;
    }
    if (quickserver_service_info->qs_os) {
        free(quickserver_service_info->qs_os);
        quickserver_service_info->qs_os = NULL;
    }
    if (quickserver_service_info->qs_version) {
        free(quickserver_service_info->qs_version);
        quickserver_service_info->qs_version = NULL;
    }
    if (quickserver_service_info->qs_location) {
        free(quickserver_service_info->qs_location);
        quickserver_service_info->qs_location = NULL;
    }
    if (quickserver_service_info->qs_platform) {
        _free(quickserver_service_info->qs_platform);
        quickserver_service_info->qs_platform = NULL;
    }
    free(quickserver_service_info);
}

cJSON *quickserver_service_info_convertToJSON(quickserver_service_info_t *quickserver_service_info) {
    cJSON *item = cJSON_CreateObject();

    // quickserver_service_info->qs_id
    if(quickserver_service_info->qs_id) {
    if(cJSON_AddStringToObject(item, "qs_id", quickserver_service_info->qs_id) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_info->qs_custid
    if(quickserver_service_info->qs_custid) {
    if(cJSON_AddStringToObject(item, "qs_custid", quickserver_service_info->qs_custid) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_info->qs_server
    if(quickserver_service_info->qs_server) {
    if(cJSON_AddStringToObject(item, "qs_server", quickserver_service_info->qs_server) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_info->qs_ip
    if(quickserver_service_info->qs_ip) {
    if(cJSON_AddStringToObject(item, "qs_ip", quickserver_service_info->qs_ip) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_info->qs_ipv6
    if(quickserver_service_info->qs_ipv6) {
    cJSON *qs_ipv6_local_JSON = _convertToJSON(quickserver_service_info->qs_ipv6);
    if(qs_ipv6_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "qs_ipv6", qs_ipv6_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // quickserver_service_info->qs_vzid
    if(quickserver_service_info->qs_vzid) {
    if(cJSON_AddStringToObject(item, "qs_vzid", quickserver_service_info->qs_vzid) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_info->qs_currency
    if(quickserver_service_info->qs_currency) {
    if(cJSON_AddStringToObject(item, "qs_currency", quickserver_service_info->qs_currency) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_info->qs_type
    if(quickserver_service_info->qs_type) {
    if(cJSON_AddStringToObject(item, "qs_type", quickserver_service_info->qs_type) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_info->qs_order_date
    if(quickserver_service_info->qs_order_date) {
    if(cJSON_AddStringToObject(item, "qs_order_date", quickserver_service_info->qs_order_date) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_info->qs_status
    if(quickserver_service_info->qs_status) {
    if(cJSON_AddStringToObject(item, "qs_status", quickserver_service_info->qs_status) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_info->qs_invoice
    if(quickserver_service_info->qs_invoice) {
    if(cJSON_AddStringToObject(item, "qs_invoice", quickserver_service_info->qs_invoice) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_info->qs_coupon
    if(quickserver_service_info->qs_coupon) {
    if(cJSON_AddStringToObject(item, "qs_coupon", quickserver_service_info->qs_coupon) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_info->qs_extra
    if(quickserver_service_info->qs_extra) {
    if(cJSON_AddStringToObject(item, "qs_extra", quickserver_service_info->qs_extra) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_info->qs_hostname
    if(quickserver_service_info->qs_hostname) {
    if(cJSON_AddStringToObject(item, "qs_hostname", quickserver_service_info->qs_hostname) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_info->qs_server_status
    if(quickserver_service_info->qs_server_status) {
    if(cJSON_AddStringToObject(item, "qs_server_status", quickserver_service_info->qs_server_status) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_info->qs_comment
    if(quickserver_service_info->qs_comment) {
    if(cJSON_AddStringToObject(item, "qs_comment", quickserver_service_info->qs_comment) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_info->qs_slices
    if(quickserver_service_info->qs_slices) {
    if(cJSON_AddStringToObject(item, "qs_slices", quickserver_service_info->qs_slices) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_info->qs_vnc
    if(quickserver_service_info->qs_vnc) {
    if(cJSON_AddStringToObject(item, "qs_vnc", quickserver_service_info->qs_vnc) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_info->qs_vnc_port
    if(quickserver_service_info->qs_vnc_port) {
    cJSON *qs_vnc_port_local_JSON = _convertToJSON(quickserver_service_info->qs_vnc_port);
    if(qs_vnc_port_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "qs_vnc_port", qs_vnc_port_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // quickserver_service_info->qs_rootpass
    if(quickserver_service_info->qs_rootpass) {
    if(cJSON_AddStringToObject(item, "qs_rootpass", quickserver_service_info->qs_rootpass) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_info->qs_mac
    if(quickserver_service_info->qs_mac) {
    if(cJSON_AddStringToObject(item, "qs_mac", quickserver_service_info->qs_mac) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_info->qs_os
    if(quickserver_service_info->qs_os) {
    if(cJSON_AddStringToObject(item, "qs_os", quickserver_service_info->qs_os) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_info->qs_version
    if(quickserver_service_info->qs_version) {
    if(cJSON_AddStringToObject(item, "qs_version", quickserver_service_info->qs_version) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_info->qs_location
    if(quickserver_service_info->qs_location) {
    if(cJSON_AddStringToObject(item, "qs_location", quickserver_service_info->qs_location) == NULL) {
    goto fail; //String
    }
    }


    // quickserver_service_info->qs_platform
    if(quickserver_service_info->qs_platform) {
    cJSON *qs_platform_local_JSON = _convertToJSON(quickserver_service_info->qs_platform);
    if(qs_platform_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "qs_platform", qs_platform_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

quickserver_service_info_t *quickserver_service_info_parseFromJSON(cJSON *quickserver_service_infoJSON){

    quickserver_service_info_t *quickserver_service_info_local_var = NULL;

    // define the local variable for quickserver_service_info->qs_ipv6
    _t *qs_ipv6_local_nonprim = NULL;

    // define the local variable for quickserver_service_info->qs_vnc_port
    _t *qs_vnc_port_local_nonprim = NULL;

    // define the local variable for quickserver_service_info->qs_platform
    _t *qs_platform_local_nonprim = NULL;

    // quickserver_service_info->qs_id
    cJSON *qs_id = cJSON_GetObjectItemCaseSensitive(quickserver_service_infoJSON, "qs_id");
    if (cJSON_IsNull(qs_id)) {
        qs_id = NULL;
    }
    if (qs_id) { 
    if(!cJSON_IsString(qs_id) && !cJSON_IsNull(qs_id))
    {
    goto end; //String
    }
    }

    // quickserver_service_info->qs_custid
    cJSON *qs_custid = cJSON_GetObjectItemCaseSensitive(quickserver_service_infoJSON, "qs_custid");
    if (cJSON_IsNull(qs_custid)) {
        qs_custid = NULL;
    }
    if (qs_custid) { 
    if(!cJSON_IsString(qs_custid) && !cJSON_IsNull(qs_custid))
    {
    goto end; //String
    }
    }

    // quickserver_service_info->qs_server
    cJSON *qs_server = cJSON_GetObjectItemCaseSensitive(quickserver_service_infoJSON, "qs_server");
    if (cJSON_IsNull(qs_server)) {
        qs_server = NULL;
    }
    if (qs_server) { 
    if(!cJSON_IsString(qs_server) && !cJSON_IsNull(qs_server))
    {
    goto end; //String
    }
    }

    // quickserver_service_info->qs_ip
    cJSON *qs_ip = cJSON_GetObjectItemCaseSensitive(quickserver_service_infoJSON, "qs_ip");
    if (cJSON_IsNull(qs_ip)) {
        qs_ip = NULL;
    }
    if (qs_ip) { 
    if(!cJSON_IsString(qs_ip) && !cJSON_IsNull(qs_ip))
    {
    goto end; //String
    }
    }

    // quickserver_service_info->qs_ipv6
    cJSON *qs_ipv6 = cJSON_GetObjectItemCaseSensitive(quickserver_service_infoJSON, "qs_ipv6");
    if (cJSON_IsNull(qs_ipv6)) {
        qs_ipv6 = NULL;
    }
    if (qs_ipv6) { 
    qs_ipv6_local_nonprim = _parseFromJSON(qs_ipv6); //custom
    }

    // quickserver_service_info->qs_vzid
    cJSON *qs_vzid = cJSON_GetObjectItemCaseSensitive(quickserver_service_infoJSON, "qs_vzid");
    if (cJSON_IsNull(qs_vzid)) {
        qs_vzid = NULL;
    }
    if (qs_vzid) { 
    if(!cJSON_IsString(qs_vzid) && !cJSON_IsNull(qs_vzid))
    {
    goto end; //String
    }
    }

    // quickserver_service_info->qs_currency
    cJSON *qs_currency = cJSON_GetObjectItemCaseSensitive(quickserver_service_infoJSON, "qs_currency");
    if (cJSON_IsNull(qs_currency)) {
        qs_currency = NULL;
    }
    if (qs_currency) { 
    if(!cJSON_IsString(qs_currency) && !cJSON_IsNull(qs_currency))
    {
    goto end; //String
    }
    }

    // quickserver_service_info->qs_type
    cJSON *qs_type = cJSON_GetObjectItemCaseSensitive(quickserver_service_infoJSON, "qs_type");
    if (cJSON_IsNull(qs_type)) {
        qs_type = NULL;
    }
    if (qs_type) { 
    if(!cJSON_IsString(qs_type) && !cJSON_IsNull(qs_type))
    {
    goto end; //String
    }
    }

    // quickserver_service_info->qs_order_date
    cJSON *qs_order_date = cJSON_GetObjectItemCaseSensitive(quickserver_service_infoJSON, "qs_order_date");
    if (cJSON_IsNull(qs_order_date)) {
        qs_order_date = NULL;
    }
    if (qs_order_date) { 
    if(!cJSON_IsString(qs_order_date) && !cJSON_IsNull(qs_order_date))
    {
    goto end; //String
    }
    }

    // quickserver_service_info->qs_status
    cJSON *qs_status = cJSON_GetObjectItemCaseSensitive(quickserver_service_infoJSON, "qs_status");
    if (cJSON_IsNull(qs_status)) {
        qs_status = NULL;
    }
    if (qs_status) { 
    if(!cJSON_IsString(qs_status) && !cJSON_IsNull(qs_status))
    {
    goto end; //String
    }
    }

    // quickserver_service_info->qs_invoice
    cJSON *qs_invoice = cJSON_GetObjectItemCaseSensitive(quickserver_service_infoJSON, "qs_invoice");
    if (cJSON_IsNull(qs_invoice)) {
        qs_invoice = NULL;
    }
    if (qs_invoice) { 
    if(!cJSON_IsString(qs_invoice) && !cJSON_IsNull(qs_invoice))
    {
    goto end; //String
    }
    }

    // quickserver_service_info->qs_coupon
    cJSON *qs_coupon = cJSON_GetObjectItemCaseSensitive(quickserver_service_infoJSON, "qs_coupon");
    if (cJSON_IsNull(qs_coupon)) {
        qs_coupon = NULL;
    }
    if (qs_coupon) { 
    if(!cJSON_IsString(qs_coupon) && !cJSON_IsNull(qs_coupon))
    {
    goto end; //String
    }
    }

    // quickserver_service_info->qs_extra
    cJSON *qs_extra = cJSON_GetObjectItemCaseSensitive(quickserver_service_infoJSON, "qs_extra");
    if (cJSON_IsNull(qs_extra)) {
        qs_extra = NULL;
    }
    if (qs_extra) { 
    if(!cJSON_IsString(qs_extra) && !cJSON_IsNull(qs_extra))
    {
    goto end; //String
    }
    }

    // quickserver_service_info->qs_hostname
    cJSON *qs_hostname = cJSON_GetObjectItemCaseSensitive(quickserver_service_infoJSON, "qs_hostname");
    if (cJSON_IsNull(qs_hostname)) {
        qs_hostname = NULL;
    }
    if (qs_hostname) { 
    if(!cJSON_IsString(qs_hostname) && !cJSON_IsNull(qs_hostname))
    {
    goto end; //String
    }
    }

    // quickserver_service_info->qs_server_status
    cJSON *qs_server_status = cJSON_GetObjectItemCaseSensitive(quickserver_service_infoJSON, "qs_server_status");
    if (cJSON_IsNull(qs_server_status)) {
        qs_server_status = NULL;
    }
    if (qs_server_status) { 
    if(!cJSON_IsString(qs_server_status) && !cJSON_IsNull(qs_server_status))
    {
    goto end; //String
    }
    }

    // quickserver_service_info->qs_comment
    cJSON *qs_comment = cJSON_GetObjectItemCaseSensitive(quickserver_service_infoJSON, "qs_comment");
    if (cJSON_IsNull(qs_comment)) {
        qs_comment = NULL;
    }
    if (qs_comment) { 
    if(!cJSON_IsString(qs_comment) && !cJSON_IsNull(qs_comment))
    {
    goto end; //String
    }
    }

    // quickserver_service_info->qs_slices
    cJSON *qs_slices = cJSON_GetObjectItemCaseSensitive(quickserver_service_infoJSON, "qs_slices");
    if (cJSON_IsNull(qs_slices)) {
        qs_slices = NULL;
    }
    if (qs_slices) { 
    if(!cJSON_IsString(qs_slices) && !cJSON_IsNull(qs_slices))
    {
    goto end; //String
    }
    }

    // quickserver_service_info->qs_vnc
    cJSON *qs_vnc = cJSON_GetObjectItemCaseSensitive(quickserver_service_infoJSON, "qs_vnc");
    if (cJSON_IsNull(qs_vnc)) {
        qs_vnc = NULL;
    }
    if (qs_vnc) { 
    if(!cJSON_IsString(qs_vnc) && !cJSON_IsNull(qs_vnc))
    {
    goto end; //String
    }
    }

    // quickserver_service_info->qs_vnc_port
    cJSON *qs_vnc_port = cJSON_GetObjectItemCaseSensitive(quickserver_service_infoJSON, "qs_vnc_port");
    if (cJSON_IsNull(qs_vnc_port)) {
        qs_vnc_port = NULL;
    }
    if (qs_vnc_port) { 
    qs_vnc_port_local_nonprim = _parseFromJSON(qs_vnc_port); //custom
    }

    // quickserver_service_info->qs_rootpass
    cJSON *qs_rootpass = cJSON_GetObjectItemCaseSensitive(quickserver_service_infoJSON, "qs_rootpass");
    if (cJSON_IsNull(qs_rootpass)) {
        qs_rootpass = NULL;
    }
    if (qs_rootpass) { 
    if(!cJSON_IsString(qs_rootpass) && !cJSON_IsNull(qs_rootpass))
    {
    goto end; //String
    }
    }

    // quickserver_service_info->qs_mac
    cJSON *qs_mac = cJSON_GetObjectItemCaseSensitive(quickserver_service_infoJSON, "qs_mac");
    if (cJSON_IsNull(qs_mac)) {
        qs_mac = NULL;
    }
    if (qs_mac) { 
    if(!cJSON_IsString(qs_mac) && !cJSON_IsNull(qs_mac))
    {
    goto end; //String
    }
    }

    // quickserver_service_info->qs_os
    cJSON *qs_os = cJSON_GetObjectItemCaseSensitive(quickserver_service_infoJSON, "qs_os");
    if (cJSON_IsNull(qs_os)) {
        qs_os = NULL;
    }
    if (qs_os) { 
    if(!cJSON_IsString(qs_os) && !cJSON_IsNull(qs_os))
    {
    goto end; //String
    }
    }

    // quickserver_service_info->qs_version
    cJSON *qs_version = cJSON_GetObjectItemCaseSensitive(quickserver_service_infoJSON, "qs_version");
    if (cJSON_IsNull(qs_version)) {
        qs_version = NULL;
    }
    if (qs_version) { 
    if(!cJSON_IsString(qs_version) && !cJSON_IsNull(qs_version))
    {
    goto end; //String
    }
    }

    // quickserver_service_info->qs_location
    cJSON *qs_location = cJSON_GetObjectItemCaseSensitive(quickserver_service_infoJSON, "qs_location");
    if (cJSON_IsNull(qs_location)) {
        qs_location = NULL;
    }
    if (qs_location) { 
    if(!cJSON_IsString(qs_location) && !cJSON_IsNull(qs_location))
    {
    goto end; //String
    }
    }

    // quickserver_service_info->qs_platform
    cJSON *qs_platform = cJSON_GetObjectItemCaseSensitive(quickserver_service_infoJSON, "qs_platform");
    if (cJSON_IsNull(qs_platform)) {
        qs_platform = NULL;
    }
    if (qs_platform) { 
    qs_platform_local_nonprim = _parseFromJSON(qs_platform); //custom
    }


    quickserver_service_info_local_var = quickserver_service_info_create_internal (
        qs_id && !cJSON_IsNull(qs_id) ? strdup(qs_id->valuestring) : NULL,
        qs_custid && !cJSON_IsNull(qs_custid) ? strdup(qs_custid->valuestring) : NULL,
        qs_server && !cJSON_IsNull(qs_server) ? strdup(qs_server->valuestring) : NULL,
        qs_ip && !cJSON_IsNull(qs_ip) ? strdup(qs_ip->valuestring) : NULL,
        qs_ipv6 ? qs_ipv6_local_nonprim : NULL,
        qs_vzid && !cJSON_IsNull(qs_vzid) ? strdup(qs_vzid->valuestring) : NULL,
        qs_currency && !cJSON_IsNull(qs_currency) ? strdup(qs_currency->valuestring) : NULL,
        qs_type && !cJSON_IsNull(qs_type) ? strdup(qs_type->valuestring) : NULL,
        qs_order_date && !cJSON_IsNull(qs_order_date) ? strdup(qs_order_date->valuestring) : NULL,
        qs_status && !cJSON_IsNull(qs_status) ? strdup(qs_status->valuestring) : NULL,
        qs_invoice && !cJSON_IsNull(qs_invoice) ? strdup(qs_invoice->valuestring) : NULL,
        qs_coupon && !cJSON_IsNull(qs_coupon) ? strdup(qs_coupon->valuestring) : NULL,
        qs_extra && !cJSON_IsNull(qs_extra) ? strdup(qs_extra->valuestring) : NULL,
        qs_hostname && !cJSON_IsNull(qs_hostname) ? strdup(qs_hostname->valuestring) : NULL,
        qs_server_status && !cJSON_IsNull(qs_server_status) ? strdup(qs_server_status->valuestring) : NULL,
        qs_comment && !cJSON_IsNull(qs_comment) ? strdup(qs_comment->valuestring) : NULL,
        qs_slices && !cJSON_IsNull(qs_slices) ? strdup(qs_slices->valuestring) : NULL,
        qs_vnc && !cJSON_IsNull(qs_vnc) ? strdup(qs_vnc->valuestring) : NULL,
        qs_vnc_port ? qs_vnc_port_local_nonprim : NULL,
        qs_rootpass && !cJSON_IsNull(qs_rootpass) ? strdup(qs_rootpass->valuestring) : NULL,
        qs_mac && !cJSON_IsNull(qs_mac) ? strdup(qs_mac->valuestring) : NULL,
        qs_os && !cJSON_IsNull(qs_os) ? strdup(qs_os->valuestring) : NULL,
        qs_version && !cJSON_IsNull(qs_version) ? strdup(qs_version->valuestring) : NULL,
        qs_location && !cJSON_IsNull(qs_location) ? strdup(qs_location->valuestring) : NULL,
        qs_platform ? qs_platform_local_nonprim : NULL
        );

    return quickserver_service_info_local_var;
end:
    if (qs_ipv6_local_nonprim) {
        _free(qs_ipv6_local_nonprim);
        qs_ipv6_local_nonprim = NULL;
    }
    if (qs_vnc_port_local_nonprim) {
        _free(qs_vnc_port_local_nonprim);
        qs_vnc_port_local_nonprim = NULL;
    }
    if (qs_platform_local_nonprim) {
        _free(qs_platform_local_nonprim);
        qs_platform_local_nonprim = NULL;
    }
    return NULL;

}
