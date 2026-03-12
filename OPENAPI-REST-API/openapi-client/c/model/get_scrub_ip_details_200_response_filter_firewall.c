#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "get_scrub_ip_details_200_response_filter_firewall.h"



static get_scrub_ip_details_200_response_filter_firewall_t *get_scrub_ip_details_200_response_filter_firewall_create_internal(
    list_t *rules,
    list_t *filters,
    int scrub_enabled
    ) {
    get_scrub_ip_details_200_response_filter_firewall_t *get_scrub_ip_details_200_response_filter_firewall_local_var = malloc(sizeof(get_scrub_ip_details_200_response_filter_firewall_t));
    if (!get_scrub_ip_details_200_response_filter_firewall_local_var) {
        return NULL;
    }
    get_scrub_ip_details_200_response_filter_firewall_local_var->rules = rules;
    get_scrub_ip_details_200_response_filter_firewall_local_var->filters = filters;
    get_scrub_ip_details_200_response_filter_firewall_local_var->scrub_enabled = scrub_enabled;

    get_scrub_ip_details_200_response_filter_firewall_local_var->_library_owned = 1;
    return get_scrub_ip_details_200_response_filter_firewall_local_var;
}

__attribute__((deprecated)) get_scrub_ip_details_200_response_filter_firewall_t *get_scrub_ip_details_200_response_filter_firewall_create(
    list_t *rules,
    list_t *filters,
    int scrub_enabled
    ) {
    return get_scrub_ip_details_200_response_filter_firewall_create_internal (
        rules,
        filters,
        scrub_enabled
        );
}

void get_scrub_ip_details_200_response_filter_firewall_free(get_scrub_ip_details_200_response_filter_firewall_t *get_scrub_ip_details_200_response_filter_firewall) {
    if(NULL == get_scrub_ip_details_200_response_filter_firewall){
        return ;
    }
    if(get_scrub_ip_details_200_response_filter_firewall->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "get_scrub_ip_details_200_response_filter_firewall_free");
        return ;
    }
    listEntry_t *listEntry;
    if (get_scrub_ip_details_200_response_filter_firewall->rules) {
        list_ForEach(listEntry, get_scrub_ip_details_200_response_filter_firewall->rules) {
            get_scrub_ip_details_200_response_filter_firewall_rules_inner_free(listEntry->data);
        }
        list_freeList(get_scrub_ip_details_200_response_filter_firewall->rules);
        get_scrub_ip_details_200_response_filter_firewall->rules = NULL;
    }
    if (get_scrub_ip_details_200_response_filter_firewall->filters) {
        list_ForEach(listEntry, get_scrub_ip_details_200_response_filter_firewall->filters) {
            get_scrub_ip_details_200_response_filter_firewall_filters_inner_free(listEntry->data);
        }
        list_freeList(get_scrub_ip_details_200_response_filter_firewall->filters);
        get_scrub_ip_details_200_response_filter_firewall->filters = NULL;
    }
    free(get_scrub_ip_details_200_response_filter_firewall);
}

