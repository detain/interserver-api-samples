#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "licenses_order.h"



static licenses_order_t *licenses_order_create_internal(
    licenses_order_service_categories_t *service_categories,
    licenses_order_package_costs_t *package_costs,
    licenses_order_service_types_t *service_types
    ) {
    licenses_order_t *licenses_order_local_var = malloc(sizeof(licenses_order_t));
    if (!licenses_order_local_var) {
        return NULL;
    }
    memset(licenses_order_local_var, 0, sizeof(licenses_order_t));
    licenses_order_local_var->_library_owned = 1;
    licenses_order_local_var->service_categories = service_categories;
    licenses_order_local_var->package_costs = package_costs;
    licenses_order_local_var->service_types = service_types;
    return licenses_order_local_var;
}

__attribute__((deprecated)) licenses_order_t *licenses_order_create(
    licenses_order_service_categories_t *service_categories,
    licenses_order_package_costs_t *package_costs,
    licenses_order_service_types_t *service_types
    ) {
    licenses_order_t *result = licenses_order_create_internal (
        service_categories,
        package_costs,
        service_types
        );
    if (!result) {
    }
    return result;
}

void licenses_order_free(licenses_order_t *licenses_order) {
    if(NULL == licenses_order){
        return ;
    }
    if(licenses_order->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "licenses_order_free");
        return ;
    }
    listEntry_t *listEntry;
    if (licenses_order->service_categories) {
        licenses_order_service_categories_free(licenses_order->service_categories);
        licenses_order->service_categories = NULL;
    }
    if (licenses_order->package_costs) {
        licenses_order_package_costs_free(licenses_order->package_costs);
        licenses_order->package_costs = NULL;
    }
    if (licenses_order->service_types) {
        licenses_order_service_types_free(licenses_order->service_types);
        licenses_order->service_types = NULL;
    }
    free(licenses_order);
}

cJSON *licenses_order_convertToJSON(licenses_order_t *licenses_order) {
    cJSON *item = cJSON_CreateObject();

    // licenses_order->service_categories
    if(licenses_order->service_categories) {
    cJSON *service_categories_local_JSON = licenses_order_service_categories_convertToJSON(licenses_order->service_categories);
    if(service_categories_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "serviceCategories", service_categories_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // licenses_order->package_costs
    if(licenses_order->package_costs) {
    cJSON *package_costs_local_JSON = licenses_order_package_costs_convertToJSON(licenses_order->package_costs);
    if(package_costs_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "packageCosts", package_costs_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // licenses_order->service_types
    if(licenses_order->service_types) {
    cJSON *service_types_local_JSON = licenses_order_service_types_convertToJSON(licenses_order->service_types);
    if(service_types_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "serviceTypes", service_types_local_JSON);
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

licenses_order_t *licenses_order_parseFromJSON(cJSON *licenses_orderJSON){

    licenses_order_t *licenses_order_local_var = NULL;

    // define the local variable for licenses_order->service_categories
    licenses_order_service_categories_t *service_categories_local_nonprim = NULL;

    // define the local variable for licenses_order->package_costs
    licenses_order_package_costs_t *package_costs_local_nonprim = NULL;

    // define the local variable for licenses_order->service_types
    licenses_order_service_types_t *service_types_local_nonprim = NULL;

    // licenses_order->service_categories
    cJSON *service_categories = cJSON_GetObjectItemCaseSensitive(licenses_orderJSON, "serviceCategories");
    if (cJSON_IsNull(service_categories)) {
        service_categories = NULL;
    }
    if (service_categories) { 
    service_categories_local_nonprim = licenses_order_service_categories_parseFromJSON(service_categories); //nonprimitive
    }

    // licenses_order->package_costs
    cJSON *package_costs = cJSON_GetObjectItemCaseSensitive(licenses_orderJSON, "packageCosts");
    if (cJSON_IsNull(package_costs)) {
        package_costs = NULL;
    }
    if (package_costs) { 
    package_costs_local_nonprim = licenses_order_package_costs_parseFromJSON(package_costs); //nonprimitive
    }

    // licenses_order->service_types
    cJSON *service_types = cJSON_GetObjectItemCaseSensitive(licenses_orderJSON, "serviceTypes");
    if (cJSON_IsNull(service_types)) {
        service_types = NULL;
    }
    if (service_types) { 
    service_types_local_nonprim = licenses_order_service_types_parseFromJSON(service_types); //nonprimitive
    }



    licenses_order_local_var = licenses_order_create_internal (
        service_categories ? service_categories_local_nonprim : NULL,
        package_costs ? package_costs_local_nonprim : NULL,
        service_types ? service_types_local_nonprim : NULL
        );

    if (!licenses_order_local_var) {
        goto end;
    }

    return licenses_order_local_var;
end:
    if (service_categories_local_nonprim) {
        licenses_order_service_categories_free(service_categories_local_nonprim);
        service_categories_local_nonprim = NULL;
    }
    if (package_costs_local_nonprim) {
        licenses_order_package_costs_free(package_costs_local_nonprim);
        package_costs_local_nonprim = NULL;
    }
    if (service_types_local_nonprim) {
        licenses_order_service_types_free(service_types_local_nonprim);
        service_types_local_nonprim = NULL;
    }
    return NULL;

}
