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
    quickserver_order_distro_sel_ubuntu_local_var->ubuntu = ubuntu;

    quickserver_order_distro_sel_ubuntu_local_var->_library_owned = 1;
    return quickserver_order_distro_sel_ubuntu_local_var;
}

__attribute__((deprecated)) quickserver_order_distro_sel_ubuntu_t *quickserver_order_distro_sel_ubuntu_create(
    char *ubuntu
    ) {
    return quickserver_order_distro_sel_ubuntu_create_internal (
        ubuntu
        );
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


    quickserver_order_distro_sel_ubuntu_local_var = quickserver_order_distro_sel_ubuntu_create_internal (
        ubuntu && !cJSON_IsNull(ubuntu) ? strdup(ubuntu->valuestring) : NULL
        );

    return quickserver_order_distro_sel_ubuntu_local_var;
end:
    return NULL;

}
