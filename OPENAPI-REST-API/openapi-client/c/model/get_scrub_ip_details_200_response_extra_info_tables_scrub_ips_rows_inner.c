#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner.h"



static get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_t *get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_create_internal(
    char *desc,
    char *value
    ) {
    get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_t *get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_local_var = malloc(sizeof(get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_t));
    if (!get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_local_var) {
        return NULL;
    }
    memset(get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_local_var, 0, sizeof(get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_t));
    get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_local_var->_library_owned = 1;
    get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_local_var->desc = desc;
    get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_local_var->value = value;
    return get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_local_var;
}

__attribute__((deprecated)) get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_t *get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_create(
    char *desc,
    char *value
    ) {
    get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_t *result = get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_create_internal (
        desc,
        value
        );
    if (!result) {
    }
    return result;
}

void get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_free(get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_t *get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner) {
    if(NULL == get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner){
        return ;
    }
    if(get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner->desc) {
        free(get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner->desc);
        get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner->desc = NULL;
    }
    if (get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner->value) {
        free(get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner->value);
        get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner->value = NULL;
    }
    free(get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner);
}

cJSON *get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_convertToJSON(get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_t *get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner) {
    cJSON *item = cJSON_CreateObject();

    // get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner->desc
    if(get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner->desc) {
    if(cJSON_AddStringToObject(item, "desc", get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner->desc) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner->value
    if(get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner->value) {
    if(cJSON_AddStringToObject(item, "value", get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner->value) == NULL) {
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

get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_t *get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_parseFromJSON(cJSON *get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_innerJSON){

    get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_t *get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_local_var = NULL;

    char *desc_local_str = NULL;

    char *value_local_str = NULL;

    // get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner->desc
    cJSON *desc = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_innerJSON, "desc");
    if (cJSON_IsNull(desc)) {
        desc = NULL;
    }
    if (desc) { 
    if(!cJSON_IsString(desc) && !cJSON_IsNull(desc))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_innerJSON, "value");
    if (cJSON_IsNull(value)) {
        value = NULL;
    }
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }


    if (desc && !cJSON_IsNull(desc)) desc_local_str = strdup(desc->valuestring);
    if (value && !cJSON_IsNull(value)) value_local_str = strdup(value->valuestring);

    get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_local_var = get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_create_internal (
        desc_local_str,
        value_local_str
        );

    if (!get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_local_var) {
        goto end;
    }

    return get_scrub_ip_details_200_response_extra_info_tables_scrub_ips_rows_inner_local_var;
end:
    if (desc_local_str) {
        free(desc_local_str);
        desc_local_str = NULL;
    }
    if (value_local_str) {
        free(value_local_str);
        value_local_str = NULL;
    }
    return NULL;

}
