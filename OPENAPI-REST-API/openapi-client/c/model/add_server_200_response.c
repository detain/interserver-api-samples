#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "add_server_200_response.h"



static add_server_200_response_t *add_server_200_response_create_internal(
    char *text,
    int *invoice,
    int *order
    ) {
    add_server_200_response_t *add_server_200_response_local_var = malloc(sizeof(add_server_200_response_t));
    if (!add_server_200_response_local_var) {
        return NULL;
    }
    memset(add_server_200_response_local_var, 0, sizeof(add_server_200_response_t));
    add_server_200_response_local_var->_library_owned = 1;
    add_server_200_response_local_var->text = text;
    add_server_200_response_local_var->invoice = invoice;
    add_server_200_response_local_var->order = order;
    return add_server_200_response_local_var;
}

__attribute__((deprecated)) add_server_200_response_t *add_server_200_response_create(
    char *text,
    int *invoice,
    int *order
    ) {
    int *invoice_copy = NULL;
    if (invoice) {
        invoice_copy = malloc(sizeof(int));
        if (invoice_copy) *invoice_copy = *invoice;
    }
    int *order_copy = NULL;
    if (order) {
        order_copy = malloc(sizeof(int));
        if (order_copy) *order_copy = *order;
    }
    add_server_200_response_t *result = add_server_200_response_create_internal (
        text,
        invoice_copy,
        order_copy
        );
    if (!result) {
        free(invoice_copy);
        free(order_copy);
    }
    return result;
}

void add_server_200_response_free(add_server_200_response_t *add_server_200_response) {
    if(NULL == add_server_200_response){
        return ;
    }
    if(add_server_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "add_server_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (add_server_200_response->text) {
        free(add_server_200_response->text);
        add_server_200_response->text = NULL;
    }
    if (add_server_200_response->invoice) {
        free(add_server_200_response->invoice);
        add_server_200_response->invoice = NULL;
    }
    if (add_server_200_response->order) {
        free(add_server_200_response->order);
        add_server_200_response->order = NULL;
    }
    free(add_server_200_response);
}

cJSON *add_server_200_response_convertToJSON(add_server_200_response_t *add_server_200_response) {
    cJSON *item = cJSON_CreateObject();

    // add_server_200_response->text
    if(add_server_200_response->text) {
    if(cJSON_AddStringToObject(item, "text", add_server_200_response->text) == NULL) {
    goto fail; //String
    }
    }


    // add_server_200_response->invoice
    if(add_server_200_response->invoice) {
    if(cJSON_AddNumberToObject(item, "invoice", *add_server_200_response->invoice) == NULL) {
    goto fail; //Numeric
    }
    }


    // add_server_200_response->order
    if(add_server_200_response->order) {
    if(cJSON_AddNumberToObject(item, "order", *add_server_200_response->order) == NULL) {
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

add_server_200_response_t *add_server_200_response_parseFromJSON(cJSON *add_server_200_responseJSON){

    add_server_200_response_t *add_server_200_response_local_var = NULL;

    char *text_local_str = NULL;

    // define the local variable for add_server_200_response->invoice
    int *invoice_local_var = NULL;

    // define the local variable for add_server_200_response->order
    int *order_local_var = NULL;

    // add_server_200_response->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(add_server_200_responseJSON, "text");
    if (cJSON_IsNull(text)) {
        text = NULL;
    }
    if (text) { 
    if(!cJSON_IsString(text) && !cJSON_IsNull(text))
    {
    goto end; //String
    }
    }

    // add_server_200_response->invoice
    cJSON *invoice = cJSON_GetObjectItemCaseSensitive(add_server_200_responseJSON, "invoice");
    if (cJSON_IsNull(invoice)) {
        invoice = NULL;
    }
    if (invoice) { 
    if(!cJSON_IsNumber(invoice))
    {
    goto end; //Numeric
    }
    invoice_local_var = malloc(sizeof(int));
    if(!invoice_local_var)
    {
        goto end;
    }
    *invoice_local_var = invoice->valuedouble;
    }

    // add_server_200_response->order
    cJSON *order = cJSON_GetObjectItemCaseSensitive(add_server_200_responseJSON, "order");
    if (cJSON_IsNull(order)) {
        order = NULL;
    }
    if (order) { 
    if(!cJSON_IsNumber(order))
    {
    goto end; //Numeric
    }
    order_local_var = malloc(sizeof(int));
    if(!order_local_var)
    {
        goto end;
    }
    *order_local_var = order->valuedouble;
    }


    if (text && !cJSON_IsNull(text)) text_local_str = strdup(text->valuestring);

    add_server_200_response_local_var = add_server_200_response_create_internal (
        text_local_str,
        invoice_local_var,
        order_local_var
        );

    if (!add_server_200_response_local_var) {
        goto end;
    }

    return add_server_200_response_local_var;
end:
    if (text_local_str) {
        free(text_local_str);
        text_local_str = NULL;
    }
    if (invoice_local_var) {
        free(invoice_local_var);
        invoice_local_var = NULL;
    }
    if (order_local_var) {
        free(order_local_var);
        order_local_var = NULL;
    }
    return NULL;

}
