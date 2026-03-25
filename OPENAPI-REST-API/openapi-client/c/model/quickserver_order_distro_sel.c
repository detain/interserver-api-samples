#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "quickserver_order_distro_sel.h"



static quickserver_order_distro_sel_t *quickserver_order_distro_sel_create_internal(
    quickserver_order_distro_sel_ubuntu_t *ubuntu
    ) {
    quickserver_order_distro_sel_t *quickserver_order_distro_sel_local_var = malloc(sizeof(quickserver_order_distro_sel_t));
    if (!quickserver_order_distro_sel_local_var) {
        return NULL;
    }
    memset(quickserver_order_distro_sel_local_var, 0, sizeof(quickserver_order_distro_sel_t));
    quickserver_order_distro_sel_local_var->_library_owned = 1;
    quickserver_order_distro_sel_local_var->ubuntu = ubuntu;
    return quickserver_order_distro_sel_local_var;
}

__attribute__((deprecated)) quickserver_order_distro_sel_t *quickserver_order_distro_sel_create(
    quickserver_order_distro_sel_ubuntu_t *ubuntu
    ) {
    quickserver_order_distro_sel_t *result = quickserver_order_distro_sel_create_internal (
        ubuntu
        );
    if (!result) {
    }
    return result;
}

void quickserver_order_distro_sel_free(quickserver_order_distro_sel_t *quickserver_order_distro_sel) {
    if(NULL == quickserver_order_distro_sel){
        return ;
    }
    if(quickserver_order_distro_sel->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "quickserver_order_distro_sel_free");
        return ;
    }
    listEntry_t *listEntry;
    if (quickserver_order_distro_sel->ubuntu) {
        quickserver_order_distro_sel_ubuntu_free(quickserver_order_distro_sel->ubuntu);
        quickserver_order_distro_sel->ubuntu = NULL;
    }
    free(quickserver_order_distro_sel);
}

cJSON *quickserver_order_distro_sel_convertToJSON(quickserver_order_distro_sel_t *quickserver_order_distro_sel) {
    cJSON *item = cJSON_CreateObject();

    // quickserver_order_distro_sel->ubuntu
    if(quickserver_order_distro_sel->ubuntu) {
    cJSON *ubuntu_local_JSON = quickserver_order_distro_sel_ubuntu_convertToJSON(quickserver_order_distro_sel->ubuntu);
    if(ubuntu_local_JSON == NULL) {
    goto fail; //model
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

quickserver_order_distro_sel_t *quickserver_order_distro_sel_parseFromJSON(cJSON *quickserver_order_distro_selJSON){

    quickserver_order_distro_sel_t *quickserver_order_distro_sel_local_var = NULL;

    // define the local variable for quickserver_order_distro_sel->ubuntu
    quickserver_order_distro_sel_ubuntu_t *ubuntu_local_nonprim = NULL;

    // quickserver_order_distro_sel->ubuntu
    cJSON *ubuntu = cJSON_GetObjectItemCaseSensitive(quickserver_order_distro_selJSON, "Ubuntu");
    if (cJSON_IsNull(ubuntu)) {
        ubuntu = NULL;
    }
    if (ubuntu) { 
    ubuntu_local_nonprim = quickserver_order_distro_sel_ubuntu_parseFromJSON(ubuntu); //nonprimitive
    }



    quickserver_order_distro_sel_local_var = quickserver_order_distro_sel_create_internal (
        ubuntu ? ubuntu_local_nonprim : NULL
        );

    if (!quickserver_order_distro_sel_local_var) {
        goto end;
    }

    return quickserver_order_distro_sel_local_var;
end:
    if (ubuntu_local_nonprim) {
        quickserver_order_distro_sel_ubuntu_free(ubuntu_local_nonprim);
        ubuntu_local_nonprim = NULL;
    }
    return NULL;

}
