#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "quickserver_order_version.h"



static quickserver_order_version_t *quickserver_order_version_create_internal(
    quickserver_order_version_centosstream8_t *centosstream_8
    ) {
    quickserver_order_version_t *quickserver_order_version_local_var = malloc(sizeof(quickserver_order_version_t));
    if (!quickserver_order_version_local_var) {
        return NULL;
    }
    memset(quickserver_order_version_local_var, 0, sizeof(quickserver_order_version_t));
    quickserver_order_version_local_var->_library_owned = 1;
    quickserver_order_version_local_var->centosstream_8 = centosstream_8;
    return quickserver_order_version_local_var;
}

__attribute__((deprecated)) quickserver_order_version_t *quickserver_order_version_create(
    quickserver_order_version_centosstream8_t *centosstream_8
    ) {
    quickserver_order_version_t *result = quickserver_order_version_create_internal (
        centosstream_8
        );
    if (!result) {
    }
    return result;
}

void quickserver_order_version_free(quickserver_order_version_t *quickserver_order_version) {
    if(NULL == quickserver_order_version){
        return ;
    }
    if(quickserver_order_version->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "quickserver_order_version_free");
        return ;
    }
    listEntry_t *listEntry;
    if (quickserver_order_version->centosstream_8) {
        quickserver_order_version_centosstream8_free(quickserver_order_version->centosstream_8);
        quickserver_order_version->centosstream_8 = NULL;
    }
    free(quickserver_order_version);
}

cJSON *quickserver_order_version_convertToJSON(quickserver_order_version_t *quickserver_order_version) {
    cJSON *item = cJSON_CreateObject();

    // quickserver_order_version->centosstream_8
    if(quickserver_order_version->centosstream_8) {
    cJSON *centosstream_8_local_JSON = quickserver_order_version_centosstream8_convertToJSON(quickserver_order_version->centosstream_8);
    if(centosstream_8_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "centosstream-8", centosstream_8_local_JSON);
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

quickserver_order_version_t *quickserver_order_version_parseFromJSON(cJSON *quickserver_order_versionJSON){

    quickserver_order_version_t *quickserver_order_version_local_var = NULL;

    // define the local variable for quickserver_order_version->centosstream_8
    quickserver_order_version_centosstream8_t *centosstream_8_local_nonprim = NULL;

    // quickserver_order_version->centosstream_8
    cJSON *centosstream_8 = cJSON_GetObjectItemCaseSensitive(quickserver_order_versionJSON, "centosstream-8");
    if (cJSON_IsNull(centosstream_8)) {
        centosstream_8 = NULL;
    }
    if (centosstream_8) { 
    centosstream_8_local_nonprim = quickserver_order_version_centosstream8_parseFromJSON(centosstream_8); //nonprimitive
    }



    quickserver_order_version_local_var = quickserver_order_version_create_internal (
        centosstream_8 ? centosstream_8_local_nonprim : NULL
        );

    if (!quickserver_order_version_local_var) {
        goto end;
    }

    return quickserver_order_version_local_var;
end:
    if (centosstream_8_local_nonprim) {
        quickserver_order_version_centosstream8_free(centosstream_8_local_nonprim);
        centosstream_8_local_nonprim = NULL;
    }
    return NULL;

}
