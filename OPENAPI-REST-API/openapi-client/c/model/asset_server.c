#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "asset_server.h"



static asset_server_t *asset_server_create_internal(
    int id,
    char *region,
    char *price,
    list_t *cpu,
    list_t *memory,
    list_t *bandwidth,
    list_t *ips,
    list_t* hd
    ) {
    asset_server_t *asset_server_local_var = malloc(sizeof(asset_server_t));
    if (!asset_server_local_var) {
        return NULL;
    }
    asset_server_local_var->id = id;
    asset_server_local_var->region = region;
    asset_server_local_var->price = price;
    asset_server_local_var->cpu = cpu;
    asset_server_local_var->memory = memory;
    asset_server_local_var->bandwidth = bandwidth;
    asset_server_local_var->ips = ips;
    asset_server_local_var->hd = hd;

    asset_server_local_var->_library_owned = 1;
    return asset_server_local_var;
}

__attribute__((deprecated)) asset_server_t *asset_server_create(
    int id,
    char *region,
    char *price,
    list_t *cpu,
    list_t *memory,
    list_t *bandwidth,
    list_t *ips,
    list_t* hd
    ) {
    return asset_server_create_internal (
        id,
        region,
        price,
        cpu,
        memory,
        bandwidth,
        ips,
        hd
        );
}

void asset_server_free(asset_server_t *asset_server) {
    if(NULL == asset_server){
        return ;
    }
    if(asset_server->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "asset_server_free");
        return ;
    }
    listEntry_t *listEntry;
    if (asset_server->region) {
        free(asset_server->region);
        asset_server->region = NULL;
    }
    if (asset_server->price) {
        free(asset_server->price);
        asset_server->price = NULL;
    }
    if (asset_server->cpu) {
        list_ForEach(listEntry, asset_server->cpu) {
            asset_server_cpu_inner_free(listEntry->data);
        }
        list_freeList(asset_server->cpu);
        asset_server->cpu = NULL;
    }
    if (asset_server->memory) {
        list_ForEach(listEntry, asset_server->memory) {
            asset_server_cpu_inner_free(listEntry->data);
        }
        list_freeList(asset_server->memory);
        asset_server->memory = NULL;
    }
    if (asset_server->bandwidth) {
        list_ForEach(listEntry, asset_server->bandwidth) {
            asset_server_cpu_inner_free(listEntry->data);
        }
        list_freeList(asset_server->bandwidth);
        asset_server->bandwidth = NULL;
    }
    if (asset_server->ips) {
        list_ForEach(listEntry, asset_server->ips) {
            asset_server_cpu_inner_free(listEntry->data);
        }
        list_freeList(asset_server->ips);
        asset_server->ips = NULL;
    }
    if (asset_server->hd) {
        list_ForEach(listEntry, asset_server->hd) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(asset_server->hd);
        asset_server->hd = NULL;
    }
    free(asset_server);
}

