#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_order_package_costs.h"



static vps_order_package_costs_t *vps_order_package_costs_create_internal(
    double *_57
    ) {
    vps_order_package_costs_t *vps_order_package_costs_local_var = malloc(sizeof(vps_order_package_costs_t));
    if (!vps_order_package_costs_local_var) {
        return NULL;
    }
    memset(vps_order_package_costs_local_var, 0, sizeof(vps_order_package_costs_t));
    vps_order_package_costs_local_var->_library_owned = 1;
    vps_order_package_costs_local_var->_57 = _57;
    return vps_order_package_costs_local_var;
}

__attribute__((deprecated)) vps_order_package_costs_t *vps_order_package_costs_create(
    double *_57
    ) {
    double *_57_copy = NULL;
    if (_57) {
        _57_copy = malloc(sizeof(double));
        if (_57_copy) *_57_copy = *_57;
    }
    vps_order_package_costs_t *result = vps_order_package_costs_create_internal (
        _57_copy
        );
    if (!result) {
        free(_57_copy);
    }
    return result;
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
    if (vps_order_package_costs->_57) {
        free(vps_order_package_costs->_57);
        vps_order_package_costs->_57 = NULL;
    }
    free(vps_order_package_costs);
}

cJSON *vps_order_package_costs_convertToJSON(vps_order_package_costs_t *vps_order_package_costs) {
    cJSON *item = cJSON_CreateObject();

    // vps_order_package_costs->_57
    if(vps_order_package_costs->_57) {
    if(cJSON_AddNumberToObject(item, "57", *vps_order_package_costs->_57) == NULL) {
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

    // define the local variable for vps_order_package_costs->_57
    double *_57_local_var = NULL;

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
    _57_local_var = malloc(sizeof(double));
    if(!_57_local_var)
    {
        goto end;
    }
    *_57_local_var = _57->valuedouble;
    }



    vps_order_package_costs_local_var = vps_order_package_costs_create_internal (
        _57_local_var
        );

    if (!vps_order_package_costs_local_var) {
        goto end;
    }

    return vps_order_package_costs_local_var;
end:
    if (_57_local_var) {
        free(_57_local_var);
        _57_local_var = NULL;
    }
    return NULL;

}
