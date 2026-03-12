#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "quickserver_extra_info_tables.h"



static quickserver_extra_info_tables_t *quickserver_extra_info_tables_create_internal(
    quickserver_ip_info_t *ip_info,
    quickserver_addons_t *addons
    ) {
    quickserver_extra_info_tables_t *quickserver_extra_info_tables_local_var = malloc(sizeof(quickserver_extra_info_tables_t));
    if (!quickserver_extra_info_tables_local_var) {
        return NULL;
    }
    quickserver_extra_info_tables_local_var->ip_info = ip_info;
    quickserver_extra_info_tables_local_var->addons = addons;

    quickserver_extra_info_tables_local_var->_library_owned = 1;
    return quickserver_extra_info_tables_local_var;
}

__attribute__((deprecated)) quickserver_extra_info_tables_t *quickserver_extra_info_tables_create(
    quickserver_ip_info_t *ip_info,
    quickserver_addons_t *addons
    ) {
    return quickserver_extra_info_tables_create_internal (
        ip_info,
        addons
        );
}

void quickserver_extra_info_tables_free(quickserver_extra_info_tables_t *quickserver_extra_info_tables) {
    if(NULL == quickserver_extra_info_tables){
        return ;
    }
    if(quickserver_extra_info_tables->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "quickserver_extra_info_tables_free");
        return ;
    }
    listEntry_t *listEntry;
    if (quickserver_extra_info_tables->ip_info) {
        quickserver_ip_info_free(quickserver_extra_info_tables->ip_info);
        quickserver_extra_info_tables->ip_info = NULL;
    }
    if (quickserver_extra_info_tables->addons) {
        quickserver_addons_free(quickserver_extra_info_tables->addons);
        quickserver_extra_info_tables->addons = NULL;
    }
    free(quickserver_extra_info_tables);
}

cJSON *quickserver_extra_info_tables_convertToJSON(quickserver_extra_info_tables_t *quickserver_extra_info_tables) {
    cJSON *item = cJSON_CreateObject();

    // quickserver_extra_info_tables->ip_info
    if(quickserver_extra_info_tables->ip_info) {
    cJSON *ip_info_local_JSON = quickserver_ip_info_convertToJSON(quickserver_extra_info_tables->ip_info);
    if(ip_info_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "ip_info", ip_info_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // quickserver_extra_info_tables->addons
    if(quickserver_extra_info_tables->addons) {
    cJSON *addons_local_JSON = quickserver_addons_convertToJSON(quickserver_extra_info_tables->addons);
    if(addons_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "addons", addons_local_JSON);
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

quickserver_extra_info_tables_t *quickserver_extra_info_tables_parseFromJSON(cJSON *quickserver_extra_info_tablesJSON){

    quickserver_extra_info_tables_t *quickserver_extra_info_tables_local_var = NULL;

    // define the local variable for quickserver_extra_info_tables->ip_info
    quickserver_ip_info_t *ip_info_local_nonprim = NULL;

    // define the local variable for quickserver_extra_info_tables->addons
    quickserver_addons_t *addons_local_nonprim = NULL;

    // quickserver_extra_info_tables->ip_info
    cJSON *ip_info = cJSON_GetObjectItemCaseSensitive(quickserver_extra_info_tablesJSON, "ip_info");
    if (cJSON_IsNull(ip_info)) {
        ip_info = NULL;
    }
    if (ip_info) { 
    ip_info_local_nonprim = quickserver_ip_info_parseFromJSON(ip_info); //nonprimitive
    }

    // quickserver_extra_info_tables->addons
    cJSON *addons = cJSON_GetObjectItemCaseSensitive(quickserver_extra_info_tablesJSON, "addons");
    if (cJSON_IsNull(addons)) {
        addons = NULL;
    }
    if (addons) { 
    addons_local_nonprim = quickserver_addons_parseFromJSON(addons); //nonprimitive
    }


    quickserver_extra_info_tables_local_var = quickserver_extra_info_tables_create_internal (
        ip_info ? ip_info_local_nonprim : NULL,
        addons ? addons_local_nonprim : NULL
        );

    return quickserver_extra_info_tables_local_var;
end:
    if (ip_info_local_nonprim) {
        quickserver_ip_info_free(ip_info_local_nonprim);
        ip_info_local_nonprim = NULL;
    }
    if (addons_local_nonprim) {
        quickserver_addons_free(addons_local_nonprim);
        addons_local_nonprim = NULL;
    }
    return NULL;

}
