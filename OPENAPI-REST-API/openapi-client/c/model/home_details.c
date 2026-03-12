#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "home_details.h"



static home_details_t *home_details_create_internal(
    home_details_modules_t *modules
    ) {
    home_details_t *home_details_local_var = malloc(sizeof(home_details_t));
    if (!home_details_local_var) {
        return NULL;
    }
    home_details_local_var->modules = modules;

    home_details_local_var->_library_owned = 1;
    return home_details_local_var;
}

__attribute__((deprecated)) home_details_t *home_details_create(
    home_details_modules_t *modules
    ) {
    return home_details_create_internal (
        modules
        );
}

void home_details_free(home_details_t *home_details) {
    if(NULL == home_details){
        return ;
    }
    if(home_details->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "home_details_free");
        return ;
    }
    listEntry_t *listEntry;
    if (home_details->modules) {
        home_details_modules_free(home_details->modules);
        home_details->modules = NULL;
    }
    free(home_details);
}

cJSON *home_details_convertToJSON(home_details_t *home_details) {
    cJSON *item = cJSON_CreateObject();

    // home_details->modules
    if(home_details->modules) {
    cJSON *modules_local_JSON = home_details_modules_convertToJSON(home_details->modules);
    if(modules_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "modules", modules_local_JSON);
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

home_details_t *home_details_parseFromJSON(cJSON *home_detailsJSON){

    home_details_t *home_details_local_var = NULL;

    // define the local variable for home_details->modules
    home_details_modules_t *modules_local_nonprim = NULL;

    // home_details->modules
    cJSON *modules = cJSON_GetObjectItemCaseSensitive(home_detailsJSON, "modules");
    if (cJSON_IsNull(modules)) {
        modules = NULL;
    }
    if (modules) { 
    modules_local_nonprim = home_details_modules_parseFromJSON(modules); //nonprimitive
    }


    home_details_local_var = home_details_create_internal (
        modules ? modules_local_nonprim : NULL
        );

    return home_details_local_var;
end:
    if (modules_local_nonprim) {
        home_details_modules_free(modules_local_nonprim);
        modules_local_nonprim = NULL;
    }
    return NULL;

}
