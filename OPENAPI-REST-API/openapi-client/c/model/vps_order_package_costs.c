#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_order_package_costs.h"



static vps_order_package_costs_t *vps_order_package_costs_create_internal(
    double _57
    ) {
    vps_order_package_costs_t *vps_order_package_costs_local_var = malloc(sizeof(vps_order_package_costs_t));
    if (!vps_order_package_costs_local_var) {
        return NULL;
    }
    vps_order_package_costs_local_var->_57 = _57;

    vps_order_package_costs_local_var->_library_owned = 1;
    return vps_order_package_costs_local_var;
}

__attribute__((deprecated)) vps_order_package_costs_t *vps_order_package_costs_create(
    double _57
    ) {
    return vps_order_package_costs_create_internal (
        _57
        );
}

void vps_order_package_costs_free(vps_order_package_costs_t *vps_order_package_costs) {
    if(NULL == vps_order_package_costs){
        return ;
    }
    if(vps_order_package_costs->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_order_package_costs_free");
        return ;
    }
    listEntry_t *listEntry;
    free(vps_order_package_costs);
}

cJSON *vps_order_package_costs_convertToJSON(vps_order_package_costs_t *vps_order_package_costs) {
    cJSON *item = cJSON_CreateObject();

    // vps_order_package_costs->_57
    if(vps_order_package_costs->_57) {
    if(cJSON_AddNumberToObject(item, "57", vps_order_package_costs->_57) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

vps_order_package_costs_t *vps_order_package_costs_parseFromJSON(cJSON *vps_order_package_costsJSON){

    vps_order_package_costs_t *vps_order_package_costs_local_var = NULL;

    // vps_order_package_costs->_57
    cJSON *_57 = cJSON_GetObjectItemCaseSensitive(vps_order_package_costsJSON, "57");
    if (cJSON_IsNull(_57)) {
        _57 = NULL;
    }
    if (_57) { 
    if(!cJSON_IsNumber(_57))
    {
    goto end; //Numeric
    }
    }


    vps_order_package_costs_local_var = vps_order_package_costs_create_internal (
        _57 ? _57->valuedouble : 0
        );

    return vps_order_package_costs_local_var;
end:
    return NULL;

}
