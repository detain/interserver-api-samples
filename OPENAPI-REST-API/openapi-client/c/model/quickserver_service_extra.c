#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "quickserver_service_extra.h"



static quickserver_service_extra_t *quickserver_service_extra_create_internal(
    char *platform
    ) {
    quickserver_service_extra_t *quickserver_service_extra_local_var = malloc(sizeof(quickserver_service_extra_t));
    if (!quickserver_service_extra_local_var) {
        return NULL;
    }
    memset(quickserver_service_extra_local_var, 0, sizeof(quickserver_service_extra_t));
    quickserver_service_extra_local_var->_library_owned = 1;
    quickserver_service_extra_local_var->platform = platform;
    return quickserver_service_extra_local_var;
}

__attribute__((deprecated)) quickserver_service_extra_t *quickserver_service_extra_create(
    char *platform
    ) {
    quickserver_service_extra_t *result = quickserver_service_extra_create_internal (
        platform
        );
    if (!result) {
    }
    return result;
}

void quickserver_service_extra_free(quickserver_service_extra_t *quickserver_service_extra) {
    if(NULL == quickserver_service_extra){
        return ;
    }
    if(quickserver_service_extra->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "quickserver_service_extra_free");
        return ;
    }
    listEntry_t *listEntry;
    if (quickserver_service_extra->platform) {
        free(quickserver_service_extra->platform);
        quickserver_service_extra->platform = NULL;
    }
    free(quickserver_service_extra);
}

cJSON *quickserver_service_extra_convertToJSON(quickserver_service_extra_t *quickserver_service_extra) {
    cJSON *item = cJSON_CreateObject();

    // quickserver_service_extra->platform
    if(quickserver_service_extra->platform) {
    if(cJSON_AddStringToObject(item, "platform", quickserver_service_extra->platform) == NULL) {
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

quickserver_service_extra_t *quickserver_service_extra_parseFromJSON(cJSON *quickserver_service_extraJSON){

    quickserver_service_extra_t *quickserver_service_extra_local_var = NULL;

    char *platform_local_str = NULL;

    // quickserver_service_extra->platform
    cJSON *platform = cJSON_GetObjectItemCaseSensitive(quickserver_service_extraJSON, "platform");
    if (cJSON_IsNull(platform)) {
        platform = NULL;
    }
    if (platform) { 
    if(!cJSON_IsString(platform) && !cJSON_IsNull(platform))
    {
    goto end; //String
    }
    }


    if (platform && !cJSON_IsNull(platform)) platform_local_str = strdup(platform->valuestring);

    quickserver_service_extra_local_var = quickserver_service_extra_create_internal (
        platform_local_str
        );

    if (!quickserver_service_extra_local_var) {
        goto end;
    }

    return quickserver_service_extra_local_var;
end:
    if (platform_local_str) {
        free(platform_local_str);
        platform_local_str = NULL;
    }
    return NULL;

}
