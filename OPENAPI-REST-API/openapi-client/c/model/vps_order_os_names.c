#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_order_os_names.h"



static vps_order_os_names_t *vps_order_os_names_create_internal(
    char *opensuse,
    char *ubuntu
    ) {
    vps_order_os_names_t *vps_order_os_names_local_var = malloc(sizeof(vps_order_os_names_t));
    if (!vps_order_os_names_local_var) {
        return NULL;
    }
    memset(vps_order_os_names_local_var, 0, sizeof(vps_order_os_names_t));
    vps_order_os_names_local_var->_library_owned = 1;
    vps_order_os_names_local_var->opensuse = opensuse;
    vps_order_os_names_local_var->ubuntu = ubuntu;
    return vps_order_os_names_local_var;
}

__attribute__((deprecated)) vps_order_os_names_t *vps_order_os_names_create(
    char *opensuse,
    char *ubuntu
    ) {
    vps_order_os_names_t *result = vps_order_os_names_create_internal (
        opensuse,
        ubuntu
        );
    if (!result) {
    }
    return result;
}

void vps_order_os_names_free(vps_order_os_names_t *vps_order_os_names) {
    if(NULL == vps_order_os_names){
        return ;
    }
    if(vps_order_os_names->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_order_os_names_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_order_os_names->opensuse) {
        free(vps_order_os_names->opensuse);
        vps_order_os_names->opensuse = NULL;
    }
    if (vps_order_os_names->ubuntu) {
        free(vps_order_os_names->ubuntu);
        vps_order_os_names->ubuntu = NULL;
    }
    free(vps_order_os_names);
}

cJSON *vps_order_os_names_convertToJSON(vps_order_os_names_t *vps_order_os_names) {
    cJSON *item = cJSON_CreateObject();

    // vps_order_os_names->opensuse
    if(vps_order_os_names->opensuse) {
    if(cJSON_AddStringToObject(item, "opensuse", vps_order_os_names->opensuse) == NULL) {
    goto fail; //String
    }
    }


    // vps_order_os_names->ubuntu
    if(vps_order_os_names->ubuntu) {
    if(cJSON_AddStringToObject(item, "ubuntu", vps_order_os_names->ubuntu) == NULL) {
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

vps_order_os_names_t *vps_order_os_names_parseFromJSON(cJSON *vps_order_os_namesJSON){

    vps_order_os_names_t *vps_order_os_names_local_var = NULL;

    char *opensuse_local_str = NULL;

    char *ubuntu_local_str = NULL;

    // vps_order_os_names->opensuse
    cJSON *opensuse = cJSON_GetObjectItemCaseSensitive(vps_order_os_namesJSON, "opensuse");
    if (cJSON_IsNull(opensuse)) {
        opensuse = NULL;
    }
    if (opensuse) { 
    if(!cJSON_IsString(opensuse) && !cJSON_IsNull(opensuse))
    {
    goto end; //String
    }
    }

    // vps_order_os_names->ubuntu
    cJSON *ubuntu = cJSON_GetObjectItemCaseSensitive(vps_order_os_namesJSON, "ubuntu");
    if (cJSON_IsNull(ubuntu)) {
        ubuntu = NULL;
    }
    if (ubuntu) { 
    if(!cJSON_IsString(ubuntu) && !cJSON_IsNull(ubuntu))
    {
    goto end; //String
    }
    }


    if (opensuse && !cJSON_IsNull(opensuse)) opensuse_local_str = strdup(opensuse->valuestring);
    if (ubuntu && !cJSON_IsNull(ubuntu)) ubuntu_local_str = strdup(ubuntu->valuestring);

    vps_order_os_names_local_var = vps_order_os_names_create_internal (
        opensuse_local_str,
        ubuntu_local_str
        );

    if (!vps_order_os_names_local_var) {
        goto end;
    }

    return vps_order_os_names_local_var;
end:
    if (opensuse_local_str) {
        free(opensuse_local_str);
        opensuse_local_str = NULL;
    }
    if (ubuntu_local_str) {
        free(ubuntu_local_str);
        ubuntu_local_str = NULL;
    }
    return NULL;

}
