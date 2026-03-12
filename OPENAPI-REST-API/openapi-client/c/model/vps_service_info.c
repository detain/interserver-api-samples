#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_service_info.h"



static vps_service_info_t *vps_service_info_create_internal(
    char *vps_id,
    char *vps_custid,
    char *vps_server,
    char *vps_ip,
    any_type_t *vps_ipv6,
    char *vps_vzid,
    char *vps_currency,
    char *vps_type,
    char *vps_order_date,
    char *vps_status,
    char *vps_invoice,
    char *vps_coupon,
    char *vps_extra,
    char *vps_hostname,
    char *vps_server_status,
    char *vps_comment,
    char *vps_slices,
    char *vps_vnc,
    char *vps_vnc_port,
    char *vps_rootpass,
    char *vps_mac,
    char *vps_os,
    char *vps_version,
    char *vps_location,
    char *vps_platform,
    char *vps_diskused,
    char *vps_diskmax
    ) {
    vps_service_info_t *vps_service_info_local_var = malloc(sizeof(vps_service_info_t));
    if (!vps_service_info_local_var) {
        return NULL;
    }
    vps_service_info_local_var->vps_id = vps_id;
    vps_service_info_local_var->vps_custid = vps_custid;
    vps_service_info_local_var->vps_server = vps_server;
    vps_service_info_local_var->vps_ip = vps_ip;
    vps_service_info_local_var->vps_ipv6 = vps_ipv6;
    vps_service_info_local_var->vps_vzid = vps_vzid;
    vps_service_info_local_var->vps_currency = vps_currency;
    vps_service_info_local_var->vps_type = vps_type;
    vps_service_info_local_var->vps_order_date = vps_order_date;
    vps_service_info_local_var->vps_status = vps_status;
    vps_service_info_local_var->vps_invoice = vps_invoice;
    vps_service_info_local_var->vps_coupon = vps_coupon;
    vps_service_info_local_var->vps_extra = vps_extra;
    vps_service_info_local_var->vps_hostname = vps_hostname;
    vps_service_info_local_var->vps_server_status = vps_server_status;
    vps_service_info_local_var->vps_comment = vps_comment;
    vps_service_info_local_var->vps_slices = vps_slices;
    vps_service_info_local_var->vps_vnc = vps_vnc;
    vps_service_info_local_var->vps_vnc_port = vps_vnc_port;
    vps_service_info_local_var->vps_rootpass = vps_rootpass;
    vps_service_info_local_var->vps_mac = vps_mac;
    vps_service_info_local_var->vps_os = vps_os;
    vps_service_info_local_var->vps_version = vps_version;
    vps_service_info_local_var->vps_location = vps_location;
    vps_service_info_local_var->vps_platform = vps_platform;
    vps_service_info_local_var->vps_diskused = vps_diskused;
    vps_service_info_local_var->vps_diskmax = vps_diskmax;

    vps_service_info_local_var->_library_owned = 1;
    return vps_service_info_local_var;
}

__attribute__((deprecated)) vps_service_info_t *vps_service_info_create(
    char *vps_id,
    char *vps_custid,
    char *vps_server,
    char *vps_ip,
    any_type_t *vps_ipv6,
    char *vps_vzid,
    char *vps_currency,
    char *vps_type,
    char *vps_order_date,
    char *vps_status,
    char *vps_invoice,
    char *vps_coupon,
    char *vps_extra,
    char *vps_hostname,
    char *vps_server_status,
    char *vps_comment,
    char *vps_slices,
    char *vps_vnc,
    char *vps_vnc_port,
    char *vps_rootpass,
    char *vps_mac,
    char *vps_os,
    char *vps_version,
    char *vps_location,
    char *vps_platform,
    char *vps_diskused,
    char *vps_diskmax
    ) {
    return vps_service_info_create_internal (
        vps_id,
        vps_custid,
        vps_server,
        vps_ip,
        vps_ipv6,
        vps_vzid,
        vps_currency,
        vps_type,
        vps_order_date,
        vps_status,
        vps_invoice,
        vps_coupon,
        vps_extra,
        vps_hostname,
        vps_server_status,
        vps_comment,
        vps_slices,
        vps_vnc,
        vps_vnc_port,
        vps_rootpass,
        vps_mac,
        vps_os,
        vps_version,
        vps_location,
        vps_platform,
        vps_diskused,
        vps_diskmax
        );
}

