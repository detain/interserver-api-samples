#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "servers_buy_now_response.h"



static servers_buy_now_response_t *servers_buy_now_response_create_internal(
    int success,
    char *text,
    servers_buy_now_response_order_details_t *order_details
    ) {
    servers_buy_now_response_t *servers_buy_now_response_local_var = malloc(sizeof(servers_buy_now_response_t));
    if (!servers_buy_now_response_local_var) {
        return NULL;
    }
    servers_buy_now_response_local_var->success = success;
    servers_buy_now_response_local_var->text = text;
    servers_buy_now_response_local_var->order_details = order_details;

    servers_buy_now_response_local_var->_library_owned = 1;
    return servers_buy_now_response_local_var;
}

__attribute__((deprecated)) servers_buy_now_response_t *servers_buy_now_response_create(
    int success,
    char *text,
    servers_buy_now_response_order_details_t *order_details
    ) {
    return servers_buy_now_response_create_internal (
        success,
        text,
        order_details
        );
}

void servers_buy_now_response_free(servers_buy_now_response_t *servers_buy_now_response) {
    if(NULL == servers_buy_now_response){
        return ;
    }
    if(servers_buy_now_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "servers_buy_now_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (servers_buy_now_response->text) {
        free(servers_buy_now_response->text);
        servers_buy_now_response->text = NULL;
    }
    if (servers_buy_now_response->order_details) {
        servers_buy_now_response_order_details_free(servers_buy_now_response->order_details);
        servers_buy_now_response->order_details = NULL;
    }
    free(servers_buy_now_response);
}

cJSON *servers_buy_now_response_convertToJSON(servers_buy_now_response_t *servers_buy_now_response) {
    cJSON *item = cJSON_CreateObject();

    // servers_buy_now_response->success
    if(servers_buy_now_response->success) {
    if(cJSON_AddBoolToObject(item, "success", servers_buy_now_response->success) == NULL) {
    goto fail; //Bool
    }
    }


    // servers_buy_now_response->text
    if(servers_buy_now_response->text) {
    if(cJSON_AddStringToObject(item, "text", servers_buy_now_response->text) == NULL) {
    goto fail; //String
    }
    }


    // servers_buy_now_response->order_details
    if(servers_buy_now_response->order_details) {
    cJSON *order_details_local_JSON = servers_buy_now_response_order_details_convertToJSON(servers_buy_now_response->order_details);
    if(order_details_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "order_details", order_details_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

servers_buy_now_response_t *servers_buy_now_response_parseFromJSON(cJSON *servers_buy_now_responseJSON){

    servers_buy_now_response_t *servers_buy_now_response_local_var = NULL;

    // define the local variable for servers_buy_now_response->order_details
    servers_buy_now_response_order_details_t *order_details_local_nonprim = NULL;

    // servers_buy_now_response->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(servers_buy_now_responseJSON, "success");
    if (cJSON_IsNull(success)) {
        success = NULL;
    }
    if (success) { 
    if(!cJSON_IsBool(success))
    {
    goto end; //Bool
    }
    }

    // servers_buy_now_response->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(servers_buy_now_responseJSON, "text");
    if (cJSON_IsNull(text)) {
        text = NULL;
    }
    if (text) { 
    if(!cJSON_IsString(text) && !cJSON_IsNull(text))
    {
    goto end; //String
    }
    }

    // servers_buy_now_response->order_details
    cJSON *order_details = cJSON_GetObjectItemCaseSensitive(servers_buy_now_responseJSON, "order_details");
    if (cJSON_IsNull(order_details)) {
        order_details = NULL;
    }
    if (order_details) { 
    order_details_local_nonprim = servers_buy_now_response_order_details_parseFromJSON(order_details); //nonprimitive
    }


    servers_buy_now_response_local_var = servers_buy_now_response_create_internal (
        success ? success->valueint : 0,
        text && !cJSON_IsNull(text) ? strdup(text->valuestring) : NULL,
        order_details ? order_details_local_nonprim : NULL
        );

    return servers_buy_now_response_local_var;
end:
    if (order_details_local_nonprim) {
        servers_buy_now_response_order_details_free(order_details_local_nonprim);
        order_details_local_nonprim = NULL;
    }
    return NULL;

}
