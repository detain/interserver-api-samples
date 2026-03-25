#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "vps_traffic_response.h"



static vps_traffic_response_t *vps_traffic_response_create_internal(
    char *name,
    char *target,
    int *interval,
    vps_traffic_history_response_t *history,
    char *last,
    list_t *times,
    vps_traffic_totals_resposne_t *totals,
    vps_traffic_usage_response_t *usage,
    list_t *data
    ) {
    vps_traffic_response_t *vps_traffic_response_local_var = malloc(sizeof(vps_traffic_response_t));
    if (!vps_traffic_response_local_var) {
        return NULL;
    }
    memset(vps_traffic_response_local_var, 0, sizeof(vps_traffic_response_t));
    vps_traffic_response_local_var->_library_owned = 1;
    vps_traffic_response_local_var->name = name;
    vps_traffic_response_local_var->target = target;
    vps_traffic_response_local_var->interval = interval;
    vps_traffic_response_local_var->history = history;
    vps_traffic_response_local_var->last = last;
    vps_traffic_response_local_var->times = times;
    vps_traffic_response_local_var->totals = totals;
    vps_traffic_response_local_var->usage = usage;
    vps_traffic_response_local_var->data = data;
    return vps_traffic_response_local_var;
}

__attribute__((deprecated)) vps_traffic_response_t *vps_traffic_response_create(
    char *name,
    char *target,
    int *interval,
    vps_traffic_history_response_t *history,
    char *last,
    list_t *times,
    vps_traffic_totals_resposne_t *totals,
    vps_traffic_usage_response_t *usage,
    list_t *data
    ) {
    int *interval_copy = NULL;
    if (interval) {
        interval_copy = malloc(sizeof(int));
        if (interval_copy) *interval_copy = *interval;
    }
    vps_traffic_response_t *result = vps_traffic_response_create_internal (
        name,
        target,
        interval_copy,
        history,
        last,
        times,
        totals,
        usage,
        data
        );
    if (!result) {
        free(interval_copy);
    }
    return result;
}

void vps_traffic_response_free(vps_traffic_response_t *vps_traffic_response) {
    if(NULL == vps_traffic_response){
        return ;
    }
    if(vps_traffic_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "vps_traffic_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (vps_traffic_response->name) {
        free(vps_traffic_response->name);
        vps_traffic_response->name = NULL;
    }
    if (vps_traffic_response->target) {
        free(vps_traffic_response->target);
        vps_traffic_response->target = NULL;
    }
    if (vps_traffic_response->interval) {
        free(vps_traffic_response->interval);
        vps_traffic_response->interval = NULL;
    }
    if (vps_traffic_response->history) {
        vps_traffic_history_response_free(vps_traffic_response->history);
        vps_traffic_response->history = NULL;
    }
    if (vps_traffic_response->last) {
        free(vps_traffic_response->last);
        vps_traffic_response->last = NULL;
    }
    if (vps_traffic_response->times) {
        list_ForEach(listEntry, vps_traffic_response->times) {
            free(listEntry->data);
        }
        list_freeList(vps_traffic_response->times);
        vps_traffic_response->times = NULL;
    }
    if (vps_traffic_response->totals) {
        vps_traffic_totals_resposne_free(vps_traffic_response->totals);
        vps_traffic_response->totals = NULL;
    }
    if (vps_traffic_response->usage) {
        vps_traffic_usage_response_free(vps_traffic_response->usage);
        vps_traffic_response->usage = NULL;
    }
    if (vps_traffic_response->data) {
        list_ForEach(listEntry, vps_traffic_response->data) {
            vps_traffic_data_section_response_free(listEntry->data);
        }
        list_freeList(vps_traffic_response->data);
        vps_traffic_response->data = NULL;
    }
    free(vps_traffic_response);
}

