#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "reverse_dns_entries.h"



static reverse_dns_entries_t *reverse_dns_entries_create_internal(
    list_t* ips
    ) {
    reverse_dns_entries_t *reverse_dns_entries_local_var = malloc(sizeof(reverse_dns_entries_t));
    if (!reverse_dns_entries_local_var) {
        return NULL;
    }
    reverse_dns_entries_local_var->ips = ips;

    reverse_dns_entries_local_var->_library_owned = 1;
    return reverse_dns_entries_local_var;
}

__attribute__((deprecated)) reverse_dns_entries_t *reverse_dns_entries_create(
    list_t* ips
    ) {
    return reverse_dns_entries_create_internal (
        ips
        );
}

void reverse_dns_entries_free(reverse_dns_entries_t *reverse_dns_entries) {
    if(NULL == reverse_dns_entries){
        return ;
    }
    if(reverse_dns_entries->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "reverse_dns_entries_free");
        return ;
    }
    listEntry_t *listEntry;
    if (reverse_dns_entries->ips) {
        list_ForEach(listEntry, reverse_dns_entries->ips) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(reverse_dns_entries->ips);
        reverse_dns_entries->ips = NULL;
    }
    free(reverse_dns_entries);
}

cJSON *reverse_dns_entries_convertToJSON(reverse_dns_entries_t *reverse_dns_entries) {
    cJSON *item = cJSON_CreateObject();

    // reverse_dns_entries->ips
    if(reverse_dns_entries->ips) {
    cJSON *ips = cJSON_AddObjectToObject(item, "ips");
    if(ips == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = ips;
    listEntry_t *ipsListEntry;
    if (reverse_dns_entries->ips) {
    list_ForEach(ipsListEntry, reverse_dns_entries->ips) {
        keyValuePair_t *localKeyValue = ipsListEntry->data;
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

reverse_dns_entries_t *reverse_dns_entries_parseFromJSON(cJSON *reverse_dns_entriesJSON){

    reverse_dns_entries_t *reverse_dns_entries_local_var = NULL;

    // define the local map for reverse_dns_entries->ips
    list_t *ipsList = NULL;

    // reverse_dns_entries->ips
    cJSON *ips = cJSON_GetObjectItemCaseSensitive(reverse_dns_entriesJSON, "ips");
    if (cJSON_IsNull(ips)) {
        ips = NULL;
    }
    if (ips) { 
    cJSON *ips_local_map = NULL;
    if(!cJSON_IsObject(ips) && !cJSON_IsNull(ips))
    {
        goto end;//primitive map container
    }
    if(cJSON_IsObject(ips))
    {
        ipsList = list_createList();
        keyValuePair_t *localMapKeyPair;
        cJSON_ArrayForEach(ips_local_map, ips)
        {
            cJSON *localMapObject = ips_local_map;
            list_addElement(ipsList , localMapKeyPair);
        }
    }
    }


    reverse_dns_entries_local_var = reverse_dns_entries_create_internal (
        ips ? ipsList : NULL
        );

    return reverse_dns_entries_local_var;
end:
    if (ipsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, ipsList) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free(localKeyValue->key);
            localKeyValue->key = NULL;
            keyValuePair_free(localKeyValue);
            localKeyValue = NULL;
        }
        list_freeList(ipsList);
        ipsList = NULL;
    }
    return NULL;

}
