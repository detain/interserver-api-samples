#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server_order_ip.h"



static server_order_ip_t *server_order_ip_create_internal(
    char *id,
    int price,
    char *img,
    char *short_desc,
    char *long_desc,
    char *qty,
    int monthly_price,
    char *price_display,
    char *monthly_price_display
    ) {
    server_order_ip_t *server_order_ip_local_var = malloc(sizeof(server_order_ip_t));
    if (!server_order_ip_local_var) {
        return NULL;
    }
    server_order_ip_local_var->id = id;
    server_order_ip_local_var->price = price;
    server_order_ip_local_var->img = img;
    server_order_ip_local_var->short_desc = short_desc;
    server_order_ip_local_var->long_desc = long_desc;
    server_order_ip_local_var->qty = qty;
    server_order_ip_local_var->monthly_price = monthly_price;
    server_order_ip_local_var->price_display = price_display;
    server_order_ip_local_var->monthly_price_display = monthly_price_display;

    server_order_ip_local_var->_library_owned = 1;
    return server_order_ip_local_var;
}

__attribute__((deprecated)) server_order_ip_t *server_order_ip_create(
    char *id,
    int price,
    char *img,
    char *short_desc,
    char *long_desc,
    char *qty,
    int monthly_price,
    char *price_display,
    char *monthly_price_display
    ) {
    return server_order_ip_create_internal (
        id,
        price,
        img,
        short_desc,
        long_desc,
        qty,
        monthly_price,
        price_display,
        monthly_price_display
        );
}

void server_order_ip_free(server_order_ip_t *server_order_ip) {
    if(NULL == server_order_ip){
        return ;
    }
    if(server_order_ip->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "server_order_ip_free");
        return ;
    }
    listEntry_t *listEntry;
    if (server_order_ip->id) {
        free(server_order_ip->id);
        server_order_ip->id = NULL;
    }
    if (server_order_ip->img) {
        free(server_order_ip->img);
        server_order_ip->img = NULL;
    }
    if (server_order_ip->short_desc) {
        free(server_order_ip->short_desc);
        server_order_ip->short_desc = NULL;
    }
    if (server_order_ip->long_desc) {
        free(server_order_ip->long_desc);
        server_order_ip->long_desc = NULL;
    }
    if (server_order_ip->qty) {
        free(server_order_ip->qty);
        server_order_ip->qty = NULL;
    }
    if (server_order_ip->price_display) {
        free(server_order_ip->price_display);
        server_order_ip->price_display = NULL;
    }
    if (server_order_ip->monthly_price_display) {
        free(server_order_ip->monthly_price_display);
        server_order_ip->monthly_price_display = NULL;
    }
    free(server_order_ip);
}

