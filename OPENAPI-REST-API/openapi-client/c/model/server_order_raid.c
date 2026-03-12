#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server_order_raid.h"



static server_order_raid_t *server_order_raid_create_internal(
    char *id,
    int price,
    char *img,
    char *short_desc,
    char *long_desc,
    int monthly_price,
    char *active,
    char *price_display,
    char *monthly_price_display
    ) {
    server_order_raid_t *server_order_raid_local_var = malloc(sizeof(server_order_raid_t));
    if (!server_order_raid_local_var) {
        return NULL;
    }
    server_order_raid_local_var->id = id;
    server_order_raid_local_var->price = price;
    server_order_raid_local_var->img = img;
    server_order_raid_local_var->short_desc = short_desc;
    server_order_raid_local_var->long_desc = long_desc;
    server_order_raid_local_var->monthly_price = monthly_price;
    server_order_raid_local_var->active = active;
    server_order_raid_local_var->price_display = price_display;
    server_order_raid_local_var->monthly_price_display = monthly_price_display;

    server_order_raid_local_var->_library_owned = 1;
    return server_order_raid_local_var;
}

__attribute__((deprecated)) server_order_raid_t *server_order_raid_create(
    char *id,
    int price,
    char *img,
    char *short_desc,
    char *long_desc,
    int monthly_price,
    char *active,
    char *price_display,
    char *monthly_price_display
    ) {
    return server_order_raid_create_internal (
        id,
        price,
        img,
        short_desc,
        long_desc,
        monthly_price,
        active,
        price_display,
        monthly_price_display
        );
}

void server_order_raid_free(server_order_raid_t *server_order_raid) {
    if(NULL == server_order_raid){
        return ;
    }
    if(server_order_raid->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "server_order_raid_free");
        return ;
    }
    listEntry_t *listEntry;
    if (server_order_raid->id) {
        free(server_order_raid->id);
        server_order_raid->id = NULL;
    }
    if (server_order_raid->img) {
        free(server_order_raid->img);
        server_order_raid->img = NULL;
    }
    if (server_order_raid->short_desc) {
        free(server_order_raid->short_desc);
        server_order_raid->short_desc = NULL;
    }
    if (server_order_raid->long_desc) {
        free(server_order_raid->long_desc);
        server_order_raid->long_desc = NULL;
    }
    if (server_order_raid->active) {
        free(server_order_raid->active);
        server_order_raid->active = NULL;
    }
    if (server_order_raid->price_display) {
        free(server_order_raid->price_display);
        server_order_raid->price_display = NULL;
    }
    if (server_order_raid->monthly_price_display) {
        free(server_order_raid->monthly_price_display);
        server_order_raid->monthly_price_display = NULL;
    }
    free(server_order_raid);
}

