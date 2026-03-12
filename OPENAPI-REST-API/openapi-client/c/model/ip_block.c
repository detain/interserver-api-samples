#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ip_block.h"



static ip_block_t *ip_block_create_internal(
    int id,
    char *short_desc,
    char *qty,
    double monthly_price
    ) {
    ip_block_t *ip_block_local_var = malloc(sizeof(ip_block_t));
    if (!ip_block_local_var) {
        return NULL;
    }
    ip_block_local_var->id = id;
    ip_block_local_var->short_desc = short_desc;
    ip_block_local_var->qty = qty;
    ip_block_local_var->monthly_price = monthly_price;

    ip_block_local_var->_library_owned = 1;
    return ip_block_local_var;
}

__attribute__((deprecated)) ip_block_t *ip_block_create(
    int id,
    char *short_desc,
    char *qty,
    double monthly_price
    ) {
    return ip_block_create_internal (
        id,
        short_desc,
        qty,
        monthly_price
        );
}

void ip_block_free(ip_block_t *ip_block) {
    if(NULL == ip_block){
        return ;
    }
    if(ip_block->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ip_block_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ip_block->short_desc) {
        free(ip_block->short_desc);
        ip_block->short_desc = NULL;
    }
    if (ip_block->qty) {
        free(ip_block->qty);
        ip_block->qty = NULL;
    }
    free(ip_block);
}

cJSON *ip_block_convertToJSON(ip_block_t *ip_block) {
    cJSON *item = cJSON_CreateObject();

    // ip_block->id
    if(ip_block->id) {
    if(cJSON_AddNumberToObject(item, "id", ip_block->id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ip_block->short_desc
    if(ip_block->short_desc) {
    if(cJSON_AddStringToObject(item, "short_desc", ip_block->short_desc) == NULL) {
    goto fail; //String
    }
    }


    // ip_block->qty
    if(ip_block->qty) {
    if(cJSON_AddStringToObject(item, "qty", ip_block->qty) == NULL) {
    goto fail; //String
    }
    }


    // ip_block->monthly_price
    if(ip_block->monthly_price) {
    if(cJSON_AddNumberToObject(item, "monthly_price", ip_block->monthly_price) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ip_block_t *ip_block_parseFromJSON(cJSON *ip_blockJSON){

    ip_block_t *ip_block_local_var = NULL;

    // ip_block->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(ip_blockJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    }

    // ip_block->short_desc
    cJSON *short_desc = cJSON_GetObjectItemCaseSensitive(ip_blockJSON, "short_desc");
    if (cJSON_IsNull(short_desc)) {
        short_desc = NULL;
    }
    if (short_desc) { 
    if(!cJSON_IsString(short_desc) && !cJSON_IsNull(short_desc))
    {
    goto end; //String
    }
    }

    // ip_block->qty
    cJSON *qty = cJSON_GetObjectItemCaseSensitive(ip_blockJSON, "qty");
    if (cJSON_IsNull(qty)) {
        qty = NULL;
    }
    if (qty) { 
    if(!cJSON_IsString(qty) && !cJSON_IsNull(qty))
    {
    goto end; //String
    }
    }

    // ip_block->monthly_price
    cJSON *monthly_price = cJSON_GetObjectItemCaseSensitive(ip_blockJSON, "monthly_price");
    if (cJSON_IsNull(monthly_price)) {
        monthly_price = NULL;
    }
    if (monthly_price) { 
    if(!cJSON_IsNumber(monthly_price))
    {
    goto end; //Numeric
    }
    }


    ip_block_local_var = ip_block_create_internal (
        id ? id->valuedouble : 0,
        short_desc && !cJSON_IsNull(short_desc) ? strdup(short_desc->valuestring) : NULL,
        qty && !cJSON_IsNull(qty) ? strdup(qty->valuestring) : NULL,
        monthly_price ? monthly_price->valuedouble : 0
        );

    return ip_block_local_var;
end:
    return NULL;

}
