#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_extra_info_tables.h"



static vps_extra_info_tables_t *vps_extra_info_tables_create_internal(
    vps_ip_info_t *ip_info
    ) {
    vps_extra_info_tables_t *vps_extra_info_tables_local_var = malloc(sizeof(vps_extra_info_tables_t));
    if (!vps_extra_info_tables_local_var) {
        return NULL;
    }
    vps_extra_info_tables_local_var->ip_info = ip_info;

    vps_extra_info_tables_local_var->_library_owned = 1;
    return vps_extra_info_tables_local_var;
}

__attribute__((deprecated)) vps_extra_info_tables_t *vps_extra_info_tables_create(
    vps_ip_info_t *ip_info
    ) {
    return vps_extra_info_tables_create_internal (
        ip_info
        );
}

void vps_extra_info_tables_free(vps_extra_info_tables_t *vps_extra_info_tables) {
    if(NULL == vps_extra_info_tables){
        return ;
    }
    if(vps_extra_info_tables->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_extra_info_tables_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_extra_info_tables->ip_info) {
        vps_ip_info_free(vps_extra_info_tables->ip_info);
        vps_extra_info_tables->ip_info = NULL;
    }
    free(vps_extra_info_tables);
}

cJSON *vps_extra_info_tables_convertToJSON(vps_extra_info_tables_t *vps_extra_info_tables) {
    cJSON *item = cJSON_CreateObject();

    // vps_extra_info_tables->ip_info
    if(vps_extra_info_tables->ip_info) {
    cJSON *ip_info_local_JSON = vps_ip_info_convertToJSON(vps_extra_info_tables->ip_info);
    if(ip_info_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "ip_info", ip_info_local_JSON);
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

vps_extra_info_tables_t *vps_extra_info_tables_parseFromJSON(cJSON *vps_extra_info_tablesJSON){

    vps_extra_info_tables_t *vps_extra_info_tables_local_var = NULL;

    // define the local variable for vps_extra_info_tables->ip_info
    vps_ip_info_t *ip_info_local_nonprim = NULL;

    // vps_extra_info_tables->ip_info
    cJSON *ip_info = cJSON_GetObjectItemCaseSensitive(vps_extra_info_tablesJSON, "ip_info");
    if (cJSON_IsNull(ip_info)) {
        ip_info = NULL;
    }
    if (ip_info) { 
    ip_info_local_nonprim = vps_ip_info_parseFromJSON(ip_info); //nonprimitive
    }


    vps_extra_info_tables_local_var = vps_extra_info_tables_create_internal (
        ip_info ? ip_info_local_nonprim : NULL
        );

    return vps_extra_info_tables_local_var;
end:
    if (ip_info_local_nonprim) {
        vps_ip_info_free(ip_info_local_nonprim);
        ip_info_local_nonprim = NULL;
    }
    return NULL;

}
