#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server_service_info.h"



static server_service_info_t *server_service_info_create_internal(
    char *server_id,
    char *server_hostname,
    char *server_custid,
    char *server_type,
    char *server_currency,
    char *server_order_date,
    char *server_invoice,
    char *server_coupon,
    char *server_status,
    char *server_root,
    char *server_dedicated_tag,
    char *server_custom_tag,
    char *server_comment,
    char *server_initial_bill,
    char *server_hardware,
    char *server_ips,
    char *server_monthly_bill,
    char *server_setup,
    any_type_t *server_discount,
    char *server_rep,
    char *server_date,
    char *server_total_cost,
    any_type_t *server_location,
    char *server_hardware_ordered,
    char *server_billed,
    char *server_welcome_email,
    char *server_dedicated_cpu,
    char *server_dedicated_memory,
    char *server_dedicated_hd1,
    any_type_t *server_dedicated_hd2,
    char *server_dedicated_bandwidth,
    char *server_dedicated_ips,
    char *server_dedicated_os,
    any_type_t *server_dedicated_cp,
    char *server_dedicated_raid,
    char *server_extra
    ) {
    server_service_info_t *server_service_info_local_var = malloc(sizeof(server_service_info_t));
    if (!server_service_info_local_var) {
        return NULL;
    }
    memset(server_service_info_local_var, 0, sizeof(server_service_info_t));
    server_service_info_local_var->_library_owned = 1;
    server_service_info_local_var->server_id = server_id;
    server_service_info_local_var->server_hostname = server_hostname;
    server_service_info_local_var->server_custid = server_custid;
    server_service_info_local_var->server_type = server_type;
    server_service_info_local_var->server_currency = server_currency;
    server_service_info_local_var->server_order_date = server_order_date;
    server_service_info_local_var->server_invoice = server_invoice;
    server_service_info_local_var->server_coupon = server_coupon;
    server_service_info_local_var->server_status = server_status;
    server_service_info_local_var->server_root = server_root;
    server_service_info_local_var->server_dedicated_tag = server_dedicated_tag;
    server_service_info_local_var->server_custom_tag = server_custom_tag;
    server_service_info_local_var->server_comment = server_comment;
    server_service_info_local_var->server_initial_bill = server_initial_bill;
    server_service_info_local_var->server_hardware = server_hardware;
    server_service_info_local_var->server_ips = server_ips;
    server_service_info_local_var->server_monthly_bill = server_monthly_bill;
    server_service_info_local_var->server_setup = server_setup;
    server_service_info_local_var->server_discount = server_discount;
    server_service_info_local_var->server_rep = server_rep;
    server_service_info_local_var->server_date = server_date;
    server_service_info_local_var->server_total_cost = server_total_cost;
    server_service_info_local_var->server_location = server_location;
    server_service_info_local_var->server_hardware_ordered = server_hardware_ordered;
    server_service_info_local_var->server_billed = server_billed;
    server_service_info_local_var->server_welcome_email = server_welcome_email;
    server_service_info_local_var->server_dedicated_cpu = server_dedicated_cpu;
    server_service_info_local_var->server_dedicated_memory = server_dedicated_memory;
    server_service_info_local_var->server_dedicated_hd1 = server_dedicated_hd1;
    server_service_info_local_var->server_dedicated_hd2 = server_dedicated_hd2;
    server_service_info_local_var->server_dedicated_bandwidth = server_dedicated_bandwidth;
    server_service_info_local_var->server_dedicated_ips = server_dedicated_ips;
    server_service_info_local_var->server_dedicated_os = server_dedicated_os;
    server_service_info_local_var->server_dedicated_cp = server_dedicated_cp;
    server_service_info_local_var->server_dedicated_raid = server_dedicated_raid;
    server_service_info_local_var->server_extra = server_extra;
    return server_service_info_local_var;
}

__attribute__((deprecated)) server_service_info_t *server_service_info_create(
    char *server_id,
    char *server_hostname,
    char *server_custid,
    char *server_type,
    char *server_currency,
    char *server_order_date,
    char *server_invoice,
    char *server_coupon,
    char *server_status,
    char *server_root,
    char *server_dedicated_tag,
    char *server_custom_tag,
    char *server_comment,
    char *server_initial_bill,
    char *server_hardware,
    char *server_ips,
    char *server_monthly_bill,
    char *server_setup,
    any_type_t *server_discount,
    char *server_rep,
    char *server_date,
    char *server_total_cost,
    any_type_t *server_location,
    char *server_hardware_ordered,
    char *server_billed,
    char *server_welcome_email,
    char *server_dedicated_cpu,
    char *server_dedicated_memory,
    char *server_dedicated_hd1,
    any_type_t *server_dedicated_hd2,
    char *server_dedicated_bandwidth,
    char *server_dedicated_ips,
    char *server_dedicated_os,
    any_type_t *server_dedicated_cp,
    char *server_dedicated_raid,
    char *server_extra
    ) {
    server_service_info_t *result = server_service_info_create_internal (
        server_id,
        server_hostname,
        server_custid,
        server_type,
        server_currency,
        server_order_date,
        server_invoice,
        server_coupon,
        server_status,
        server_root,
        server_dedicated_tag,
        server_custom_tag,
        server_comment,
        server_initial_bill,
        server_hardware,
        server_ips,
        server_monthly_bill,
        server_setup,
        server_discount,
        server_rep,
        server_date,
        server_total_cost,
        server_location,
        server_hardware_ordered,
        server_billed,
        server_welcome_email,
        server_dedicated_cpu,
        server_dedicated_memory,
        server_dedicated_hd1,
        server_dedicated_hd2,
        server_dedicated_bandwidth,
        server_dedicated_ips,
        server_dedicated_os,
        server_dedicated_cp,
        server_dedicated_raid,
        server_extra
        );
    if (!result) {
    }
    return result;
}

