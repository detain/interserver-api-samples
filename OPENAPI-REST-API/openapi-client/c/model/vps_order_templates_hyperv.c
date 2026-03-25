#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_order_templates_hyperv.h"



static vps_order_templates_hyperv_t *vps_order_templates_hyperv_create_internal(
    vps_order_templates_hyperv_windows_t *windows
    ) {
    vps_order_templates_hyperv_t *vps_order_templates_hyperv_local_var = malloc(sizeof(vps_order_templates_hyperv_t));
    if (!vps_order_templates_hyperv_local_var) {
        return NULL;
    }
    memset(vps_order_templates_hyperv_local_var, 0, sizeof(vps_order_templates_hyperv_t));
    vps_order_templates_hyperv_local_var->_library_owned = 1;
    vps_order_templates_hyperv_local_var->windows = windows;
    return vps_order_templates_hyperv_local_var;
}

__attribute__((deprecated)) vps_order_templates_hyperv_t *vps_order_templates_hyperv_create(
    vps_order_templates_hyperv_windows_t *windows
    ) {
    vps_order_templates_hyperv_t *result = vps_order_templates_hyperv_create_internal (
        windows
        );
    if (!result) {
    }
    return result;
}

void vps_order_templates_hyperv_free(vps_order_templates_hyperv_t *vps_order_templates_hyperv) {
    if(NULL == vps_order_templates_hyperv){
        return ;
    }
    if(vps_order_templates_hyperv->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_order_templates_hyperv_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_order_templates_hyperv->windows) {
        vps_order_templates_hyperv_windows_free(vps_order_templates_hyperv->windows);
        vps_order_templates_hyperv->windows = NULL;
    }
    free(vps_order_templates_hyperv);
}

cJSON *vps_order_templates_hyperv_convertToJSON(vps_order_templates_hyperv_t *vps_order_templates_hyperv) {
    cJSON *item = cJSON_CreateObject();

    // vps_order_templates_hyperv->windows
    if(vps_order_templates_hyperv->windows) {
    cJSON *windows_local_JSON = vps_order_templates_hyperv_windows_convertToJSON(vps_order_templates_hyperv->windows);
    if(windows_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "windows", windows_local_JSON);
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

vps_order_templates_hyperv_t *vps_order_templates_hyperv_parseFromJSON(cJSON *vps_order_templates_hypervJSON){

    vps_order_templates_hyperv_t *vps_order_templates_hyperv_local_var = NULL;

    // define the local variable for vps_order_templates_hyperv->windows
    vps_order_templates_hyperv_windows_t *windows_local_nonprim = NULL;

    // vps_order_templates_hyperv->windows
    cJSON *windows = cJSON_GetObjectItemCaseSensitive(vps_order_templates_hypervJSON, "windows");
    if (cJSON_IsNull(windows)) {
        windows = NULL;
    }
    if (windows) { 
    windows_local_nonprim = vps_order_templates_hyperv_windows_parseFromJSON(windows); //nonprimitive
    }



    vps_order_templates_hyperv_local_var = vps_order_templates_hyperv_create_internal (
        windows ? windows_local_nonprim : NULL
        );

    if (!vps_order_templates_hyperv_local_var) {
        goto end;
    }

    return vps_order_templates_hyperv_local_var;
end:
    if (windows_local_nonprim) {
        vps_order_templates_hyperv_windows_free(windows_local_nonprim);
        windows_local_nonprim = NULL;
    }
    return NULL;

}
