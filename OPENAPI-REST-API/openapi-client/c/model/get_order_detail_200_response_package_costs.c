#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "get_order_detail_200_response_package_costs.h"



static get_order_detail_200_response_package_costs_t *get_order_detail_200_response_package_costs_create_internal(
    double package_id,
    double package_cost,
    char *currency,
    char *currency_symbol
    ) {
    get_order_detail_200_response_package_costs_t *get_order_detail_200_response_package_costs_local_var = malloc(sizeof(get_order_detail_200_response_package_costs_t));
    if (!get_order_detail_200_response_package_costs_local_var) {
        return NULL;
    }
    get_order_detail_200_response_package_costs_local_var->package_id = package_id;
    get_order_detail_200_response_package_costs_local_var->package_cost = package_cost;
    get_order_detail_200_response_package_costs_local_var->currency = currency;
    get_order_detail_200_response_package_costs_local_var->currency_symbol = currency_symbol;

    get_order_detail_200_response_package_costs_local_var->_library_owned = 1;
    return get_order_detail_200_response_package_costs_local_var;
}

__attribute__((deprecated)) get_order_detail_200_response_package_costs_t *get_order_detail_200_response_package_costs_create(
    double package_id,
    double package_cost,
    char *currency,
    char *currency_symbol
    ) {
    return get_order_detail_200_response_package_costs_create_internal (
        package_id,
        package_cost,
        currency,
        currency_symbol
        );
}

void get_order_detail_200_response_package_costs_free(get_order_detail_200_response_package_costs_t *get_order_detail_200_response_package_costs) {
    if(NULL == get_order_detail_200_response_package_costs){
        return ;
    }
    if(get_order_detail_200_response_package_costs->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "get_order_detail_200_response_package_costs_free");
        return ;
    }
    listEntry_t *listEntry;
    if (get_order_detail_200_response_package_costs->currency) {
        free(get_order_detail_200_response_package_costs->currency);
        get_order_detail_200_response_package_costs->currency = NULL;
    }
    if (get_order_detail_200_response_package_costs->currency_symbol) {
        free(get_order_detail_200_response_package_costs->currency_symbol);
        get_order_detail_200_response_package_costs->currency_symbol = NULL;
    }
    free(get_order_detail_200_response_package_costs);
}

cJSON *get_order_detail_200_response_package_costs_convertToJSON(get_order_detail_200_response_package_costs_t *get_order_detail_200_response_package_costs) {
    cJSON *item = cJSON_CreateObject();

    // get_order_detail_200_response_package_costs->package_id
    if(get_order_detail_200_response_package_costs->package_id) {
    if(cJSON_AddNumberToObject(item, "package_id", get_order_detail_200_response_package_costs->package_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // get_order_detail_200_response_package_costs->package_cost
    if(get_order_detail_200_response_package_costs->package_cost) {
    if(cJSON_AddNumberToObject(item, "package_cost", get_order_detail_200_response_package_costs->package_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // get_order_detail_200_response_package_costs->currency
    if(get_order_detail_200_response_package_costs->currency) {
    if(cJSON_AddStringToObject(item, "currency", get_order_detail_200_response_package_costs->currency) == NULL) {
    goto fail; //String
    }
    }


    // get_order_detail_200_response_package_costs->currency_symbol
    if(get_order_detail_200_response_package_costs->currency_symbol) {
    if(cJSON_AddStringToObject(item, "currencySymbol", get_order_detail_200_response_package_costs->currency_symbol) == NULL) {
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

get_order_detail_200_response_package_costs_t *get_order_detail_200_response_package_costs_parseFromJSON(cJSON *get_order_detail_200_response_package_costsJSON){

    get_order_detail_200_response_package_costs_t *get_order_detail_200_response_package_costs_local_var = NULL;

    // get_order_detail_200_response_package_costs->package_id
    cJSON *package_id = cJSON_GetObjectItemCaseSensitive(get_order_detail_200_response_package_costsJSON, "package_id");
    if (cJSON_IsNull(package_id)) {
        package_id = NULL;
    }
    if (package_id) { 
    if(!cJSON_IsNumber(package_id))
    {
    goto end; //Numeric
    }
    }

    // get_order_detail_200_response_package_costs->package_cost
    cJSON *package_cost = cJSON_GetObjectItemCaseSensitive(get_order_detail_200_response_package_costsJSON, "package_cost");
    if (cJSON_IsNull(package_cost)) {
        package_cost = NULL;
    }
    if (package_cost) { 
    if(!cJSON_IsNumber(package_cost))
    {
    goto end; //Numeric
    }
    }

    // get_order_detail_200_response_package_costs->currency
    cJSON *currency = cJSON_GetObjectItemCaseSensitive(get_order_detail_200_response_package_costsJSON, "currency");
    if (cJSON_IsNull(currency)) {
        currency = NULL;
    }
    if (currency) { 
    if(!cJSON_IsString(currency) && !cJSON_IsNull(currency))
    {
    goto end; //String
    }
    }

    // get_order_detail_200_response_package_costs->currency_symbol
    cJSON *currency_symbol = cJSON_GetObjectItemCaseSensitive(get_order_detail_200_response_package_costsJSON, "currencySymbol");
    if (cJSON_IsNull(currency_symbol)) {
        currency_symbol = NULL;
    }
    if (currency_symbol) { 
    if(!cJSON_IsString(currency_symbol) && !cJSON_IsNull(currency_symbol))
    {
    goto end; //String
    }
    }


    get_order_detail_200_response_package_costs_local_var = get_order_detail_200_response_package_costs_create_internal (
        package_id ? package_id->valuedouble : 0,
        package_cost ? package_cost->valuedouble : 0,
        currency && !cJSON_IsNull(currency) ? strdup(currency->valuestring) : NULL,
        currency_symbol && !cJSON_IsNull(currency_symbol) ? strdup(currency_symbol->valuestring) : NULL
        );

    return get_order_detail_200_response_package_costs_local_var;
end:
    return NULL;

}