cJSON *vps_traffic_response_convertToJSON(vps_traffic_response_t *vps_traffic_response) {
    cJSON *item = cJSON_CreateObject();

    // vps_traffic_response->name
    if (!vps_traffic_response->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", vps_traffic_response->name) == NULL) {
    goto fail; //String
    }


    // vps_traffic_response->target
    if (!vps_traffic_response->target) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "target", vps_traffic_response->target) == NULL) {
    goto fail; //String
    }


    // vps_traffic_response->interval
    if (!vps_traffic_response->interval) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "interval", *vps_traffic_response->interval) == NULL) {
    goto fail; //Numeric
    }


    // vps_traffic_response->history
    if (!vps_traffic_response->history) {
        goto fail;
    }
    cJSON *history_local_JSON = vps_traffic_history_response_convertToJSON(vps_traffic_response->history);
    if(history_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "history", history_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // vps_traffic_response->last
    if (!vps_traffic_response->last) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "last", vps_traffic_response->last) == NULL) {
    goto fail; //Date-Time
    }


    // vps_traffic_response->times
    if (!vps_traffic_response->times) {
        goto fail;
    }
    cJSON *times = cJSON_AddArrayToObject(item, "times");
    if(times == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *timesListEntry;
    list_ForEach(timesListEntry, vps_traffic_response->times) {
    }


    // vps_traffic_response->totals
    if (!vps_traffic_response->totals) {
        goto fail;
    }
    cJSON *totals_local_JSON = vps_traffic_totals_resposne_convertToJSON(vps_traffic_response->totals);
    if(totals_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "totals", totals_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // vps_traffic_response->usage
    if (!vps_traffic_response->usage) {
        goto fail;
    }
    cJSON *usage_local_JSON = vps_traffic_usage_response_convertToJSON(vps_traffic_response->usage);
    if(usage_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "usage", usage_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // vps_traffic_response->data
    if (!vps_traffic_response->data) {
        goto fail;
    }
    cJSON *data = cJSON_AddArrayToObject(item, "data");
    if(data == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *dataListEntry;
    if (vps_traffic_response->data) {
    list_ForEach(dataListEntry, vps_traffic_response->data) {
    cJSON *itemLocal = vps_traffic_data_section_response_convertToJSON(dataListEntry->data);
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

vps_traffic_response_t *vps_traffic_response_parseFromJSON(cJSON *vps_traffic_responseJSON){

    vps_traffic_response_t *vps_traffic_response_local_var = NULL;

    char *name_local_str = NULL;

    char *target_local_str = NULL;

    // define the local variable for vps_traffic_response->interval
    int *interval_local_var = NULL;

    // define the local variable for vps_traffic_response->history
    vps_traffic_history_response_t *history_local_nonprim = NULL;

    char *last_local_str = NULL;

    // define the local list for vps_traffic_response->times
    list_t *timesList = NULL;

    // define the local variable for vps_traffic_response->totals
    vps_traffic_totals_resposne_t *totals_local_nonprim = NULL;

    // define the local variable for vps_traffic_response->usage
    vps_traffic_usage_response_t *usage_local_nonprim = NULL;

    // define the local list for vps_traffic_response->data
    list_t *dataList = NULL;

    // vps_traffic_response->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(vps_traffic_responseJSON, "name");
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

    // vps_traffic_response->target
    cJSON *target = cJSON_GetObjectItemCaseSensitive(vps_traffic_responseJSON, "target");
    if (cJSON_IsNull(target)) {
        target = NULL;
    }
    if (!target) {
        goto end;
    }

    
    if(!cJSON_IsString(target))
    {
    goto end; //String
    }

    // vps_traffic_response->interval
    cJSON *interval = cJSON_GetObjectItemCaseSensitive(vps_traffic_responseJSON, "interval");
    if (cJSON_IsNull(interval)) {
        interval = NULL;
    }
    if (!interval) {
        goto end;
    }

    
    if(!cJSON_IsNumber(interval))
    {
    goto end; //Numeric
    }
    interval_local_var = malloc(sizeof(int));
    if(!interval_local_var)
    {
        goto end;
    }
    *interval_local_var = interval->valuedouble;

    // vps_traffic_response->history
    cJSON *history = cJSON_GetObjectItemCaseSensitive(vps_traffic_responseJSON, "history");
    if (cJSON_IsNull(history)) {
        history = NULL;
    }
    if (!history) {
        goto end;
    }

    
    history_local_nonprim = vps_traffic_history_response_parseFromJSON(history); //nonprimitive

    // vps_traffic_response->last
    cJSON *last = cJSON_GetObjectItemCaseSensitive(vps_traffic_responseJSON, "last");
    if (cJSON_IsNull(last)) {
        last = NULL;
    }
    if (!last) {
        goto end;
    }

    
    if(!cJSON_IsString(last) && !cJSON_IsNull(last))
    {
    goto end; //DateTime
    }

    // vps_traffic_response->times
    cJSON *times = cJSON_GetObjectItemCaseSensitive(vps_traffic_responseJSON, "times");
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

    // vps_traffic_response->totals
    cJSON *totals = cJSON_GetObjectItemCaseSensitive(vps_traffic_responseJSON, "totals");
    if (cJSON_IsNull(totals)) {
        totals = NULL;
    }
    if (!totals) {
        goto end;
    }

    
    totals_local_nonprim = vps_traffic_totals_resposne_parseFromJSON(totals); //nonprimitive

    // vps_traffic_response->usage
    cJSON *usage = cJSON_GetObjectItemCaseSensitive(vps_traffic_responseJSON, "usage");
    if (cJSON_IsNull(usage)) {
        usage = NULL;
    }
    if (!usage) {
        goto end;
    }

    
    usage_local_nonprim = vps_traffic_usage_response_parseFromJSON(usage); //nonprimitive

    // vps_traffic_response->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(vps_traffic_responseJSON, "data");
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
        vps_traffic_data_section_response_t *dataItem = vps_traffic_data_section_response_parseFromJSON(data_local_nonprimitive);

        list_addElement(dataList, dataItem);
    }


    if (name && !cJSON_IsNull(name)) name_local_str = strdup(name->valuestring);
    if (target && !cJSON_IsNull(target)) target_local_str = strdup(target->valuestring);
    if (last && !cJSON_IsNull(last)) last_local_str = strdup(last->valuestring);

    vps_traffic_response_local_var = vps_traffic_response_create_internal (
        name_local_str,
        target_local_str,
        interval_local_var,
        history_local_nonprim,
        last_local_str,
        timesList,
        totals_local_nonprim,
        usage_local_nonprim,
        dataList
        );

    if (!vps_traffic_response_local_var) {
        goto end;
    }

    return vps_traffic_response_local_var;
end:
    if (name_local_str) {
        free(name_local_str);
        name_local_str = NULL;
    }
    if (target_local_str) {
        free(target_local_str);
        target_local_str = NULL;
    }
    if (interval_local_var) {
        free(interval_local_var);
        interval_local_var = NULL;
    }
    if (history_local_nonprim) {
        vps_traffic_history_response_free(history_local_nonprim);
        history_local_nonprim = NULL;
    }
    if (last_local_str) {
        free(last_local_str);
        last_local_str = NULL;
    }
    if (timesList) {
        list_freeList(timesList);
        timesList = NULL;
    }
    if (totals_local_nonprim) {
        vps_traffic_totals_resposne_free(totals_local_nonprim);
        totals_local_nonprim = NULL;
    }
    if (usage_local_nonprim) {
        vps_traffic_usage_response_free(usage_local_nonprim);
        usage_local_nonprim = NULL;
    }
    if (dataList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, dataList) {
            vps_traffic_data_section_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(dataList);
        dataList = NULL;
    }
    return NULL;

}
