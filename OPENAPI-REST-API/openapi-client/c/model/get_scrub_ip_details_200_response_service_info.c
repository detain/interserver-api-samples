#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "get_scrub_ip_details_200_response_service_info.h"


char* get_scrub_ip_details_200_response_service_info_scrub_ip_status_ToString(interserver_management_api_get_scrub_ip_details_200_response_service_info_SCRUBIPSTATUS_e scrub_ip_status) {
    char* scrub_ip_statusArray[] =  { "NULL", "active", "pending", "canceled", "expired" };
    return scrub_ip_statusArray[scrub_ip_status];
}

interserver_management_api_get_scrub_ip_details_200_response_service_info_SCRUBIPSTATUS_e get_scrub_ip_details_200_response_service_info_scrub_ip_status_FromString(char* scrub_ip_status){
    int stringToReturn = 0;
    char *scrub_ip_statusArray[] =  { "NULL", "active", "pending", "canceled", "expired" };
    size_t sizeofArray = sizeof(scrub_ip_statusArray) / sizeof(scrub_ip_statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(scrub_ip_status, scrub_ip_statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static get_scrub_ip_details_200_response_service_info_t *get_scrub_ip_details_200_response_service_info_create_internal(
    char *scrub_ip_id,
    char *scrub_ip_type,
    char *scrub_ip_custid,
    char *scrub_ip_order_date,
    char *scrub_ip_ip,
    char *scrub_ip_service_id,
    char *scrub_ip_service_module,
    interserver_management_api_get_scrub_ip_details_200_response_service_info_SCRUBIPSTATUS_e scrub_ip_status,
    char *scrub_ip_invoice,
    char *scrub_ip_currency,
    char *scrub_ip_coupon,
    char *scrub_ip_comment
    ) {
    get_scrub_ip_details_200_response_service_info_t *get_scrub_ip_details_200_response_service_info_local_var = malloc(sizeof(get_scrub_ip_details_200_response_service_info_t));
    if (!get_scrub_ip_details_200_response_service_info_local_var) {
        return NULL;
    }
    get_scrub_ip_details_200_response_service_info_local_var->scrub_ip_id = scrub_ip_id;
    get_scrub_ip_details_200_response_service_info_local_var->scrub_ip_type = scrub_ip_type;
    get_scrub_ip_details_200_response_service_info_local_var->scrub_ip_custid = scrub_ip_custid;
    get_scrub_ip_details_200_response_service_info_local_var->scrub_ip_order_date = scrub_ip_order_date;
    get_scrub_ip_details_200_response_service_info_local_var->scrub_ip_ip = scrub_ip_ip;
    get_scrub_ip_details_200_response_service_info_local_var->scrub_ip_service_id = scrub_ip_service_id;
    get_scrub_ip_details_200_response_service_info_local_var->scrub_ip_service_module = scrub_ip_service_module;
    get_scrub_ip_details_200_response_service_info_local_var->scrub_ip_status = scrub_ip_status;
    get_scrub_ip_details_200_response_service_info_local_var->scrub_ip_invoice = scrub_ip_invoice;
    get_scrub_ip_details_200_response_service_info_local_var->scrub_ip_currency = scrub_ip_currency;
    get_scrub_ip_details_200_response_service_info_local_var->scrub_ip_coupon = scrub_ip_coupon;
    get_scrub_ip_details_200_response_service_info_local_var->scrub_ip_comment = scrub_ip_comment;

    get_scrub_ip_details_200_response_service_info_local_var->_library_owned = 1;
    return get_scrub_ip_details_200_response_service_info_local_var;
}

__attribute__((deprecated)) get_scrub_ip_details_200_response_service_info_t *get_scrub_ip_details_200_response_service_info_create(
    char *scrub_ip_id,
    char *scrub_ip_type,
    char *scrub_ip_custid,
    char *scrub_ip_order_date,
    char *scrub_ip_ip,
    char *scrub_ip_service_id,
    char *scrub_ip_service_module,
    interserver_management_api_get_scrub_ip_details_200_response_service_info_SCRUBIPSTATUS_e scrub_ip_status,
    char *scrub_ip_invoice,
    char *scrub_ip_currency,
    char *scrub_ip_coupon,
    char *scrub_ip_comment
    ) {
    return get_scrub_ip_details_200_response_service_info_create_internal (
        scrub_ip_id,
        scrub_ip_type,
        scrub_ip_custid,
        scrub_ip_order_date,
        scrub_ip_ip,
        scrub_ip_service_id,
        scrub_ip_service_module,
        scrub_ip_status,
        scrub_ip_invoice,
        scrub_ip_currency,
        scrub_ip_coupon,
        scrub_ip_comment
        );
}

void get_scrub_ip_details_200_response_service_info_free(get_scrub_ip_details_200_response_service_info_t *get_scrub_ip_details_200_response_service_info) {
    if(NULL == get_scrub_ip_details_200_response_service_info){
        return ;
    }
    if(get_scrub_ip_details_200_response_service_info->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "get_scrub_ip_details_200_response_service_info_free");
        return ;
    }
    listEntry_t *listEntry;
    if (get_scrub_ip_details_200_response_service_info->scrub_ip_id) {
        free(get_scrub_ip_details_200_response_service_info->scrub_ip_id);
        get_scrub_ip_details_200_response_service_info->scrub_ip_id = NULL;
    }
    if (get_scrub_ip_details_200_response_service_info->scrub_ip_type) {
        free(get_scrub_ip_details_200_response_service_info->scrub_ip_type);
        get_scrub_ip_details_200_response_service_info->scrub_ip_type = NULL;
    }
    if (get_scrub_ip_details_200_response_service_info->scrub_ip_custid) {
        free(get_scrub_ip_details_200_response_service_info->scrub_ip_custid);
        get_scrub_ip_details_200_response_service_info->scrub_ip_custid = NULL;
    }
    if (get_scrub_ip_details_200_response_service_info->scrub_ip_order_date) {
        free(get_scrub_ip_details_200_response_service_info->scrub_ip_order_date);
        get_scrub_ip_details_200_response_service_info->scrub_ip_order_date = NULL;
    }
    if (get_scrub_ip_details_200_response_service_info->scrub_ip_ip) {
        free(get_scrub_ip_details_200_response_service_info->scrub_ip_ip);
        get_scrub_ip_details_200_response_service_info->scrub_ip_ip = NULL;
    }
    if (get_scrub_ip_details_200_response_service_info->scrub_ip_service_id) {
        free(get_scrub_ip_details_200_response_service_info->scrub_ip_service_id);
        get_scrub_ip_details_200_response_service_info->scrub_ip_service_id = NULL;
    }
    if (get_scrub_ip_details_200_response_service_info->scrub_ip_service_module) {
        free(get_scrub_ip_details_200_response_service_info->scrub_ip_service_module);
        get_scrub_ip_details_200_response_service_info->scrub_ip_service_module = NULL;
    }
    if (get_scrub_ip_details_200_response_service_info->scrub_ip_invoice) {
        free(get_scrub_ip_details_200_response_service_info->scrub_ip_invoice);
        get_scrub_ip_details_200_response_service_info->scrub_ip_invoice = NULL;
    }
    if (get_scrub_ip_details_200_response_service_info->scrub_ip_currency) {
        free(get_scrub_ip_details_200_response_service_info->scrub_ip_currency);
        get_scrub_ip_details_200_response_service_info->scrub_ip_currency = NULL;
    }
    if (get_scrub_ip_details_200_response_service_info->scrub_ip_coupon) {
        free(get_scrub_ip_details_200_response_service_info->scrub_ip_coupon);
        get_scrub_ip_details_200_response_service_info->scrub_ip_coupon = NULL;
    }
    if (get_scrub_ip_details_200_response_service_info->scrub_ip_comment) {
        free(get_scrub_ip_details_200_response_service_info->scrub_ip_comment);
        get_scrub_ip_details_200_response_service_info->scrub_ip_comment = NULL;
    }
    free(get_scrub_ip_details_200_response_service_info);
}

cJSON *get_scrub_ip_details_200_response_service_info_convertToJSON(get_scrub_ip_details_200_response_service_info_t *get_scrub_ip_details_200_response_service_info) {
    cJSON *item = cJSON_CreateObject();

    // get_scrub_ip_details_200_response_service_info->scrub_ip_id
    if(get_scrub_ip_details_200_response_service_info->scrub_ip_id) {
    if(cJSON_AddStringToObject(item, "scrub_ip_id", get_scrub_ip_details_200_response_service_info->scrub_ip_id) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_service_info->scrub_ip_type
    if(get_scrub_ip_details_200_response_service_info->scrub_ip_type) {
    if(cJSON_AddStringToObject(item, "scrub_ip_type", get_scrub_ip_details_200_response_service_info->scrub_ip_type) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_service_info->scrub_ip_custid
    if(get_scrub_ip_details_200_response_service_info->scrub_ip_custid) {
    if(cJSON_AddStringToObject(item, "scrub_ip_custid", get_scrub_ip_details_200_response_service_info->scrub_ip_custid) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_service_info->scrub_ip_order_date
    if(get_scrub_ip_details_200_response_service_info->scrub_ip_order_date) {
    if(cJSON_AddStringToObject(item, "scrub_ip_order_date", get_scrub_ip_details_200_response_service_info->scrub_ip_order_date) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_service_info->scrub_ip_ip
    if(get_scrub_ip_details_200_response_service_info->scrub_ip_ip) {
    if(cJSON_AddStringToObject(item, "scrub_ip_ip", get_scrub_ip_details_200_response_service_info->scrub_ip_ip) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_service_info->scrub_ip_service_id
    if(get_scrub_ip_details_200_response_service_info->scrub_ip_service_id) {
    if(cJSON_AddStringToObject(item, "scrub_ip_service_id", get_scrub_ip_details_200_response_service_info->scrub_ip_service_id) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_service_info->scrub_ip_service_module
    if(get_scrub_ip_details_200_response_service_info->scrub_ip_service_module) {
    if(cJSON_AddStringToObject(item, "scrub_ip_service_module", get_scrub_ip_details_200_response_service_info->scrub_ip_service_module) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_service_info->scrub_ip_status
    if(get_scrub_ip_details_200_response_service_info->scrub_ip_status != interserver_management_api_get_scrub_ip_details_200_response_service_info_SCRUBIPSTATUS_NULL) {
    if(cJSON_AddStringToObject(item, "scrub_ip_status", get_scrub_ip_details_200_response_service_info_scrub_ip_status_ToString(get_scrub_ip_details_200_response_service_info->scrub_ip_status)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // get_scrub_ip_details_200_response_service_info->scrub_ip_invoice
    if(get_scrub_ip_details_200_response_service_info->scrub_ip_invoice) {
    if(cJSON_AddStringToObject(item, "scrub_ip_invoice", get_scrub_ip_details_200_response_service_info->scrub_ip_invoice) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_service_info->scrub_ip_currency
    if(get_scrub_ip_details_200_response_service_info->scrub_ip_currency) {
    if(cJSON_AddStringToObject(item, "scrub_ip_currency", get_scrub_ip_details_200_response_service_info->scrub_ip_currency) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_service_info->scrub_ip_coupon
    if(get_scrub_ip_details_200_response_service_info->scrub_ip_coupon) {
    if(cJSON_AddStringToObject(item, "scrub_ip_coupon", get_scrub_ip_details_200_response_service_info->scrub_ip_coupon) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_service_info->scrub_ip_comment
    if(get_scrub_ip_details_200_response_service_info->scrub_ip_comment) {
    if(cJSON_AddStringToObject(item, "scrub_ip_comment", get_scrub_ip_details_200_response_service_info->scrub_ip_comment) == NULL) {
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

get_scrub_ip_details_200_response_service_info_t *get_scrub_ip_details_200_response_service_info_parseFromJSON(cJSON *get_scrub_ip_details_200_response_service_infoJSON){

    get_scrub_ip_details_200_response_service_info_t *get_scrub_ip_details_200_response_service_info_local_var = NULL;

    // get_scrub_ip_details_200_response_service_info->scrub_ip_id
    cJSON *scrub_ip_id = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_service_infoJSON, "scrub_ip_id");
    if (cJSON_IsNull(scrub_ip_id)) {
        scrub_ip_id = NULL;
    }
    if (scrub_ip_id) { 
    if(!cJSON_IsString(scrub_ip_id) && !cJSON_IsNull(scrub_ip_id))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_service_info->scrub_ip_type
    cJSON *scrub_ip_type = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_service_infoJSON, "scrub_ip_type");
    if (cJSON_IsNull(scrub_ip_type)) {
        scrub_ip_type = NULL;
    }
    if (scrub_ip_type) { 
    if(!cJSON_IsString(scrub_ip_type) && !cJSON_IsNull(scrub_ip_type))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_service_info->scrub_ip_custid
    cJSON *scrub_ip_custid = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_service_infoJSON, "scrub_ip_custid");
    if (cJSON_IsNull(scrub_ip_custid)) {
        scrub_ip_custid = NULL;
    }
    if (scrub_ip_custid) { 
    if(!cJSON_IsString(scrub_ip_custid) && !cJSON_IsNull(scrub_ip_custid))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_service_info->scrub_ip_order_date
    cJSON *scrub_ip_order_date = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_service_infoJSON, "scrub_ip_order_date");
    if (cJSON_IsNull(scrub_ip_order_date)) {
        scrub_ip_order_date = NULL;
    }
    if (scrub_ip_order_date) { 
    if(!cJSON_IsString(scrub_ip_order_date) && !cJSON_IsNull(scrub_ip_order_date))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_service_info->scrub_ip_ip
    cJSON *scrub_ip_ip = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_service_infoJSON, "scrub_ip_ip");
    if (cJSON_IsNull(scrub_ip_ip)) {
        scrub_ip_ip = NULL;
    }
    if (scrub_ip_ip) { 
    if(!cJSON_IsString(scrub_ip_ip) && !cJSON_IsNull(scrub_ip_ip))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_service_info->scrub_ip_service_id
    cJSON *scrub_ip_service_id = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_service_infoJSON, "scrub_ip_service_id");
    if (cJSON_IsNull(scrub_ip_service_id)) {
        scrub_ip_service_id = NULL;
    }
    if (scrub_ip_service_id) { 
    if(!cJSON_IsString(scrub_ip_service_id) && !cJSON_IsNull(scrub_ip_service_id))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_service_info->scrub_ip_service_module
    cJSON *scrub_ip_service_module = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_service_infoJSON, "scrub_ip_service_module");
    if (cJSON_IsNull(scrub_ip_service_module)) {
        scrub_ip_service_module = NULL;
    }
    if (scrub_ip_service_module) { 
    if(!cJSON_IsString(scrub_ip_service_module) && !cJSON_IsNull(scrub_ip_service_module))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_service_info->scrub_ip_status
    cJSON *scrub_ip_status = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_service_infoJSON, "scrub_ip_status");
    if (cJSON_IsNull(scrub_ip_status)) {
        scrub_ip_status = NULL;
    }
    interserver_management_api_get_scrub_ip_details_200_response_service_info_SCRUBIPSTATUS_e scrub_ip_statusVariable;
    if (scrub_ip_status) { 
    if(!cJSON_IsString(scrub_ip_status))
    {
    goto end; //Enum
    }
    scrub_ip_statusVariable = get_scrub_ip_details_200_response_service_info_scrub_ip_status_FromString(scrub_ip_status->valuestring);
    }

    // get_scrub_ip_details_200_response_service_info->scrub_ip_invoice
    cJSON *scrub_ip_invoice = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_service_infoJSON, "scrub_ip_invoice");
    if (cJSON_IsNull(scrub_ip_invoice)) {
        scrub_ip_invoice = NULL;
    }
    if (scrub_ip_invoice) { 
    if(!cJSON_IsString(scrub_ip_invoice) && !cJSON_IsNull(scrub_ip_invoice))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_service_info->scrub_ip_currency
    cJSON *scrub_ip_currency = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_service_infoJSON, "scrub_ip_currency");
    if (cJSON_IsNull(scrub_ip_currency)) {
        scrub_ip_currency = NULL;
    }
    if (scrub_ip_currency) { 
    if(!cJSON_IsString(scrub_ip_currency) && !cJSON_IsNull(scrub_ip_currency))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_service_info->scrub_ip_coupon
    cJSON *scrub_ip_coupon = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_service_infoJSON, "scrub_ip_coupon");
    if (cJSON_IsNull(scrub_ip_coupon)) {
        scrub_ip_coupon = NULL;
    }
    if (scrub_ip_coupon) { 
    if(!cJSON_IsString(scrub_ip_coupon) && !cJSON_IsNull(scrub_ip_coupon))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_service_info->scrub_ip_comment
    cJSON *scrub_ip_comment = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_service_infoJSON, "scrub_ip_comment");
    if (cJSON_IsNull(scrub_ip_comment)) {
        scrub_ip_comment = NULL;
    }
    if (scrub_ip_comment) { 
    if(!cJSON_IsString(scrub_ip_comment) && !cJSON_IsNull(scrub_ip_comment))
    {
    goto end; //String
    }
    }


    get_scrub_ip_details_200_response_service_info_local_var = get_scrub_ip_details_200_response_service_info_create_internal (
        scrub_ip_id && !cJSON_IsNull(scrub_ip_id) ? strdup(scrub_ip_id->valuestring) : NULL,
        scrub_ip_type && !cJSON_IsNull(scrub_ip_type) ? strdup(scrub_ip_type->valuestring) : NULL,
        scrub_ip_custid && !cJSON_IsNull(scrub_ip_custid) ? strdup(scrub_ip_custid->valuestring) : NULL,
        scrub_ip_order_date && !cJSON_IsNull(scrub_ip_order_date) ? strdup(scrub_ip_order_date->valuestring) : NULL,
        scrub_ip_ip && !cJSON_IsNull(scrub_ip_ip) ? strdup(scrub_ip_ip->valuestring) : NULL,
        scrub_ip_service_id && !cJSON_IsNull(scrub_ip_service_id) ? strdup(scrub_ip_service_id->valuestring) : NULL,
        scrub_ip_service_module && !cJSON_IsNull(scrub_ip_service_module) ? strdup(scrub_ip_service_module->valuestring) : NULL,
        scrub_ip_status ? scrub_ip_statusVariable : interserver_management_api_get_scrub_ip_details_200_response_service_info_SCRUBIPSTATUS_NULL,
        scrub_ip_invoice && !cJSON_IsNull(scrub_ip_invoice) ? strdup(scrub_ip_invoice->valuestring) : NULL,
        scrub_ip_currency && !cJSON_IsNull(scrub_ip_currency) ? strdup(scrub_ip_currency->valuestring) : NULL,
        scrub_ip_coupon && !cJSON_IsNull(scrub_ip_coupon) ? strdup(scrub_ip_coupon->valuestring) : NULL,
        scrub_ip_comment && !cJSON_IsNull(scrub_ip_comment) ? strdup(scrub_ip_comment->valuestring) : NULL
        );

    return get_scrub_ip_details_200_response_service_info_local_var;
end:
    return NULL;

}
