#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "backups_order.h"



static backups_order_t *backups_order_create_internal(
    backups_order_package_costs_t *package_costs,
    backups_order_service_types_t *service_types
    ) {
    backups_order_t *backups_order_local_var = malloc(sizeof(backups_order_t));
    if (!backups_order_local_var) {
        return NULL;
    }
    memset(backups_order_local_var, 0, sizeof(backups_order_t));
    backups_order_local_var->_library_owned = 1;
    backups_order_local_var->package_costs = package_costs;
    backups_order_local_var->service_types = service_types;
    return backups_order_local_var;
}

__attribute__((deprecated)) backups_order_t *backups_order_create(
    backups_order_package_costs_t *package_costs,
    backups_order_service_types_t *service_types
    ) {
    backups_order_t *result = backups_order_create_internal (
        package_costs,
        service_types
        );
    if (!result) {
    }
    return result;
}

void backups_order_free(backups_order_t *backups_order) {
    if(NULL == backups_order){
        return ;
    }
    if(backups_order->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "backups_order_free");
        return ;
    }
    listEntry_t *listEntry;
    if (backups_order->package_costs) {
        backups_order_package_costs_free(backups_order->package_costs);
        backups_order->package_costs = NULL;
    }
    if (backups_order->service_types) {
        backups_order_service_types_free(backups_order->service_types);
        backups_order->service_types = NULL;
    }
    free(backups_order);
}

cJSON *backups_order_convertToJSON(backups_order_t *backups_order) {
    cJSON *item = cJSON_CreateObject();

    // backups_order->package_costs
    if (!backups_order->package_costs) {
        goto fail;
    }
    cJSON *package_costs_local_JSON = backups_order_package_costs_convertToJSON(backups_order->package_costs);
    if(package_costs_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "packageCosts", package_costs_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // backups_order->service_types
    if (!backups_order->service_types) {
        goto fail;
    }
    cJSON *service_types_local_JSON = backups_order_service_types_convertToJSON(backups_order->service_types);
    if(service_types_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "serviceTypes", service_types_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

backups_order_t *backups_order_parseFromJSON(cJSON *backups_orderJSON){

    backups_order_t *backups_order_local_var = NULL;

    // define the local variable for backups_order->package_costs
    backups_order_package_costs_t *package_costs_local_nonprim = NULL;

    // define the local variable for backups_order->service_types
    backups_order_service_types_t *service_types_local_nonprim = NULL;

    // backups_order->package_costs
    cJSON *package_costs = cJSON_GetObjectItemCaseSensitive(backups_orderJSON, "packageCosts");
    if (cJSON_IsNull(package_costs)) {
        package_costs = NULL;
    }
    if (!package_costs) {
        goto end;
    }

    
    package_costs_local_nonprim = backups_order_package_costs_parseFromJSON(package_costs); //nonprimitive

    // backups_order->service_types
    cJSON *service_types = cJSON_GetObjectItemCaseSensitive(backups_orderJSON, "serviceTypes");
    if (cJSON_IsNull(service_types)) {
        service_types = NULL;
    }
    if (!service_types) {
        goto end;
    }

    
    service_types_local_nonprim = backups_order_service_types_parseFromJSON(service_types); //nonprimitive



    backups_order_local_var = backups_order_create_internal (
        package_costs_local_nonprim,
        service_types_local_nonprim
        );

    if (!backups_order_local_var) {
        goto end;
    }

    return backups_order_local_var;
end:
    if (package_costs_local_nonprim) {
        backups_order_package_costs_free(package_costs_local_nonprim);
        package_costs_local_nonprim = NULL;
    }
    if (service_types_local_nonprim) {
        backups_order_service_types_free(service_types_local_nonprim);
        service_types_local_nonprim = NULL;
    }
    return NULL;

}