cJSON *server_order_raid_convertToJSON(server_order_raid_t *server_order_raid) {
    cJSON *item = cJSON_CreateObject();

    // server_order_raid->id
    if(server_order_raid->id) {
    if(cJSON_AddStringToObject(item, "id", server_order_raid->id) == NULL) {
    goto fail; //String
    }
    }


    // server_order_raid->price
    if(server_order_raid->price) {
    if(cJSON_AddNumberToObject(item, "price", server_order_raid->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // server_order_raid->img
    if(server_order_raid->img) {
    if(cJSON_AddStringToObject(item, "img", server_order_raid->img) == NULL) {
    goto fail; //String
    }
    }


    // server_order_raid->short_desc
    if(server_order_raid->short_desc) {
    if(cJSON_AddStringToObject(item, "short_desc", server_order_raid->short_desc) == NULL) {
    goto fail; //String
    }
    }


    // server_order_raid->long_desc
    if(server_order_raid->long_desc) {
    if(cJSON_AddStringToObject(item, "long_desc", server_order_raid->long_desc) == NULL) {
    goto fail; //String
    }
    }


    // server_order_raid->monthly_price
    if(server_order_raid->monthly_price) {
    if(cJSON_AddNumberToObject(item, "monthly_price", server_order_raid->monthly_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // server_order_raid->active
    if(server_order_raid->active) {
    if(cJSON_AddStringToObject(item, "active", server_order_raid->active) == NULL) {
    goto fail; //String
    }
    }


    // server_order_raid->price_display
    if(server_order_raid->price_display) {
    if(cJSON_AddStringToObject(item, "price_display", server_order_raid->price_display) == NULL) {
    goto fail; //String
    }
    }


    // server_order_raid->monthly_price_display
    if(server_order_raid->monthly_price_display) {
    if(cJSON_AddStringToObject(item, "monthly_price_display", server_order_raid->monthly_price_display) == NULL) {
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

server_order_raid_t *server_order_raid_parseFromJSON(cJSON *server_order_raidJSON){

    server_order_raid_t *server_order_raid_local_var = NULL;

    // server_order_raid->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(server_order_raidJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // server_order_raid->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(server_order_raidJSON, "price");
    if (cJSON_IsNull(price)) {
        price = NULL;
    }
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }

    // server_order_raid->img
    cJSON *img = cJSON_GetObjectItemCaseSensitive(server_order_raidJSON, "img");
    if (cJSON_IsNull(img)) {
        img = NULL;
    }
    if (img) { 
    if(!cJSON_IsString(img) && !cJSON_IsNull(img))
    {
    goto end; //String
    }
    }

    // server_order_raid->short_desc
    cJSON *short_desc = cJSON_GetObjectItemCaseSensitive(server_order_raidJSON, "short_desc");
    if (cJSON_IsNull(short_desc)) {
        short_desc = NULL;
    }
    if (short_desc) { 
    if(!cJSON_IsString(short_desc) && !cJSON_IsNull(short_desc))
    {
    goto end; //String
    }
    }

    // server_order_raid->long_desc
    cJSON *long_desc = cJSON_GetObjectItemCaseSensitive(server_order_raidJSON, "long_desc");
    if (cJSON_IsNull(long_desc)) {
        long_desc = NULL;
    }
    if (long_desc) { 
    if(!cJSON_IsString(long_desc) && !cJSON_IsNull(long_desc))
    {
    goto end; //String
    }
    }

    // server_order_raid->monthly_price
    cJSON *monthly_price = cJSON_GetObjectItemCaseSensitive(server_order_raidJSON, "monthly_price");
    if (cJSON_IsNull(monthly_price)) {
        monthly_price = NULL;
    }
    if (monthly_price) { 
    if(!cJSON_IsNumber(monthly_price))
    {
    goto end; //Numeric
    }
    }

    // server_order_raid->active
    cJSON *active = cJSON_GetObjectItemCaseSensitive(server_order_raidJSON, "active");
    if (cJSON_IsNull(active)) {
        active = NULL;
    }
    if (active) { 
    if(!cJSON_IsString(active) && !cJSON_IsNull(active))
    {
    goto end; //String
    }
    }

    // server_order_raid->price_display
    cJSON *price_display = cJSON_GetObjectItemCaseSensitive(server_order_raidJSON, "price_display");
    if (cJSON_IsNull(price_display)) {
        price_display = NULL;
    }
    if (price_display) { 
    if(!cJSON_IsString(price_display) && !cJSON_IsNull(price_display))
    {
    goto end; //String
    }
    }

    // server_order_raid->monthly_price_display
    cJSON *monthly_price_display = cJSON_GetObjectItemCaseSensitive(server_order_raidJSON, "monthly_price_display");
    if (cJSON_IsNull(monthly_price_display)) {
        monthly_price_display = NULL;
    }
    if (monthly_price_display) { 
    if(!cJSON_IsString(monthly_price_display) && !cJSON_IsNull(monthly_price_display))
    {
    goto end; //String
    }
    }


    server_order_raid_local_var = server_order_raid_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        price ? price->valuedouble : 0,
        img && !cJSON_IsNull(img) ? strdup(img->valuestring) : NULL,
        short_desc && !cJSON_IsNull(short_desc) ? strdup(short_desc->valuestring) : NULL,
        long_desc && !cJSON_IsNull(long_desc) ? strdup(long_desc->valuestring) : NULL,
        monthly_price ? monthly_price->valuedouble : 0,
        active && !cJSON_IsNull(active) ? strdup(active->valuestring) : NULL,
        price_display && !cJSON_IsNull(price_display) ? strdup(price_display->valuestring) : NULL,
        monthly_price_display && !cJSON_IsNull(monthly_price_display) ? strdup(monthly_price_display->valuestring) : NULL
        );

    return server_order_raid_local_var;
end:
    return NULL;

}
