#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "websites_order_packages.h"



static websites_order_packages_t *websites_order_packages_create_internal(
    char *_11447
    ) {
    websites_order_packages_t *websites_order_packages_local_var = malloc(sizeof(websites_order_packages_t));
    if (!websites_order_packages_local_var) {
        return NULL;
    }
    websites_order_packages_local_var->_11447 = _11447;

    websites_order_packages_local_var->_library_owned = 1;
    return websites_order_packages_local_var;
}

__attribute__((deprecated)) websites_order_packages_t *websites_order_packages_create(
    char *_11447
    ) {
    return websites_order_packages_create_internal (
        _11447
        );
}

void websites_order_packages_free(websites_order_packages_t *websites_order_packages) {
    if(NULL == websites_order_packages){
        return ;
    }
    if(websites_order_packages->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "websites_order_packages_free");
        return ;
    }
    listEntry_t *listEntry;
    if (websites_order_packages->_11447) {
        free(websites_order_packages->_11447);
        websites_order_packages->_11447 = NULL;
    }
    free(websites_order_packages);
}

cJSON *websites_order_packages_convertToJSON(websites_order_packages_t *websites_order_packages) {
    cJSON *item = cJSON_CreateObject();

    // websites_order_packages->_11447
    if (!websites_order_packages->_11447) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "11447", websites_order_packages->_11447) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

websites_order_packages_t *websites_order_packages_parseFromJSON(cJSON *websites_order_packagesJSON){

    websites_order_packages_t *websites_order_packages_local_var = NULL;

    // websites_order_packages->_11447
    cJSON *_11447 = cJSON_GetObjectItemCaseSensitive(websites_order_packagesJSON, "11447");
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


    websites_order_packages_local_var = websites_order_packages_create_internal (
        strdup(_11447->valuestring)
        );

    return websites_order_packages_local_var;
end:
    return NULL;

}
