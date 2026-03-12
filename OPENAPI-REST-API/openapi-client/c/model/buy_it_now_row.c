#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "buy_it_now_row.h"



static buy_it_now_row_t *buy_it_now_row_create_internal(
    char *server_id,
    list_t *cpu,
    char *memory,
    list_t* disk,
    char *bandwidth,
    char *ips,
    char *location,
    int price
    ) {
    buy_it_now_row_t *buy_it_now_row_local_var = malloc(sizeof(buy_it_now_row_t));
    if (!buy_it_now_row_local_var) {
        return NULL;
    }
    buy_it_now_row_local_var->server_id = server_id;
    buy_it_now_row_local_var->cpu = cpu;
    buy_it_now_row_local_var->memory = memory;
    buy_it_now_row_local_var->disk = disk;
    buy_it_now_row_local_var->bandwidth = bandwidth;
    buy_it_now_row_local_var->ips = ips;
    buy_it_now_row_local_var->location = location;
    buy_it_now_row_local_var->price = price;

    buy_it_now_row_local_var->_library_owned = 1;
    return buy_it_now_row_local_var;
}

__attribute__((deprecated)) buy_it_now_row_t *buy_it_now_row_create(
    char *server_id,
    list_t *cpu,
    char *memory,
    list_t* disk,
    char *bandwidth,
    char *ips,
    char *location,
    int price
    ) {
    return buy_it_now_row_create_internal (
        server_id,
        cpu,
        memory,
        disk,
        bandwidth,
        ips,
        location,
        price
        );
}

void buy_it_now_row_free(buy_it_now_row_t *buy_it_now_row) {
    if(NULL == buy_it_now_row){
        return ;
    }
    if(buy_it_now_row->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "buy_it_now_row_free");
        return ;
    }
    listEntry_t *listEntry;
    if (buy_it_now_row->server_id) {
        free(buy_it_now_row->server_id);
        buy_it_now_row->server_id = NULL;
    }
    if (buy_it_now_row->cpu) {
        list_ForEach(listEntry, buy_it_now_row->cpu) {
            buy_it_now_row_cpu_inner_free(listEntry->data);
        }
        list_freeList(buy_it_now_row->cpu);
        buy_it_now_row->cpu = NULL;
    }
    if (buy_it_now_row->memory) {
        free(buy_it_now_row->memory);
        buy_it_now_row->memory = NULL;
    }
    if (buy_it_now_row->disk) {
        list_ForEach(listEntry, buy_it_now_row->disk) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(buy_it_now_row->disk);
        buy_it_now_row->disk = NULL;
    }
    if (buy_it_now_row->bandwidth) {
        free(buy_it_now_row->bandwidth);
        buy_it_now_row->bandwidth = NULL;
    }
    if (buy_it_now_row->ips) {
        free(buy_it_now_row->ips);
        buy_it_now_row->ips = NULL;
    }
    if (buy_it_now_row->location) {
        free(buy_it_now_row->location);
        buy_it_now_row->location = NULL;
    }
    free(buy_it_now_row);
}