cJSON *get_scrub_ip_details_200_response_filter_firewall_convertToJSON(get_scrub_ip_details_200_response_filter_firewall_t *get_scrub_ip_details_200_response_filter_firewall) {
    cJSON *item = cJSON_CreateObject();

    // get_scrub_ip_details_200_response_filter_firewall->rules
    if(get_scrub_ip_details_200_response_filter_firewall->rules) {
    cJSON *rules = cJSON_AddArrayToObject(item, "rules");
    if(rules == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *rulesListEntry;
    if (get_scrub_ip_details_200_response_filter_firewall->rules) {
    list_ForEach(rulesListEntry, get_scrub_ip_details_200_response_filter_firewall->rules) {
    cJSON *itemLocal = get_scrub_ip_details_200_response_filter_firewall_rules_inner_convertToJSON(rulesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(rules, itemLocal);
    }
    }
    }


    // get_scrub_ip_details_200_response_filter_firewall->filters
    if(get_scrub_ip_details_200_response_filter_firewall->filters) {
    cJSON *filters = cJSON_AddArrayToObject(item, "filters");
    if(filters == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *filtersListEntry;
    if (get_scrub_ip_details_200_response_filter_firewall->filters) {
    list_ForEach(filtersListEntry, get_scrub_ip_details_200_response_filter_firewall->filters) {
    cJSON *itemLocal = get_scrub_ip_details_200_response_filter_firewall_filters_inner_convertToJSON(filtersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(filters, itemLocal);
    }
    }
    }


    // get_scrub_ip_details_200_response_filter_firewall->scrub_enabled
    if(get_scrub_ip_details_200_response_filter_firewall->scrub_enabled) {
    if(cJSON_AddNumberToObject(item, "scrub_enabled", get_scrub_ip_details_200_response_filter_firewall->scrub_enabled) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

get_scrub_ip_details_200_response_filter_firewall_t *get_scrub_ip_details_200_response_filter_firewall_parseFromJSON(cJSON *get_scrub_ip_details_200_response_filter_firewallJSON){

    get_scrub_ip_details_200_response_filter_firewall_t *get_scrub_ip_details_200_response_filter_firewall_local_var = NULL;

    // define the local list for get_scrub_ip_details_200_response_filter_firewall->rules
    list_t *rulesList = NULL;

    // define the local list for get_scrub_ip_details_200_response_filter_firewall->filters
    list_t *filtersList = NULL;

    // get_scrub_ip_details_200_response_filter_firewall->rules
    cJSON *rules = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_filter_firewallJSON, "rules");
    if (cJSON_IsNull(rules)) {
        rules = NULL;
    }
    if (rules) { 
    cJSON *rules_local_nonprimitive = NULL;
    if(!cJSON_IsArray(rules)){
        goto end; //nonprimitive container
    }

    rulesList = list_createList();

    cJSON_ArrayForEach(rules_local_nonprimitive,rules )
    {
        if(!cJSON_IsObject(rules_local_nonprimitive)){
            goto end;
        }
        get_scrub_ip_details_200_response_filter_firewall_rules_inner_t *rulesItem = get_scrub_ip_details_200_response_filter_firewall_rules_inner_parseFromJSON(rules_local_nonprimitive);

        list_addElement(rulesList, rulesItem);
    }
    }

    // get_scrub_ip_details_200_response_filter_firewall->filters
    cJSON *filters = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_filter_firewallJSON, "filters");
    if (cJSON_IsNull(filters)) {
        filters = NULL;
    }
    if (filters) { 
    cJSON *filters_local_nonprimitive = NULL;
    if(!cJSON_IsArray(filters)){
        goto end; //nonprimitive container
    }

    filtersList = list_createList();

    cJSON_ArrayForEach(filters_local_nonprimitive,filters )
    {
        if(!cJSON_IsObject(filters_local_nonprimitive)){
            goto end;
        }
        get_scrub_ip_details_200_response_filter_firewall_filters_inner_t *filtersItem = get_scrub_ip_details_200_response_filter_firewall_filters_inner_parseFromJSON(filters_local_nonprimitive);

        list_addElement(filtersList, filtersItem);
    }
    }

    // get_scrub_ip_details_200_response_filter_firewall->scrub_enabled
    cJSON *scrub_enabled = cJSON_GetObjectItemCaseSensitive(get_scrub_ip_details_200_response_filter_firewallJSON, "scrub_enabled");
    if (cJSON_IsNull(scrub_enabled)) {
        scrub_enabled = NULL;
    }
    if (scrub_enabled) { 
    if(!cJSON_IsNumber(scrub_enabled))
    {
    goto end; //Numeric
    }
    }


    get_scrub_ip_details_200_response_filter_firewall_local_var = get_scrub_ip_details_200_response_filter_firewall_create_internal (
        rules ? rulesList : NULL,
        filters ? filtersList : NULL,
        scrub_enabled ? scrub_enabled->valuedouble : 0
        );

    return get_scrub_ip_details_200_response_filter_firewall_local_var;
end:
    if (rulesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, rulesList) {
            get_scrub_ip_details_200_response_filter_firewall_rules_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(rulesList);
        rulesList = NULL;
    }
    if (filtersList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, filtersList) {
            get_scrub_ip_details_200_response_filter_firewall_filters_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(filtersList);
        filtersList = NULL;
    }
    return NULL;

}
