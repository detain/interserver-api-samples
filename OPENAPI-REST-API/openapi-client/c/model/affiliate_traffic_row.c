#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "affiliate_traffic_row.h"



static affiliate_traffic_row_t *affiliate_traffic_row_create_internal(
    char *traffic_id,
    char *traffic_ip,
    char *traffic_url,
    char *traffic_affiliate,
    char *traffic_referrer,
    char *traffic_timestamp
    ) {
    affiliate_traffic_row_t *affiliate_traffic_row_local_var = malloc(sizeof(affiliate_traffic_row_t));
    if (!affiliate_traffic_row_local_var) {
        return NULL;
    }
    affiliate_traffic_row_local_var->traffic_id = traffic_id;
    affiliate_traffic_row_local_var->traffic_ip = traffic_ip;
    affiliate_traffic_row_local_var->traffic_url = traffic_url;
    affiliate_traffic_row_local_var->traffic_affiliate = traffic_affiliate;
    affiliate_traffic_row_local_var->traffic_referrer = traffic_referrer;
    affiliate_traffic_row_local_var->traffic_timestamp = traffic_timestamp;

    affiliate_traffic_row_local_var->_library_owned = 1;
    return affiliate_traffic_row_local_var;
}

__attribute__((deprecated)) affiliate_traffic_row_t *affiliate_traffic_row_create(
    char *traffic_id,
    char *traffic_ip,
    char *traffic_url,
    char *traffic_affiliate,
    char *traffic_referrer,
    char *traffic_timestamp
    ) {
    return affiliate_traffic_row_create_internal (
        traffic_id,
        traffic_ip,
        traffic_url,
        traffic_affiliate,
        traffic_referrer,
        traffic_timestamp
        );
}

void affiliate_traffic_row_free(affiliate_traffic_row_t *affiliate_traffic_row) {
    if(NULL == affiliate_traffic_row){
        return ;
    }
    if(affiliate_traffic_row->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "affiliate_traffic_row_free");
        return ;
    }
    listEntry_t *listEntry;
    if (affiliate_traffic_row->traffic_id) {
        free(affiliate_traffic_row->traffic_id);
        affiliate_traffic_row->traffic_id = NULL;
    }
    if (affiliate_traffic_row->traffic_ip) {
        free(affiliate_traffic_row->traffic_ip);
        affiliate_traffic_row->traffic_ip = NULL;
    }
    if (affiliate_traffic_row->traffic_url) {
        free(affiliate_traffic_row->traffic_url);
        affiliate_traffic_row->traffic_url = NULL;
    }
    if (affiliate_traffic_row->traffic_affiliate) {
        free(affiliate_traffic_row->traffic_affiliate);
        affiliate_traffic_row->traffic_affiliate = NULL;
    }
    if (affiliate_traffic_row->traffic_referrer) {
        free(affiliate_traffic_row->traffic_referrer);
        affiliate_traffic_row->traffic_referrer = NULL;
    }
    if (affiliate_traffic_row->traffic_timestamp) {
        free(affiliate_traffic_row->traffic_timestamp);
        affiliate_traffic_row->traffic_timestamp = NULL;
    }
    free(affiliate_traffic_row);
}

