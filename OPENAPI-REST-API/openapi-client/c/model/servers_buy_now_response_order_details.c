#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "servers_buy_now_response_order_details.h"



static servers_buy_now_response_order_details_t *servers_buy_now_response_order_details_create_internal(
    double *service_id,
    double *invoice_id
    ) {
    servers_buy_now_response_order_details_t *servers_buy_now_response_order_details_local_var = malloc(sizeof(servers_buy_now_response_order_details_t));
    if (!servers_buy_now_response_order_details_local_var) {
        return NULL;
    }
    memset(servers_buy_now_response_order_details_local_var, 0, sizeof(servers_buy_now_response_order_details_t));
    servers_buy_now_response_order_details_local_var->_library_owned = 1;
    servers_buy_now_response_order_details_local_var->service_id = service_id;
    servers_buy_now_response_order_details_local_var->invoice_id = invoice_id;
    return servers_buy_now_response_order_details_local_var;
}

__attribute__((deprecated)) servers_buy_now_response_order_details_t *servers_buy_now_response_order_details_create(
    double *service_id,
    double *invoice_id
    ) {
    double *service_id_copy = NULL;
    if (service_id) {
        service_id_copy = malloc(sizeof(double));
        if (service_id_copy) *service_id_copy = *service_id;
    }
    double *invoice_id_copy = NULL;
    if (invoice_id) {
        invoice_id_copy = malloc(sizeof(double));
        if (invoice_id_copy) *invoice_id_copy = *invoice_id;
    }
    servers_buy_now_response_order_details_t *result = servers_buy_now_response_order_details_create_internal (
        service_id_copy,
        invoice_id_copy
        );
    if (!result) {
        free(service_id_copy);
        free(invoice_id_copy);
    }
    return result;
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
    if (servers_buy_now_response_order_details->service_id) {
        free(servers_buy_now_response_order_details->service_id);
        servers_buy_now_response_order_details->service_id = NULL;
    }
    if (servers_buy_now_response_order_details->invoice_id) {
        free(servers_buy_now_response_order_details->invoice_id);
        servers_buy_now_response_order_details->invoice_id = NULL;
    }
    free(servers_buy_now_response_order_details);
}

cJSON *servers_buy_now_response_order_details_convertToJSON(servers_buy_now_response_order_details_t *servers_buy_now_response_order_details) {
    cJSON *item = cJSON_CreateObject();

    // servers_buy_now_response_order_details->service_id
    if(servers_buy_now_response_order_details->service_id) {
    if(cJSON_AddNumberToObject(item, "service_id", *servers_buy_now_response_order_details->service_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // servers_buy_now_response_order_details->invoice_id
    if(servers_buy_now_response_order_details->invoice_id) {
    if(cJSON_AddNumberToObject(item, "invoice_id", *servers_buy_now_response_order_details->invoice_id) == NULL) {
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

    // define the local variable for servers_buy_now_response_order_details->service_id
    double *service_id_local_var = NULL;

    // define the local variable for servers_buy_now_response_order_details->invoice_id
    double *invoice_id_local_var = NULL;

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
    service_id_local_var = malloc(sizeof(double));
    if(!service_id_local_var)
    {
        goto end;
    }
    *service_id_local_var = service_id->valuedouble;
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
    invoice_id_local_var = malloc(sizeof(double));
    if(!invoice_id_local_var)
    {
        goto end;
    }
    *invoice_id_local_var = invoice_id->valuedouble;
    }



    servers_buy_now_response_order_details_local_var = servers_buy_now_response_order_details_create_internal (
        service_id_local_var,
        invoice_id_local_var
        );

    if (!servers_buy_now_response_order_details_local_var) {
        goto end;
    }

    return servers_buy_now_response_order_details_local_var;
end:
    if (service_id_local_var) {
        free(service_id_local_var);
        service_id_local_var = NULL;
    }
    if (invoice_id_local_var) {
        free(invoice_id_local_var);
        invoice_id_local_var = NULL;
    }
    return NULL;

}