cJSON *asset_server_convertToJSON(asset_server_t *asset_server) {
    cJSON *item = cJSON_CreateObject();

    // asset_server->id
    if(asset_server->id) {
    if(cJSON_AddNumberToObject(item, "id", asset_server->id) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_server->region
    if(asset_server->region) {
    if(cJSON_AddStringToObject(item, "Region", asset_server->region) == NULL) {
    goto fail; //String
    }
    }


    // asset_server->price
    if(asset_server->price) {
    if(cJSON_AddStringToObject(item, "price", asset_server->price) == NULL) {
    goto fail; //String
    }
    }


    // asset_server->cpu
    if(asset_server->cpu) {
    cJSON *cpu = cJSON_AddArrayToObject(item, "CPU");
    if(cpu == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *cpuListEntry;
    if (asset_server->cpu) {
    list_ForEach(cpuListEntry, asset_server->cpu) {
    cJSON *itemLocal = asset_server_cpu_inner_convertToJSON(cpuListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(cpu, itemLocal);
    }
    }
    }


    // asset_server->memory
    if(asset_server->memory) {
    cJSON *memory = cJSON_AddArrayToObject(item, "Memory");
    if(memory == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *memoryListEntry;
    if (asset_server->memory) {
    list_ForEach(memoryListEntry, asset_server->memory) {
    cJSON *itemLocal = asset_server_cpu_inner_convertToJSON(memoryListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(memory, itemLocal);
    }
    }
    }


    // asset_server->bandwidth
    if(asset_server->bandwidth) {
    cJSON *bandwidth = cJSON_AddArrayToObject(item, "Bandwidth");
    if(bandwidth == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *bandwidthListEntry;
    if (asset_server->bandwidth) {
    list_ForEach(bandwidthListEntry, asset_server->bandwidth) {
    cJSON *itemLocal = asset_server_cpu_inner_convertToJSON(bandwidthListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(bandwidth, itemLocal);
    }
    }
    }


    // asset_server->ips
    if(asset_server->ips) {
    cJSON *ips = cJSON_AddArrayToObject(item, "IPs");
    if(ips == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *ipsListEntry;
    if (asset_server->ips) {
    list_ForEach(ipsListEntry, asset_server->ips) {
    cJSON *itemLocal = asset_server_cpu_inner_convertToJSON(ipsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(ips, itemLocal);
    }
    }
    }


    // asset_server->hd
    if(asset_server->hd) {
    cJSON *hd = cJSON_AddObjectToObject(item, "HD");
    if(hd == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = hd;
    listEntry_t *hdListEntry;
    if (asset_server->hd) {
    list_ForEach(hdListEntry, asset_server->hd) {
        keyValuePair_t *localKeyValue = hdListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, localKeyValue->value) == NULL)
        {
            goto fail;
        }
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

asset_server_t *asset_server_parseFromJSON(cJSON *asset_serverJSON){

    asset_server_t *asset_server_local_var = NULL;

    // define the local list for asset_server->cpu
    list_t *cpuList = NULL;

    // define the local list for asset_server->memory
    list_t *memoryList = NULL;

    // define the local list for asset_server->bandwidth
    list_t *bandwidthList = NULL;

    // define the local list for asset_server->ips
    list_t *ipsList = NULL;

    // define the local map for asset_server->hd
    list_t *hdList = NULL;

    // asset_server->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(asset_serverJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    }

    // asset_server->region
    cJSON *region = cJSON_GetObjectItemCaseSensitive(asset_serverJSON, "Region");
    if (cJSON_IsNull(region)) {
        region = NULL;
    }
    if (region) { 
    if(!cJSON_IsString(region) && !cJSON_IsNull(region))
    {
    goto end; //String
    }
    }

    // asset_server->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(asset_serverJSON, "price");
    if (cJSON_IsNull(price)) {
        price = NULL;
    }
    if (price) { 
    if(!cJSON_IsString(price) && !cJSON_IsNull(price))
    {
    goto end; //String
    }
    }

    // asset_server->cpu
    cJSON *cpu = cJSON_GetObjectItemCaseSensitive(asset_serverJSON, "CPU");
    if (cJSON_IsNull(cpu)) {
        cpu = NULL;
    }
    if (cpu) { 
    cJSON *cpu_local_nonprimitive = NULL;
    if(!cJSON_IsArray(cpu)){
        goto end; //nonprimitive container
    }

    cpuList = list_createList();

    cJSON_ArrayForEach(cpu_local_nonprimitive,cpu )
    {
        if(!cJSON_IsObject(cpu_local_nonprimitive)){
            goto end;
        }
        asset_server_cpu_inner_t *cpuItem = asset_server_cpu_inner_parseFromJSON(cpu_local_nonprimitive);

        list_addElement(cpuList, cpuItem);
    }
    }

    // asset_server->memory
    cJSON *memory = cJSON_GetObjectItemCaseSensitive(asset_serverJSON, "Memory");
    if (cJSON_IsNull(memory)) {
        memory = NULL;
    }
    if (memory) { 
    cJSON *memory_local_nonprimitive = NULL;
    if(!cJSON_IsArray(memory)){
        goto end; //nonprimitive container
    }

    memoryList = list_createList();

    cJSON_ArrayForEach(memory_local_nonprimitive,memory )
    {
        if(!cJSON_IsObject(memory_local_nonprimitive)){
            goto end;
        }
        asset_server_cpu_inner_t *memoryItem = asset_server_cpu_inner_parseFromJSON(memory_local_nonprimitive);

        list_addElement(memoryList, memoryItem);
    }
    }

    // asset_server->bandwidth
    cJSON *bandwidth = cJSON_GetObjectItemCaseSensitive(asset_serverJSON, "Bandwidth");
    if (cJSON_IsNull(bandwidth)) {
        bandwidth = NULL;
    }
    if (bandwidth) { 
    cJSON *bandwidth_local_nonprimitive = NULL;
    if(!cJSON_IsArray(bandwidth)){
        goto end; //nonprimitive container
    }

    bandwidthList = list_createList();

    cJSON_ArrayForEach(bandwidth_local_nonprimitive,bandwidth )
    {
        if(!cJSON_IsObject(bandwidth_local_nonprimitive)){
            goto end;
        }
        asset_server_cpu_inner_t *bandwidthItem = asset_server_cpu_inner_parseFromJSON(bandwidth_local_nonprimitive);

        list_addElement(bandwidthList, bandwidthItem);
    }
    }

    // asset_server->ips
    cJSON *ips = cJSON_GetObjectItemCaseSensitive(asset_serverJSON, "IPs");
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
        asset_server_cpu_inner_t *ipsItem = asset_server_cpu_inner_parseFromJSON(ips_local_nonprimitive);

        list_addElement(ipsList, ipsItem);
    }
    }

    // asset_server->hd
    cJSON *hd = cJSON_GetObjectItemCaseSensitive(asset_serverJSON, "HD");
    if (cJSON_IsNull(hd)) {
        hd = NULL;
    }
    if (hd) { 
    cJSON *hd_local_map = NULL;
    if(!cJSON_IsObject(hd) && !cJSON_IsNull(hd))
    {
        goto end;//primitive map container
    }
    if(cJSON_IsObject(hd))
    {
        hdList = list_createList();
        keyValuePair_t *localMapKeyPair;
        cJSON_ArrayForEach(hd_local_map, hd)
        {
            cJSON *localMapObject = hd_local_map;
            if(!cJSON_IsString(localMapObject))
            {
                goto end;
            }
            localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
            list_addElement(hdList , localMapKeyPair);
        }
    }
    }


    asset_server_local_var = asset_server_create_internal (
        id ? id->valuedouble : 0,
        region && !cJSON_IsNull(region) ? strdup(region->valuestring) : NULL,
        price && !cJSON_IsNull(price) ? strdup(price->valuestring) : NULL,
        cpu ? cpuList : NULL,
        memory ? memoryList : NULL,
        bandwidth ? bandwidthList : NULL,
        ips ? ipsList : NULL,
        hd ? hdList : NULL
        );

    return asset_server_local_var;
end:
    if (cpuList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, cpuList) {
            asset_server_cpu_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(cpuList);
        cpuList = NULL;
    }
    if (memoryList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, memoryList) {
            asset_server_cpu_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(memoryList);
        memoryList = NULL;
    }
    if (bandwidthList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, bandwidthList) {
            asset_server_cpu_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(bandwidthList);
        bandwidthList = NULL;
    }
    if (ipsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, ipsList) {
            asset_server_cpu_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(ipsList);
        ipsList = NULL;
    }
    if (hdList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, hdList) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free(localKeyValue->key);
            localKeyValue->key = NULL;
            free(localKeyValue->value);
            localKeyValue->value = NULL;
            keyValuePair_free(localKeyValue);
            localKeyValue = NULL;
        }
        list_freeList(hdList);
        hdList = NULL;
    }
    return NULL;

}
