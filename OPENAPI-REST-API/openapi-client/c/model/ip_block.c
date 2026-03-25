#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ip_block.h"



static ip_block_t *ip_block_create_internal(
    int *id,
    char *short_desc,
    char *qty,
    double *monthly_price
    ) {
    ip_block_t *ip_block_local_var = malloc(sizeof(ip_block_t));
    if (!ip_block_local_var) {
        return NULL;
    }
    memset(ip_block_local_var, 0, sizeof(ip_block_t));
    ip_block_local_var->_library_owned = 1;
    ip_block_local_var->id = id;
    ip_block_local_var->short_desc = short_desc;
    ip_block_local_var->qty = qty;
    ip_block_local_var->monthly_price = monthly_price;
    return ip_block_local_var;
}

__attribute__((deprecated)) ip_block_t *ip_block_create(
    int *id,
    char *short_desc,
    char *qty,
    double *monthly_price
    ) {
    int *id_copy = NULL;
    if (id) {
        id_copy = malloc(sizeof(int));
        if (id_copy) *id_copy = *id;
    }
    double *monthly_price_copy = NULL;
    if (monthly_price) {
        monthly_price_copy = malloc(sizeof(double));
        if (monthly_price_copy) *monthly_price_copy = *monthly_price;
    }
    ip_block_t *result = ip_block_create_internal (
        id_copy,
        short_desc,
        qty,
        monthly_price_copy
        );
    if (!result) {
        free(id_copy);
        free(monthly_price_copy);
    }
    return result;
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
    if (ip_block->id) {
        free(ip_block->id);
        ip_block->id = NULL;
    }
    if (ip_block->short_desc) {
        free(ip_block->short_desc);
        ip_block->short_desc = NULL;
    }
    if (ip_block->qty) {
        free(ip_block->qty);
        ip_block->qty = NULL;
    }
    if (ip_block->monthly_price) {
        free(ip_block->monthly_price);
        ip_block->monthly_price = NULL;
    }
    free(ip_block);
}

cJSON *ip_block_convertToJSON(ip_block_t *ip_block) {
    cJSON *item = cJSON_CreateObject();

    // ip_block->id
    if(ip_block->id) {
    if(cJSON_AddNumberToObject(item, "id", *ip_block->id) == NULL) {
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
    if(cJSON_AddNumberToObject(item, "monthly_price", *ip_block->monthly_price) == NULL) {
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

    // define the local variable for ip_block->id
    int *id_local_var = NULL;

    char *short_desc_local_str = NULL;

    char *qty_local_str = NULL;

    // define the local variable for ip_block->monthly_price
    double *monthly_price_local_var = NULL;

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
    id_local_var = malloc(sizeof(int));
    if(!id_local_var)
    {
        goto end;
    }
    *id_local_var = id->valuedouble;
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
    monthly_price_local_var = malloc(sizeof(double));
    if(!monthly_price_local_var)
    {
        goto end;
    }
    *monthly_price_local_var = monthly_price->valuedouble;
    }


    if (short_desc && !cJSON_IsNull(short_desc)) short_desc_local_str = strdup(short_desc->valuestring);
    if (qty && !cJSON_IsNull(qty)) qty_local_str = strdup(qty->valuestring);

    ip_block_local_var = ip_block_create_internal (
        id_local_var,
        short_desc_local_str,
        qty_local_str,
        monthly_price_local_var
        );

    if (!ip_block_local_var) {
        goto end;
    }

    return ip_block_local_var;
end:
    if (id_local_var) {
        free(id_local_var);
        id_local_var = NULL;
    }
    if (short_desc_local_str) {
        free(short_desc_local_str);
        short_desc_local_str = NULL;
    }
    if (qty_local_str) {
        free(qty_local_str);
        qty_local_str = NULL;
    }
    if (monthly_price_local_var) {
        free(monthly_price_local_var);
        monthly_price_local_var = NULL;
    }
    return NULL;

}
