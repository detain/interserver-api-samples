#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "buy_it_now_server_order_200_response_cp_inner.h"



static buy_it_now_server_order_200_response_cp_inner_t *buy_it_now_server_order_200_response_cp_inner_create_internal(
    char *id,
    char *short_desc,
    char *long_desc,
    char *os_type,
    char *monthly_price
    ) {
    buy_it_now_server_order_200_response_cp_inner_t *buy_it_now_server_order_200_response_cp_inner_local_var = malloc(sizeof(buy_it_now_server_order_200_response_cp_inner_t));
    if (!buy_it_now_server_order_200_response_cp_inner_local_var) {
        return NULL;
    }
    memset(buy_it_now_server_order_200_response_cp_inner_local_var, 0, sizeof(buy_it_now_server_order_200_response_cp_inner_t));
    buy_it_now_server_order_200_response_cp_inner_local_var->_library_owned = 1;
    buy_it_now_server_order_200_response_cp_inner_local_var->id = id;
    buy_it_now_server_order_200_response_cp_inner_local_var->short_desc = short_desc;
    buy_it_now_server_order_200_response_cp_inner_local_var->long_desc = long_desc;
    buy_it_now_server_order_200_response_cp_inner_local_var->os_type = os_type;
    buy_it_now_server_order_200_response_cp_inner_local_var->monthly_price = monthly_price;
    return buy_it_now_server_order_200_response_cp_inner_local_var;
}

__attribute__((deprecated)) buy_it_now_server_order_200_response_cp_inner_t *buy_it_now_server_order_200_response_cp_inner_create(
    char *id,
    char *short_desc,
    char *long_desc,
    char *os_type,
    char *monthly_price
    ) {
    buy_it_now_server_order_200_response_cp_inner_t *result = buy_it_now_server_order_200_response_cp_inner_create_internal (
        id,
        short_desc,
        long_desc,
        os_type,
        monthly_price
        );
    if (!result) {
    }
    return result;
}

void buy_it_now_server_order_200_response_cp_inner_free(buy_it_now_server_order_200_response_cp_inner_t *buy_it_now_server_order_200_response_cp_inner) {
    if(NULL == buy_it_now_server_order_200_response_cp_inner){
        return ;
    }
    if(buy_it_now_server_order_200_response_cp_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "buy_it_now_server_order_200_response_cp_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (buy_it_now_server_order_200_response_cp_inner->id) {
        free(buy_it_now_server_order_200_response_cp_inner->id);
        buy_it_now_server_order_200_response_cp_inner->id = NULL;
    }
    if (buy_it_now_server_order_200_response_cp_inner->short_desc) {
        free(buy_it_now_server_order_200_response_cp_inner->short_desc);
        buy_it_now_server_order_200_response_cp_inner->short_desc = NULL;
    }
    if (buy_it_now_server_order_200_response_cp_inner->long_desc) {
        free(buy_it_now_server_order_200_response_cp_inner->long_desc);
        buy_it_now_server_order_200_response_cp_inner->long_desc = NULL;
    }
    if (buy_it_now_server_order_200_response_cp_inner->os_type) {
        free(buy_it_now_server_order_200_response_cp_inner->os_type);
        buy_it_now_server_order_200_response_cp_inner->os_type = NULL;
    }
    if (buy_it_now_server_order_200_response_cp_inner->monthly_price) {
        free(buy_it_now_server_order_200_response_cp_inner->monthly_price);
        buy_it_now_server_order_200_response_cp_inner->monthly_price = NULL;
    }
    free(buy_it_now_server_order_200_response_cp_inner);
}

