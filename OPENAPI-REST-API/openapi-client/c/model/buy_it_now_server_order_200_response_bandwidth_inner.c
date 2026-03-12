#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "buy_it_now_server_order_200_response_bandwidth_inner.h"



static buy_it_now_server_order_200_response_bandwidth_inner_t *buy_it_now_server_order_200_response_bandwidth_inner_create_internal(
    char *id,
    char *short_desc,
    char *long_desc,
    char *monthly_price
    ) {
    buy_it_now_server_order_200_response_bandwidth_inner_t *buy_it_now_server_order_200_response_bandwidth_inner_local_var = malloc(sizeof(buy_it_now_server_order_200_response_bandwidth_inner_t));
    if (!buy_it_now_server_order_200_response_bandwidth_inner_local_var) {
        return NULL;
    }
    buy_it_now_server_order_200_response_bandwidth_inner_local_var->id = id;
    buy_it_now_server_order_200_response_bandwidth_inner_local_var->short_desc = short_desc;
    buy_it_now_server_order_200_response_bandwidth_inner_local_var->long_desc = long_desc;
    buy_it_now_server_order_200_response_bandwidth_inner_local_var->monthly_price = monthly_price;

    buy_it_now_server_order_200_response_bandwidth_inner_local_var->_library_owned = 1;
    return buy_it_now_server_order_200_response_bandwidth_inner_local_var;
}

__attribute__((deprecated)) buy_it_now_server_order_200_response_bandwidth_inner_t *buy_it_now_server_order_200_response_bandwidth_inner_create(
    char *id,
    char *short_desc,
    char *long_desc,
    char *monthly_price
    ) {
    return buy_it_now_server_order_200_response_bandwidth_inner_create_internal (
        id,
        short_desc,
        long_desc,
        monthly_price
        );
}

void buy_it_now_server_order_200_response_bandwidth_inner_free(buy_it_now_server_order_200_response_bandwidth_inner_t *buy_it_now_server_order_200_response_bandwidth_inner) {
    if(NULL == buy_it_now_server_order_200_response_bandwidth_inner){
        return ;
    }
    if(buy_it_now_server_order_200_response_bandwidth_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "buy_it_now_server_order_200_response_bandwidth_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (buy_it_now_server_order_200_response_bandwidth_inner->id) {
        free(buy_it_now_server_order_200_response_bandwidth_inner->id);
        buy_it_now_server_order_200_response_bandwidth_inner->id = NULL;
    }
    if (buy_it_now_server_order_200_response_bandwidth_inner->short_desc) {
        free(buy_it_now_server_order_200_response_bandwidth_inner->short_desc);
        buy_it_now_server_order_200_response_bandwidth_inner->short_desc = NULL;
    }
    if (buy_it_now_server_order_200_response_bandwidth_inner->long_desc) {
        free(buy_it_now_server_order_200_response_bandwidth_inner->long_desc);
        buy_it_now_server_order_200_response_bandwidth_inner->long_desc = NULL;
    }
    if (buy_it_now_server_order_200_response_bandwidth_inner->monthly_price) {
        free(buy_it_now_server_order_200_response_bandwidth_inner->monthly_price);
        buy_it_now_server_order_200_response_bandwidth_inner->monthly_price = NULL;
    }
    free(buy_it_now_server_order_200_response_bandwidth_inner);
}

cJSON *buy_it_now_server_order_200_response_bandwidth_inner_convertToJSON(buy_it_now_server_order_200_response_bandwidth_inner_t *buy_it_now_server_order_200_response_bandwidth_inner) {
    cJSON *item = cJSON_CreateObject();

    // buy_it_now_server_order_200_response_bandwidth_inner->id
    if(buy_it_now_server_order_200_response_bandwidth_inner->id) {
    if(cJSON_AddStringToObject(item, "id", buy_it_now_server_order_200_response_bandwidth_inner->id) == NULL) {
    goto fail; //String
    }
    }


    // buy_it_now_server_order_200_response_bandwidth_inner->short_desc
    if(buy_it_now_server_order_200_response_bandwidth_inner->short_desc) {
    if(cJSON_AddStringToObject(item, "short_desc", buy_it_now_server_order_200_response_bandwidth_inner->short_desc) == NULL) {
    goto fail; //String
    }
    }


    // buy_it_now_server_order_200_response_bandwidth_inner->long_desc
    if(buy_it_now_server_order_200_response_bandwidth_inner->long_desc) {
    if(cJSON_AddStringToObject(item, "long_desc", buy_it_now_server_order_200_response_bandwidth_inner->long_desc) == NULL) {
    goto fail; //String
    }
    }


    // buy_it_now_server_order_200_response_bandwidth_inner->monthly_price
    if(buy_it_now_server_order_200_response_bandwidth_inner->monthly_price) {
    if(cJSON_AddStringToObject(item, "monthly_price", buy_it_now_server_order_200_response_bandwidth_inner->monthly_price) == NULL) {
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

buy_it_now_server_order_200_response_bandwidth_inner_t *buy_it_now_server_order_200_response_bandwidth_inner_parseFromJSON(cJSON *buy_it_now_server_order_200_response_bandwidth_innerJSON){

    buy_it_now_server_order_200_response_bandwidth_inner_t *buy_it_now_server_order_200_response_bandwidth_inner_local_var = NULL;

    // buy_it_now_server_order_200_response_bandwidth_inner->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(buy_it_now_server_order_200_response_bandwidth_innerJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // buy_it_now_server_order_200_response_bandwidth_inner->short_desc
    cJSON *short_desc = cJSON_GetObjectItemCaseSensitive(buy_it_now_server_order_200_response_bandwidth_innerJSON, "short_desc");
    if (cJSON_IsNull(short_desc)) {
        short_desc = NULL;
    }
    if (short_desc) { 
    if(!cJSON_IsString(short_desc) && !cJSON_IsNull(short_desc))
    {
    goto end; //String
    }
    }

    // buy_it_now_server_order_200_response_bandwidth_inner->long_desc
    cJSON *long_desc = cJSON_GetObjectItemCaseSensitive(buy_it_now_server_order_200_response_bandwidth_innerJSON, "long_desc");
    if (cJSON_IsNull(long_desc)) {
        long_desc = NULL;
    }
    if (long_desc) { 
    if(!cJSON_IsString(long_desc) && !cJSON_IsNull(long_desc))
    {
    goto end; //String
    }
    }

    // buy_it_now_server_order_200_response_bandwidth_inner->monthly_price
    cJSON *monthly_price = cJSON_GetObjectItemCaseSensitive(buy_it_now_server_order_200_response_bandwidth_innerJSON, "monthly_price");
    if (cJSON_IsNull(monthly_price)) {
        monthly_price = NULL;
    }
    if (monthly_price) { 
    if(!cJSON_IsString(monthly_price) && !cJSON_IsNull(monthly_price))
    {
    goto end; //String
    }
    }


    buy_it_now_server_order_200_response_bandwidth_inner_local_var = buy_it_now_server_order_200_response_bandwidth_inner_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        short_desc && !cJSON_IsNull(short_desc) ? strdup(short_desc->valuestring) : NULL,
        long_desc && !cJSON_IsNull(long_desc) ? strdup(long_desc->valuestring) : NULL,
        monthly_price && !cJSON_IsNull(monthly_price) ? strdup(monthly_price->valuestring) : NULL
        );

    return buy_it_now_server_order_200_response_bandwidth_inner_local_var;
end:
    return NULL;

}
