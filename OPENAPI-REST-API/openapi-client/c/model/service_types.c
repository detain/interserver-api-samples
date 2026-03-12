#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "service_types.h"



static service_types_t *service_types_create_internal(
    ) {
    service_types_t *service_types_local_var = malloc(sizeof(service_types_t));
    if (!service_types_local_var) {
        return NULL;
    }

    service_types_local_var->_library_owned = 1;
    return service_types_local_var;
}

__attribute__((deprecated)) service_types_t *service_types_create(
    ) {
    return service_types_create_internal (
        );
}

void service_types_free(service_types_t *service_types) {
    if(NULL == service_types){
        return ;
    }
    if(service_types->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "service_types_free");
        return ;
    }
    listEntry_t *listEntry;
    free(service_types);
}

cJSON *service_types_convertToJSON(service_types_t *service_types) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

service_types_t *service_types_parseFromJSON(cJSON *service_typesJSON){

    service_types_t *service_types_local_var = NULL;


    service_types_local_var = service_types_create_internal (
        );

    return service_types_local_var;
end:
    return NULL;

}
