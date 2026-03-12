#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "websites_order_json_services.h"



static websites_order_json_services_t *websites_order_json_services_create_internal(
    char *_11447
    ) {
    websites_order_json_services_t *websites_order_json_services_local_var = malloc(sizeof(websites_order_json_services_t));
    if (!websites_order_json_services_local_var) {
        return NULL;
    }
    websites_order_json_services_local_var->_11447 = _11447;

    websites_order_json_services_local_var->_library_owned = 1;
    return websites_order_json_services_local_var;
}

__attribute__((deprecated)) websites_order_json_services_t *websites_order_json_services_create(
    char *_11447
    ) {
    return websites_order_json_services_create_internal (
        _11447
        );
}

void websites_order_json_services_free(websites_order_json_services_t *websites_order_json_services) {
    if(NULL == websites_order_json_services){
        return ;
    }
    if(websites_order_json_services->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "websites_order_json_services_free");
        return ;
    }
    listEntry_t *listEntry;
    if (websites_order_json_services->_11447) {
        free(websites_order_json_services->_11447);
        websites_order_json_services->_11447 = NULL;
    }
    free(websites_order_json_services);
}

cJSON *websites_order_json_services_convertToJSON(websites_order_json_services_t *websites_order_json_services) {
    cJSON *item = cJSON_CreateObject();

    // websites_order_json_services->_11447
    if (!websites_order_json_services->_11447) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "11447", websites_order_json_services->_11447) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

websites_order_json_services_t *websites_order_json_services_parseFromJSON(cJSON *websites_order_json_servicesJSON){

    websites_order_json_services_t *websites_order_json_services_local_var = NULL;

    // websites_order_json_services->_11447
    cJSON *_11447 = cJSON_GetObjectItemCaseSensitive(websites_order_json_servicesJSON, "11447");
    if (cJSON_IsNull(_11447)) {
        _11447 = NULL;
    }
    if (!_11447) {
        goto end;
    }

    
    if(!cJSON_IsString(_11447))
    {
    goto end; //String
    }


    websites_order_json_services_local_var = websites_order_json_services_create_internal (
        strdup(_11447->valuestring)
        );

    return websites_order_json_services_local_var;
end:
    return NULL;

}
