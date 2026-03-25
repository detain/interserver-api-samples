#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_order_location_names.h"



static vps_order_location_names_t *vps_order_location_names_create_internal(
    char *_3
    ) {
    vps_order_location_names_t *vps_order_location_names_local_var = malloc(sizeof(vps_order_location_names_t));
    if (!vps_order_location_names_local_var) {
        return NULL;
    }
    memset(vps_order_location_names_local_var, 0, sizeof(vps_order_location_names_t));
    vps_order_location_names_local_var->_library_owned = 1;
    vps_order_location_names_local_var->_3 = _3;
    return vps_order_location_names_local_var;
}

__attribute__((deprecated)) vps_order_location_names_t *vps_order_location_names_create(
    char *_3
    ) {
    vps_order_location_names_t *result = vps_order_location_names_create_internal (
        _3
        );
    if (!result) {
    }
    return result;
}

void vps_order_location_names_free(vps_order_location_names_t *vps_order_location_names) {
    if(NULL == vps_order_location_names){
        return ;
    }
    if(vps_order_location_names->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_order_location_names_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_order_location_names->_3) {
        free(vps_order_location_names->_3);
        vps_order_location_names->_3 = NULL;
    }
    free(vps_order_location_names);
}

cJSON *vps_order_location_names_convertToJSON(vps_order_location_names_t *vps_order_location_names) {
    cJSON *item = cJSON_CreateObject();

    // vps_order_location_names->_3
    if(vps_order_location_names->_3) {
    if(cJSON_AddStringToObject(item, "3", vps_order_location_names->_3) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

vps_order_location_names_t *vps_order_location_names_parseFromJSON(cJSON *vps_order_location_namesJSON){

    vps_order_location_names_t *vps_order_location_names_local_var = NULL;

    char *_3_local_str = NULL;

    // vps_order_location_names->_3
    cJSON *_3 = cJSON_GetObjectItemCaseSensitive(vps_order_location_namesJSON, "3");
    if (cJSON_IsNull(_3)) {
        _3 = NULL;
    }
    if (_3) { 
    if(!cJSON_IsString(_3) && !cJSON_IsNull(_3))
    {
    goto end; //String
    }
    }


    if (_3 && !cJSON_IsNull(_3)) _3_local_str = strdup(_3->valuestring);

    vps_order_location_names_local_var = vps_order_location_names_create_internal (
        _3_local_str
        );

    if (!vps_order_location_names_local_var) {
        goto end;
    }

    return vps_order_location_names_local_var;
end:
    if (_3_local_str) {
        free(_3_local_str);
        _3_local_str = NULL;
    }
    return NULL;

}
