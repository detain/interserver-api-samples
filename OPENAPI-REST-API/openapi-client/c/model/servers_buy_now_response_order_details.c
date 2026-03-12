#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "servers_buy_now_response_order_details.h"



static servers_buy_now_response_order_details_t *servers_buy_now_response_order_details_create_internal(
    double service_id,
    double invoice_id
    ) {
    servers_buy_now_response_order_details_t *servers_buy_now_response_order_details_local_var = malloc(sizeof(servers_buy_now_response_order_details_t));
    if (!servers_buy_now_response_order_details_local_var) {
        return NULL;
    }
    servers_buy_now_response_order_details_local_var->service_id = service_id;
    servers_buy_now_response_order_details_local_var->invoice_id = invoice_id;

    servers_buy_now_response_order_details_local_var->_library_owned = 1;
    return servers_buy_now_response_order_details_local_var;
}

__attribute__((deprecated)) servers_buy_now_response_order_details_t *servers_buy_now_response_order_details_create(
    double service_id,
    double invoice_id
    ) {
    return servers_buy_now_response_order_details_create_internal (
        service_id,
        invoice_id
        );
}

void servers_buy_now_response_order_details_free(servers_buy_now_response_order_details_t *servers_buy_now_response_order_details) {
    if(NULL == servers_buy_now_response_order_details){
        return ;
    }
    if(servers_buy_now_response_order_details->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "servers_buy_now_response_order_details_free");
        return ;
    }
    listEntry_t *listEntry;
    free(servers_buy_now_response_order_details);
}

cJSON *servers_buy_now_response_order_details_convertToJSON(servers_buy_now_response_order_details_t *servers_buy_now_response_order_details) {
    cJSON *item = cJSON_CreateObject();

    // servers_buy_now_response_order_details->service_id
    if(servers_buy_now_response_order_details->service_id) {
    if(cJSON_AddNumberToObject(item, "service_id", servers_buy_now_response_order_details->service_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // servers_buy_now_response_order_details->invoice_id
    if(servers_buy_now_response_order_details->invoice_id) {
    if(cJSON_AddNumberToObject(item, "invoice_id", servers_buy_now_response_order_details->invoice_id) == NULL) {
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

servers_buy_now_response_order_details_t *servers_buy_now_response_order_details_parseFromJSON(cJSON *servers_buy_now_response_order_detailsJSON){

    servers_buy_now_response_order_details_t *servers_buy_now_response_order_details_local_var = NULL;

    // servers_buy_now_response_order_details->service_id
    cJSON *service_id = cJSON_GetObjectItemCaseSensitive(servers_buy_now_response_order_detailsJSON, "service_id");
    if (cJSON_IsNull(service_id)) {
        service_id = NULL;
    }
    if (service_id) { 
    if(!cJSON_IsNumber(service_id))
    {
    goto end; //Numeric
    }
    }

    // servers_buy_now_response_order_details->invoice_id
    cJSON *invoice_id = cJSON_GetObjectItemCaseSensitive(servers_buy_now_response_order_detailsJSON, "invoice_id");
    if (cJSON_IsNull(invoice_id)) {
        invoice_id = NULL;
    }
    if (invoice_id) { 
    if(!cJSON_IsNumber(invoice_id))
    {
    goto end; //Numeric
    }
    }


    servers_buy_now_response_order_details_local_var = servers_buy_now_response_order_details_create_internal (
        service_id ? service_id->valuedouble : 0,
        invoice_id ? invoice_id->valuedouble : 0
        );

    return servers_buy_now_response_order_details_local_var;
end:
    return NULL;

}