void vps_service_info_free(vps_service_info_t *vps_service_info) {
    if(NULL == vps_service_info){
        return ;
    }
    if(vps_service_info->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_service_info_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_service_info->vps_id) {
        free(vps_service_info->vps_id);
        vps_service_info->vps_id = NULL;
    }
    if (vps_service_info->vps_custid) {
        free(vps_service_info->vps_custid);
        vps_service_info->vps_custid = NULL;
    }
    if (vps_service_info->vps_server) {
        free(vps_service_info->vps_server);
        vps_service_info->vps_server = NULL;
    }
    if (vps_service_info->vps_ip) {
        free(vps_service_info->vps_ip);
        vps_service_info->vps_ip = NULL;
    }
    if (vps_service_info->vps_ipv6) {
        _free(vps_service_info->vps_ipv6);
        vps_service_info->vps_ipv6 = NULL;
    }
    if (vps_service_info->vps_vzid) {
        free(vps_service_info->vps_vzid);
        vps_service_info->vps_vzid = NULL;
    }
    if (vps_service_info->vps_currency) {
        free(vps_service_info->vps_currency);
        vps_service_info->vps_currency = NULL;
    }
    if (vps_service_info->vps_type) {
        free(vps_service_info->vps_type);
        vps_service_info->vps_type = NULL;
    }
    if (vps_service_info->vps_order_date) {
        free(vps_service_info->vps_order_date);
        vps_service_info->vps_order_date = NULL;
    }
    if (vps_service_info->vps_status) {
        free(vps_service_info->vps_status);
        vps_service_info->vps_status = NULL;
    }
    if (vps_service_info->vps_invoice) {
        free(vps_service_info->vps_invoice);
        vps_service_info->vps_invoice = NULL;
    }
    if (vps_service_info->vps_coupon) {
        free(vps_service_info->vps_coupon);
        vps_service_info->vps_coupon = NULL;
    }
    if (vps_service_info->vps_extra) {
        free(vps_service_info->vps_extra);
        vps_service_info->vps_extra = NULL;
    }
    if (vps_service_info->vps_hostname) {
        free(vps_service_info->vps_hostname);
        vps_service_info->vps_hostname = NULL;
    }
    if (vps_service_info->vps_server_status) {
        free(vps_service_info->vps_server_status);
        vps_service_info->vps_server_status = NULL;
    }
    if (vps_service_info->vps_comment) {
        free(vps_service_info->vps_comment);
        vps_service_info->vps_comment = NULL;
    }
    if (vps_service_info->vps_slices) {
        free(vps_service_info->vps_slices);
        vps_service_info->vps_slices = NULL;
    }
    if (vps_service_info->vps_vnc) {
        free(vps_service_info->vps_vnc);
        vps_service_info->vps_vnc = NULL;
    }
    if (vps_service_info->vps_vnc_port) {
        free(vps_service_info->vps_vnc_port);
        vps_service_info->vps_vnc_port = NULL;
    }
    if (vps_service_info->vps_rootpass) {
        free(vps_service_info->vps_rootpass);
        vps_service_info->vps_rootpass = NULL;
    }
    if (vps_service_info->vps_mac) {
        free(vps_service_info->vps_mac);
        vps_service_info->vps_mac = NULL;
    }
    if (vps_service_info->vps_os) {
        free(vps_service_info->vps_os);
        vps_service_info->vps_os = NULL;
    }
    if (vps_service_info->vps_version) {
        free(vps_service_info->vps_version);
        vps_service_info->vps_version = NULL;
    }
    if (vps_service_info->vps_location) {
        free(vps_service_info->vps_location);
        vps_service_info->vps_location = NULL;
    }
    if (vps_service_info->vps_platform) {
        free(vps_service_info->vps_platform);
        vps_service_info->vps_platform = NULL;
    }
    if (vps_service_info->vps_diskused) {
        free(vps_service_info->vps_diskused);
        vps_service_info->vps_diskused = NULL;
    }
    if (vps_service_info->vps_diskmax) {
        free(vps_service_info->vps_diskmax);
        vps_service_info->vps_diskmax = NULL;
    }
    free(vps_service_info);
}

