#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "backups_order_service_types.h"



static backups_order_service_types_t *backups_order_service_types_create_internal(
    backups_order_service_types_t *_11006
    ) {
    backups_order_service_types_t *backups_order_service_types_local_var = malloc(sizeof(backups_order_service_types_t));
    if (!backups_order_service_types_local_var) {
        return NULL;
    }
    memset(backups_order_service_types_local_var, 0, sizeof(backups_order_service_types_t));
    backups_order_service_types_local_var->_library_owned = 1;
    backups_order_service_types_local_var->_11006 = _11006;
    return backups_order_service_types_local_var;
}

__attribute__((deprecated)) backups_order_service_types_t *backups_order_service_types_create(
    backups_order_service_types_t *_11006
    ) {
    backups_order_service_types_t *result = backups_order_service_types_create_internal (
        _11006
        );
    if (!result) {
    }
    return result;
}

void backups_order_service_types_free(backups_order_service_types_t *backups_order_service_types) {
    if(NULL == backups_order_service_types){
        return ;
    }
    if(backups_order_service_types->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "backups_order_service_types_free");
        return ;
    }
    listEntry_t *listEntry;
    if (backups_order_service_types->_11006) {
        backups_order_service_types_free(backups_order_service_types->_11006);
        backups_order_service_types->_11006 = NULL;
    }
    free(backups_order_service_types);
}

cJSON *backups_order_service_types_convertToJSON(backups_order_service_types_t *backups_order_service_types) {
    cJSON *item = cJSON_CreateObject();

    // backups_order_service_types->_11006
    if(backups_order_service_types->_11006) {
    cJSON *_11006_local_JSON = backups_order_service_types_convertToJSON(backups_order_service_types->_11006);
    if(_11006_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "11006", _11006_local_JSON);
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

backups_order_service_types_t *backups_order_service_types_parseFromJSON(cJSON *backups_order_service_typesJSON){

    backups_order_service_types_t *backups_order_service_types_local_var = NULL;

    // define the local variable for backups_order_service_types->_11006
    backups_order_service_types_t *_11006_local_nonprim = NULL;

    // backups_order_service_types->_11006
    cJSON *_11006 = cJSON_GetObjectItemCaseSensitive(backups_order_service_typesJSON, "11006");
    if (cJSON_IsNull(_11006)) {
        _11006 = NULL;
    }
    if (_11006) { 
    _11006_local_nonprim = backups_order_service_types_parseFromJSON(_11006); //nonprimitive
    }



    backups_order_service_types_local_var = backups_order_service_types_create_internal (
        _11006 ? _11006_local_nonprim : NULL
        );

    if (!backups_order_service_types_local_var) {
        goto end;
    }

    return backups_order_service_types_local_var;
end:
    if (_11006_local_nonprim) {
        backups_order_service_types_free(_11006_local_nonprim);
        _11006_local_nonprim = NULL;
    }
    return NULL;

}