void server_service_info_free(server_service_info_t *server_service_info) {
    if(NULL == server_service_info){
        return ;
    }
    if(server_service_info->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "server_service_info_free");
        return ;
    }
    listEntry_t *listEntry;
    if (server_service_info->server_id) {
        free(server_service_info->server_id);
        server_service_info->server_id = NULL;
    }
    if (server_service_info->server_hostname) {
        free(server_service_info->server_hostname);
        server_service_info->server_hostname = NULL;
    }
    if (server_service_info->server_custid) {
        free(server_service_info->server_custid);
        server_service_info->server_custid = NULL;
    }
    if (server_service_info->server_type) {
        free(server_service_info->server_type);
        server_service_info->server_type = NULL;
    }
    if (server_service_info->server_currency) {
        free(server_service_info->server_currency);
        server_service_info->server_currency = NULL;
    }
    if (server_service_info->server_order_date) {
        free(server_service_info->server_order_date);
        server_service_info->server_order_date = NULL;
    }
    if (server_service_info->server_invoice) {
        free(server_service_info->server_invoice);
        server_service_info->server_invoice = NULL;
    }
    if (server_service_info->server_coupon) {
        free(server_service_info->server_coupon);
        server_service_info->server_coupon = NULL;
    }
    if (server_service_info->server_status) {
        free(server_service_info->server_status);
        server_service_info->server_status = NULL;
    }
    if (server_service_info->server_root) {
        free(server_service_info->server_root);
        server_service_info->server_root = NULL;
    }
    if (server_service_info->server_dedicated_tag) {
        free(server_service_info->server_dedicated_tag);
        server_service_info->server_dedicated_tag = NULL;
    }
    if (server_service_info->server_custom_tag) {
        free(server_service_info->server_custom_tag);
        server_service_info->server_custom_tag = NULL;
    }
    if (server_service_info->server_comment) {
        free(server_service_info->server_comment);
        server_service_info->server_comment = NULL;
    }
    if (server_service_info->server_initial_bill) {
        free(server_service_info->server_initial_bill);
        server_service_info->server_initial_bill = NULL;
    }
    if (server_service_info->server_hardware) {
        free(server_service_info->server_hardware);
        server_service_info->server_hardware = NULL;
    }
    if (server_service_info->server_ips) {
        free(server_service_info->server_ips);
        server_service_info->server_ips = NULL;
    }
    if (server_service_info->server_monthly_bill) {
        free(server_service_info->server_monthly_bill);
        server_service_info->server_monthly_bill = NULL;
    }
    if (server_service_info->server_setup) {
        free(server_service_info->server_setup);
        server_service_info->server_setup = NULL;
    }
    if (server_service_info->server_discount) {
        _free(server_service_info->server_discount);
        server_service_info->server_discount = NULL;
    }
    if (server_service_info->server_rep) {
        free(server_service_info->server_rep);
        server_service_info->server_rep = NULL;
    }
    if (server_service_info->server_date) {
        free(server_service_info->server_date);
        server_service_info->server_date = NULL;
    }
    if (server_service_info->server_total_cost) {
        free(server_service_info->server_total_cost);
        server_service_info->server_total_cost = NULL;
    }
    if (server_service_info->server_location) {
        _free(server_service_info->server_location);
        server_service_info->server_location = NULL;
    }
    if (server_service_info->server_hardware_ordered) {
        free(server_service_info->server_hardware_ordered);
        server_service_info->server_hardware_ordered = NULL;
    }
    if (server_service_info->server_billed) {
        free(server_service_info->server_billed);
        server_service_info->server_billed = NULL;
    }
    if (server_service_info->server_welcome_email) {
        free(server_service_info->server_welcome_email);
        server_service_info->server_welcome_email = NULL;
    }
    if (server_service_info->server_dedicated_cpu) {
        free(server_service_info->server_dedicated_cpu);
        server_service_info->server_dedicated_cpu = NULL;
    }
    if (server_service_info->server_dedicated_memory) {
        free(server_service_info->server_dedicated_memory);
        server_service_info->server_dedicated_memory = NULL;
    }
    if (server_service_info->server_dedicated_hd1) {
        free(server_service_info->server_dedicated_hd1);
        server_service_info->server_dedicated_hd1 = NULL;
    }
    if (server_service_info->server_dedicated_hd2) {
        _free(server_service_info->server_dedicated_hd2);
        server_service_info->server_dedicated_hd2 = NULL;
    }
    if (server_service_info->server_dedicated_bandwidth) {
        free(server_service_info->server_dedicated_bandwidth);
        server_service_info->server_dedicated_bandwidth = NULL;
    }
    if (server_service_info->server_dedicated_ips) {
        free(server_service_info->server_dedicated_ips);
        server_service_info->server_dedicated_ips = NULL;
    }
    if (server_service_info->server_dedicated_os) {
        free(server_service_info->server_dedicated_os);
        server_service_info->server_dedicated_os = NULL;
    }
    if (server_service_info->server_dedicated_cp) {
        _free(server_service_info->server_dedicated_cp);
        server_service_info->server_dedicated_cp = NULL;
    }
    if (server_service_info->server_dedicated_raid) {
        free(server_service_info->server_dedicated_raid);
        server_service_info->server_dedicated_raid = NULL;
    }
    if (server_service_info->server_extra) {
        free(server_service_info->server_extra);
        server_service_info->server_extra = NULL;
    }
    free(server_service_info);
}

