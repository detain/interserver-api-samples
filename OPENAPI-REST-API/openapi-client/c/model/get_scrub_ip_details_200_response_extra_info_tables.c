#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "get_scrub_ip_details_200_response_extra_info_tables.h"



static get_scrub_ip_details_200_response_extra_info_tables_t *get_scrub_ip_details_200_response_extra_info_tables_create_internal(
    get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_t *scrub_ips
    ) {
    get_scrub_ip_details_200_response_extra_info_tables_t *get_scrub_ip_details_200_response_extra_info_tables_local_var = malloc(sizeof(get_scrub_ip_details_200_response_extra_info_tables_t));
    if (!get_scrub_ip_details_200_response_extra_info_tables_local_var) {
        return NULL;
    }
    memset(get_scrub_ip_details_200_response_extra_info_tables_local_var, 0, sizeof(get_scrub_ip_details_200_response_extra_info_tables_t));
    get_scrub_ip_details_200_response_extra_info_tables_local_var->_library_owned = 1;
    get_scrub_ip_details_200_response_extra_info_tables_local_var->scrub_ips = scrub_ips;
    return get_scrub_ip_details_200_response_extra_info_tables_local_var;
}

__attribute__((deprecated)) get_scrub_ip_details_200_response_extra_info_tables_t *get_scrub_ip_details_200_response_extra_info_tables_create(
    get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_t *scrub_ips
    ) {
    get_scrub_ip_details_200_response_extra_info_tables_t *result = get_scrub_ip_details_200_response_extra_info_tables_create_internal (
        scrub_ips
        );
    if (!result) {
    }
    return result;
}

void get_scrub_ip_details_200_response_extra_info_tables_free(get_scrub_ip_details_200_response_extra_info_tables_t *get_scrub_ip_details_200_response_extra_info_tables) {
    if(NULL == get_scrub_ip_details_200_response_extra_info_tables){
        return ;
    }
    if(get_scrub_ip_details_200_response_extra_info_tables->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "get_scrub_ip_details_200_response_extra_info_tables_free");
        return ;
    }
    listEntry_t *listEntry;
    if (get_scrub_ip_details_200_response_extra_info_tables->scrub_ips) {
        get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_free(get_scrub_ip_details_200_response_extra_info_tables->scrub_ips);
        get_scrub_ip_details_200_response_extra_info_tables->scrub_ips = NULL;
    }
    free(get_scrub_ip_details_200_response_extra_info_tables);
}

cJSON *get_scrub_ip_details_200_response_extra_info_tables_convertToJSON(get_scrub_ip_details_200_response_extra_info_tables_t *get_scrub_ip_details_200_response_extra_info_tables) {
    cJSON *item = cJSON_CreateObject();

    // get_scrub_ip_details_200_response_extra_info_tables->scrub_ips
    if(get_scrub_ip_details_200_response_extra_info_tables->scrub_ips) {
    cJSON *scrub_ips_local_JSON = get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_convertToJSON(get_scrub_ip_details_200_response_extra_info_tables->scrub_ips);
    if(scrub_ips_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "scrub_ips", scrub_ips_local_JSON);
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

get_scrub_ip_details_200_response_extra_info_tables_t *get_scrub_ip_details_200_response_extra_info_tables_parseFromJSON(cJSON *get_scrub_ip_details_200_response_extra_info_tablesJSON){

    get_scrub_ip_details_200_response_extra_info_tables_t *get_scrub_ip_details_200_response_extra_info_tables_local_var = NULL;

    // define the local variable for get_scrub_ip_details_200_response_extra_info_tables->scrub_ips
    get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_t *scrub_ips_local_nonprim = NULL;

    // get_scrub_ip_details_200_response_extra_info_tables->scrub_ips
    cJSON *scrub_ips = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_extra_info_tablesJSON, "scrub_ips");
    if (cJSON_IsNull(scrub_ips)) {
        scrub_ips = NULL;
    }
    if (scrub_ips) { 
    scrub_ips_local_nonprim = get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_parseFromJSON(scrub_ips); //nonprimitive
    }



    get_scrub_ip_details_200_response_extra_info_tables_local_var = get_scrub_ip_details_200_response_extra_info_tables_create_internal (
        scrub_ips ? scrub_ips_local_nonprim : NULL
        );

    if (!get_scrub_ip_details_200_response_extra_info_tables_local_var) {
        goto end;
    }

    return get_scrub_ip_details_200_response_extra_info_tables_local_var;
end:
    if (scrub_ips_local_nonprim) {
        get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_free(scrub_ips_local_nonprim);
        scrub_ips_local_nonprim = NULL;
    }
    return NULL;

}
