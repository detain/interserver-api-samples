#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server_order_control_panel.h"



static server_order_control_panel_t *server_order_control_panel_create_internal(
    char *id,
    int price,
    char *img,
    char *short_desc,
    char *long_desc,
    char *os_type,
    int monthly_price,
    list_t *types,
    char *price_display,
    char *monthly_price_display
    ) {
    server_order_control_panel_t *server_order_control_panel_local_var = malloc(sizeof(server_order_control_panel_t));
    if (!server_order_control_panel_local_var) {
        return NULL;
    }
    server_order_control_panel_local_var->id = id;
    server_order_control_panel_local_var->price = price;
    server_order_control_panel_local_var->img = img;
    server_order_control_panel_local_var->short_desc = short_desc;
    server_order_control_panel_local_var->long_desc = long_desc;
    server_order_control_panel_local_var->os_type = os_type;
    server_order_control_panel_local_var->monthly_price = monthly_price;
    server_order_control_panel_local_var->types = types;
    server_order_control_panel_local_var->price_display = price_display;
    server_order_control_panel_local_var->monthly_price_display = monthly_price_display;

    server_order_control_panel_local_var->_library_owned = 1;
    return server_order_control_panel_local_var;
}

__attribute__((deprecated)) server_order_control_panel_t *server_order_control_panel_create(
    char *id,
    int price,
    char *img,
    char *short_desc,
    char *long_desc,
    char *os_type,
    int monthly_price,
    list_t *types,
    char *price_display,
    char *monthly_price_display
    ) {
    return server_order_control_panel_create_internal (
        id,
        price,
        img,
        short_desc,
        long_desc,
        os_type,
        monthly_price,
        types,
        price_display,
        monthly_price_display
        );
}

void server_order_control_panel_free(server_order_control_panel_t *server_order_control_panel) {
    if(NULL == server_order_control_panel){
        return ;
    }
    if(server_order_control_panel->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "server_order_control_panel_free");
        return ;
    }
    listEntry_t *listEntry;
    if (server_order_control_panel->id) {
        free(server_order_control_panel->id);
        server_order_control_panel->id = NULL;
    }
    if (server_order_control_panel->img) {
        free(server_order_control_panel->img);
        server_order_control_panel->img = NULL;
    }
    if (server_order_control_panel->short_desc) {
        free(server_order_control_panel->short_desc);
        server_order_control_panel->short_desc = NULL;
    }
    if (server_order_control_panel->long_desc) {
        free(server_order_control_panel->long_desc);
        server_order_control_panel->long_desc = NULL;
    }
    if (server_order_control_panel->os_type) {
        free(server_order_control_panel->os_type);
        server_order_control_panel->os_type = NULL;
    }
    if (server_order_control_panel->types) {
        list_ForEach(listEntry, server_order_control_panel->types) {
            free(listEntry->data);
        }
        list_freeList(server_order_control_panel->types);
        server_order_control_panel->types = NULL;
    }
    if (server_order_control_panel->price_display) {
        free(server_order_control_panel->price_display);
        server_order_control_panel->price_display = NULL;
    }
    if (server_order_control_panel->monthly_price_display) {
        free(server_order_control_panel->monthly_price_display);
        server_order_control_panel->monthly_price_display = NULL;
    }
    free(server_order_control_panel);
}

