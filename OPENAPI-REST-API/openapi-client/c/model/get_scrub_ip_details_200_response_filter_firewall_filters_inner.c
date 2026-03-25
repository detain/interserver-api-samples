#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "get_scrub_ip_details_200_response_filter_firewall_filters_inner.h"



static get_scrub_ip_details_200_response_filter_firewall_filters_inner_t *get_scrub_ip_details_200_response_filter_firewall_filters_inner_create_internal(
    char *daddr,
    char *dest,
    char *filter_name,
    char *destination_ip,
    char *filter
    ) {
    get_scrub_ip_details_200_response_filter_firewall_filters_inner_t *get_scrub_ip_details_200_response_filter_firewall_filters_inner_local_var = malloc(sizeof(get_scrub_ip_details_200_response_filter_firewall_filters_inner_t));
    if (!get_scrub_ip_details_200_response_filter_firewall_filters_inner_local_var) {
        return NULL;
    }
    memset(get_scrub_ip_details_200_response_filter_firewall_filters_inner_local_var, 0, sizeof(get_scrub_ip_details_200_response_filter_firewall_filters_inner_t));
    get_scrub_ip_details_200_response_filter_firewall_filters_inner_local_var->_library_owned = 1;
    get_scrub_ip_details_200_response_filter_firewall_filters_inner_local_var->daddr = daddr;
    get_scrub_ip_details_200_response_filter_firewall_filters_inner_local_var->dest = dest;
    get_scrub_ip_details_200_response_filter_firewall_filters_inner_local_var->filter_name = filter_name;
    get_scrub_ip_details_200_response_filter_firewall_filters_inner_local_var->destination_ip = destination_ip;
    get_scrub_ip_details_200_response_filter_firewall_filters_inner_local_var->filter = filter;
    return get_scrub_ip_details_200_response_filter_firewall_filters_inner_local_var;
}

__attribute__((deprecated)) get_scrub_ip_details_200_response_filter_firewall_filters_inner_t *get_scrub_ip_details_200_response_filter_firewall_filters_inner_create(
    char *daddr,
    char *dest,
    char *filter_name,
    char *destination_ip,
    char *filter
    ) {
    get_scrub_ip_details_200_response_filter_firewall_filters_inner_t *result = get_scrub_ip_details_200_response_filter_firewall_filters_inner_create_internal (
        daddr,
        dest,
        filter_name,
        destination_ip,
        filter
        );
    if (!result) {
    }
    return result;
}

void get_scrub_ip_details_200_response_filter_firewall_filters_inner_free(get_scrub_ip_details_200_response_filter_firewall_filters_inner_t *get_scrub_ip_details_200_response_filter_firewall_filters_inner) {
    if(NULL == get_scrub_ip_details_200_response_filter_firewall_filters_inner){
        return ;
    }
    if(get_scrub_ip_details_200_response_filter_firewall_filters_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "get_scrub_ip_details_200_response_filter_firewall_filters_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (get_scrub_ip_details_200_response_filter_firewall_filters_inner->daddr) {
        free(get_scrub_ip_details_200_response_filter_firewall_filters_inner->daddr);
        get_scrub_ip_details_200_response_filter_firewall_filters_inner->daddr = NULL;
    }
    if (get_scrub_ip_details_200_response_filter_firewall_filters_inner->dest) {
        free(get_scrub_ip_details_200_response_filter_firewall_filters_inner->dest);
        get_scrub_ip_details_200_response_filter_firewall_filters_inner->dest = NULL;
    }
    if (get_scrub_ip_details_200_response_filter_firewall_filters_inner->filter_name) {
        free(get_scrub_ip_details_200_response_filter_firewall_filters_inner->filter_name);
        get_scrub_ip_details_200_response_filter_firewall_filters_inner->filter_name = NULL;
    }
    if (get_scrub_ip_details_200_response_filter_firewall_filters_inner->destination_ip) {
        free(get_scrub_ip_details_200_response_filter_firewall_filters_inner->destination_ip);
        get_scrub_ip_details_200_response_filter_firewall_filters_inner->destination_ip = NULL;
    }
    if (get_scrub_ip_details_200_response_filter_firewall_filters_inner->filter) {
        free(get_scrub_ip_details_200_response_filter_firewall_filters_inner->filter);
        get_scrub_ip_details_200_response_filter_firewall_filters_inner->filter = NULL;
    }
    free(get_scrub_ip_details_200_response_filter_firewall_filters_inner);
}

