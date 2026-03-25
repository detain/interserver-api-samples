#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "get_website_buy_ip_200_response.h"



static get_website_buy_ip_200_response_t *get_website_buy_ip_200_response_create_internal(
    list_t* ips
    ) {
    get_website_buy_ip_200_response_t *get_website_buy_ip_200_response_local_var = malloc(sizeof(get_website_buy_ip_200_response_t));
    if (!get_website_buy_ip_200_response_local_var) {
        return NULL;
    }
    memset(get_website_buy_ip_200_response_local_var, 0, sizeof(get_website_buy_ip_200_response_t));
    get_website_buy_ip_200_response_local_var->_library_owned = 1;
    get_website_buy_ip_200_response_local_var->ips = ips;
    return get_website_buy_ip_200_response_local_var;
}

__attribute__((deprecated)) get_website_buy_ip_200_response_t *get_website_buy_ip_200_response_create(
    list_t* ips
    ) {
    get_website_buy_ip_200_response_t *result = get_website_buy_ip_200_response_create_internal (
        ips
        );
    if (!result) {
    }
    return result;
}

void get_website_buy_ip_200_response_free(get_website_buy_ip_200_response_t *get_website_buy_ip_200_response) {
    if(NULL == get_website_buy_ip_200_response){
        return ;
    }
    if(get_website_buy_ip_200_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "get_website_buy_ip_200_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (get_website_buy_ip_200_response->ips) {
        list_ForEach(listEntry, get_website_buy_ip_200_response->ips) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(get_website_buy_ip_200_response->ips);
        get_website_buy_ip_200_response->ips = NULL;
    }
    free(get_website_buy_ip_200_response);
}

cJSON *get_website_buy_ip_200_response_convertToJSON(get_website_buy_ip_200_response_t *get_website_buy_ip_200_response) {
    cJSON *item = cJSON_CreateObject();

    // get_website_buy_ip_200_response->ips
    if(get_website_buy_ip_200_response->ips) {
    cJSON *ips = cJSON_AddObjectToObject(item, "ips");
    if(ips == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = ips;
    listEntry_t *ipsListEntry;
    if (get_website_buy_ip_200_response->ips) {
    list_ForEach(ipsListEntry, get_website_buy_ip_200_response->ips) {
        keyValuePair_t *localKeyValue = ipsListEntry->data;
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

get_website_buy_ip_200_response_t *get_website_buy_ip_200_response_parseFromJSON(cJSON *get_website_buy_ip_200_responseJSON){

    get_website_buy_ip_200_response_t *get_website_buy_ip_200_response_local_var = NULL;

    // define the local map for get_website_buy_ip_200_response->ips
    list_t *ipsList = NULL;

    // get_website_buy_ip_200_response->ips
    cJSON *ips = cJSON_GetObjectItemCaseSensitive(get_website_buy_ip_200_responseJSON, "ips");
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
            if(!cJSON_IsString(localMapObject))
            {
                goto end;
            }
            localMapKeyPair = keyValuePair_create(strdup(localMapObject->string),strdup(localMapObject->valuestring));
            list_addElement(ipsList , localMapKeyPair);
        }
    }
    }



    get_website_buy_ip_200_response_local_var = get_website_buy_ip_200_response_create_internal (
        ips ? ipsList : NULL
        );

    if (!get_website_buy_ip_200_response_local_var) {
        goto end;
    }

    return get_website_buy_ip_200_response_local_var;
end:
    if (ipsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, ipsList) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free(localKeyValue->key);
            localKeyValue->key = NULL;
            free(localKeyValue->value);
            localKeyValue->value = NULL;
            keyValuePair_free(localKeyValue);
            localKeyValue = NULL;
        }
        list_freeList(ipsList);
        ipsList = NULL;
    }
    return NULL;

}
