#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "services.h"



static services_t *services_create_internal(
    ) {
    services_t *services_local_var = malloc(sizeof(services_t));
    if (!services_local_var) {
        return NULL;
    }

    services_local_var->_library_owned = 1;
    return services_local_var;
}

__attribute__((deprecated)) services_t *services_create(
    ) {
    return services_create_internal (
        );
}

void services_free(services_t *services) {
    if(NULL == services){
        return ;
    }
    if(services->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "services_free");
        return ;
    }
    listEntry_t *listEntry;
    free(services);
}

cJSON *services_convertToJSON(services_t *services) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

services_t *services_parseFromJSON(cJSON *servicesJSON){

    services_t *services_local_var = NULL;


    services_local_var = services_create_internal (
        );

    return services_local_var;
end:
    return NULL;

}
