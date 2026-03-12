#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "get_order_detail_200_response.h"



static get_order_detail_200_response_t *get_order_detail_200_response_create_internal(
    get_order_detail_200_response_package_costs_t *package_costs,
    list_t *service_types,
    list_t *ips
    ) {
    get_order_detail_200_response_t *get_order_detail_200_response_local_var = malloc(sizeof(get_order_detail_200_response_t));
    if (!get_order_detail_200_response_local_var) {
        return NULL;
    }
    get_order_detail_200_response_local_var->package_costs = package_costs;
    get_order_detail_200_response_local_var->service_types = service_types;
    get_order_detail_200_response_local_var->ips = ips;

    get_order_detail_200_response_local_var->_library_owned = 1;
    return get_order_detail_200_response_local_var;
}

__attribute__((deprecated)) get_order_detail_200_response_t *get_order_detail_200_response_create(
    get_order_detail_200_response_package_costs_t *package_costs,
    list_t *service_types,
    list_t *ips
    ) {
    return get_order_detail_200_response_create_internal (
        package_costs,
        service_types,
        ips
        );
}

void get_order_detail_200_response_free(get_order_detail_200_response_t *get_order_detail_200_response) {
    if(NULL == get_order_detail_200_response){
        return ;
    }
    if(get_order_detail_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "get_order_detail_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (get_order_detail_200_response->package_costs) {
        get_order_detail_200_response_package_costs_free(get_order_detail_200_response->package_costs);
        get_order_detail_200_response->package_costs = NULL;
    }
    if (get_order_detail_200_response->service_types) {
        list_ForEach(listEntry, get_order_detail_200_response->service_types) {
            get_order_detail_200_response_service_types_inner_free(listEntry->data);
        }
        list_freeList(get_order_detail_200_response->service_types);
        get_order_detail_200_response->service_types = NULL;
    }
    if (get_order_detail_200_response->ips) {
        list_ForEach(listEntry, get_order_detail_200_response->ips) {
            get_order_detail_200_response_ips_inner_free(listEntry->data);
        }
        list_freeList(get_order_detail_200_response->ips);
        get_order_detail_200_response->ips = NULL;
    }
    free(get_order_detail_200_response);
}

cJSON *get_order_detail_200_response_convertToJSON(get_order_detail_200_response_t *get_order_detail_200_response) {
    cJSON *item = cJSON_CreateObject();

    // get_order_detail_200_response->package_costs
    if(get_order_detail_200_response->package_costs) {
    cJSON *package_costs_local_JSON = get_order_detail_200_response_package_costs_convertToJSON(get_order_detail_200_response->package_costs);
    if(package_costs_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "packageCosts", package_costs_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // get_order_detail_200_response->service_types
    if(get_order_detail_200_response->service_types) {
    cJSON *service_types = cJSON_AddArrayToObject(item, "serviceTypes");
    if(service_types == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *service_typesListEntry;
    if (get_order_detail_200_response->service_types) {
    list_ForEach(service_typesListEntry, get_order_detail_200_response->service_types) {
    cJSON *itemLocal = get_order_detail_200_response_service_types_inner_convertToJSON(service_typesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(service_types, itemLocal);
    }
    }
    }


    // get_order_detail_200_response->ips
    if(get_order_detail_200_response->ips) {
    cJSON *ips = cJSON_AddArrayToObject(item, "ips");
    if(ips == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *ipsListEntry;
    if (get_order_detail_200_response->ips) {
    list_ForEach(ipsListEntry, get_order_detail_200_response->ips) {
    cJSON *itemLocal = get_order_detail_200_response_ips_inner_convertToJSON(ipsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(ips, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

get_order_detail_200_response_t *get_order_detail_200_response_parseFromJSON(cJSON *get_order_detail_200_responseJSON){

    get_order_detail_200_response_t *get_order_detail_200_response_local_var = NULL;

    // define the local variable for get_order_detail_200_response->package_costs
    get_order_detail_200_response_package_costs_t *package_costs_local_nonprim = NULL;

    // define the local list for get_order_detail_200_response->service_types
    list_t *service_typesList = NULL;

    // define the local list for get_order_detail_200_response->ips
    list_t *ipsList = NULL;

    // get_order_detail_200_response->package_costs
    cJSON *package_costs = cJSON_GetObjectItemCaseSensitive(get_order_detail_200_responseJSON, "packageCosts");
    if (cJSON_IsNull(package_costs)) {
        package_costs = NULL;
    }
    if (package_costs) { 
    package_costs_local_nonprim = get_order_detail_200_response_package_costs_parseFromJSON(package_costs); //nonprimitive
    }

    // get_order_detail_200_response->service_types
    cJSON *service_types = cJSON_GetObjectItemCaseSensitive(get_order_detail_200_responseJSON, "serviceTypes");
    if (cJSON_IsNull(service_types)) {
        service_types = NULL;
    }
    if (service_types) { 
    cJSON *service_types_local_nonprimitive = NULL;
    if(!cJSON_IsArray(service_types)){
        goto end; //nonprimitive container
    }

    service_typesList = list_createList();

    cJSON_ArrayForEach(service_types_local_nonprimitive,service_types )
    {
        if(!cJSON_IsObject(service_types_local_nonprimitive)){
            goto end;
        }
        get_order_detail_200_response_service_types_inner_t *service_typesItem = get_order_detail_200_response_service_types_inner_parseFromJSON(service_types_local_nonprimitive);

        list_addElement(service_typesList, service_typesItem);
    }
    }

    // get_order_detail_200_response->ips
    cJSON *ips = cJSON_GetObjectItemCaseSensitive(get_order_detail_200_responseJSON, "ips");
    if (cJSON_IsNull(ips)) {
        ips = NULL;
    }
    if (ips) { 
    cJSON *ips_local_nonprimitive = NULL;
    if(!cJSON_IsArray(ips)){
        goto end; //nonprimitive container
    }

    ipsList = list_createList();

    cJSON_ArrayForEach(ips_local_nonprimitive,ips )
    {
        if(!cJSON_IsObject(ips_local_nonprimitive)){
            goto end;
        }
        get_order_detail_200_response_ips_inner_t *ipsItem = get_order_detail_200_response_ips_inner_parseFromJSON(ips_local_nonprimitive);

        list_addElement(ipsList, ipsItem);
    }
    }


    get_order_detail_200_response_local_var = get_order_detail_200_response_create_internal (
        package_costs ? package_costs_local_nonprim : NULL,
        service_types ? service_typesList : NULL,
        ips ? ipsList : NULL
        );

    return get_order_detail_200_response_local_var;
end:
    if (package_costs_local_nonprim) {
        get_order_detail_200_response_package_costs_free(package_costs_local_nonprim);
        package_costs_local_nonprim = NULL;
    }
    if (service_typesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, service_typesList) {
            get_order_detail_200_response_service_types_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(service_typesList);
        service_typesList = NULL;
    }
    if (ipsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, ipsList) {
            get_order_detail_200_response_ips_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(ipsList);
        ipsList = NULL;
    }
    return NULL;

}
