#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_order_services.h"



static domain_order_services_t *domain_order_services_create_internal(
    domain_order_services10001_t *domain_order_services10001
    ) {
    domain_order_services_t *domain_order_services_local_var = malloc(sizeof(domain_order_services_t));
    if (!domain_order_services_local_var) {
        return NULL;
    }
    domain_order_services_local_var->domain_order_services10001 = domain_order_services10001;

    domain_order_services_local_var->_library_owned = 1;
    return domain_order_services_local_var;
}

__attribute__((deprecated)) domain_order_services_t *domain_order_services_create(
    domain_order_services10001_t *domain_order_services10001
    ) {
    return domain_order_services_create_internal (
        domain_order_services10001
        );
}

void domain_order_services_free(domain_order_services_t *domain_order_services) {
    if(NULL == domain_order_services){
        return ;
    }
    if(domain_order_services->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_order_services_free");
        return ;
    }
    listEntry_t *listEntry;
    if (domain_order_services->domain_order_services10001) {
        domain_order_services10001_free(domain_order_services->domain_order_services10001);
        domain_order_services->domain_order_services10001 = NULL;
    }
    free(domain_order_services);
}

cJSON *domain_order_services_convertToJSON(domain_order_services_t *domain_order_services) {
    cJSON *item = cJSON_CreateObject();

    // domain_order_services->domain_order_services10001
    if(domain_order_services->domain_order_services10001) {
    cJSON *domain_order_services10001_local_JSON = domain_order_services10001_convertToJSON(domain_order_services->domain_order_services10001);
    if(domain_order_services10001_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "DomainOrderServices10001", domain_order_services10001_local_JSON);
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

domain_order_services_t *domain_order_services_parseFromJSON(cJSON *domain_order_servicesJSON){

    domain_order_services_t *domain_order_services_local_var = NULL;

    // define the local variable for domain_order_services->domain_order_services10001
    domain_order_services10001_t *domain_order_services10001_local_nonprim = NULL;

    // domain_order_services->domain_order_services10001
    cJSON *domain_order_services10001 = cJSON_GetObjectItemCaseSensitive(domain_order_servicesJSON, "DomainOrderServices10001");
    if (cJSON_IsNull(domain_order_services10001)) {
        domain_order_services10001 = NULL;
    }
    if (domain_order_services10001) { 
    domain_order_services10001_local_nonprim = domain_order_services10001_parseFromJSON(domain_order_services10001); //nonprimitive
    }


    domain_order_services_local_var = domain_order_services_create_internal (
        domain_order_services10001 ? domain_order_services10001_local_nonprim : NULL
        );

    return domain_order_services_local_var;
end:
    if (domain_order_services10001_local_nonprim) {
        domain_order_services10001_free(domain_order_services10001_local_nonprim);
        domain_order_services10001_local_nonprim = NULL;
    }
    return NULL;

}