cJSON *vps_service_info_convertToJSON(vps_service_info_t *vps_service_info) {
    cJSON *item = cJSON_CreateObject();

    // vps_service_info->vps_id
    if(vps_service_info->vps_id) {
    if(cJSON_AddStringToObject(item, "vps_id", vps_service_info->vps_id) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_info->vps_custid
    if(vps_service_info->vps_custid) {
    if(cJSON_AddStringToObject(item, "vps_custid", vps_service_info->vps_custid) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_info->vps_server
    if(vps_service_info->vps_server) {
    if(cJSON_AddStringToObject(item, "vps_server", vps_service_info->vps_server) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_info->vps_ip
    if(vps_service_info->vps_ip) {
    if(cJSON_AddStringToObject(item, "vps_ip", vps_service_info->vps_ip) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_info->vps_ipv6
    if(vps_service_info->vps_ipv6) {
    cJSON *vps_ipv6_local_JSON = _convertToJSON(vps_service_info->vps_ipv6);
    if(vps_ipv6_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "vps_ipv6", vps_ipv6_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // vps_service_info->vps_vzid
    if(vps_service_info->vps_vzid) {
    if(cJSON_AddStringToObject(item, "vps_vzid", vps_service_info->vps_vzid) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_info->vps_currency
    if(vps_service_info->vps_currency) {
    if(cJSON_AddStringToObject(item, "vps_currency", vps_service_info->vps_currency) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_info->vps_type
    if(vps_service_info->vps_type) {
    if(cJSON_AddStringToObject(item, "vps_type", vps_service_info->vps_type) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_info->vps_order_date
    if(vps_service_info->vps_order_date) {
    if(cJSON_AddStringToObject(item, "vps_order_date", vps_service_info->vps_order_date) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_info->vps_status
    if(vps_service_info->vps_status) {
    if(cJSON_AddStringToObject(item, "vps_status", vps_service_info->vps_status) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_info->vps_invoice
    if(vps_service_info->vps_invoice) {
    if(cJSON_AddStringToObject(item, "vps_invoice", vps_service_info->vps_invoice) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_info->vps_coupon
    if(vps_service_info->vps_coupon) {
    if(cJSON_AddStringToObject(item, "vps_coupon", vps_service_info->vps_coupon) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_info->vps_extra
    if(vps_service_info->vps_extra) {
    if(cJSON_AddStringToObject(item, "vps_extra", vps_service_info->vps_extra) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_info->vps_hostname
    if(vps_service_info->vps_hostname) {
    if(cJSON_AddStringToObject(item, "vps_hostname", vps_service_info->vps_hostname) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_info->vps_server_status
    if(vps_service_info->vps_server_status) {
    if(cJSON_AddStringToObject(item, "vps_server_status", vps_service_info->vps_server_status) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_info->vps_comment
    if(vps_service_info->vps_comment) {
    if(cJSON_AddStringToObject(item, "vps_comment", vps_service_info->vps_comment) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_info->vps_slices
    if(vps_service_info->vps_slices) {
    if(cJSON_AddStringToObject(item, "vps_slices", vps_service_info->vps_slices) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_info->vps_vnc
    if(vps_service_info->vps_vnc) {
    if(cJSON_AddStringToObject(item, "vps_vnc", vps_service_info->vps_vnc) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_info->vps_vnc_port
    if(vps_service_info->vps_vnc_port) {
    if(cJSON_AddStringToObject(item, "vps_vnc_port", vps_service_info->vps_vnc_port) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_info->vps_rootpass
    if(vps_service_info->vps_rootpass) {
    if(cJSON_AddStringToObject(item, "vps_rootpass", vps_service_info->vps_rootpass) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_info->vps_mac
    if(vps_service_info->vps_mac) {
    if(cJSON_AddStringToObject(item, "vps_mac", vps_service_info->vps_mac) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_info->vps_os
    if(vps_service_info->vps_os) {
    if(cJSON_AddStringToObject(item, "vps_os", vps_service_info->vps_os) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_info->vps_version
    if(vps_service_info->vps_version) {
    if(cJSON_AddStringToObject(item, "vps_version", vps_service_info->vps_version) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_info->vps_location
    if(vps_service_info->vps_location) {
    if(cJSON_AddStringToObject(item, "vps_location", vps_service_info->vps_location) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_info->vps_platform
    if(vps_service_info->vps_platform) {
    if(cJSON_AddStringToObject(item, "vps_platform", vps_service_info->vps_platform) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_info->vps_diskused
    if(vps_service_info->vps_diskused) {
    if(cJSON_AddStringToObject(item, "vps_diskused", vps_service_info->vps_diskused) == NULL) {
    goto fail; //String
    }
    }


    // vps_service_info->vps_diskmax
    if(vps_service_info->vps_diskmax) {
    if(cJSON_AddStringToObject(item, "vps_diskmax", vps_service_info->vps_diskmax) == NULL) {
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

vps_service_info_t *vps_service_info_parseFromJSON(cJSON *vps_service_infoJSON){

    vps_service_info_t *vps_service_info_local_var = NULL;

    // define the local variable for vps_service_info->vps_ipv6
    _t *vps_ipv6_local_nonprim = NULL;

    // vps_service_info->vps_id
    cJSON *vps_id = cJSON_GetObjectItemCaseSensitive(vps_service_infoJSON, "vps_id");
    if (cJSON_IsNull(vps_id)) {
        vps_id = NULL;
    }
    if (vps_id) { 
    if(!cJSON_IsString(vps_id) && !cJSON_IsNull(vps_id))
    {
    goto end; //String
    }
    }

    // vps_service_info->vps_custid
    cJSON *vps_custid = cJSON_GetObjectItemCaseSensitive(vps_service_infoJSON, "vps_custid");
    if (cJSON_IsNull(vps_custid)) {
        vps_custid = NULL;
    }
    if (vps_custid) { 
    if(!cJSON_IsString(vps_custid) && !cJSON_IsNull(vps_custid))
    {
    goto end; //String
    }
    }

    // vps_service_info->vps_server
    cJSON *vps_server = cJSON_GetObjectItemCaseSensitive(vps_service_infoJSON, "vps_server");
    if (cJSON_IsNull(vps_server)) {
        vps_server = NULL;
    }
    if (vps_server) { 
    if(!cJSON_IsString(vps_server) && !cJSON_IsNull(vps_server))
    {
    goto end; //String
    }
    }

    // vps_service_info->vps_ip
    cJSON *vps_ip = cJSON_GetObjectItemCaseSensitive(vps_service_infoJSON, "vps_ip");
    if (cJSON_IsNull(vps_ip)) {
        vps_ip = NULL;
    }
    if (vps_ip) { 
    if(!cJSON_IsString(vps_ip) && !cJSON_IsNull(vps_ip))
    {
    goto end; //String
    }
    }

    // vps_service_info->vps_ipv6
    cJSON *vps_ipv6 = cJSON_GetObjectItemCaseSensitive(vps_service_infoJSON, "vps_ipv6");
    if (cJSON_IsNull(vps_ipv6)) {
        vps_ipv6 = NULL;
    }
    if (vps_ipv6) { 
    vps_ipv6_local_nonprim = _parseFromJSON(vps_ipv6); //custom
    }

    // vps_service_info->vps_vzid
    cJSON *vps_vzid = cJSON_GetObjectItemCaseSensitive(vps_service_infoJSON, "vps_vzid");
    if (cJSON_IsNull(vps_vzid)) {
        vps_vzid = NULL;
    }
    if (vps_vzid) { 
    if(!cJSON_IsString(vps_vzid) && !cJSON_IsNull(vps_vzid))
    {
    goto end; //String
    }
    }

    // vps_service_info->vps_currency
    cJSON *vps_currency = cJSON_GetObjectItemCaseSensitive(vps_service_infoJSON, "vps_currency");
    if (cJSON_IsNull(vps_currency)) {
        vps_currency = NULL;
    }
    if (vps_currency) { 
    if(!cJSON_IsString(vps_currency) && !cJSON_IsNull(vps_currency))
    {
    goto end; //String
    }
    }

    // vps_service_info->vps_type
    cJSON *vps_type = cJSON_GetObjectItemCaseSensitive(vps_service_infoJSON, "vps_type");
    if (cJSON_IsNull(vps_type)) {
        vps_type = NULL;
    }
    if (vps_type) { 
    if(!cJSON_IsString(vps_type) && !cJSON_IsNull(vps_type))
    {
    goto end; //String
    }
    }

    // vps_service_info->vps_order_date
    cJSON *vps_order_date = cJSON_GetObjectItemCaseSensitive(vps_service_infoJSON, "vps_order_date");
    if (cJSON_IsNull(vps_order_date)) {
        vps_order_date = NULL;
    }
    if (vps_order_date) { 
    if(!cJSON_IsString(vps_order_date) && !cJSON_IsNull(vps_order_date))
    {
    goto end; //String
    }
    }

    // vps_service_info->vps_status
    cJSON *vps_status = cJSON_GetObjectItemCaseSensitive(vps_service_infoJSON, "vps_status");
    if (cJSON_IsNull(vps_status)) {
        vps_status = NULL;
    }
    if (vps_status) { 
    if(!cJSON_IsString(vps_status) && !cJSON_IsNull(vps_status))
    {
    goto end; //String
    }
    }

    // vps_service_info->vps_invoice
    cJSON *vps_invoice = cJSON_GetObjectItemCaseSensitive(vps_service_infoJSON, "vps_invoice");
    if (cJSON_IsNull(vps_invoice)) {
        vps_invoice = NULL;
    }
    if (vps_invoice) { 
    if(!cJSON_IsString(vps_invoice) && !cJSON_IsNull(vps_invoice))
    {
    goto end; //String
    }
    }

    // vps_service_info->vps_coupon
    cJSON *vps_coupon = cJSON_GetObjectItemCaseSensitive(vps_service_infoJSON, "vps_coupon");
    if (cJSON_IsNull(vps_coupon)) {
        vps_coupon = NULL;
    }
    if (vps_coupon) { 
    if(!cJSON_IsString(vps_coupon) && !cJSON_IsNull(vps_coupon))
    {
    goto end; //String
    }
    }

    // vps_service_info->vps_extra
    cJSON *vps_extra = cJSON_GetObjectItemCaseSensitive(vps_service_infoJSON, "vps_extra");
    if (cJSON_IsNull(vps_extra)) {
        vps_extra = NULL;
    }
    if (vps_extra) { 
    if(!cJSON_IsString(vps_extra) && !cJSON_IsNull(vps_extra))
    {
    goto end; //String
    }
    }

    // vps_service_info->vps_hostname
    cJSON *vps_hostname = cJSON_GetObjectItemCaseSensitive(vps_service_infoJSON, "vps_hostname");
    if (cJSON_IsNull(vps_hostname)) {
        vps_hostname = NULL;
    }
    if (vps_hostname) { 
    if(!cJSON_IsString(vps_hostname) && !cJSON_IsNull(vps_hostname))
    {
    goto end; //String
    }
    }

    // vps_service_info->vps_server_status
    cJSON *vps_server_status = cJSON_GetObjectItemCaseSensitive(vps_service_infoJSON, "vps_server_status");
    if (cJSON_IsNull(vps_server_status)) {
        vps_server_status = NULL;
    }
    if (vps_server_status) { 
    if(!cJSON_IsString(vps_server_status) && !cJSON_IsNull(vps_server_status))
    {
    goto end; //String
    }
    }

    // vps_service_info->vps_comment
    cJSON *vps_comment = cJSON_GetObjectItemCaseSensitive(vps_service_infoJSON, "vps_comment");
    if (cJSON_IsNull(vps_comment)) {
        vps_comment = NULL;
    }
    if (vps_comment) { 
    if(!cJSON_IsString(vps_comment) && !cJSON_IsNull(vps_comment))
    {
    goto end; //String
    }
    }

    // vps_service_info->vps_slices
    cJSON *vps_slices = cJSON_GetObjectItemCaseSensitive(vps_service_infoJSON, "vps_slices");
    if (cJSON_IsNull(vps_slices)) {
        vps_slices = NULL;
    }
    if (vps_slices) { 
    if(!cJSON_IsString(vps_slices) && !cJSON_IsNull(vps_slices))
    {
    goto end; //String
    }
    }

    // vps_service_info->vps_vnc
    cJSON *vps_vnc = cJSON_GetObjectItemCaseSensitive(vps_service_infoJSON, "vps_vnc");
    if (cJSON_IsNull(vps_vnc)) {
        vps_vnc = NULL;
    }
    if (vps_vnc) { 
    if(!cJSON_IsString(vps_vnc) && !cJSON_IsNull(vps_vnc))
    {
    goto end; //String
    }
    }

    // vps_service_info->vps_vnc_port
    cJSON *vps_vnc_port = cJSON_GetObjectItemCaseSensitive(vps_service_infoJSON, "vps_vnc_port");
    if (cJSON_IsNull(vps_vnc_port)) {
        vps_vnc_port = NULL;
    }
    if (vps_vnc_port) { 
    if(!cJSON_IsString(vps_vnc_port) && !cJSON_IsNull(vps_vnc_port))
    {
    goto end; //String
    }
    }

    // vps_service_info->vps_rootpass
    cJSON *vps_rootpass = cJSON_GetObjectItemCaseSensitive(vps_service_infoJSON, "vps_rootpass");
    if (cJSON_IsNull(vps_rootpass)) {
        vps_rootpass = NULL;
    }
    if (vps_rootpass) { 
    if(!cJSON_IsString(vps_rootpass) && !cJSON_IsNull(vps_rootpass))
    {
    goto end; //String
    }
    }

    // vps_service_info->vps_mac
    cJSON *vps_mac = cJSON_GetObjectItemCaseSensitive(vps_service_infoJSON, "vps_mac");
    if (cJSON_IsNull(vps_mac)) {
        vps_mac = NULL;
    }
    if (vps_mac) { 
    if(!cJSON_IsString(vps_mac) && !cJSON_IsNull(vps_mac))
    {
    goto end; //String
    }
    }

    // vps_service_info->vps_os
    cJSON *vps_os = cJSON_GetObjectItemCaseSensitive(vps_service_infoJSON, "vps_os");
    if (cJSON_IsNull(vps_os)) {
        vps_os = NULL;
    }
    if (vps_os) { 
    if(!cJSON_IsString(vps_os) && !cJSON_IsNull(vps_os))
    {
    goto end; //String
    }
    }

    // vps_service_info->vps_version
    cJSON *vps_version = cJSON_GetObjectItemCaseSensitive(vps_service_infoJSON, "vps_version");
    if (cJSON_IsNull(vps_version)) {
        vps_version = NULL;
    }
    if (vps_version) { 
    if(!cJSON_IsString(vps_version) && !cJSON_IsNull(vps_version))
    {
    goto end; //String
    }
    }

    // vps_service_info->vps_location
    cJSON *vps_location = cJSON_GetObjectItemCaseSensitive(vps_service_infoJSON, "vps_location");
    if (cJSON_IsNull(vps_location)) {
        vps_location = NULL;
    }
    if (vps_location) { 
    if(!cJSON_IsString(vps_location) && !cJSON_IsNull(vps_location))
    {
    goto end; //String
    }
    }

    // vps_service_info->vps_platform
    cJSON *vps_platform = cJSON_GetObjectItemCaseSensitive(vps_service_infoJSON, "vps_platform");
    if (cJSON_IsNull(vps_platform)) {
        vps_platform = NULL;
    }
    if (vps_platform) { 
    if(!cJSON_IsString(vps_platform) && !cJSON_IsNull(vps_platform))
    {
    goto end; //String
    }
    }

    // vps_service_info->vps_diskused
    cJSON *vps_diskused = cJSON_GetObjectItemCaseSensitive(vps_service_infoJSON, "vps_diskused");
    if (cJSON_IsNull(vps_diskused)) {
        vps_diskused = NULL;
    }
    if (vps_diskused) { 
    if(!cJSON_IsString(vps_diskused) && !cJSON_IsNull(vps_diskused))
    {
    goto end; //String
    }
    }

    // vps_service_info->vps_diskmax
    cJSON *vps_diskmax = cJSON_GetObjectItemCaseSensitive(vps_service_infoJSON, "vps_diskmax");
    if (cJSON_IsNull(vps_diskmax)) {
        vps_diskmax = NULL;
    }
    if (vps_diskmax) { 
    if(!cJSON_IsString(vps_diskmax) && !cJSON_IsNull(vps_diskmax))
    {
    goto end; //String
    }
    }


    vps_service_info_local_var = vps_service_info_create_internal (
        vps_id && !cJSON_IsNull(vps_id) ? strdup(vps_id->valuestring) : NULL,
        vps_custid && !cJSON_IsNull(vps_custid) ? strdup(vps_custid->valuestring) : NULL,
        vps_server && !cJSON_IsNull(vps_server) ? strdup(vps_server->valuestring) : NULL,
        vps_ip && !cJSON_IsNull(vps_ip) ? strdup(vps_ip->valuestring) : NULL,
        vps_ipv6 ? vps_ipv6_local_nonprim : NULL,
        vps_vzid && !cJSON_IsNull(vps_vzid) ? strdup(vps_vzid->valuestring) : NULL,
        vps_currency && !cJSON_IsNull(vps_currency) ? strdup(vps_currency->valuestring) : NULL,
        vps_type && !cJSON_IsNull(vps_type) ? strdup(vps_type->valuestring) : NULL,
        vps_order_date && !cJSON_IsNull(vps_order_date) ? strdup(vps_order_date->valuestring) : NULL,
        vps_status && !cJSON_IsNull(vps_status) ? strdup(vps_status->valuestring) : NULL,
        vps_invoice && !cJSON_IsNull(vps_invoice) ? strdup(vps_invoice->valuestring) : NULL,
        vps_coupon && !cJSON_IsNull(vps_coupon) ? strdup(vps_coupon->valuestring) : NULL,
        vps_extra && !cJSON_IsNull(vps_extra) ? strdup(vps_extra->valuestring) : NULL,
        vps_hostname && !cJSON_IsNull(vps_hostname) ? strdup(vps_hostname->valuestring) : NULL,
        vps_server_status && !cJSON_IsNull(vps_server_status) ? strdup(vps_server_status->valuestring) : NULL,
        vps_comment && !cJSON_IsNull(vps_comment) ? strdup(vps_comment->valuestring) : NULL,
        vps_slices && !cJSON_IsNull(vps_slices) ? strdup(vps_slices->valuestring) : NULL,
        vps_vnc && !cJSON_IsNull(vps_vnc) ? strdup(vps_vnc->valuestring) : NULL,
        vps_vnc_port && !cJSON_IsNull(vps_vnc_port) ? strdup(vps_vnc_port->valuestring) : NULL,
        vps_rootpass && !cJSON_IsNull(vps_rootpass) ? strdup(vps_rootpass->valuestring) : NULL,
        vps_mac && !cJSON_IsNull(vps_mac) ? strdup(vps_mac->valuestring) : NULL,
        vps_os && !cJSON_IsNull(vps_os) ? strdup(vps_os->valuestring) : NULL,
        vps_version && !cJSON_IsNull(vps_version) ? strdup(vps_version->valuestring) : NULL,
        vps_location && !cJSON_IsNull(vps_location) ? strdup(vps_location->valuestring) : NULL,
        vps_platform && !cJSON_IsNull(vps_platform) ? strdup(vps_platform->valuestring) : NULL,
        vps_diskused && !cJSON_IsNull(vps_diskused) ? strdup(vps_diskused->valuestring) : NULL,
        vps_diskmax && !cJSON_IsNull(vps_diskmax) ? strdup(vps_diskmax->valuestring) : NULL
        );

    return vps_service_info_local_var;
end:
    if (vps_ipv6_local_nonprim) {
        _free(vps_ipv6_local_nonprim);
        vps_ipv6_local_nonprim = NULL;
    }
    return NULL;

}
