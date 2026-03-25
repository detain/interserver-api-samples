#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "quickserver_order_templates_ubuntu64.h"



static quickserver_order_templates_ubuntu64_t *quickserver_order_templates_ubuntu64_create_internal(
    ) {
    quickserver_order_templates_ubuntu64_t *quickserver_order_templates_ubuntu64_local_var = malloc(sizeof(quickserver_order_templates_ubuntu64_t));
    if (!quickserver_order_templates_ubuntu64_local_var) {
        return NULL;
    }
    memset(quickserver_order_templates_ubuntu64_local_var, 0, sizeof(quickserver_order_templates_ubuntu64_t));
    quickserver_order_templates_ubuntu64_local_var->_library_owned = 1;
    return quickserver_order_templates_ubuntu64_local_var;
}

__attribute__((deprecated)) quickserver_order_templates_ubuntu64_t *quickserver_order_templates_ubuntu64_create(
    ) {
    quickserver_order_templates_ubuntu64_t *result = quickserver_order_templates_ubuntu64_create_internal (
        );
    if (!result) {
    }
    return result;
}

void quickserver_order_templates_ubuntu64_free(quickserver_order_templates_ubuntu64_t *quickserver_order_templates_ubuntu64) {
    if(NULL == quickserver_order_templates_ubuntu64){
        return ;
    }
    if(quickserver_order_templates_ubuntu64->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "quickserver_order_templates_ubuntu64_free");
        return ;
    }
    listEntry_t *listEntry;
    free(quickserver_order_templates_ubuntu64);
}

cJSON *quickserver_order_templates_ubuntu64_convertToJSON(quickserver_order_templates_ubuntu64_t *quickserver_order_templates_ubuntu64) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

quickserver_order_templates_ubuntu64_t *quickserver_order_templates_ubuntu64_parseFromJSON(cJSON *quickserver_order_templates_ubuntu64JSON){

    quickserver_order_templates_ubuntu64_t *quickserver_order_templates_ubuntu64_local_var = NULL;



    quickserver_order_templates_ubuntu64_local_var = quickserver_order_templates_ubuntu64_create_internal (
        );

    if (!quickserver_order_templates_ubuntu64_local_var) {
        goto end;
    }

    return quickserver_order_templates_ubuntu64_local_var;
end:
    return NULL;

}
