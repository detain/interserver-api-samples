#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "config_lists.h"



static config_lists_t *config_lists_create_internal(
    list_t* cpu_li,
    list_t* memory_li,
    list_t* hd_li,
    list_t* bandwidth_li,
    list_t* ips_li,
    list_t* os_li,
    list_t* cp_li,
    list_t *raid_li
    ) {
    config_lists_t *config_lists_local_var = malloc(sizeof(config_lists_t));
    if (!config_lists_local_var) {
        return NULL;
    }
    config_lists_local_var->cpu_li = cpu_li;
    config_lists_local_var->memory_li = memory_li;
    config_lists_local_var->hd_li = hd_li;
    config_lists_local_var->bandwidth_li = bandwidth_li;
    config_lists_local_var->ips_li = ips_li;
    config_lists_local_var->os_li = os_li;
    config_lists_local_var->cp_li = cp_li;
    config_lists_local_var->raid_li = raid_li;

    config_lists_local_var->_library_owned = 1;
    return config_lists_local_var;
}

__attribute__((deprecated)) config_lists_t *config_lists_create(
    list_t* cpu_li,
    list_t* memory_li,
    list_t* hd_li,
    list_t* bandwidth_li,
    list_t* ips_li,
    list_t* os_li,
    list_t* cp_li,
    list_t *raid_li
    ) {
    return config_lists_create_internal (
        cpu_li,
        memory_li,
        hd_li,
        bandwidth_li,
        ips_li,
        os_li,
        cp_li,
        raid_li
        );
}

void config_lists_free(config_lists_t *config_lists) {
    if(NULL == config_lists){
        return ;
    }
    if(config_lists->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "config_lists_free");
        return ;
    }
    listEntry_t *listEntry;
    if (config_lists->cpu_li) {
        list_ForEach(listEntry, config_lists->cpu_li) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(config_lists->cpu_li);
        config_lists->cpu_li = NULL;
    }
    if (config_lists->memory_li) {
        list_ForEach(listEntry, config_lists->memory_li) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(config_lists->memory_li);
        config_lists->memory_li = NULL;
    }
    if (config_lists->hd_li) {
        list_ForEach(listEntry, config_lists->hd_li) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(config_lists->hd_li);
        config_lists->hd_li = NULL;
    }
    if (config_lists->bandwidth_li) {
        list_ForEach(listEntry, config_lists->bandwidth_li) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(config_lists->bandwidth_li);
        config_lists->bandwidth_li = NULL;
    }
    if (config_lists->ips_li) {
        list_ForEach(listEntry, config_lists->ips_li) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(config_lists->ips_li);
        config_lists->ips_li = NULL;
    }
    if (config_lists->os_li) {
        list_ForEach(listEntry, config_lists->os_li) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(config_lists->os_li);
        config_lists->os_li = NULL;
    }
    if (config_lists->cp_li) {
        list_ForEach(listEntry, config_lists->cp_li) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(config_lists->cp_li);
        config_lists->cp_li = NULL;
    }
    if (config_lists->raid_li) {
        list_ForEach(listEntry, config_lists->raid_li) {
            raid_option_free(listEntry->data);
        }
        list_freeList(config_lists->raid_li);
        config_lists->raid_li = NULL;
    }
    free(config_lists);
}

