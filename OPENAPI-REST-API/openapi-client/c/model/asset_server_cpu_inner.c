#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "asset_server_cpu_inner.h"



static asset_server_cpu_inner_t *asset_server_cpu_inner_create_internal(
    ) {
    asset_server_cpu_inner_t *asset_server_cpu_inner_local_var = malloc(sizeof(asset_server_cpu_inner_t));
    if (!asset_server_cpu_inner_local_var) {
        return NULL;
    }

    asset_server_cpu_inner_local_var->_library_owned = 1;
    return asset_server_cpu_inner_local_var;
}

__attribute__((deprecated)) asset_server_cpu_inner_t *asset_server_cpu_inner_create(
    ) {
    return asset_server_cpu_inner_create_internal (
        );
}

void asset_server_cpu_inner_free(asset_server_cpu_inner_t *asset_server_cpu_inner) {
    if(NULL == asset_server_cpu_inner){
        return ;
    }
    if(asset_server_cpu_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "asset_server_cpu_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    free(asset_server_cpu_inner);
}

cJSON *asset_server_cpu_inner_convertToJSON(asset_server_cpu_inner_t *asset_server_cpu_inner) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

asset_server_cpu_inner_t *asset_server_cpu_inner_parseFromJSON(cJSON *asset_server_cpu_innerJSON){

    asset_server_cpu_inner_t *asset_server_cpu_inner_local_var = NULL;


    asset_server_cpu_inner_local_var = asset_server_cpu_inner_create_internal (
        );

    return asset_server_cpu_inner_local_var;
end:
    return NULL;

}
