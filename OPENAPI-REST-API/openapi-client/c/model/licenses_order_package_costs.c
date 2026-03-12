#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "licenses_order_package_costs.h"



static licenses_order_package_costs_t *licenses_order_package_costs_create_internal(
    double licenses_order_package_costs11468
    ) {
    licenses_order_package_costs_t *licenses_order_package_costs_local_var = malloc(sizeof(licenses_order_package_costs_t));
    if (!licenses_order_package_costs_local_var) {
        return NULL;
    }
    licenses_order_package_costs_local_var->licenses_order_package_costs11468 = licenses_order_package_costs11468;

    licenses_order_package_costs_local_var->_library_owned = 1;
    return licenses_order_package_costs_local_var;
}

__attribute__((deprecated)) licenses_order_package_costs_t *licenses_order_package_costs_create(
    double licenses_order_package_costs11468
    ) {
    return licenses_order_package_costs_create_internal (
        licenses_order_package_costs11468
        );
}

void licenses_order_package_costs_free(licenses_order_package_costs_t *licenses_order_package_costs) {
    if(NULL == licenses_order_package_costs){
        return ;
    }
    if(licenses_order_package_costs->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "licenses_order_package_costs_free");
        return ;
    }
    listEntry_t *listEntry;
    free(licenses_order_package_costs);
}

cJSON *licenses_order_package_costs_convertToJSON(licenses_order_package_costs_t *licenses_order_package_costs) {
    cJSON *item = cJSON_CreateObject();

    // licenses_order_package_costs->licenses_order_package_costs11468
    if(licenses_order_package_costs->licenses_order_package_costs11468) {
    if(cJSON_AddNumberToObject(item, "LicensesOrderPackageCosts11468", licenses_order_package_costs->licenses_order_package_costs11468) == NULL) {
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

licenses_order_package_costs_t *licenses_order_package_costs_parseFromJSON(cJSON *licenses_order_package_costsJSON){

    licenses_order_package_costs_t *licenses_order_package_costs_local_var = NULL;

    // licenses_order_package_costs->licenses_order_package_costs11468
    cJSON *licenses_order_package_costs11468 = cJSON_GetObjectItemCaseSensitive(licenses_order_package_costsJSON, "LicensesOrderPackageCosts11468");
    if (cJSON_IsNull(licenses_order_package_costs11468)) {
        licenses_order_package_costs11468 = NULL;
    }
    if (licenses_order_package_costs11468) { 
    if(!cJSON_IsNumber(licenses_order_package_costs11468))
    {
    goto end; //Numeric
    }
    }


    licenses_order_package_costs_local_var = licenses_order_package_costs_create_internal (
        licenses_order_package_costs11468 ? licenses_order_package_costs11468->valuedouble : 0
        );

    return licenses_order_package_costs_local_var;
end:
    return NULL;

}