cJSON *buy_it_now_row_convertToJSON(buy_it_now_row_t *buy_it_now_row) {
    cJSON *item = cJSON_CreateObject();

    // buy_it_now_row->server_id
    if(buy_it_now_row->server_id) {
    if(cJSON_AddStringToObject(item, "server_id", buy_it_now_row->server_id) == NULL) {
    goto fail; //String
    }
    }


    // buy_it_now_row->cpu
    if(buy_it_now_row->cpu) {
    cJSON *cpu = cJSON_AddArrayToObject(item, "cpu");
    if(cpu == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *cpuListEntry;
    if (buy_it_now_row->cpu) {
    list_ForEach(cpuListEntry, buy_it_now_row->cpu) {
    cJSON *itemLocal = buy_it_now_row_cpu_inner_convertToJSON(cpuListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(cpu, itemLocal);
    }
    }
    }


    // buy_it_now_row->memory
    if(buy_it_now_row->memory) {
    if(cJSON_AddStringToObject(item, "memory", buy_it_now_row->memory) == NULL) {
    goto fail; //String
    }
    }


    // buy_it_now_row->disk
    if(buy_it_now_row->disk) {
    cJSON *disk = cJSON_AddObjectToObject(item, "disk");
    if(disk == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = disk;
    listEntry_t *diskListEntry;
    if (buy_it_now_row->disk) {
    list_ForEach(diskListEntry, buy_it_now_row->disk) {
        keyValuePair_t *localKeyValue = diskListEntry->data;
        if(cJSON_AddStringToObject(localMapObject, localKeyValue->key, localKeyValue->value) == NULL)
        {
            goto fail;
        }
    }
    }
    }


    // buy_it_now_row->bandwidth
    if(buy_it_now_row->bandwidth) {
    if(cJSON_AddStringToObject(item, "bandwidth", buy_it_now_row->bandwidth) == NULL) {
    goto fail; //String
    }
    }


    // buy_it_now_row->ips
    if(buy_it_now_row->ips) {
    if(cJSON_AddStringToObject(item, "ips", buy_it_now_row->ips) == NULL) {
    goto fail; //String
    }
    }


    // buy_it_now_row->location
    if(buy_it_now_row->location) {
    if(cJSON_AddStringToObject(item, "location", buy_it_now_row->location) == NULL) {
    goto fail; //String
    }
    }


    // buy_it_now_row->price
    if(buy_it_now_row->price) {
    if(cJSON_AddNumberToObject(item, "price", buy_it_now_row->price) == NULL) {
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

buy_it_now_row_t *buy_it_now_row_parseFromJSON(cJSON *buy_it_now_rowJSON){

    buy_it_now_row_t *buy_it_now_row_local_var = NULL;

    // define the local list for buy_it_now_row->cpu
    list_t *cpuList = NULL;

    // define the local map for buy_it_now_row->disk
    list_t *diskList = NULL;

    // buy_it_now_row->server_id
    cJSON *server_id = cJSON_GetObjectItemCaseSensitive(buy_it_now_rowJSON, "server_id");
    if (cJSON_IsNull(server_id)) {
        server_id = NULL;
    }
    if (server_id) { 
    if(!cJSON_IsString(server_id) && !cJSON_IsNull(server_id))
    {
    goto end; //String
    }
    }

    // buy_it_now_row->cpu
    cJSON *cpu = cJSON_GetObjectItemCaseSensitive(buy_it_now_rowJSON, "cpu");
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
        buy_it_now_row_cpu_inner_t *cpuItem = buy_it_now_row_cpu_inner_parseFromJSON(cpu_local_nonprimitive);

        list_addElement(cpuList, cpuItem);
    }
    }

    // buy_it_now_row->memory
    cJSON *memory = cJSON_GetObjectItemCaseSensitive(buy_it_now_rowJSON, "memory");
    if (cJSON_IsNull(memory)) {
        memory = NULL;
    }
    if (memory) { 
    if(!cJSON_IsString(memory) && !cJSON_IsNull(memory))
    {
    goto end; //String
    }
    }

    // buy_it_now_row->disk
    cJSON *disk = cJSON_GetObjectItemCaseSensitive(buy_it_now_rowJSON, "disk");
    if (cJSON_IsNull(disk)) {
        disk = NULL;
    }
    if (disk) { 
    cJSON *disk_local_map = NULL;
    if(!cJSON_IsObject(disk) && !cJSON_IsNull(disk))
    {
        goto end;//primitive map container
    }
    if(cJSON_IsObject(disk))
    {
        diskList = list_createList();
        keyValuePair_t *localMapKeyPair;
        cJSON_ArrayForEach(disk_local_map, disk)
        {
            cJSON *localMapObject = disk_local_map;
            if(!cJSON_IsString(localMapObject))
            {
                goto end;
            }
            localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
            list_addElement(diskList , localMapKeyPair);
        }
    }
    }

    // buy_it_now_row->bandwidth
    cJSON *bandwidth = cJSON_GetObjectItemCaseSensitive(buy_it_now_rowJSON, "bandwidth");
    if (cJSON_IsNull(bandwidth)) {
        bandwidth = NULL;
    }
    if (bandwidth) { 
    if(!cJSON_IsString(bandwidth) && !cJSON_IsNull(bandwidth))
    {
    goto end; //String
    }
    }

    // buy_it_now_row->ips
    cJSON *ips = cJSON_GetObjectItemCaseSensitive(buy_it_now_rowJSON, "ips");
    if (cJSON_IsNull(ips)) {
        ips = NULL;
    }
    if (ips) { 
    if(!cJSON_IsString(ips) && !cJSON_IsNull(ips))
    {
    goto end; //String
    }
    }

    // buy_it_now_row->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(buy_it_now_rowJSON, "location");
    if (cJSON_IsNull(location)) {
        location = NULL;
    }
    if (location) { 
    if(!cJSON_IsString(location) && !cJSON_IsNull(location))
    {
    goto end; //String
    }
    }

    // buy_it_now_row->price
    cJSON *price = cJSON_GetObjectItemCaseSensitive(buy_it_now_rowJSON, "price");
    if (cJSON_IsNull(price)) {
        price = NULL;
    }
    if (price) { 
    if(!cJSON_IsNumber(price))
    {
    goto end; //Numeric
    }
    }


    buy_it_now_row_local_var = buy_it_now_row_create_internal (
        server_id && !cJSON_IsNull(server_id) ? strdup(server_id->valuestring) : NULL,
        cpu ? cpuList : NULL,
        memory && !cJSON_IsNull(memory) ? strdup(memory->valuestring) : NULL,
        disk ? diskList : NULL,
        bandwidth && !cJSON_IsNull(bandwidth) ? strdup(bandwidth->valuestring) : NULL,
        ips && !cJSON_IsNull(ips) ? strdup(ips->valuestring) : NULL,
        location && !cJSON_IsNull(location) ? strdup(location->valuestring) : NULL,
        price ? price->valuedouble : 0
        );

    return buy_it_now_row_local_var;
end:
    if (cpuList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, cpuList) {
            buy_it_now_row_cpu_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(cpuList);
        cpuList = NULL;
    }
    if (diskList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, diskList) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free(localKeyValue->key);
            localKeyValue->key = NULL;
            free(localKeyValue->value);
            localKeyValue->value = NULL;
            keyValuePair_free(localKeyValue);
            localKeyValue = NULL;
        }
        list_freeList(diskList);
        diskList = NULL;
    }
    return NULL;

}
