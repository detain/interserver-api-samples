#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "license_extra_info_tables.h"



static license_extra_info_tables_t *license_extra_info_tables_create_internal(
    license_ip_info_t *ip_info
    ) {
    license_extra_info_tables_t *license_extra_info_tables_local_var = malloc(sizeof(license_extra_info_tables_t));
    if (!license_extra_info_tables_local_var) {
        return NULL;
    }
    license_extra_info_tables_local_var->ip_info = ip_info;

    license_extra_info_tables_local_var->_library_owned = 1;
    return license_extra_info_tables_local_var;
}

__attribute__((deprecated)) license_extra_info_tables_t *license_extra_info_tables_create(
    license_ip_info_t *ip_info
    ) {
    return license_extra_info_tables_create_internal (
        ip_info
        );
}

void license_extra_info_tables_free(license_extra_info_tables_t *license_extra_info_tables) {
    if(NULL == license_extra_info_tables){
        return ;
    }
    if(license_extra_info_tables->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "license_extra_info_tables_free");
        return ;
    }
    listEntry_t *listEntry;
    if (license_extra_info_tables->ip_info) {
        license_ip_info_free(license_extra_info_tables->ip_info);
        license_extra_info_tables->ip_info = NULL;
    }
    free(license_extra_info_tables);
}

cJSON *license_extra_info_tables_convertToJSON(license_extra_info_tables_t *license_extra_info_tables) {
    cJSON *item = cJSON_CreateObject();

    // license_extra_info_tables->ip_info
    if(license_extra_info_tables->ip_info) {
    cJSON *ip_info_local_JSON = license_ip_info_convertToJSON(license_extra_info_tables->ip_info);
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

license_extra_info_tables_t *license_extra_info_tables_parseFromJSON(cJSON *license_extra_info_tablesJSON){

    license_extra_info_tables_t *license_extra_info_tables_local_var = NULL;

    // define the local variable for license_extra_info_tables->ip_info
    license_ip_info_t *ip_info_local_nonprim = NULL;

    // license_extra_info_tables->ip_info
    cJSON *ip_info = cJSON_GetObjectItemCaseSensitive(license_extra_info_tablesJSON, "ip_info");
    if (cJSON_IsNull(ip_info)) {
        ip_info = NULL;
    }
    if (ip_info) { 
    ip_info_local_nonprim = license_ip_info_parseFromJSON(ip_info); //nonprimitive
    }


    license_extra_info_tables_local_var = license_extra_info_tables_create_internal (
        ip_info ? ip_info_local_nonprim : NULL
        );

    return license_extra_info_tables_local_var;
end:
    if (ip_info_local_nonprim) {
        license_ip_info_free(ip_info_local_nonprim);
        ip_info_local_nonprim = NULL;
    }
    return NULL;

}