cJSON *server_service_info_convertToJSON(server_service_info_t *server_service_info) {
    cJSON *item = cJSON_CreateObject();

    // server_service_info->server_id
    if(server_service_info->server_id) {
    if(cJSON_AddStringToObject(item, "server_id", server_service_info->server_id) == NULL) {
    goto fail; //String
    }
    }


    // server_service_info->server_hostname
    if(server_service_info->server_hostname) {
    if(cJSON_AddStringToObject(item, "server_hostname", server_service_info->server_hostname) == NULL) {
    goto fail; //String
    }
    }


    // server_service_info->server_custid
    if(server_service_info->server_custid) {
    if(cJSON_AddStringToObject(item, "server_custid", server_service_info->server_custid) == NULL) {
    goto fail; //String
    }
    }


    // server_service_info->server_type
    if(server_service_info->server_type) {
    if(cJSON_AddStringToObject(item, "server_type", server_service_info->server_type) == NULL) {
    goto fail; //String
    }
    }


    // server_service_info->server_currency
    if(server_service_info->server_currency) {
    if(cJSON_AddStringToObject(item, "server_currency", server_service_info->server_currency) == NULL) {
    goto fail; //String
    }
    }


    // server_service_info->server_order_date
    if(server_service_info->server_order_date) {
    if(cJSON_AddStringToObject(item, "server_order_date", server_service_info->server_order_date) == NULL) {
    goto fail; //String
    }
    }


    // server_service_info->server_invoice
    if(server_service_info->server_invoice) {
    if(cJSON_AddStringToObject(item, "server_invoice", server_service_info->server_invoice) == NULL) {
    goto fail; //String
    }
    }


    // server_service_info->server_coupon
    if(server_service_info->server_coupon) {
    if(cJSON_AddStringToObject(item, "server_coupon", server_service_info->server_coupon) == NULL) {
    goto fail; //String
    }
    }


    // server_service_info->server_status
    if(server_service_info->server_status) {
    if(cJSON_AddStringToObject(item, "server_status", server_service_info->server_status) == NULL) {
    goto fail; //String
    }
    }


    // server_service_info->server_root
    if(server_service_info->server_root) {
    if(cJSON_AddStringToObject(item, "server_root", server_service_info->server_root) == NULL) {
    goto fail; //String
    }
    }


    // server_service_info->server_dedicated_tag
    if(server_service_info->server_dedicated_tag) {
    if(cJSON_AddStringToObject(item, "server_dedicated_tag", server_service_info->server_dedicated_tag) == NULL) {
    goto fail; //String
    }
    }


    // server_service_info->server_custom_tag
    if(server_service_info->server_custom_tag) {
    if(cJSON_AddStringToObject(item, "server_custom_tag", server_service_info->server_custom_tag) == NULL) {
    goto fail; //String
    }
    }


    // server_service_info->server_comment
    if(server_service_info->server_comment) {
    if(cJSON_AddStringToObject(item, "server_comment", server_service_info->server_comment) == NULL) {
    goto fail; //String
    }
    }


    // server_service_info->server_initial_bill
    if(server_service_info->server_initial_bill) {
    if(cJSON_AddStringToObject(item, "server_initial_bill", server_service_info->server_initial_bill) == NULL) {
    goto fail; //String
    }
    }


    // server_service_info->server_hardware
    if(server_service_info->server_hardware) {
    if(cJSON_AddStringToObject(item, "server_hardware", server_service_info->server_hardware) == NULL) {
    goto fail; //String
    }
    }


    // server_service_info->server_ips
    if(server_service_info->server_ips) {
    if(cJSON_AddStringToObject(item, "server_ips", server_service_info->server_ips) == NULL) {
    goto fail; //String
    }
    }


    // server_service_info->server_monthly_bill
    if(server_service_info->server_monthly_bill) {
    if(cJSON_AddStringToObject(item, "server_monthly_bill", server_service_info->server_monthly_bill) == NULL) {
    goto fail; //String
    }
    }


    // server_service_info->server_setup
    if(server_service_info->server_setup) {
    if(cJSON_AddStringToObject(item, "server_setup", server_service_info->server_setup) == NULL) {
    goto fail; //String
    }
    }


    // server_service_info->server_discount
    if(server_service_info->server_discount) {
    cJSON *server_discount_local_JSON = _convertToJSON(server_service_info->server_discount);
    if(server_discount_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "server_discount", server_discount_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // server_service_info->server_rep
    if(server_service_info->server_rep) {
    if(cJSON_AddStringToObject(item, "server_rep", server_service_info->server_rep) == NULL) {
    goto fail; //String
    }
    }


    // server_service_info->server_date
    if(server_service_info->server_date) {
    if(cJSON_AddStringToObject(item, "server_date", server_service_info->server_date) == NULL) {
    goto fail; //String
    }
    }


    // server_service_info->server_total_cost
    if(server_service_info->server_total_cost) {
    if(cJSON_AddStringToObject(item, "server_total_cost", server_service_info->server_total_cost) == NULL) {
    goto fail; //String
    }
    }


    // server_service_info->server_location
    if(server_service_info->server_location) {
    cJSON *server_location_local_JSON = _convertToJSON(server_service_info->server_location);
    if(server_location_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "server_location", server_location_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // server_service_info->server_hardware_ordered
    if(server_service_info->server_hardware_ordered) {
    if(cJSON_AddStringToObject(item, "server_hardware_ordered", server_service_info->server_hardware_ordered) == NULL) {
    goto fail; //String
    }
    }


    // server_service_info->server_billed
    if(server_service_info->server_billed) {
    if(cJSON_AddStringToObject(item, "server_billed", server_service_info->server_billed) == NULL) {
    goto fail; //String
    }
    }


    // server_service_info->server_welcome_email
    if(server_service_info->server_welcome_email) {
    if(cJSON_AddStringToObject(item, "server_welcome_email", server_service_info->server_welcome_email) == NULL) {
    goto fail; //String
    }
    }


    // server_service_info->server_dedicated_cpu
    if(server_service_info->server_dedicated_cpu) {
    if(cJSON_AddStringToObject(item, "server_dedicated_cpu", server_service_info->server_dedicated_cpu) == NULL) {
    goto fail; //String
    }
    }


    // server_service_info->server_dedicated_memory
    if(server_service_info->server_dedicated_memory) {
    if(cJSON_AddStringToObject(item, "server_dedicated_memory", server_service_info->server_dedicated_memory) == NULL) {
    goto fail; //String
    }
    }


    // server_service_info->server_dedicated_hd1
    if(server_service_info->server_dedicated_hd1) {
    if(cJSON_AddStringToObject(item, "server_dedicated_hd1", server_service_info->server_dedicated_hd1) == NULL) {
    goto fail; //String
    }
    }


    // server_service_info->server_dedicated_hd2
    if(server_service_info->server_dedicated_hd2) {
    cJSON *server_dedicated_hd2_local_JSON = _convertToJSON(server_service_info->server_dedicated_hd2);
    if(server_dedicated_hd2_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "server_dedicated_hd2", server_dedicated_hd2_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // server_service_info->server_dedicated_bandwidth
    if(server_service_info->server_dedicated_bandwidth) {
    if(cJSON_AddStringToObject(item, "server_dedicated_bandwidth", server_service_info->server_dedicated_bandwidth) == NULL) {
    goto fail; //String
    }
    }


    // server_service_info->server_dedicated_ips
    if(server_service_info->server_dedicated_ips) {
    if(cJSON_AddStringToObject(item, "server_dedicated_ips", server_service_info->server_dedicated_ips) == NULL) {
    goto fail; //String
    }
    }


    // server_service_info->server_dedicated_os
    if(server_service_info->server_dedicated_os) {
    if(cJSON_AddStringToObject(item, "server_dedicated_os", server_service_info->server_dedicated_os) == NULL) {
    goto fail; //String
    }
    }


    // server_service_info->server_dedicated_cp
    if(server_service_info->server_dedicated_cp) {
    cJSON *server_dedicated_cp_local_JSON = _convertToJSON(server_service_info->server_dedicated_cp);
    if(server_dedicated_cp_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "server_dedicated_cp", server_dedicated_cp_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // server_service_info->server_dedicated_raid
    if(server_service_info->server_dedicated_raid) {
    if(cJSON_AddStringToObject(item, "server_dedicated_raid", server_service_info->server_dedicated_raid) == NULL) {
    goto fail; //String
    }
    }


    // server_service_info->server_extra
    if(server_service_info->server_extra) {
    if(cJSON_AddStringToObject(item, "server_extra", server_service_info->server_extra) == NULL) {
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

server_service_info_t *server_service_info_parseFromJSON(cJSON *server_service_infoJSON){

    server_service_info_t *server_service_info_local_var = NULL;

    char *server_id_local_str = NULL;

    char *server_hostname_local_str = NULL;

    char *server_custid_local_str = NULL;

    char *server_type_local_str = NULL;

    char *server_currency_local_str = NULL;

    char *server_order_date_local_str = NULL;

    char *server_invoice_local_str = NULL;

    char *server_coupon_local_str = NULL;

    char *server_status_local_str = NULL;

    char *server_root_local_str = NULL;

    char *server_dedicated_tag_local_str = NULL;

    char *server_custom_tag_local_str = NULL;

    char *server_comment_local_str = NULL;

    char *server_initial_bill_local_str = NULL;

    char *server_hardware_local_str = NULL;

    char *server_ips_local_str = NULL;

    char *server_monthly_bill_local_str = NULL;

    char *server_setup_local_str = NULL;

    // define the local variable for server_service_info->server_discount
    _t *server_discount_local_nonprim = NULL;

    char *server_rep_local_str = NULL;

    char *server_date_local_str = NULL;

    char *server_total_cost_local_str = NULL;

    // define the local variable for server_service_info->server_location
    _t *server_location_local_nonprim = NULL;

    char *server_hardware_ordered_local_str = NULL;

    char *server_billed_local_str = NULL;

    char *server_welcome_email_local_str = NULL;

    char *server_dedicated_cpu_local_str = NULL;

    char *server_dedicated_memory_local_str = NULL;

    char *server_dedicated_hd1_local_str = NULL;

    // define the local variable for server_service_info->server_dedicated_hd2
    _t *server_dedicated_hd2_local_nonprim = NULL;

    char *server_dedicated_bandwidth_local_str = NULL;

    char *server_dedicated_ips_local_str = NULL;

    char *server_dedicated_os_local_str = NULL;

    // define the local variable for server_service_info->server_dedicated_cp
    _t *server_dedicated_cp_local_nonprim = NULL;

    char *server_dedicated_raid_local_str = NULL;

    char *server_extra_local_str = NULL;

    // server_service_info->server_id
    cJSON *server_id = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_id");
    if (cJSON_IsNull(server_id)) {
        server_id = NULL;
    }
    if (server_id) { 
    if(!cJSON_IsString(server_id) && !cJSON_IsNull(server_id))
    {
    goto end; //String
    }
    }

    // server_service_info->server_hostname
    cJSON *server_hostname = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_hostname");
    if (cJSON_IsNull(server_hostname)) {
        server_hostname = NULL;
    }
    if (server_hostname) { 
    if(!cJSON_IsString(server_hostname) && !cJSON_IsNull(server_hostname))
    {
    goto end; //String
    }
    }

    // server_service_info->server_custid
    cJSON *server_custid = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_custid");
    if (cJSON_IsNull(server_custid)) {
        server_custid = NULL;
    }
    if (server_custid) { 
    if(!cJSON_IsString(server_custid) && !cJSON_IsNull(server_custid))
    {
    goto end; //String
    }
    }

    // server_service_info->server_type
    cJSON *server_type = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_type");
    if (cJSON_IsNull(server_type)) {
        server_type = NULL;
    }
    if (server_type) { 
    if(!cJSON_IsString(server_type) && !cJSON_IsNull(server_type))
    {
    goto end; //String
    }
    }

    // server_service_info->server_currency
    cJSON *server_currency = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_currency");
    if (cJSON_IsNull(server_currency)) {
        server_currency = NULL;
    }
    if (server_currency) { 
    if(!cJSON_IsString(server_currency) && !cJSON_IsNull(server_currency))
    {
    goto end; //String
    }
    }

    // server_service_info->server_order_date
    cJSON *server_order_date = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_order_date");
    if (cJSON_IsNull(server_order_date)) {
        server_order_date = NULL;
    }
    if (server_order_date) { 
    if(!cJSON_IsString(server_order_date) && !cJSON_IsNull(server_order_date))
    {
    goto end; //String
    }
    }

    // server_service_info->server_invoice
    cJSON *server_invoice = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_invoice");
    if (cJSON_IsNull(server_invoice)) {
        server_invoice = NULL;
    }
    if (server_invoice) { 
    if(!cJSON_IsString(server_invoice) && !cJSON_IsNull(server_invoice))
    {
    goto end; //String
    }
    }

    // server_service_info->server_coupon
    cJSON *server_coupon = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_coupon");
    if (cJSON_IsNull(server_coupon)) {
        server_coupon = NULL;
    }
    if (server_coupon) { 
    if(!cJSON_IsString(server_coupon) && !cJSON_IsNull(server_coupon))
    {
    goto end; //String
    }
    }

    // server_service_info->server_status
    cJSON *server_status = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_status");
    if (cJSON_IsNull(server_status)) {
        server_status = NULL;
    }
    if (server_status) { 
    if(!cJSON_IsString(server_status) && !cJSON_IsNull(server_status))
    {
    goto end; //String
    }
    }

    // server_service_info->server_root
    cJSON *server_root = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_root");
    if (cJSON_IsNull(server_root)) {
        server_root = NULL;
    }
    if (server_root) { 
    if(!cJSON_IsString(server_root) && !cJSON_IsNull(server_root))
    {
    goto end; //String
    }
    }

    // server_service_info->server_dedicated_tag
    cJSON *server_dedicated_tag = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_dedicated_tag");
    if (cJSON_IsNull(server_dedicated_tag)) {
        server_dedicated_tag = NULL;
    }
    if (server_dedicated_tag) { 
    if(!cJSON_IsString(server_dedicated_tag) && !cJSON_IsNull(server_dedicated_tag))
    {
    goto end; //String
    }
    }

    // server_service_info->server_custom_tag
    cJSON *server_custom_tag = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_custom_tag");
    if (cJSON_IsNull(server_custom_tag)) {
        server_custom_tag = NULL;
    }
    if (server_custom_tag) { 
    if(!cJSON_IsString(server_custom_tag) && !cJSON_IsNull(server_custom_tag))
    {
    goto end; //String
    }
    }

    // server_service_info->server_comment
    cJSON *server_comment = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_comment");
    if (cJSON_IsNull(server_comment)) {
        server_comment = NULL;
    }
    if (server_comment) { 
    if(!cJSON_IsString(server_comment) && !cJSON_IsNull(server_comment))
    {
    goto end; //String
    }
    }

    // server_service_info->server_initial_bill
    cJSON *server_initial_bill = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_initial_bill");
    if (cJSON_IsNull(server_initial_bill)) {
        server_initial_bill = NULL;
    }
    if (server_initial_bill) { 
    if(!cJSON_IsString(server_initial_bill) && !cJSON_IsNull(server_initial_bill))
    {
    goto end; //String
    }
    }

    // server_service_info->server_hardware
    cJSON *server_hardware = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_hardware");
    if (cJSON_IsNull(server_hardware)) {
        server_hardware = NULL;
    }
    if (server_hardware) { 
    if(!cJSON_IsString(server_hardware) && !cJSON_IsNull(server_hardware))
    {
    goto end; //String
    }
    }

    // server_service_info->server_ips
    cJSON *server_ips = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_ips");
    if (cJSON_IsNull(server_ips)) {
        server_ips = NULL;
    }
    if (server_ips) { 
    if(!cJSON_IsString(server_ips) && !cJSON_IsNull(server_ips))
    {
    goto end; //String
    }
    }

    // server_service_info->server_monthly_bill
    cJSON *server_monthly_bill = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_monthly_bill");
    if (cJSON_IsNull(server_monthly_bill)) {
        server_monthly_bill = NULL;
    }
    if (server_monthly_bill) { 
    if(!cJSON_IsString(server_monthly_bill) && !cJSON_IsNull(server_monthly_bill))
    {
    goto end; //String
    }
    }

    // server_service_info->server_setup
    cJSON *server_setup = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_setup");
    if (cJSON_IsNull(server_setup)) {
        server_setup = NULL;
    }
    if (server_setup) { 
    if(!cJSON_IsString(server_setup) && !cJSON_IsNull(server_setup))
    {
    goto end; //String
    }
    }

    // server_service_info->server_discount
    cJSON *server_discount = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_discount");
    if (cJSON_IsNull(server_discount)) {
        server_discount = NULL;
    }
    if (server_discount) { 
    server_discount_local_nonprim = _parseFromJSON(server_discount); //custom
    }

    // server_service_info->server_rep
    cJSON *server_rep = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_rep");
    if (cJSON_IsNull(server_rep)) {
        server_rep = NULL;
    }
    if (server_rep) { 
    if(!cJSON_IsString(server_rep) && !cJSON_IsNull(server_rep))
    {
    goto end; //String
    }
    }

    // server_service_info->server_date
    cJSON *server_date = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_date");
    if (cJSON_IsNull(server_date)) {
        server_date = NULL;
    }
    if (server_date) { 
    if(!cJSON_IsString(server_date) && !cJSON_IsNull(server_date))
    {
    goto end; //String
    }
    }

    // server_service_info->server_total_cost
    cJSON *server_total_cost = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_total_cost");
    if (cJSON_IsNull(server_total_cost)) {
        server_total_cost = NULL;
    }
    if (server_total_cost) { 
    if(!cJSON_IsString(server_total_cost) && !cJSON_IsNull(server_total_cost))
    {
    goto end; //String
    }
    }

    // server_service_info->server_location
    cJSON *server_location = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_location");
    if (cJSON_IsNull(server_location)) {
        server_location = NULL;
    }
    if (server_location) { 
    server_location_local_nonprim = _parseFromJSON(server_location); //custom
    }

    // server_service_info->server_hardware_ordered
    cJSON *server_hardware_ordered = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_hardware_ordered");
    if (cJSON_IsNull(server_hardware_ordered)) {
        server_hardware_ordered = NULL;
    }
    if (server_hardware_ordered) { 
    if(!cJSON_IsString(server_hardware_ordered) && !cJSON_IsNull(server_hardware_ordered))
    {
    goto end; //String
    }
    }

    // server_service_info->server_billed
    cJSON *server_billed = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_billed");
    if (cJSON_IsNull(server_billed)) {
        server_billed = NULL;
    }
    if (server_billed) { 
    if(!cJSON_IsString(server_billed) && !cJSON_IsNull(server_billed))
    {
    goto end; //String
    }
    }

    // server_service_info->server_welcome_email
    cJSON *server_welcome_email = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_welcome_email");
    if (cJSON_IsNull(server_welcome_email)) {
        server_welcome_email = NULL;
    }
    if (server_welcome_email) { 
    if(!cJSON_IsString(server_welcome_email) && !cJSON_IsNull(server_welcome_email))
    {
    goto end; //String
    }
    }

    // server_service_info->server_dedicated_cpu
    cJSON *server_dedicated_cpu = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_dedicated_cpu");
    if (cJSON_IsNull(server_dedicated_cpu)) {
        server_dedicated_cpu = NULL;
    }
    if (server_dedicated_cpu) { 
    if(!cJSON_IsString(server_dedicated_cpu) && !cJSON_IsNull(server_dedicated_cpu))
    {
    goto end; //String
    }
    }

    // server_service_info->server_dedicated_memory
    cJSON *server_dedicated_memory = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_dedicated_memory");
    if (cJSON_IsNull(server_dedicated_memory)) {
        server_dedicated_memory = NULL;
    }
    if (server_dedicated_memory) { 
    if(!cJSON_IsString(server_dedicated_memory) && !cJSON_IsNull(server_dedicated_memory))
    {
    goto end; //String
    }
    }

    // server_service_info->server_dedicated_hd1
    cJSON *server_dedicated_hd1 = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_dedicated_hd1");
    if (cJSON_IsNull(server_dedicated_hd1)) {
        server_dedicated_hd1 = NULL;
    }
    if (server_dedicated_hd1) { 
    if(!cJSON_IsString(server_dedicated_hd1) && !cJSON_IsNull(server_dedicated_hd1))
    {
    goto end; //String
    }
    }

    // server_service_info->server_dedicated_hd2
    cJSON *server_dedicated_hd2 = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_dedicated_hd2");
    if (cJSON_IsNull(server_dedicated_hd2)) {
        server_dedicated_hd2 = NULL;
    }
    if (server_dedicated_hd2) { 
    server_dedicated_hd2_local_nonprim = _parseFromJSON(server_dedicated_hd2); //custom
    }

    // server_service_info->server_dedicated_bandwidth
    cJSON *server_dedicated_bandwidth = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_dedicated_bandwidth");
    if (cJSON_IsNull(server_dedicated_bandwidth)) {
        server_dedicated_bandwidth = NULL;
    }
    if (server_dedicated_bandwidth) { 
    if(!cJSON_IsString(server_dedicated_bandwidth) && !cJSON_IsNull(server_dedicated_bandwidth))
    {
    goto end; //String
    }
    }

    // server_service_info->server_dedicated_ips
    cJSON *server_dedicated_ips = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_dedicated_ips");
    if (cJSON_IsNull(server_dedicated_ips)) {
        server_dedicated_ips = NULL;
    }
    if (server_dedicated_ips) { 
    if(!cJSON_IsString(server_dedicated_ips) && !cJSON_IsNull(server_dedicated_ips))
    {
    goto end; //String
    }
    }

    // server_service_info->server_dedicated_os
    cJSON *server_dedicated_os = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_dedicated_os");
    if (cJSON_IsNull(server_dedicated_os)) {
        server_dedicated_os = NULL;
    }
    if (server_dedicated_os) { 
    if(!cJSON_IsString(server_dedicated_os) && !cJSON_IsNull(server_dedicated_os))
    {
    goto end; //String
    }
    }

    // server_service_info->server_dedicated_cp
    cJSON *server_dedicated_cp = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_dedicated_cp");
    if (cJSON_IsNull(server_dedicated_cp)) {
        server_dedicated_cp = NULL;
    }
    if (server_dedicated_cp) { 
    server_dedicated_cp_local_nonprim = _parseFromJSON(server_dedicated_cp); //custom
    }

    // server_service_info->server_dedicated_raid
    cJSON *server_dedicated_raid = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_dedicated_raid");
    if (cJSON_IsNull(server_dedicated_raid)) {
        server_dedicated_raid = NULL;
    }
    if (server_dedicated_raid) { 
    if(!cJSON_IsString(server_dedicated_raid) && !cJSON_IsNull(server_dedicated_raid))
    {
    goto end; //String
    }
    }

    // server_service_info->server_extra
    cJSON *server_extra = cJSON_GetObjectItemCaseSensitive(server_service_infoJSON, "server_extra");
    if (cJSON_IsNull(server_extra)) {
        server_extra = NULL;
    }
    if (server_extra) { 
    if(!cJSON_IsString(server_extra) && !cJSON_IsNull(server_extra))
    {
    goto end; //String
    }
    }


    if (server_id && !cJSON_IsNull(server_id)) server_id_local_str = strdup(server_id->valuestring);
    if (server_hostname && !cJSON_IsNull(server_hostname)) server_hostname_local_str = strdup(server_hostname->valuestring);
    if (server_custid && !cJSON_IsNull(server_custid)) server_custid_local_str = strdup(server_custid->valuestring);
    if (server_type && !cJSON_IsNull(server_type)) server_type_local_str = strdup(server_type->valuestring);
    if (server_currency && !cJSON_IsNull(server_currency)) server_currency_local_str = strdup(server_currency->valuestring);
    if (server_order_date && !cJSON_IsNull(server_order_date)) server_order_date_local_str = strdup(server_order_date->valuestring);
    if (server_invoice && !cJSON_IsNull(server_invoice)) server_invoice_local_str = strdup(server_invoice->valuestring);
    if (server_coupon && !cJSON_IsNull(server_coupon)) server_coupon_local_str = strdup(server_coupon->valuestring);
    if (server_status && !cJSON_IsNull(server_status)) server_status_local_str = strdup(server_status->valuestring);
    if (server_root && !cJSON_IsNull(server_root)) server_root_local_str = strdup(server_root->valuestring);
    if (server_dedicated_tag && !cJSON_IsNull(server_dedicated_tag)) server_dedicated_tag_local_str = strdup(server_dedicated_tag->valuestring);
    if (server_custom_tag && !cJSON_IsNull(server_custom_tag)) server_custom_tag_local_str = strdup(server_custom_tag->valuestring);
    if (server_comment && !cJSON_IsNull(server_comment)) server_comment_local_str = strdup(server_comment->valuestring);
    if (server_initial_bill && !cJSON_IsNull(server_initial_bill)) server_initial_bill_local_str = strdup(server_initial_bill->valuestring);
    if (server_hardware && !cJSON_IsNull(server_hardware)) server_hardware_local_str = strdup(server_hardware->valuestring);
    if (server_ips && !cJSON_IsNull(server_ips)) server_ips_local_str = strdup(server_ips->valuestring);
    if (server_monthly_bill && !cJSON_IsNull(server_monthly_bill)) server_monthly_bill_local_str = strdup(server_monthly_bill->valuestring);
    if (server_setup && !cJSON_IsNull(server_setup)) server_setup_local_str = strdup(server_setup->valuestring);
    if (server_rep && !cJSON_IsNull(server_rep)) server_rep_local_str = strdup(server_rep->valuestring);
    if (server_date && !cJSON_IsNull(server_date)) server_date_local_str = strdup(server_date->valuestring);
    if (server_total_cost && !cJSON_IsNull(server_total_cost)) server_total_cost_local_str = strdup(server_total_cost->valuestring);
    if (server_hardware_ordered && !cJSON_IsNull(server_hardware_ordered)) server_hardware_ordered_local_str = strdup(server_hardware_ordered->valuestring);
    if (server_billed && !cJSON_IsNull(server_billed)) server_billed_local_str = strdup(server_billed->valuestring);
    if (server_welcome_email && !cJSON_IsNull(server_welcome_email)) server_welcome_email_local_str = strdup(server_welcome_email->valuestring);
    if (server_dedicated_cpu && !cJSON_IsNull(server_dedicated_cpu)) server_dedicated_cpu_local_str = strdup(server_dedicated_cpu->valuestring);
    if (server_dedicated_memory && !cJSON_IsNull(server_dedicated_memory)) server_dedicated_memory_local_str = strdup(server_dedicated_memory->valuestring);
    if (server_dedicated_hd1 && !cJSON_IsNull(server_dedicated_hd1)) server_dedicated_hd1_local_str = strdup(server_dedicated_hd1->valuestring);
    if (server_dedicated_bandwidth && !cJSON_IsNull(server_dedicated_bandwidth)) server_dedicated_bandwidth_local_str = strdup(server_dedicated_bandwidth->valuestring);
    if (server_dedicated_ips && !cJSON_IsNull(server_dedicated_ips)) server_dedicated_ips_local_str = strdup(server_dedicated_ips->valuestring);
    if (server_dedicated_os && !cJSON_IsNull(server_dedicated_os)) server_dedicated_os_local_str = strdup(server_dedicated_os->valuestring);
    if (server_dedicated_raid && !cJSON_IsNull(server_dedicated_raid)) server_dedicated_raid_local_str = strdup(server_dedicated_raid->valuestring);
    if (server_extra && !cJSON_IsNull(server_extra)) server_extra_local_str = strdup(server_extra->valuestring);

    server_service_info_local_var = server_service_info_create_internal (
        server_id_local_str,
        server_hostname_local_str,
        server_custid_local_str,
        server_type_local_str,
        server_currency_local_str,
        server_order_date_local_str,
        server_invoice_local_str,
        server_coupon_local_str,
        server_status_local_str,
        server_root_local_str,
        server_dedicated_tag_local_str,
        server_custom_tag_local_str,
        server_comment_local_str,
        server_initial_bill_local_str,
        server_hardware_local_str,
        server_ips_local_str,
        server_monthly_bill_local_str,
        server_setup_local_str,
        server_discount ? server_discount_local_nonprim : NULL,
        server_rep_local_str,
        server_date_local_str,
        server_total_cost_local_str,
        server_location ? server_location_local_nonprim : NULL,
        server_hardware_ordered_local_str,
        server_billed_local_str,
        server_welcome_email_local_str,
        server_dedicated_cpu_local_str,
        server_dedicated_memory_local_str,
        server_dedicated_hd1_local_str,
        server_dedicated_hd2 ? server_dedicated_hd2_local_nonprim : NULL,
        server_dedicated_bandwidth_local_str,
        server_dedicated_ips_local_str,
        server_dedicated_os_local_str,
        server_dedicated_cp ? server_dedicated_cp_local_nonprim : NULL,
        server_dedicated_raid_local_str,
        server_extra_local_str
        );

    if (!server_service_info_local_var) {
        goto end;
    }

    return server_service_info_local_var;
end:
    if (server_id_local_str) {
        free(server_id_local_str);
        server_id_local_str = NULL;
    }
    if (server_hostname_local_str) {
        free(server_hostname_local_str);
        server_hostname_local_str = NULL;
    }
    if (server_custid_local_str) {
        free(server_custid_local_str);
        server_custid_local_str = NULL;
    }
    if (server_type_local_str) {
        free(server_type_local_str);
        server_type_local_str = NULL;
    }
    if (server_currency_local_str) {
        free(server_currency_local_str);
        server_currency_local_str = NULL;
    }
    if (server_order_date_local_str) {
        free(server_order_date_local_str);
        server_order_date_local_str = NULL;
    }
    if (server_invoice_local_str) {
        free(server_invoice_local_str);
        server_invoice_local_str = NULL;
    }
    if (server_coupon_local_str) {
        free(server_coupon_local_str);
        server_coupon_local_str = NULL;
    }
    if (server_status_local_str) {
        free(server_status_local_str);
        server_status_local_str = NULL;
    }
    if (server_root_local_str) {
        free(server_root_local_str);
        server_root_local_str = NULL;
    }
    if (server_dedicated_tag_local_str) {
        free(server_dedicated_tag_local_str);
        server_dedicated_tag_local_str = NULL;
    }
    if (server_custom_tag_local_str) {
        free(server_custom_tag_local_str);
        server_custom_tag_local_str = NULL;
    }
    if (server_comment_local_str) {
        free(server_comment_local_str);
        server_comment_local_str = NULL;
    }
    if (server_initial_bill_local_str) {
        free(server_initial_bill_local_str);
        server_initial_bill_local_str = NULL;
    }
    if (server_hardware_local_str) {
        free(server_hardware_local_str);
        server_hardware_local_str = NULL;
    }
    if (server_ips_local_str) {
        free(server_ips_local_str);
        server_ips_local_str = NULL;
    }
    if (server_monthly_bill_local_str) {
        free(server_monthly_bill_local_str);
        server_monthly_bill_local_str = NULL;
    }
    if (server_setup_local_str) {
        free(server_setup_local_str);
        server_setup_local_str = NULL;
    }
    if (server_discount_local_nonprim) {
        _free(server_discount_local_nonprim);
        server_discount_local_nonprim = NULL;
    }
    if (server_rep_local_str) {
        free(server_rep_local_str);
        server_rep_local_str = NULL;
    }
    if (server_date_local_str) {
        free(server_date_local_str);
        server_date_local_str = NULL;
    }
    if (server_total_cost_local_str) {
        free(server_total_cost_local_str);
        server_total_cost_local_str = NULL;
    }
    if (server_location_local_nonprim) {
        _free(server_location_local_nonprim);
        server_location_local_nonprim = NULL;
    }
    if (server_hardware_ordered_local_str) {
        free(server_hardware_ordered_local_str);
        server_hardware_ordered_local_str = NULL;
    }
    if (server_billed_local_str) {
        free(server_billed_local_str);
        server_billed_local_str = NULL;
    }
    if (server_welcome_email_local_str) {
        free(server_welcome_email_local_str);
        server_welcome_email_local_str = NULL;
    }
    if (server_dedicated_cpu_local_str) {
        free(server_dedicated_cpu_local_str);
        server_dedicated_cpu_local_str = NULL;
    }
    if (server_dedicated_memory_local_str) {
        free(server_dedicated_memory_local_str);
        server_dedicated_memory_local_str = NULL;
    }
    if (server_dedicated_hd1_local_str) {
        free(server_dedicated_hd1_local_str);
        server_dedicated_hd1_local_str = NULL;
    }
    if (server_dedicated_hd2_local_nonprim) {
        _free(server_dedicated_hd2_local_nonprim);
        server_dedicated_hd2_local_nonprim = NULL;
    }
    if (server_dedicated_bandwidth_local_str) {
        free(server_dedicated_bandwidth_local_str);
        server_dedicated_bandwidth_local_str = NULL;
    }
    if (server_dedicated_ips_local_str) {
        free(server_dedicated_ips_local_str);
        server_dedicated_ips_local_str = NULL;
    }
    if (server_dedicated_os_local_str) {
        free(server_dedicated_os_local_str);
        server_dedicated_os_local_str = NULL;
    }
    if (server_dedicated_cp_local_nonprim) {
        _free(server_dedicated_cp_local_nonprim);
        server_dedicated_cp_local_nonprim = NULL;
    }
    if (server_dedicated_raid_local_str) {
        free(server_dedicated_raid_local_str);
        server_dedicated_raid_local_str = NULL;
    }
    if (server_extra_local_str) {
        free(server_extra_local_str);
        server_extra_local_str = NULL;
    }
    return NULL;

}
