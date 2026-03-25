#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server_order_memory.h"



static server_order_memory_t *server_order_memory_create_internal(
    char *id,
    char *price,
    char *img,
    char *short_desc,
    char *long_desc,
    char *manu,
    char *size,
    char *type,
    char *hidden,
    int *monthly_price,
    char *drive_type,
    char *monthly_price_display
    ) {
    server_order_memory_t *server_order_memory_local_var = malloc(sizeof(server_order_memory_t));
    if (!server_order_memory_local_var) {
        return NULL;
    }
    memset(server_order_memory_local_var, 0, sizeof(server_order_memory_t));
    server_order_memory_local_var->_library_owned = 1;
    server_order_memory_local_var->id = id;
    server_order_memory_local_var->price = price;
    server_order_memory_local_var->img = img;
    server_order_memory_local_var->short_desc = short_desc;
    server_order_memory_local_var->long_desc = long_desc;
    server_order_memory_local_var->manu = manu;
    server_order_memory_local_var->size = size;
    server_order_memory_local_var->type = type;
    server_order_memory_local_var->hidden = hidden;
    server_order_memory_local_var->monthly_price = monthly_price;
    server_order_memory_local_var->drive_type = drive_type;
    server_order_memory_local_var->monthly_price_display = monthly_price_display;
    return server_order_memory_local_var;
}

__attribute__((deprecated)) server_order_memory_t *server_order_memory_create(
    char *id,
    char *price,
    char *img,
    char *short_desc,
    char *long_desc,
    char *manu,
    char *size,
    char *type,
    char *hidden,
    int *monthly_price,
    char *drive_type,
    char *monthly_price_display
    ) {
    int *monthly_price_copy = NULL;
    if (monthly_price) {
        monthly_price_copy = malloc(sizeof(int));
        if (monthly_price_copy) *monthly_price_copy = *monthly_price;
    }
    server_order_memory_t *result = server_order_memory_create_internal (
        id,
        price,
        img,
        short_desc,
        long_desc,
        manu,
        size,
        type,
        hidden,
        monthly_price_copy,
        drive_type,
        monthly_price_display
        );
    if (!result) {
        free(monthly_price_copy);
    }
    return result;
}

void server_order_memory_free(server_order_memory_t *server_order_memory) {
    if(NULL == server_order_memory){
        return ;
    }
    if(server_order_memory->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "server_order_memory_free");
        return ;
    }
    listEntry_t *listEntry;
    if (server_order_memory->id) {
        free(server_order_memory->id);
        server_order_memory->id = NULL;
    }
    if (server_order_memory->price) {
        free(server_order_memory->price);
        server_order_memory->price = NULL;
    }
    if (server_order_memory->img) {
        free(server_order_memory->img);
        server_order_memory->img = NULL;
    }
    if (server_order_memory->short_desc) {
        free(server_order_memory->short_desc);
        server_order_memory->short_desc = NULL;
    }
    if (server_order_memory->long_desc) {
        free(server_order_memory->long_desc);
        server_order_memory->long_desc = NULL;
    }
    if (server_order_memory->manu) {
        free(server_order_memory->manu);
        server_order_memory->manu = NULL;
    }
    if (server_order_memory->size) {
        free(server_order_memory->size);
        server_order_memory->size = NULL;
    }
    if (server_order_memory->type) {
        free(server_order_memory->type);
        server_order_memory->type = NULL;
    }
    if (server_order_memory->hidden) {
        free(server_order_memory->hidden);
        server_order_memory->hidden = NULL;
    }
    if (server_order_memory->monthly_price) {
        free(server_order_memory->monthly_price);
        server_order_memory->monthly_price = NULL;
    }
    if (server_order_memory->drive_type) {
        free(server_order_memory->drive_type);
        server_order_memory->drive_type = NULL;
    }
    if (server_order_memory->monthly_price_display) {
        free(server_order_memory->monthly_price_display);
        server_order_memory->monthly_price_display = NULL;
    }
    free(server_order_memory);
}

