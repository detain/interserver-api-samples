#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "quickserver_order_version_centosstream8.h"



static quickserver_order_version_centosstream8_t *quickserver_order_version_centosstream8_create_internal(
    char *centosstream_8
    ) {
    quickserver_order_version_centosstream8_t *quickserver_order_version_centosstream8_local_var = malloc(sizeof(quickserver_order_version_centosstream8_t));
    if (!quickserver_order_version_centosstream8_local_var) {
        return NULL;
    }
    memset(quickserver_order_version_centosstream8_local_var, 0, sizeof(quickserver_order_version_centosstream8_t));
    quickserver_order_version_centosstream8_local_var->_library_owned = 1;
    quickserver_order_version_centosstream8_local_var->centosstream_8 = centosstream_8;
    return quickserver_order_version_centosstream8_local_var;
}

__attribute__((deprecated)) quickserver_order_version_centosstream8_t *quickserver_order_version_centosstream8_create(
    char *centosstream_8
    ) {
    quickserver_order_version_centosstream8_t *result = quickserver_order_version_centosstream8_create_internal (
        centosstream_8
        );
    if (!result) {
    }
    return result;
}

void quickserver_order_version_centosstream8_free(quickserver_order_version_centosstream8_t *quickserver_order_version_centosstream8) {
    if(NULL == quickserver_order_version_centosstream8){
        return ;
    }
    if(quickserver_order_version_centosstream8->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "quickserver_order_version_centosstream8_free");
        return ;
    }
    listEntry_t *listEntry;
    if (quickserver_order_version_centosstream8->centosstream_8) {
        free(quickserver_order_version_centosstream8->centosstream_8);
        quickserver_order_version_centosstream8->centosstream_8 = NULL;
    }
    free(quickserver_order_version_centosstream8);
}

cJSON *quickserver_order_version_centosstream8_convertToJSON(quickserver_order_version_centosstream8_t *quickserver_order_version_centosstream8) {
    cJSON *item = cJSON_CreateObject();

    // quickserver_order_version_centosstream8->centosstream_8
    if(quickserver_order_version_centosstream8->centosstream_8) {
    if(cJSON_AddStringToObject(item, "centosstream-8", quickserver_order_version_centosstream8->centosstream_8) == NULL) {
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

quickserver_order_version_centosstream8_t *quickserver_order_version_centosstream8_parseFromJSON(cJSON *quickserver_order_version_centosstream8JSON){

    quickserver_order_version_centosstream8_t *quickserver_order_version_centosstream8_local_var = NULL;

    char *centosstream_8_local_str = NULL;

    // quickserver_order_version_centosstream8->centosstream_8
    cJSON *centosstream_8 = cJSON_GetObjectItemCaseSensitive(quickserver_order_version_centosstream8JSON, "centosstream-8");
    if (cJSON_IsNull(centosstream_8)) {
        centosstream_8 = NULL;
    }
    if (centosstream_8) { 
    if(!cJSON_IsString(centosstream_8) && !cJSON_IsNull(centosstream_8))
    {
    goto end; //String
    }
    }


    if (centosstream_8 && !cJSON_IsNull(centosstream_8)) centosstream_8_local_str = strdup(centosstream_8->valuestring);

    quickserver_order_version_centosstream8_local_var = quickserver_order_version_centosstream8_create_internal (
        centosstream_8_local_str
        );

    if (!quickserver_order_version_centosstream8_local_var) {
        goto end;
    }

    return quickserver_order_version_centosstream8_local_var;
end:
    if (centosstream_8_local_str) {
        free(centosstream_8_local_str);
        centosstream_8_local_str = NULL;
    }
    return NULL;

}