cJSON *server_order_ip_convertToJSON(server_order_ip_t *server_order_ip) {
    cJSON *item = cJSON_CreateObject();

    // server_order_ip->id
    if(server_order_ip->id) {
    if(cJSON_AddStringToObject(item, "id", server_order_ip->id) == NULL) {
    goto fail; //String
    }
    }


    // server_order_ip->price
    if(server_order_ip->price) {
    if(cJSON_AddNumberToObject(item, "price", server_order_ip->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // server_order_ip->img
    if(server_order_ip->img) {
    if(cJSON_AddStringToObject(item, "img", server_order_ip->img) == NULL) {
    goto fail; //String
    }
    }


    // server_order_ip->short_desc
    if(server_order_ip->short_desc) {
    if(cJSON_AddStringToObject(item, "short_desc", server_order_ip->short_desc) == NULL) {
    goto fail; //String
    }
    }


    // server_order_ip->long_desc
    if(server_order_ip->long_desc) {
    if(cJSON_AddStringToObject(item, "long_desc", server_order_ip->long_desc) == NULL) {
    goto fail; //String
    }
    }


    // server_order_ip->qty
    if(server_order_ip->qty) {
    if(cJSON_AddStringToObject(item, "qty", server_order_ip->qty) == NULL) {
    goto fail; //String
    }
    }


    // server_order_ip->monthly_price
    if(server_order_ip->monthly_price) {
    if(cJSON_AddNumberToObject(item, "monthly_price", server_order_ip->monthly_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // server_order_ip->price_display
    if(server_order_ip->price_display) {
    if(cJSON_AddStringToObject(item, "price_display", server_order_ip->price_display) == NULL) {
    goto fail; //String
    }
    }


    // server_order_ip->monthly_price_display
    if(server_order_ip->monthly_price_display) {
    if(cJSON_AddStringToObject(item, "monthly_price_display", server_order_ip->monthly_price_display) == NULL) {
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

server_order_ip_t *server_order_ip_parseFromJSON(cJSON *server_order_ipJSON){

    server_order_ip_t *server_order_ip_local_var = NULL;

    // server_order_ip->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(server_order_ipJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // server_order_ip->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(server_order_ipJSON, "price");
    if (cJSON_IsNull(price)) {
        price = NULL;
    }
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }

    // server_order_ip->img
    cJSON *img = cJSON_GetObjectItemCaseSensitive(server_order_ipJSON, "img");
    if (cJSON_IsNull(img)) {
        img = NULL;
    }
    if (img) { 
    if(!cJSON_IsString(img) && !cJSON_IsNull(img))
    {
    goto end; //String
    }
    }

    // server_order_ip->short_desc
    cJSON *short_desc = cJSON_GetObjectItemCaseSensitive(server_order_ipJSON, "short_desc");
    if (cJSON_IsNull(short_desc)) {
        short_desc = NULL;
    }
    if (short_desc) { 
    if(!cJSON_IsString(short_desc) && !cJSON_IsNull(short_desc))
    {
    goto end; //String
    }
    }

    // server_order_ip->long_desc
    cJSON *long_desc = cJSON_GetObjectItemCaseSensitive(server_order_ipJSON, "long_desc");
    if (cJSON_IsNull(long_desc)) {
        long_desc = NULL;
    }
    if (long_desc) { 
    if(!cJSON_IsString(long_desc) && !cJSON_IsNull(long_desc))
    {
    goto end; //String
    }
    }

    // server_order_ip->qty
    cJSON *qty = cJSON_GetObjectItemCaseSensitive(server_order_ipJSON, "qty");
    if (cJSON_IsNull(qty)) {
        qty = NULL;
    }
    if (qty) { 
    if(!cJSON_IsString(qty) && !cJSON_IsNull(qty))
    {
    goto end; //String
    }
    }

    // server_order_ip->monthly_price
    cJSON *monthly_price = cJSON_GetObjectItemCaseSensitive(server_order_ipJSON, "monthly_price");
    if (cJSON_IsNull(monthly_price)) {
        monthly_price = NULL;
    }
    if (monthly_price) { 
    if(!cJSON_IsNumber(monthly_price))
    {
    goto end; //Numeric
    }
    }

    // server_order_ip->price_display
    cJSON *price_display = cJSON_GetObjectItemCaseSensitive(server_order_ipJSON, "price_display");
    if (cJSON_IsNull(price_display)) {
        price_display = NULL;
    }
    if (price_display) { 
    if(!cJSON_IsString(price_display) && !cJSON_IsNull(price_display))
    {
    goto end; //String
    }
    }

    // server_order_ip->monthly_price_display
    cJSON *monthly_price_display = cJSON_GetObjectItemCaseSensitive(server_order_ipJSON, "monthly_price_display");
    if (cJSON_IsNull(monthly_price_display)) {
        monthly_price_display = NULL;
    }
    if (monthly_price_display) { 
    if(!cJSON_IsString(monthly_price_display) && !cJSON_IsNull(monthly_price_display))
    {
    goto end; //String
    }
    }


    server_order_ip_local_var = server_order_ip_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        price ? price->valuedouble : 0,
        img && !cJSON_IsNull(img) ? strdup(img->valuestring) : NULL,
        short_desc && !cJSON_IsNull(short_desc) ? strdup(short_desc->valuestring) : NULL,
        long_desc && !cJSON_IsNull(long_desc) ? strdup(long_desc->valuestring) : NULL,
        qty && !cJSON_IsNull(qty) ? strdup(qty->valuestring) : NULL,
        monthly_price ? monthly_price->valuedouble : 0,
        price_display && !cJSON_IsNull(price_display) ? strdup(price_display->valuestring) : NULL,
        monthly_price_display && !cJSON_IsNull(monthly_price_display) ? strdup(monthly_price_display->valuestring) : NULL
        );

    return server_order_ip_local_var;
end:
    return NULL;

}
