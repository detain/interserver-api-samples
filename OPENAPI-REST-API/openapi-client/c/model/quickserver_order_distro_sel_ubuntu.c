#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "quickserver_order_distro_sel_ubuntu.h"



static quickserver_order_distro_sel_ubuntu_t *quickserver_order_distro_sel_ubuntu_create_internal(
    char *ubuntu
    ) {
    quickserver_order_distro_sel_ubuntu_t *quickserver_order_distro_sel_ubuntu_local_var = malloc(sizeof(quickserver_order_distro_sel_ubuntu_t));
    if (!quickserver_order_distro_sel_ubuntu_local_var) {
        return NULL;
    }
    memset(quickserver_order_distro_sel_ubuntu_local_var, 0, sizeof(quickserver_order_distro_sel_ubuntu_t));
    quickserver_order_distro_sel_ubuntu_local_var->_library_owned = 1;
    quickserver_order_distro_sel_ubuntu_local_var->ubuntu = ubuntu;
    return quickserver_order_distro_sel_ubuntu_local_var;
}

__attribute__((deprecated)) quickserver_order_distro_sel_ubuntu_t *quickserver_order_distro_sel_ubuntu_create(
    char *ubuntu
    ) {
    quickserver_order_distro_sel_ubuntu_t *result = quickserver_order_distro_sel_ubuntu_create_internal (
        ubuntu
        );
    if (!result) {
    }
    return result;
}

void quickserver_order_distro_sel_ubuntu_free(quickserver_order_distro_sel_ubuntu_t *quickserver_order_distro_sel_ubuntu) {
    if(NULL == quickserver_order_distro_sel_ubuntu){
        return ;
    }
    if(quickserver_order_distro_sel_ubuntu->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "quickserver_order_distro_sel_ubuntu_free");
        return ;
    }
    listEntry_t *listEntry;
    if (quickserver_order_distro_sel_ubuntu->ubuntu) {
        free(quickserver_order_distro_sel_ubuntu->ubuntu);
        quickserver_order_distro_sel_ubuntu->ubuntu = NULL;
    }
    free(quickserver_order_distro_sel_ubuntu);
}

cJSON *quickserver_order_distro_sel_ubuntu_convertToJSON(quickserver_order_distro_sel_ubuntu_t *quickserver_order_distro_sel_ubuntu) {
    cJSON *item = cJSON_CreateObject();

    // quickserver_order_distro_sel_ubuntu->ubuntu
    if(quickserver_order_distro_sel_ubuntu->ubuntu) {
    if(cJSON_AddStringToObject(item, "Ubuntu", quickserver_order_distro_sel_ubuntu->ubuntu) == NULL) {
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

quickserver_order_distro_sel_ubuntu_t *quickserver_order_distro_sel_ubuntu_parseFromJSON(cJSON *quickserver_order_distro_sel_ubuntuJSON){

    quickserver_order_distro_sel_ubuntu_t *quickserver_order_distro_sel_ubuntu_local_var = NULL;

    char *ubuntu_local_str = NULL;

    // quickserver_order_distro_sel_ubuntu->ubuntu
    cJSON *ubuntu = cJSON_GetObjectItemCaseSensitive(quickserver_order_distro_sel_ubuntuJSON, "Ubuntu");
    if (cJSON_IsNull(ubuntu)) {
        ubuntu = NULL;
    }
    if (ubuntu) { 
    if(!cJSON_IsString(ubuntu) && !cJSON_IsNull(ubuntu))
    {
    goto end; //String
    }
    }


    if (ubuntu && !cJSON_IsNull(ubuntu)) ubuntu_local_str = strdup(ubuntu->valuestring);

    quickserver_order_distro_sel_ubuntu_local_var = quickserver_order_distro_sel_ubuntu_create_internal (
        ubuntu_local_str
        );

    if (!quickserver_order_distro_sel_ubuntu_local_var) {
        goto end;
    }

    return quickserver_order_distro_sel_ubuntu_local_var;
end:
    if (ubuntu_local_str) {
        free(ubuntu_local_str);
        ubuntu_local_str = NULL;
    }
    return NULL;

}
