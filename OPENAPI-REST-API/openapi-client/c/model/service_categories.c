#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "service_categories.h"



static service_categories_t *service_categories_create_internal(
    ) {
    service_categories_t *service_categories_local_var = malloc(sizeof(service_categories_t));
    if (!service_categories_local_var) {
        return NULL;
    }

    service_categories_local_var->_library_owned = 1;
    return service_categories_local_var;
}

__attribute__((deprecated)) service_categories_t *service_categories_create(
    ) {
    return service_categories_create_internal (
        );
}

void service_categories_free(service_categories_t *service_categories) {
    if(NULL == service_categories){
        return ;
    }
    if(service_categories->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "service_categories_free");
        return ;
    }
    listEntry_t *listEntry;
    free(service_categories);
}

cJSON *service_categories_convertToJSON(service_categories_t *service_categories) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

service_categories_t *service_categories_parseFromJSON(cJSON *service_categoriesJSON){

    service_categories_t *service_categories_local_var = NULL;


    service_categories_local_var = service_categories_create_internal (
        );

    return service_categories_local_var;
end:
    return NULL;

}