cJSON *server_order_control_panel_convertToJSON(server_order_control_panel_t *server_order_control_panel) {
    cJSON *item = cJSON_CreateObject();

    // server_order_control_panel->id
    if(server_order_control_panel->id) {
    if(cJSON_AddStringToObject(item, "id", server_order_control_panel->id) == NULL) {
    goto fail; //String
    }
    }


    // server_order_control_panel->price
    if(server_order_control_panel->price) {
    if(cJSON_AddNumberToObject(item, "price", server_order_control_panel->price) == NULL) {
    goto fail; //Numeric
    }
    }


    // server_order_control_panel->img
    if(server_order_control_panel->img) {
    if(cJSON_AddStringToObject(item, "img", server_order_control_panel->img) == NULL) {
    goto fail; //String
    }
    }


    // server_order_control_panel->short_desc
    if(server_order_control_panel->short_desc) {
    if(cJSON_AddStringToObject(item, "short_desc", server_order_control_panel->short_desc) == NULL) {
    goto fail; //String
    }
    }


    // server_order_control_panel->long_desc
    if(server_order_control_panel->long_desc) {
    if(cJSON_AddStringToObject(item, "long_desc", server_order_control_panel->long_desc) == NULL) {
    goto fail; //String
    }
    }


    // server_order_control_panel->os_type
    if(server_order_control_panel->os_type) {
    if(cJSON_AddStringToObject(item, "os_type", server_order_control_panel->os_type) == NULL) {
    goto fail; //String
    }
    }


    // server_order_control_panel->monthly_price
    if(server_order_control_panel->monthly_price) {
    if(cJSON_AddNumberToObject(item, "monthly_price", server_order_control_panel->monthly_price) == NULL) {
    goto fail; //Numeric
    }
    }


    // server_order_control_panel->types
    if(server_order_control_panel->types) {
    cJSON *types = cJSON_AddArrayToObject(item, "types");
    if(types == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *typesListEntry;
    list_ForEach(typesListEntry, server_order_control_panel->types) {
    if(cJSON_AddStringToObject(types, "", typesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // server_order_control_panel->price_display
    if(server_order_control_panel->price_display) {
    if(cJSON_AddStringToObject(item, "price_display", server_order_control_panel->price_display) == NULL) {
    goto fail; //String
    }
    }


    // server_order_control_panel->monthly_price_display
    if(server_order_control_panel->monthly_price_display) {
    if(cJSON_AddStringToObject(item, "monthly_price_display", server_order_control_panel->monthly_price_display) == NULL) {
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

server_order_control_panel_t *server_order_control_panel_parseFromJSON(cJSON *server_order_control_panelJSON){

    server_order_control_panel_t *server_order_control_panel_local_var = NULL;

    // define the local list for server_order_control_panel->types
    list_t *typesList = NULL;

    // server_order_control_panel->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(server_order_control_panelJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // server_order_control_panel->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(server_order_control_panelJSON, "price");
    if (cJSON_IsNull(price)) {
        price = NULL;
    }
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }

    // server_order_control_panel->img
    cJSON *img = cJSON_GetObjectItemCaseSensitive(server_order_control_panelJSON, "img");
    if (cJSON_IsNull(img)) {
        img = NULL;
    }
    if (img) { 
    if(!cJSON_IsString(img) && !cJSON_IsNull(img))
    {
    goto end; //String
    }
    }

    // server_order_control_panel->short_desc
    cJSON *short_desc = cJSON_GetObjectItemCaseSensitive(server_order_control_panelJSON, "short_desc");
    if (cJSON_IsNull(short_desc)) {
        short_desc = NULL;
    }
    if (short_desc) { 
    if(!cJSON_IsString(short_desc) && !cJSON_IsNull(short_desc))
    {
    goto end; //String
    }
    }

    // server_order_control_panel->long_desc
    cJSON *long_desc = cJSON_GetObjectItemCaseSensitive(server_order_control_panelJSON, "long_desc");
    if (cJSON_IsNull(long_desc)) {
        long_desc = NULL;
    }
    if (long_desc) { 
    if(!cJSON_IsString(long_desc) && !cJSON_IsNull(long_desc))
    {
    goto end; //String
    }
    }

    // server_order_control_panel->os_type
    cJSON *os_type = cJSON_GetObjectItemCaseSensitive(server_order_control_panelJSON, "os_type");
    if (cJSON_IsNull(os_type)) {
        os_type = NULL;
    }
    if (os_type) { 
    if(!cJSON_IsString(os_type) && !cJSON_IsNull(os_type))
    {
    goto end; //String
    }
    }

    // server_order_control_panel->monthly_price
    cJSON *monthly_price = cJSON_GetObjectItemCaseSensitive(server_order_control_panelJSON, "monthly_price");
    if (cJSON_IsNull(monthly_price)) {
        monthly_price = NULL;
    }
    if (monthly_price) { 
    if(!cJSON_IsNumber(monthly_price))
    {
    goto end; //Numeric
    }
    }

    // server_order_control_panel->types
    cJSON *types = cJSON_GetObjectItemCaseSensitive(server_order_control_panelJSON, "types");
    if (cJSON_IsNull(types)) {
        types = NULL;
    }
    if (types) { 
    cJSON *types_local = NULL;
    if(!cJSON_IsArray(types)) {
        goto end;//primitive container
    }
    typesList = list_createList();

    cJSON_ArrayForEach(types_local, types)
    {
        if(!cJSON_IsString(types_local))
        {
            goto end;
        }
        list_addElement(typesList , strdup(types_local->valuestring));
    }
    }

    // server_order_control_panel->price_display
    cJSON *price_display = cJSON_GetObjectItemCaseSensitive(server_order_control_panelJSON, "price_display");
    if (cJSON_IsNull(price_display)) {
        price_display = NULL;
    }
    if (price_display) { 
    if(!cJSON_IsString(price_display) && !cJSON_IsNull(price_display))
    {
    goto end; //String
    }
    }

    // server_order_control_panel->monthly_price_display
    cJSON *monthly_price_display = cJSON_GetObjectItemCaseSensitive(server_order_control_panelJSON, "monthly_price_display");
    if (cJSON_IsNull(monthly_price_display)) {
        monthly_price_display = NULL;
    }
    if (monthly_price_display) { 
    if(!cJSON_IsString(monthly_price_display) && !cJSON_IsNull(monthly_price_display))
    {
    goto end; //String
    }
    }


    server_order_control_panel_local_var = server_order_control_panel_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        price ? price->valuedouble : 0,
        img && !cJSON_IsNull(img) ? strdup(img->valuestring) : NULL,
        short_desc && !cJSON_IsNull(short_desc) ? strdup(short_desc->valuestring) : NULL,
        long_desc && !cJSON_IsNull(long_desc) ? strdup(long_desc->valuestring) : NULL,
        os_type && !cJSON_IsNull(os_type) ? strdup(os_type->valuestring) : NULL,
        monthly_price ? monthly_price->valuedouble : 0,
        types ? typesList : NULL,
        price_display && !cJSON_IsNull(price_display) ? strdup(price_display->valuestring) : NULL,
        monthly_price_display && !cJSON_IsNull(monthly_price_display) ? strdup(monthly_price_display->valuestring) : NULL
        );

    return server_order_control_panel_local_var;
end:
    if (typesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, typesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(typesList);
        typesList = NULL;
    }
    return NULL;

}