cJSON *get_scrub_ip_details_200_response_filter_firewall_filters_inner_convertToJSON(get_scrub_ip_details_200_response_filter_firewall_filters_inner_t *get_scrub_ip_details_200_response_filter_firewall_filters_inner) {
    cJSON *item = cJSON_CreateObject();

    // get_scrub_ip_details_200_response_filter_firewall_filters_inner->daddr
    if(get_scrub_ip_details_200_response_filter_firewall_filters_inner->daddr) {
    if(cJSON_AddStringToObject(item, "daddr", get_scrub_ip_details_200_response_filter_firewall_filters_inner->daddr) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_filter_firewall_filters_inner->dest
    if(get_scrub_ip_details_200_response_filter_firewall_filters_inner->dest) {
    if(cJSON_AddStringToObject(item, "dest", get_scrub_ip_details_200_response_filter_firewall_filters_inner->dest) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_filter_firewall_filters_inner->filter_name
    if(get_scrub_ip_details_200_response_filter_firewall_filters_inner->filter_name) {
    if(cJSON_AddStringToObject(item, "filter_name", get_scrub_ip_details_200_response_filter_firewall_filters_inner->filter_name) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_filter_firewall_filters_inner->destination_ip
    if(get_scrub_ip_details_200_response_filter_firewall_filters_inner->destination_ip) {
    if(cJSON_AddStringToObject(item, "destination_ip", get_scrub_ip_details_200_response_filter_firewall_filters_inner->destination_ip) == NULL) {
    goto fail; //String
    }
    }


    // get_scrub_ip_details_200_response_filter_firewall_filters_inner->filter
    if(get_scrub_ip_details_200_response_filter_firewall_filters_inner->filter) {
    if(cJSON_AddStringToObject(item, "filter", get_scrub_ip_details_200_response_filter_firewall_filters_inner->filter) == NULL) {
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

get_scrub_ip_details_200_response_filter_firewall_filters_inner_t *get_scrub_ip_details_200_response_filter_firewall_filters_inner_parseFromJSON(cJSON *get_scrub_ip_details_200_response_filter_firewall_filters_innerJSON){

    get_scrub_ip_details_200_response_filter_firewall_filters_inner_t *get_scrub_ip_details_200_response_filter_firewall_filters_inner_local_var = NULL;

    char *daddr_local_str = NULL;

    char *dest_local_str = NULL;

    char *filter_name_local_str = NULL;

    char *destination_ip_local_str = NULL;

    char *filter_local_str = NULL;

    // get_scrub_ip_details_200_response_filter_firewall_filters_inner->daddr
    cJSON *daddr = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_filter_firewall_filters_innerJSON, "daddr");
    if (cJSON_IsNull(daddr)) {
        daddr = NULL;
    }
    if (daddr) { 
    if(!cJSON_IsString(daddr) && !cJSON_IsNull(daddr))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_filter_firewall_filters_inner->dest
    cJSON *dest = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_filter_firewall_filters_innerJSON, "dest");
    if (cJSON_IsNull(dest)) {
        dest = NULL;
    }
    if (dest) { 
    if(!cJSON_IsString(dest) && !cJSON_IsNull(dest))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_filter_firewall_filters_inner->filter_name
    cJSON *filter_name = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_filter_firewall_filters_innerJSON, "filter_name");
    if (cJSON_IsNull(filter_name)) {
        filter_name = NULL;
    }
    if (filter_name) { 
    if(!cJSON_IsString(filter_name) && !cJSON_IsNull(filter_name))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_filter_firewall_filters_inner->destination_ip
    cJSON *destination_ip = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_filter_firewall_filters_innerJSON, "destination_ip");
    if (cJSON_IsNull(destination_ip)) {
        destination_ip = NULL;
    }
    if (destination_ip) { 
    if(!cJSON_IsString(destination_ip) && !cJSON_IsNull(destination_ip))
    {
    goto end; //String
    }
    }

    // get_scrub_ip_details_200_response_filter_firewall_filters_inner->filter
    cJSON *filter = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_filter_firewall_filters_innerJSON, "filter");
    if (cJSON_IsNull(filter)) {
        filter = NULL;
    }
    if (filter) { 
    if(!cJSON_IsString(filter) && !cJSON_IsNull(filter))
    {
    goto end; //String
    }
    }


    if (daddr && !cJSON_IsNull(daddr)) daddr_local_str = strdup(daddr->valuestring);
    if (dest && !cJSON_IsNull(dest)) dest_local_str = strdup(dest->valuestring);
    if (filter_name && !cJSON_IsNull(filter_name)) filter_name_local_str = strdup(filter_name->valuestring);
    if (destination_ip && !cJSON_IsNull(destination_ip)) destination_ip_local_str = strdup(destination_ip->valuestring);
    if (filter && !cJSON_IsNull(filter)) filter_local_str = strdup(filter->valuestring);

    get_scrub_ip_details_200_response_filter_firewall_filters_inner_local_var = get_scrub_ip_details_200_response_filter_firewall_filters_inner_create_internal (
        daddr_local_str,
        dest_local_str,
        filter_name_local_str,
        destination_ip_local_str,
        filter_local_str
        );

    if (!get_scrub_ip_details_200_response_filter_firewall_filters_inner_local_var) {
        goto end;
    }

    return get_scrub_ip_details_200_response_filter_firewall_filters_inner_local_var;
end:
    if (daddr_local_str) {
        free(daddr_local_str);
        daddr_local_str = NULL;
    }
    if (dest_local_str) {
        free(dest_local_str);
        dest_local_str = NULL;
    }
    if (filter_name_local_str) {
        free(filter_name_local_str);
        filter_name_local_str = NULL;
    }
    if (destination_ip_local_str) {
        free(destination_ip_local_str);
        destination_ip_local_str = NULL;
    }
    if (filter_local_str) {
        free(filter_local_str);
        filter_local_str = NULL;
    }
    return NULL;

}