cJSON *affiliate_traffic_row_convertToJSON(affiliate_traffic_row_t *affiliate_traffic_row) {
    cJSON *item = cJSON_CreateObject();

    // affiliate_traffic_row->traffic_id
    if(affiliate_traffic_row->traffic_id) {
    if(cJSON_AddStringToObject(item, "traffic_id", affiliate_traffic_row->traffic_id) == NULL) {
    goto fail; //String
    }
    }


    // affiliate_traffic_row->traffic_ip
    if(affiliate_traffic_row->traffic_ip) {
    if(cJSON_AddStringToObject(item, "traffic_ip", affiliate_traffic_row->traffic_ip) == NULL) {
    goto fail; //String
    }
    }


    // affiliate_traffic_row->traffic_url
    if(affiliate_traffic_row->traffic_url) {
    if(cJSON_AddStringToObject(item, "traffic_url", affiliate_traffic_row->traffic_url) == NULL) {
    goto fail; //String
    }
    }


    // affiliate_traffic_row->traffic_affiliate
    if(affiliate_traffic_row->traffic_affiliate) {
    if(cJSON_AddStringToObject(item, "traffic_affiliate", affiliate_traffic_row->traffic_affiliate) == NULL) {
    goto fail; //String
    }
    }


    // affiliate_traffic_row->traffic_referrer
    if(affiliate_traffic_row->traffic_referrer) {
    if(cJSON_AddStringToObject(item, "traffic_referrer", affiliate_traffic_row->traffic_referrer) == NULL) {
    goto fail; //String
    }
    }


    // affiliate_traffic_row->traffic_timestamp
    if(affiliate_traffic_row->traffic_timestamp) {
    if(cJSON_AddStringToObject(item, "traffic_timestamp", affiliate_traffic_row->traffic_timestamp) == NULL) {
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

affiliate_traffic_row_t *affiliate_traffic_row_parseFromJSON(cJSON *affiliate_traffic_rowJSON){

    affiliate_traffic_row_t *affiliate_traffic_row_local_var = NULL;

    // affiliate_traffic_row->traffic_id
    cJSON *traffic_id = cJSON_GetObjectItemCaseSensitive(affiliate_traffic_rowJSON, "traffic_id");
    if (cJSON_IsNull(traffic_id)) {
        traffic_id = NULL;
    }
    if (traffic_id) { 
    if(!cJSON_IsString(traffic_id) && !cJSON_IsNull(traffic_id))
    {
    goto end; //String
    }
    }

    // affiliate_traffic_row->traffic_ip
    cJSON *traffic_ip = cJSON_GetObjectItemCaseSensitive(affiliate_traffic_rowJSON, "traffic_ip");
    if (cJSON_IsNull(traffic_ip)) {
        traffic_ip = NULL;
    }
    if (traffic_ip) { 
    if(!cJSON_IsString(traffic_ip) && !cJSON_IsNull(traffic_ip))
    {
    goto end; //String
    }
    }

    // affiliate_traffic_row->traffic_url
    cJSON *traffic_url = cJSON_GetObjectItemCaseSensitive(affiliate_traffic_rowJSON, "traffic_url");
    if (cJSON_IsNull(traffic_url)) {
        traffic_url = NULL;
    }
    if (traffic_url) { 
    if(!cJSON_IsString(traffic_url) && !cJSON_IsNull(traffic_url))
    {
    goto end; //String
    }
    }

    // affiliate_traffic_row->traffic_affiliate
    cJSON *traffic_affiliate = cJSON_GetObjectItemCaseSensitive(affiliate_traffic_rowJSON, "traffic_affiliate");
    if (cJSON_IsNull(traffic_affiliate)) {
        traffic_affiliate = NULL;
    }
    if (traffic_affiliate) { 
    if(!cJSON_IsString(traffic_affiliate) && !cJSON_IsNull(traffic_affiliate))
    {
    goto end; //String
    }
    }

    // affiliate_traffic_row->traffic_referrer
    cJSON *traffic_referrer = cJSON_GetObjectItemCaseSensitive(affiliate_traffic_rowJSON, "traffic_referrer");
    if (cJSON_IsNull(traffic_referrer)) {
        traffic_referrer = NULL;
    }
    if (traffic_referrer) { 
    if(!cJSON_IsString(traffic_referrer) && !cJSON_IsNull(traffic_referrer))
    {
    goto end; //String
    }
    }

    // affiliate_traffic_row->traffic_timestamp
    cJSON *traffic_timestamp = cJSON_GetObjectItemCaseSensitive(affiliate_traffic_rowJSON, "traffic_timestamp");
    if (cJSON_IsNull(traffic_timestamp)) {
        traffic_timestamp = NULL;
    }
    if (traffic_timestamp) { 
    if(!cJSON_IsString(traffic_timestamp) && !cJSON_IsNull(traffic_timestamp))
    {
    goto end; //String
    }
    }


    affiliate_traffic_row_local_var = affiliate_traffic_row_create_internal (
        traffic_id && !cJSON_IsNull(traffic_id) ? strdup(traffic_id->valuestring) : NULL,
        traffic_ip && !cJSON_IsNull(traffic_ip) ? strdup(traffic_ip->valuestring) : NULL,
        traffic_url && !cJSON_IsNull(traffic_url) ? strdup(traffic_url->valuestring) : NULL,
        traffic_affiliate && !cJSON_IsNull(traffic_affiliate) ? strdup(traffic_affiliate->valuestring) : NULL,
        traffic_referrer && !cJSON_IsNull(traffic_referrer) ? strdup(traffic_referrer->valuestring) : NULL,
        traffic_timestamp && !cJSON_IsNull(traffic_timestamp) ? strdup(traffic_timestamp->valuestring) : NULL
        );

    return affiliate_traffic_row_local_var;
end:
    return NULL;

}
