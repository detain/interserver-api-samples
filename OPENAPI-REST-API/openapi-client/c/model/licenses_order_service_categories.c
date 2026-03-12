#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "licenses_order_service_categories.h"



static licenses_order_service_categories_t *licenses_order_service_categories_create_internal(
    licenses_order_service_categories509_t *licenses_order_service_categories509
    ) {
    licenses_order_service_categories_t *licenses_order_service_categories_local_var = malloc(sizeof(licenses_order_service_categories_t));
    if (!licenses_order_service_categories_local_var) {
        return NULL;
    }
    licenses_order_service_categories_local_var->licenses_order_service_categories509 = licenses_order_service_categories509;

    licenses_order_service_categories_local_var->_library_owned = 1;
    return licenses_order_service_categories_local_var;
}

__attribute__((deprecated)) licenses_order_service_categories_t *licenses_order_service_categories_create(
    licenses_order_service_categories509_t *licenses_order_service_categories509
    ) {
    return licenses_order_service_categories_create_internal (
        licenses_order_service_categories509
        );
}

void licenses_order_service_categories_free(licenses_order_service_categories_t *licenses_order_service_categories) {
    if(NULL == licenses_order_service_categories){
        return ;
    }
    if(licenses_order_service_categories->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "licenses_order_service_categories_free");
        return ;
    }
    listEntry_t *listEntry;
    if (licenses_order_service_categories->licenses_order_service_categories509) {
        licenses_order_service_categories509_free(licenses_order_service_categories->licenses_order_service_categories509);
        licenses_order_service_categories->licenses_order_service_categories509 = NULL;
    }
    free(licenses_order_service_categories);
}

cJSON *licenses_order_service_categories_convertToJSON(licenses_order_service_categories_t *licenses_order_service_categories) {
    cJSON *item = cJSON_CreateObject();

    // licenses_order_service_categories->licenses_order_service_categories509
    if(licenses_order_service_categories->licenses_order_service_categories509) {
    cJSON *licenses_order_service_categories509_local_JSON = licenses_order_service_categories509_convertToJSON(licenses_order_service_categories->licenses_order_service_categories509);
    if(licenses_order_service_categories509_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "LicensesOrderServiceCategories509", licenses_order_service_categories509_local_JSON);
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

licenses_order_service_categories_t *licenses_order_service_categories_parseFromJSON(cJSON *licenses_order_service_categoriesJSON){

    licenses_order_service_categories_t *licenses_order_service_categories_local_var = NULL;

    // define the local variable for licenses_order_service_categories->licenses_order_service_categories509
    licenses_order_service_categories509_t *licenses_order_service_categories509_local_nonprim = NULL;

    // licenses_order_service_categories->licenses_order_service_categories509
    cJSON *licenses_order_service_categories509 = cJSON_GetObjectItemCaseSensitive(licenses_order_service_categoriesJSON, "LicensesOrderServiceCategories509");
    if (cJSON_IsNull(licenses_order_service_categories509)) {
        licenses_order_service_categories509 = NULL;
    }
    if (licenses_order_service_categories509) { 
    licenses_order_service_categories509_local_nonprim = licenses_order_service_categories509_parseFromJSON(licenses_order_service_categories509); //nonprimitive
    }


    licenses_order_service_categories_local_var = licenses_order_service_categories_create_internal (
        licenses_order_service_categories509 ? licenses_order_service_categories509_local_nonprim : NULL
        );

    return licenses_order_service_categories_local_var;
end:
    if (licenses_order_service_categories509_local_nonprim) {
        licenses_order_service_categories509_free(licenses_order_service_categories509_local_nonprim);
        licenses_order_service_categories509_local_nonprim = NULL;
    }
    return NULL;

}
