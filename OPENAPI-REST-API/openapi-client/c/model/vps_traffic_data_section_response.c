#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_traffic_data_section_response.h"



static vps_traffic_data_section_response_t *vps_traffic_data_section_response_create_internal(
    char *name,
    list_t *data
    ) {
    vps_traffic_data_section_response_t *vps_traffic_data_section_response_local_var = malloc(sizeof(vps_traffic_data_section_response_t));
    if (!vps_traffic_data_section_response_local_var) {
        return NULL;
    }
    vps_traffic_data_section_response_local_var->name = name;
    vps_traffic_data_section_response_local_var->data = data;

    vps_traffic_data_section_response_local_var->_library_owned = 1;
    return vps_traffic_data_section_response_local_var;
}

__attribute__((deprecated)) vps_traffic_data_section_response_t *vps_traffic_data_section_response_create(
    char *name,
    list_t *data
    ) {
    return vps_traffic_data_section_response_create_internal (
        name,
        data
        );
}

void vps_traffic_data_section_response_free(vps_traffic_data_section_response_t *vps_traffic_data_section_response) {
    if(NULL == vps_traffic_data_section_response){
        return ;
    }
    if(vps_traffic_data_section_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_traffic_data_section_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_traffic_data_section_response->name) {
        free(vps_traffic_data_section_response->name);
        vps_traffic_data_section_response->name = NULL;
    }
    if (vps_traffic_data_section_response->data) {
        list_ForEach(listEntry, vps_traffic_data_section_response->data) {
            vps_traffic_data_data_section_response_free(listEntry->data);
        }
        list_freeList(vps_traffic_data_section_response->data);
        vps_traffic_data_section_response->data = NULL;
    }
    free(vps_traffic_data_section_response);
}

cJSON *vps_traffic_data_section_response_convertToJSON(vps_traffic_data_section_response_t *vps_traffic_data_section_response) {
    cJSON *item = cJSON_CreateObject();

    // vps_traffic_data_section_response->name
    if (!vps_traffic_data_section_response->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", vps_traffic_data_section_response->name) == NULL) {
    goto fail; //String
    }


    // vps_traffic_data_section_response->data
    if (!vps_traffic_data_section_response->data) {
        goto fail;
    }
    cJSON *data = cJSON_AddArrayToObject(item, "data");
    if(data == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *dataListEntry;
    if (vps_traffic_data_section_response->data) {
    list_ForEach(dataListEntry, vps_traffic_data_section_response->data) {
    cJSON *itemLocal = vps_traffic_data_data_section_response_convertToJSON(dataListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(data, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

vps_traffic_data_section_response_t *vps_traffic_data_section_response_parseFromJSON(cJSON *vps_traffic_data_section_responseJSON){

    vps_traffic_data_section_response_t *vps_traffic_data_section_response_local_var = NULL;

    // define the local list for vps_traffic_data_section_response->data
    list_t *dataList = NULL;

    // vps_traffic_data_section_response->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(vps_traffic_data_section_responseJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // vps_traffic_data_section_response->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(vps_traffic_data_section_responseJSON, "data");
    if (cJSON_IsNull(data)) {
        data = NULL;
    }
    if (!data) {
        goto end;
    }

    
    cJSON *data_local_nonprimitive = NULL;
    if(!cJSON_IsArray(data)){
        goto end; //nonprimitive container
    }

    dataList = list_createList();

    cJSON_ArrayForEach(data_local_nonprimitive,data )
    {
        if(!cJSON_IsObject(data_local_nonprimitive)){
            goto end;
        }
        vps_traffic_data_data_section_response_t *dataItem = vps_traffic_data_data_section_response_parseFromJSON(data_local_nonprimitive);

        list_addElement(dataList, dataItem);
    }


    vps_traffic_data_section_response_local_var = vps_traffic_data_section_response_create_internal (
        strdup(name->valuestring),
        dataList
        );

    return vps_traffic_data_section_response_local_var;
end:
    if (dataList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, dataList) {
            vps_traffic_data_data_section_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(dataList);
        dataList = NULL;
    }
    return NULL;

}