cJSON *server_order_memory_convertToJSON(server_order_memory_t *server_order_memory) {
    cJSON *item = cJSON_CreateObject();

    // server_order_memory->id
    if(server_order_memory->id) {
    if(cJSON_AddStringToObject(item, "id", server_order_memory->id) == NULL) {
    goto fail; //String
    }
    }


    // server_order_memory->price
    if(server_order_memory->price) {
    if(cJSON_AddStringToObject(item, "price", server_order_memory->price) == NULL) {
    goto fail; //String
    }
    }


    // server_order_memory->img
    if(server_order_memory->img) {
    if(cJSON_AddStringToObject(item, "img", server_order_memory->img) == NULL) {
    goto fail; //String
    }
    }


    // server_order_memory->short_desc
    if(server_order_memory->short_desc) {
    if(cJSON_AddStringToObject(item, "short_desc", server_order_memory->short_desc) == NULL) {
    goto fail; //String
    }
    }


    // server_order_memory->long_desc
    if(server_order_memory->long_desc) {
    if(cJSON_AddStringToObject(item, "long_desc", server_order_memory->long_desc) == NULL) {
    goto fail; //String
    }
    }


    // server_order_memory->manu
    if(server_order_memory->manu) {
    if(cJSON_AddStringToObject(item, "manu", server_order_memory->manu) == NULL) {
    goto fail; //String
    }
    }


    // server_order_memory->size
    if(server_order_memory->size) {
    if(cJSON_AddStringToObject(item, "size", server_order_memory->size) == NULL) {
    goto fail; //String
    }
    }


    // server_order_memory->type
    if(server_order_memory->type) {
    if(cJSON_AddStringToObject(item, "type", server_order_memory->type) == NULL) {
    goto fail; //String
    }
    }


    // server_order_memory->hidden
    if(server_order_memory->hidden) {
    if(cJSON_AddStringToObject(item, "hidden", server_order_memory->hidden) == NULL) {
    goto fail; //String
    }
    }


    // server_order_memory->monthly_price
    if(server_order_memory->monthly_price) {
    if(cJSON_AddNumberToObject(item, "monthly_price", *server_order_memory->monthly_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // server_order_memory->drive_type
    if(server_order_memory->drive_type) {
    if(cJSON_AddStringToObject(item, "drive_type", server_order_memory->drive_type) == NULL) {
    goto fail; //String
    }
    }


    // server_order_memory->monthly_price_display
    if(server_order_memory->monthly_price_display) {
    if(cJSON_AddStringToObject(item, "monthly_price_display", server_order_memory->monthly_price_display) == NULL) {
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

server_order_memory_t *server_order_memory_parseFromJSON(cJSON *server_order_memoryJSON){

    server_order_memory_t *server_order_memory_local_var = NULL;

    char *id_local_str = NULL;

    char *price_local_str = NULL;

    char *img_local_str = NULL;

    char *short_desc_local_str = NULL;

    char *long_desc_local_str = NULL;

    char *manu_local_str = NULL;

    char *size_local_str = NULL;

    char *type_local_str = NULL;

    char *hidden_local_str = NULL;

    // define the local variable for server_order_memory->monthly_price
    int *monthly_price_local_var = NULL;

    char *drive_type_local_str = NULL;

    char *monthly_price_display_local_str = NULL;

    // server_order_memory->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(server_order_memoryJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // server_order_memory->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(server_order_memoryJSON, "price");
    if (cJSON_IsNull(price)) {
        price = NULL;
    }
    if (price) { 
    if(!cJSON_IsString(price) && !cJSON_IsNull(price))
    {
    goto end; //String
    }
    }

    // server_order_memory->img
    cJSON *img = cJSON_GetObjectItemCaseSensitive(server_order_memoryJSON, "img");
    if (cJSON_IsNull(img)) {
        img = NULL;
    }
    if (img) { 
    if(!cJSON_IsString(img) && !cJSON_IsNull(img))
    {
    goto end; //String
    }
    }

    // server_order_memory->short_desc
    cJSON *short_desc = cJSON_GetObjectItemCaseSensitive(server_order_memoryJSON, "short_desc");
    if (cJSON_IsNull(short_desc)) {
        short_desc = NULL;
    }
    if (short_desc) { 
    if(!cJSON_IsString(short_desc) && !cJSON_IsNull(short_desc))
    {
    goto end; //String
    }
    }

    // server_order_memory->long_desc
    cJSON *long_desc = cJSON_GetObjectItemCaseSensitive(server_order_memoryJSON, "long_desc");
    if (cJSON_IsNull(long_desc)) {
        long_desc = NULL;
    }
    if (long_desc) { 
    if(!cJSON_IsString(long_desc) && !cJSON_IsNull(long_desc))
    {
    goto end; //String
    }
    }

    // server_order_memory->manu
    cJSON *manu = cJSON_GetObjectItemCaseSensitive(server_order_memoryJSON, "manu");
    if (cJSON_IsNull(manu)) {
        manu = NULL;
    }
    if (manu) { 
    if(!cJSON_IsString(manu) && !cJSON_IsNull(manu))
    {
    goto end; //String
    }
    }

    // server_order_memory->size
    cJSON *size = cJSON_GetObjectItemCaseSensitive(server_order_memoryJSON, "size");
    if (cJSON_IsNull(size)) {
        size = NULL;
    }
    if (size) { 
    if(!cJSON_IsString(size) && !cJSON_IsNull(size))
    {
    goto end; //String
    }
    }

    // server_order_memory->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(server_order_memoryJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // server_order_memory->hidden
    cJSON *hidden = cJSON_GetObjectItemCaseSensitive(server_order_memoryJSON, "hidden");
    if (cJSON_IsNull(hidden)) {
        hidden = NULL;
    }
    if (hidden) { 
    if(!cJSON_IsString(hidden) && !cJSON_IsNull(hidden))
    {
    goto end; //String
    }
    }

    // server_order_memory->monthly_price
    cJSON *monthly_price = cJSON_GetObjectItemCaseSensitive(server_order_memoryJSON, "monthly_price");
    if (cJSON_IsNull(monthly_price)) {
        monthly_price = NULL;
    }
    if (monthly_price) { 
    if(!cJSON_IsNumber(monthly_price))
    {
    goto end; //Numeric
    }
    monthly_price_local_var = malloc(sizeof(int));
    if(!monthly_price_local_var)
    {
        goto end;
    }
    *monthly_price_local_var = monthly_price->valuedouble;
    }

    // server_order_memory->drive_type
    cJSON *drive_type = cJSON_GetObjectItemCaseSensitive(server_order_memoryJSON, "drive_type");
    if (cJSON_IsNull(drive_type)) {
        drive_type = NULL;
    }
    if (drive_type) { 
    if(!cJSON_IsString(drive_type) && !cJSON_IsNull(drive_type))
    {
    goto end; //String
    }
    }

    // server_order_memory->monthly_price_display
    cJSON *monthly_price_display = cJSON_GetObjectItemCaseSensitive(server_order_memoryJSON, "monthly_price_display");
    if (cJSON_IsNull(monthly_price_display)) {
        monthly_price_display = NULL;
    }
    if (monthly_price_display) { 
    if(!cJSON_IsString(monthly_price_display) && !cJSON_IsNull(monthly_price_display))
    {
    goto end; //String
    }
    }


    if (id && !cJSON_IsNull(id)) id_local_str = strdup(id->valuestring);
    if (price && !cJSON_IsNull(price)) price_local_str = strdup(price->valuestring);
    if (img && !cJSON_IsNull(img)) img_local_str = strdup(img->valuestring);
    if (short_desc && !cJSON_IsNull(short_desc)) short_desc_local_str = strdup(short_desc->valuestring);
    if (long_desc && !cJSON_IsNull(long_desc)) long_desc_local_str = strdup(long_desc->valuestring);
    if (manu && !cJSON_IsNull(manu)) manu_local_str = strdup(manu->valuestring);
    if (size && !cJSON_IsNull(size)) size_local_str = strdup(size->valuestring);
    if (type && !cJSON_IsNull(type)) type_local_str = strdup(type->valuestring);
    if (hidden && !cJSON_IsNull(hidden)) hidden_local_str = strdup(hidden->valuestring);
    if (drive_type && !cJSON_IsNull(drive_type)) drive_type_local_str = strdup(drive_type->valuestring);
    if (monthly_price_display && !cJSON_IsNull(monthly_price_display)) monthly_price_display_local_str = strdup(monthly_price_display->valuestring);

    server_order_memory_local_var = server_order_memory_create_internal (
        id_local_str,
        price_local_str,
        img_local_str,
        short_desc_local_str,
        long_desc_local_str,
        manu_local_str,
        size_local_str,
        type_local_str,
        hidden_local_str,
        monthly_price_local_var,
        drive_type_local_str,
        monthly_price_display_local_str
        );

    if (!server_order_memory_local_var) {
        goto end;
    }

    return server_order_memory_local_var;
end:
    if (id_local_str) {
        free(id_local_str);
        id_local_str = NULL;
    }
    if (price_local_str) {
        free(price_local_str);
        price_local_str = NULL;
    }
    if (img_local_str) {
        free(img_local_str);
        img_local_str = NULL;
    }
    if (short_desc_local_str) {
        free(short_desc_local_str);
        short_desc_local_str = NULL;
    }
    if (long_desc_local_str) {
        free(long_desc_local_str);
        long_desc_local_str = NULL;
    }
    if (manu_local_str) {
        free(manu_local_str);
        manu_local_str = NULL;
    }
    if (size_local_str) {
        free(size_local_str);
        size_local_str = NULL;
    }
    if (type_local_str) {
        free(type_local_str);
        type_local_str = NULL;
    }
    if (hidden_local_str) {
        free(hidden_local_str);
        hidden_local_str = NULL;
    }
    if (monthly_price_local_var) {
        free(monthly_price_local_var);
        monthly_price_local_var = NULL;
    }
    if (drive_type_local_str) {
        free(drive_type_local_str);
        drive_type_local_str = NULL;
    }
    if (monthly_price_display_local_str) {
        free(monthly_price_display_local_str);
        monthly_price_display_local_str = NULL;
    }
    return NULL;

}
