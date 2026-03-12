#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_traffic_history_section_response.h"



static vps_traffic_history_section_response_t *vps_traffic_history_section_response_create_internal(
    list_t *data,
    list_t *times
    ) {
    vps_traffic_history_section_response_t *vps_traffic_history_section_response_local_var = malloc(sizeof(vps_traffic_history_section_response_t));
    if (!vps_traffic_history_section_response_local_var) {
        return NULL;
    }
    vps_traffic_history_section_response_local_var->data = data;
    vps_traffic_history_section_response_local_var->times = times;

    vps_traffic_history_section_response_local_var->_library_owned = 1;
    return vps_traffic_history_section_response_local_var;
}

__attribute__((deprecated)) vps_traffic_history_section_response_t *vps_traffic_history_section_response_create(
    list_t *data,
    list_t *times
    ) {
    return vps_traffic_history_section_response_create_internal (
        data,
        times
        );
}

void vps_traffic_history_section_response_free(vps_traffic_history_section_response_t *vps_traffic_history_section_response) {
    if(NULL == vps_traffic_history_section_response){
        return ;
    }
    if(vps_traffic_history_section_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_traffic_history_section_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_traffic_history_section_response->data) {
        list_ForEach(listEntry, vps_traffic_history_section_response->data) {
            vps_traffic_history_section_data_response_free(listEntry->data);
        }
        list_freeList(vps_traffic_history_section_response->data);
        vps_traffic_history_section_response->data = NULL;
    }
    if (vps_traffic_history_section_response->times) {
        list_ForEach(listEntry, vps_traffic_history_section_response->times) {
            free(listEntry->data);
        }
        list_freeList(vps_traffic_history_section_response->times);
        vps_traffic_history_section_response->times = NULL;
    }
    free(vps_traffic_history_section_response);
}

cJSON *vps_traffic_history_section_response_convertToJSON(vps_traffic_history_section_response_t *vps_traffic_history_section_response) {
    cJSON *item = cJSON_CreateObject();

    // vps_traffic_history_section_response->data
    if (!vps_traffic_history_section_response->data) {
        goto fail;
    }
    cJSON *data = cJSON_AddArrayToObject(item, "data");
    if(data == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *dataListEntry;
    if (vps_traffic_history_section_response->data) {
    list_ForEach(dataListEntry, vps_traffic_history_section_response->data) {
    cJSON *itemLocal = vps_traffic_history_section_data_response_convertToJSON(dataListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(data, itemLocal);
    }
    }


    // vps_traffic_history_section_response->times
    if (!vps_traffic_history_section_response->times) {
        goto fail;
    }
    cJSON *times = cJSON_AddArrayToObject(item, "times");
    if(times == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *timesListEntry;
    list_ForEach(timesListEntry, vps_traffic_history_section_response->times) {
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

vps_traffic_history_section_response_t *vps_traffic_history_section_response_parseFromJSON(cJSON *vps_traffic_history_section_responseJSON){

    vps_traffic_history_section_response_t *vps_traffic_history_section_response_local_var = NULL;

    // define the local list for vps_traffic_history_section_response->data
    list_t *dataList = NULL;

    // define the local list for vps_traffic_history_section_response->times
    list_t *timesList = NULL;

    // vps_traffic_history_section_response->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(vps_traffic_history_section_responseJSON, "data");
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
        vps_traffic_history_section_data_response_t *dataItem = vps_traffic_history_section_data_response_parseFromJSON(data_local_nonprimitive);

        list_addElement(dataList, dataItem);
    }

    // vps_traffic_history_section_response->times
    cJSON *times = cJSON_GetObjectItemCaseSensitive(vps_traffic_history_section_responseJSON, "times");
    if (cJSON_IsNull(times)) {
        times = NULL;
    }
    if (!times) {
        goto end;
    }

    
    cJSON *times_local = NULL;
    if(!cJSON_IsArray(times)) {
        goto end;//primitive container
    }
    timesList = list_createList();

    cJSON_ArrayForEach(times_local, times)
    {
    }


    vps_traffic_history_section_response_local_var = vps_traffic_history_section_response_create_internal (
        dataList,
        timesList
        );

    return vps_traffic_history_section_response_local_var;
end:
    if (dataList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, dataList) {
            vps_traffic_history_section_data_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(dataList);
        dataList = NULL;
    }
    if (timesList) {
        list_freeList(timesList);
        timesList = NULL;
    }
    return NULL;

}