cJSON *config_lists_convertToJSON(config_lists_t *config_lists) {
    cJSON *item = cJSON_CreateObject();

    // config_lists->cpu_li
    if(config_lists->cpu_li) {
    cJSON *cpu_li = cJSON_AddObjectToObject(item, "cpu_li");
    if(cpu_li == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = cpu_li;
    listEntry_t *cpu_liListEntry;
    if (config_lists->cpu_li) {
    list_ForEach(cpu_liListEntry, config_lists->cpu_li) {
        keyValuePair_t *localKeyValue = cpu_liListEntry->data;
    }
    }
    }


    // config_lists->memory_li
    if(config_lists->memory_li) {
    cJSON *memory_li = cJSON_AddObjectToObject(item, "memory_li");
    if(memory_li == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = memory_li;
    listEntry_t *memory_liListEntry;
    if (config_lists->memory_li) {
    list_ForEach(memory_liListEntry, config_lists->memory_li) {
        keyValuePair_t *localKeyValue = memory_liListEntry->data;
    }
    }
    }


    // config_lists->hd_li
    if(config_lists->hd_li) {
    cJSON *hd_li = cJSON_AddObjectToObject(item, "hd_li");
    if(hd_li == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = hd_li;
    listEntry_t *hd_liListEntry;
    if (config_lists->hd_li) {
    list_ForEach(hd_liListEntry, config_lists->hd_li) {
        keyValuePair_t *localKeyValue = hd_liListEntry->data;
    }
    }
    }


    // config_lists->bandwidth_li
    if(config_lists->bandwidth_li) {
    cJSON *bandwidth_li = cJSON_AddObjectToObject(item, "bandwidth_li");
    if(bandwidth_li == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = bandwidth_li;
    listEntry_t *bandwidth_liListEntry;
    if (config_lists->bandwidth_li) {
    list_ForEach(bandwidth_liListEntry, config_lists->bandwidth_li) {
        keyValuePair_t *localKeyValue = bandwidth_liListEntry->data;
    }
    }
    }


    // config_lists->ips_li
    if(config_lists->ips_li) {
    cJSON *ips_li = cJSON_AddObjectToObject(item, "ips_li");
    if(ips_li == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = ips_li;
    listEntry_t *ips_liListEntry;
    if (config_lists->ips_li) {
    list_ForEach(ips_liListEntry, config_lists->ips_li) {
        keyValuePair_t *localKeyValue = ips_liListEntry->data;
    }
    }
    }


    // config_lists->os_li
    if(config_lists->os_li) {
    cJSON *os_li = cJSON_AddObjectToObject(item, "os_li");
    if(os_li == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = os_li;
    listEntry_t *os_liListEntry;
    if (config_lists->os_li) {
    list_ForEach(os_liListEntry, config_lists->os_li) {
        keyValuePair_t *localKeyValue = os_liListEntry->data;
    }
    }
    }


    // config_lists->cp_li
    if(config_lists->cp_li) {
    cJSON *cp_li = cJSON_AddObjectToObject(item, "cp_li");
    if(cp_li == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = cp_li;
    listEntry_t *cp_liListEntry;
    if (config_lists->cp_li) {
    list_ForEach(cp_liListEntry, config_lists->cp_li) {
        keyValuePair_t *localKeyValue = cp_liListEntry->data;
    }
    }
    }


    // config_lists->raid_li
    if(config_lists->raid_li) {
    cJSON *raid_li = cJSON_AddArrayToObject(item, "raid_li");
    if(raid_li == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *raid_liListEntry;
    if (config_lists->raid_li) {
    list_ForEach(raid_liListEntry, config_lists->raid_li) {
    cJSON *itemLocal = raid_option_convertToJSON(raid_liListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(raid_li, itemLocal);
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

config_lists_t *config_lists_parseFromJSON(cJSON *config_listsJSON){

    config_lists_t *config_lists_local_var = NULL;

    // define the local map for config_lists->cpu_li
    list_t *cpu_liList = NULL;

    // define the local map for config_lists->memory_li
    list_t *memory_liList = NULL;

    // define the local map for config_lists->hd_li
    list_t *hd_liList = NULL;

    // define the local map for config_lists->bandwidth_li
    list_t *bandwidth_liList = NULL;

    // define the local map for config_lists->ips_li
    list_t *ips_liList = NULL;

    // define the local map for config_lists->os_li
    list_t *os_liList = NULL;

    // define the local map for config_lists->cp_li
    list_t *cp_liList = NULL;

    // define the local list for config_lists->raid_li
    list_t *raid_liList = NULL;

    // config_lists->cpu_li
    cJSON *cpu_li = cJSON_GetObjectItemCaseSensitive(config_listsJSON, "cpu_li");
    if (cJSON_IsNull(cpu_li)) {
        cpu_li = NULL;
    }
    if (cpu_li) { 

    // The data type of the elements in config_lists->cpu_li is currently not supported.

    }

    // config_lists->memory_li
    cJSON *memory_li = cJSON_GetObjectItemCaseSensitive(config_listsJSON, "memory_li");
    if (cJSON_IsNull(memory_li)) {
        memory_li = NULL;
    }
    if (memory_li) { 
    cJSON *memory_li_local_map = NULL;
    if(!cJSON_IsObject(memory_li) && !cJSON_IsNull(memory_li))
    {
        goto end;//primitive map container
    }
    if(cJSON_IsObject(memory_li))
    {
        memory_liList = list_createList();
        keyValuePair_t *localMapKeyPair;
        cJSON_ArrayForEach(memory_li_local_map, memory_li)
        {
            cJSON *localMapObject = memory_li_local_map;
            list_addElement(memory_liList , localMapKeyPair);
        }
    }
    }

    // config_lists->hd_li
    cJSON *hd_li = cJSON_GetObjectItemCaseSensitive(config_listsJSON, "hd_li");
    if (cJSON_IsNull(hd_li)) {
        hd_li = NULL;
    }
    if (hd_li) { 
    cJSON *hd_li_local_map = NULL;
    if(!cJSON_IsObject(hd_li) && !cJSON_IsNull(hd_li))
    {
        goto end;//primitive map container
    }
    if(cJSON_IsObject(hd_li))
    {
        hd_liList = list_createList();
        keyValuePair_t *localMapKeyPair;
        cJSON_ArrayForEach(hd_li_local_map, hd_li)
        {
            cJSON *localMapObject = hd_li_local_map;
            list_addElement(hd_liList , localMapKeyPair);
        }
    }
    }

    // config_lists->bandwidth_li
    cJSON *bandwidth_li = cJSON_GetObjectItemCaseSensitive(config_listsJSON, "bandwidth_li");
    if (cJSON_IsNull(bandwidth_li)) {
        bandwidth_li = NULL;
    }
    if (bandwidth_li) { 

    // The data type of the elements in config_lists->bandwidth_li is currently not supported.

    }

    // config_lists->ips_li
    cJSON *ips_li = cJSON_GetObjectItemCaseSensitive(config_listsJSON, "ips_li");
    if (cJSON_IsNull(ips_li)) {
        ips_li = NULL;
    }
    if (ips_li) { 

    // The data type of the elements in config_lists->ips_li is currently not supported.

    }

    // config_lists->os_li
    cJSON *os_li = cJSON_GetObjectItemCaseSensitive(config_listsJSON, "os_li");
    if (cJSON_IsNull(os_li)) {
        os_li = NULL;
    }
    if (os_li) { 

    // The data type of the elements in config_lists->os_li is currently not supported.

    }

    // config_lists->cp_li
    cJSON *cp_li = cJSON_GetObjectItemCaseSensitive(config_listsJSON, "cp_li");
    if (cJSON_IsNull(cp_li)) {
        cp_li = NULL;
    }
    if (cp_li) { 

    // The data type of the elements in config_lists->cp_li is currently not supported.

    }

    // config_lists->raid_li
    cJSON *raid_li = cJSON_GetObjectItemCaseSensitive(config_listsJSON, "raid_li");
    if (cJSON_IsNull(raid_li)) {
        raid_li = NULL;
    }
    if (raid_li) { 
    cJSON *raid_li_local_nonprimitive = NULL;
    if(!cJSON_IsArray(raid_li)){
        goto end; //nonprimitive container
    }

    raid_liList = list_createList();

    cJSON_ArrayForEach(raid_li_local_nonprimitive,raid_li )
    {
        if(!cJSON_IsObject(raid_li_local_nonprimitive)){
            goto end;
        }
        raid_option_t *raid_liItem = raid_option_parseFromJSON(raid_li_local_nonprimitive);

        list_addElement(raid_liList, raid_liItem);
    }
    }


    config_lists_local_var = config_lists_create_internal (
        cpu_li ? cpu_liList : NULL,
        memory_li ? memory_liList : NULL,
        hd_li ? hd_liList : NULL,
        bandwidth_li ? bandwidth_liList : NULL,
        ips_li ? ips_liList : NULL,
        os_li ? os_liList : NULL,
        cp_li ? cp_liList : NULL,
        raid_li ? raid_liList : NULL
        );

    return config_lists_local_var;
end:

    // The data type of the elements in config_lists->cpu_li is currently not supported.

    if (memory_liList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, memory_liList) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free(localKeyValue->key);
            localKeyValue->key = NULL;
            keyValuePair_free(localKeyValue);
            localKeyValue = NULL;
        }
        list_freeList(memory_liList);
        memory_liList = NULL;
    }
    if (hd_liList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, hd_liList) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free(localKeyValue->key);
            localKeyValue->key = NULL;
            keyValuePair_free(localKeyValue);
            localKeyValue = NULL;
        }
        list_freeList(hd_liList);
        hd_liList = NULL;
    }

    // The data type of the elements in config_lists->bandwidth_li is currently not supported.


    // The data type of the elements in config_lists->ips_li is currently not supported.


    // The data type of the elements in config_lists->os_li is currently not supported.


    // The data type of the elements in config_lists->cp_li is currently not supported.

    if (raid_liList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, raid_liList) {
            raid_option_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(raid_liList);
        raid_liList = NULL;
    }
    return NULL;

}
