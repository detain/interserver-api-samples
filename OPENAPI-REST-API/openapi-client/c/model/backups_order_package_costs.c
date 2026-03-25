#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "backups_order_package_costs.h"



static backups_order_package_costs_t *backups_order_package_costs_create_internal(
    int *_11006
    ) {
    backups_order_package_costs_t *backups_order_package_costs_local_var = malloc(sizeof(backups_order_package_costs_t));
    if (!backups_order_package_costs_local_var) {
        return NULL;
    }
    memset(backups_order_package_costs_local_var, 0, sizeof(backups_order_package_costs_t));
    backups_order_package_costs_local_var->_library_owned = 1;
    backups_order_package_costs_local_var->_11006 = _11006;
    return backups_order_package_costs_local_var;
}

__attribute__((deprecated)) backups_order_package_costs_t *backups_order_package_costs_create(
    int *_11006
    ) {
    int *_11006_copy = NULL;
    if (_11006) {
        _11006_copy = malloc(sizeof(int));
        if (_11006_copy) *_11006_copy = *_11006;
    }
    backups_order_package_costs_t *result = backups_order_package_costs_create_internal (
        _11006_copy
        );
    if (!result) {
        free(_11006_copy);
    }
    return result;
}

void backups_order_package_costs_free(backups_order_package_costs_t *backups_order_package_costs) {
    if(NULL == backups_order_package_costs){
        return ;
    }
    if(backups_order_package_costs->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "backups_order_package_costs_free");
        return ;
    }
    listEntry_t *listEntry;
    if (backups_order_package_costs->_11006) {
        free(backups_order_package_costs->_11006);
        backups_order_package_costs->_11006 = NULL;
    }
    free(backups_order_package_costs);
}

cJSON *backups_order_package_costs_convertToJSON(backups_order_package_costs_t *backups_order_package_costs) {
    cJSON *item = cJSON_CreateObject();

    // backups_order_package_costs->_11006
    if (!backups_order_package_costs->_11006) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "11006", *backups_order_package_costs->_11006) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

backups_order_package_costs_t *backups_order_package_costs_parseFromJSON(cJSON *backups_order_package_costsJSON){

    backups_order_package_costs_t *backups_order_package_costs_local_var = NULL;

    // define the local variable for backups_order_package_costs->_11006
    int *_11006_local_var = NULL;

    // backups_order_package_costs->_11006
    cJSON *_11006 = cJSON_GetObjectItemCaseSensitive(backups_order_package_costsJSON, "11006");
    if (cJSON_IsNull(_11006)) {
        _11006 = NULL;
    }
    if (!_11006) {
        goto end;
    }

    
    if(!cJSON_IsNumber(_11006))
    {
    goto end; //Numeric
    }
    _11006_local_var = malloc(sizeof(int));
    if(!_11006_local_var)
    {
        goto end;
    }
    *_11006_local_var = _11006->valuedouble;



    backups_order_package_costs_local_var = backups_order_package_costs_create_internal (
        _11006_local_var
        );

    if (!backups_order_package_costs_local_var) {
        goto end;
    }

    return backups_order_package_costs_local_var;
end:
    if (_11006_local_var) {
        free(_11006_local_var);
        _11006_local_var = NULL;
    }
    return NULL;

}
