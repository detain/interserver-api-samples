#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_order_templates.h"



static vps_order_templates_t *vps_order_templates_create_internal(
    vps_order_templates_hyperv_t *hyperv
    ) {
    vps_order_templates_t *vps_order_templates_local_var = malloc(sizeof(vps_order_templates_t));
    if (!vps_order_templates_local_var) {
        return NULL;
    }
    memset(vps_order_templates_local_var, 0, sizeof(vps_order_templates_t));
    vps_order_templates_local_var->_library_owned = 1;
    vps_order_templates_local_var->hyperv = hyperv;
    return vps_order_templates_local_var;
}

__attribute__((deprecated)) vps_order_templates_t *vps_order_templates_create(
    vps_order_templates_hyperv_t *hyperv
    ) {
    vps_order_templates_t *result = vps_order_templates_create_internal (
        hyperv
        );
    if (!result) {
    }
    return result;
}

void vps_order_templates_free(vps_order_templates_t *vps_order_templates) {
    if(NULL == vps_order_templates){
        return ;
    }
    if(vps_order_templates->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_order_templates_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_order_templates->hyperv) {
        vps_order_templates_hyperv_free(vps_order_templates->hyperv);
        vps_order_templates->hyperv = NULL;
    }
    free(vps_order_templates);
}

cJSON *vps_order_templates_convertToJSON(vps_order_templates_t *vps_order_templates) {
    cJSON *item = cJSON_CreateObject();

    // vps_order_templates->hyperv
    if(vps_order_templates->hyperv) {
    cJSON *hyperv_local_JSON = vps_order_templates_hyperv_convertToJSON(vps_order_templates->hyperv);
    if(hyperv_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "hyperv", hyperv_local_JSON);
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

vps_order_templates_t *vps_order_templates_parseFromJSON(cJSON *vps_order_templatesJSON){

    vps_order_templates_t *vps_order_templates_local_var = NULL;

    // define the local variable for vps_order_templates->hyperv
    vps_order_templates_hyperv_t *hyperv_local_nonprim = NULL;

    // vps_order_templates->hyperv
    cJSON *hyperv = cJSON_GetObjectItemCaseSensitive(vps_order_templatesJSON, "hyperv");
    if (cJSON_IsNull(hyperv)) {
        hyperv = NULL;
    }
    if (hyperv) { 
    hyperv_local_nonprim = vps_order_templates_hyperv_parseFromJSON(hyperv); //nonprimitive
    }



    vps_order_templates_local_var = vps_order_templates_create_internal (
        hyperv ? hyperv_local_nonprim : NULL
        );

    if (!vps_order_templates_local_var) {
        goto end;
    }

    return vps_order_templates_local_var;
end:
    if (hyperv_local_nonprim) {
        vps_order_templates_hyperv_free(hyperv_local_nonprim);
        hyperv_local_nonprim = NULL;
    }
    return NULL;

}
