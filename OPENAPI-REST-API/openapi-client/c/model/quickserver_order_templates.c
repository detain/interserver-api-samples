#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "quickserver_order_templates.h"



static quickserver_order_templates_t *quickserver_order_templates_create_internal(
    quickserver_order_templates_ubuntu64_t *ubuntu
    ) {
    quickserver_order_templates_t *quickserver_order_templates_local_var = malloc(sizeof(quickserver_order_templates_t));
    if (!quickserver_order_templates_local_var) {
        return NULL;
    }
    quickserver_order_templates_local_var->ubuntu = ubuntu;

    quickserver_order_templates_local_var->_library_owned = 1;
    return quickserver_order_templates_local_var;
}

__attribute__((deprecated)) quickserver_order_templates_t *quickserver_order_templates_create(
    quickserver_order_templates_ubuntu64_t *ubuntu
    ) {
    return quickserver_order_templates_create_internal (
        ubuntu
        );
}

void quickserver_order_templates_free(quickserver_order_templates_t *quickserver_order_templates) {
    if(NULL == quickserver_order_templates){
        return ;
    }
    if(quickserver_order_templates->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "quickserver_order_templates_free");
        return ;
    }
    listEntry_t *listEntry;
    if (quickserver_order_templates->ubuntu) {
        quickserver_order_templates_ubuntu64_free(quickserver_order_templates->ubuntu);
        quickserver_order_templates->ubuntu = NULL;
    }
    free(quickserver_order_templates);
}

cJSON *quickserver_order_templates_convertToJSON(quickserver_order_templates_t *quickserver_order_templates) {
    cJSON *item = cJSON_CreateObject();

    // quickserver_order_templates->ubuntu
    if(quickserver_order_templates->ubuntu) {
    cJSON *ubuntu_local_JSON = quickserver_order_templates_ubuntu64_convertToJSON(quickserver_order_templates->ubuntu);
    if(ubuntu_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "Ubuntu", ubuntu_local_JSON);
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

quickserver_order_templates_t *quickserver_order_templates_parseFromJSON(cJSON *quickserver_order_templatesJSON){

    quickserver_order_templates_t *quickserver_order_templates_local_var = NULL;

    // define the local variable for quickserver_order_templates->ubuntu
    quickserver_order_templates_ubuntu64_t *ubuntu_local_nonprim = NULL;

    // quickserver_order_templates->ubuntu
    cJSON *ubuntu = cJSON_GetObjectItemCaseSensitive(quickserver_order_templatesJSON, "Ubuntu");
    if (cJSON_IsNull(ubuntu)) {
        ubuntu = NULL;
    }
    if (ubuntu) { 
    ubuntu_local_nonprim = quickserver_order_templates_ubuntu64_parseFromJSON(ubuntu); //custom
    }


    quickserver_order_templates_local_var = quickserver_order_templates_create_internal (
        ubuntu ? ubuntu_local_nonprim : NULL
        );

    return quickserver_order_templates_local_var;
end:
    if (ubuntu_local_nonprim) {
        quickserver_order_templates_ubuntu64_free(ubuntu_local_nonprim);
        ubuntu_local_nonprim = NULL;
    }
    return NULL;

}
