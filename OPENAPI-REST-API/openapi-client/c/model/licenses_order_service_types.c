#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "licenses_order_service_types.h"



static licenses_order_service_types_t *licenses_order_service_types_create_internal(
    licenses_order_service_types11482_t *licenses_order_service_types11482
    ) {
    licenses_order_service_types_t *licenses_order_service_types_local_var = malloc(sizeof(licenses_order_service_types_t));
    if (!licenses_order_service_types_local_var) {
        return NULL;
    }
    licenses_order_service_types_local_var->licenses_order_service_types11482 = licenses_order_service_types11482;

    licenses_order_service_types_local_var->_library_owned = 1;
    return licenses_order_service_types_local_var;
}

__attribute__((deprecated)) licenses_order_service_types_t *licenses_order_service_types_create(
    licenses_order_service_types11482_t *licenses_order_service_types11482
    ) {
    return licenses_order_service_types_create_internal (
        licenses_order_service_types11482
        );
}

void licenses_order_service_types_free(licenses_order_service_types_t *licenses_order_service_types) {
    if(NULL == licenses_order_service_types){
        return ;
    }
    if(licenses_order_service_types->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "licenses_order_service_types_free");
        return ;
    }
    listEntry_t *listEntry;
    if (licenses_order_service_types->licenses_order_service_types11482) {
        licenses_order_service_types11482_free(licenses_order_service_types->licenses_order_service_types11482);
        licenses_order_service_types->licenses_order_service_types11482 = NULL;
    }
    free(licenses_order_service_types);
}

cJSON *licenses_order_service_types_convertToJSON(licenses_order_service_types_t *licenses_order_service_types) {
    cJSON *item = cJSON_CreateObject();

    // licenses_order_service_types->licenses_order_service_types11482
    if(licenses_order_service_types->licenses_order_service_types11482) {
    cJSON *licenses_order_service_types11482_local_JSON = licenses_order_service_types11482_convertToJSON(licenses_order_service_types->licenses_order_service_types11482);
    if(licenses_order_service_types11482_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "LicensesOrderServiceTypes11482", licenses_order_service_types11482_local_JSON);
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

licenses_order_service_types_t *licenses_order_service_types_parseFromJSON(cJSON *licenses_order_service_typesJSON){

    licenses_order_service_types_t *licenses_order_service_types_local_var = NULL;

    // define the local variable for licenses_order_service_types->licenses_order_service_types11482
    licenses_order_service_types11482_t *licenses_order_service_types11482_local_nonprim = NULL;

    // licenses_order_service_types->licenses_order_service_types11482
    cJSON *licenses_order_service_types11482 = cJSON_GetObjectItemCaseSensitive(licenses_order_service_typesJSON, "LicensesOrderServiceTypes11482");
    if (cJSON_IsNull(licenses_order_service_types11482)) {
        licenses_order_service_types11482 = NULL;
    }
    if (licenses_order_service_types11482) { 
    licenses_order_service_types11482_local_nonprim = licenses_order_service_types11482_parseFromJSON(licenses_order_service_types11482); //nonprimitive
    }


    licenses_order_service_types_local_var = licenses_order_service_types_create_internal (
        licenses_order_service_types11482 ? licenses_order_service_types11482_local_nonprim : NULL
        );

    return licenses_order_service_types_local_var;
end:
    if (licenses_order_service_types11482_local_nonprim) {
        licenses_order_service_types11482_free(licenses_order_service_types11482_local_nonprim);
        licenses_order_service_types11482_local_nonprim = NULL;
    }
    return NULL;

}