cJSON *buy_it_now_server_order_200_response_cp_inner_convertToJSON(buy_it_now_server_order_200_response_cp_inner_t *buy_it_now_server_order_200_response_cp_inner) {
    cJSON *item = cJSON_CreateObject();

    // buy_it_now_server_order_200_response_cp_inner->id
    if(buy_it_now_server_order_200_response_cp_inner->id) {
    if(cJSON_AddStringToObject(item, "id", buy_it_now_server_order_200_response_cp_inner->id) == NULL) {
    goto fail; //String
    }
    }


    // buy_it_now_server_order_200_response_cp_inner->short_desc
    if(buy_it_now_server_order_200_response_cp_inner->short_desc) {
    if(cJSON_AddStringToObject(item, "short_desc", buy_it_now_server_order_200_response_cp_inner->short_desc) == NULL) {
    goto fail; //String
    }
    }


    // buy_it_now_server_order_200_response_cp_inner->long_desc
    if(buy_it_now_server_order_200_response_cp_inner->long_desc) {
    if(cJSON_AddStringToObject(item, "long_desc", buy_it_now_server_order_200_response_cp_inner->long_desc) == NULL) {
    goto fail; //String
    }
    }


    // buy_it_now_server_order_200_response_cp_inner->os_type
    if(buy_it_now_server_order_200_response_cp_inner->os_type) {
    if(cJSON_AddStringToObject(item, "os_type", buy_it_now_server_order_200_response_cp_inner->os_type) == NULL) {
    goto fail; //String
    }
    }


    // buy_it_now_server_order_200_response_cp_inner->monthly_price
    if(buy_it_now_server_order_200_response_cp_inner->monthly_price) {
    if(cJSON_AddStringToObject(item, "monthly_price", buy_it_now_server_order_200_response_cp_inner->monthly_price) == NULL) {
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

buy_it_now_server_order_200_response_cp_inner_t *buy_it_now_server_order_200_response_cp_inner_parseFromJSON(cJSON *buy_it_now_server_order_200_response_cp_innerJSON){

    buy_it_now_server_order_200_response_cp_inner_t *buy_it_now_server_order_200_response_cp_inner_local_var = NULL;

    char *id_local_str = NULL;

    char *short_desc_local_str = NULL;

    char *long_desc_local_str = NULL;

    char *os_type_local_str = NULL;

    char *monthly_price_local_str = NULL;

    // buy_it_now_server_order_200_response_cp_inner->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(buy_it_now_server_order_200_response_cp_innerJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // buy_it_now_server_order_200_response_cp_inner->short_desc
    cJSON *short_desc = cJSON_GetObjectItemCaseSensitive(buy_it_now_server_order_200_response_cp_innerJSON, "short_desc");
    if (cJSON_IsNull(short_desc)) {
        short_desc = NULL;
    }
    if (short_desc) { 
    if(!cJSON_IsString(short_desc) && !cJSON_IsNull(short_desc))
    {
    goto end; //String
    }
    }

    // buy_it_now_server_order_200_response_cp_inner->long_desc
    cJSON *long_desc = cJSON_GetObjectItemCaseSensitive(buy_it_now_server_order_200_response_cp_innerJSON, "long_desc");
    if (cJSON_IsNull(long_desc)) {
        long_desc = NULL;
    }
    if (long_desc) { 
    if(!cJSON_IsString(long_desc) && !cJSON_IsNull(long_desc))
    {
    goto end; //String
    }
    }

    // buy_it_now_server_order_200_response_cp_inner->os_type
    cJSON *os_type = cJSON_GetObjectItemCaseSensitive(buy_it_now_server_order_200_response_cp_innerJSON, "os_type");
    if (cJSON_IsNull(os_type)) {
        os_type = NULL;
    }
    if (os_type) { 
    if(!cJSON_IsString(os_type) && !cJSON_IsNull(os_type))
    {
    goto end; //String
    }
    }

    // buy_it_now_server_order_200_response_cp_inner->monthly_price
    cJSON *monthly_price = cJSON_GetObjectItemCaseSensitive(buy_it_now_server_order_200_response_cp_innerJSON, "monthly_price");
    if (cJSON_IsNull(monthly_price)) {
        monthly_price = NULL;
    }
    if (monthly_price) { 
    if(!cJSON_IsString(monthly_price) && !cJSON_IsNull(monthly_price))
    {
    goto end; //String
    }
    }


    if (id && !cJSON_IsNull(id)) id_local_str = strdup(id->valuestring);
    if (short_desc && !cJSON_IsNull(short_desc)) short_desc_local_str = strdup(short_desc->valuestring);
    if (long_desc && !cJSON_IsNull(long_desc)) long_desc_local_str = strdup(long_desc->valuestring);
    if (os_type && !cJSON_IsNull(os_type)) os_type_local_str = strdup(os_type->valuestring);
    if (monthly_price && !cJSON_IsNull(monthly_price)) monthly_price_local_str = strdup(monthly_price->valuestring);

    buy_it_now_server_order_200_response_cp_inner_local_var = buy_it_now_server_order_200_response_cp_inner_create_internal (
        id_local_str,
        short_desc_local_str,
        long_desc_local_str,
        os_type_local_str,
        monthly_price_local_str
        );

    if (!buy_it_now_server_order_200_response_cp_inner_local_var) {
        goto end;
    }

    return buy_it_now_server_order_200_response_cp_inner_local_var;
end:
    if (id_local_str) {
        free(id_local_str);
        id_local_str = NULL;
    }
    if (short_desc_local_str) {
        free(short_desc_local_str);
        short_desc_local_str = NULL;
    }
    if (long_desc_local_str) {
        free(long_desc_local_str);
        long_desc_local_str = NULL;
    }
    if (os_type_local_str) {
        free(os_type_local_str);
        os_type_local_str = NULL;
    }
    if (monthly_price_local_str) {
        free(monthly_price_local_str);
        monthly_price_local_str = NULL;
    }
    return NULL;

}
