#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "post_website_buy_ip_request.h"



static post_website_buy_ip_request_t *post_website_buy_ip_request_create_internal(
    list_t* ips
    ) {
    post_website_buy_ip_request_t *post_website_buy_ip_request_local_var = malloc(sizeof(post_website_buy_ip_request_t));
    if (!post_website_buy_ip_request_local_var) {
        return NULL;
    }
    post_website_buy_ip_request_local_var->ips = ips;

    post_website_buy_ip_request_local_var->_library_owned = 1;
    return post_website_buy_ip_request_local_var;
}

__attribute__((deprecated)) post_website_buy_ip_request_t *post_website_buy_ip_request_create(
    list_t* ips
    ) {
    return post_website_buy_ip_request_create_internal (
        ips
        );
}

void post_website_buy_ip_request_free(post_website_buy_ip_request_t *post_website_buy_ip_request) {
    if(NULL == post_website_buy_ip_request){
        return ;
    }
    if(post_website_buy_ip_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "post_website_buy_ip_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (post_website_buy_ip_request->ips) {
        list_ForEach(listEntry, post_website_buy_ip_request->ips) {
            keyValuePair_t *localKeyValue = listEntry->data;
            free (localKeyValue->key);
            free (localKeyValue->value);
            keyValuePair_free(localKeyValue);
        }
        list_freeList(post_website_buy_ip_request->ips);
        post_website_buy_ip_request->ips = NULL;
    }
    free(post_website_buy_ip_request);
}

cJSON *post_website_buy_ip_request_convertToJSON(post_website_buy_ip_request_t *post_website_buy_ip_request) {
    cJSON *item = cJSON_CreateObject();

    // post_website_buy_ip_request->ips
    if(post_website_buy_ip_request->ips) {
    cJSON *ips = cJSON_AddObjectToObject(item, "ips");
    if(ips == NULL) {
        goto fail; //primitive map container
    }
    cJSON *localMapObject = ips;
    listEntry_t *ipsListEntry;
    if (post_website_buy_ip_request->ips) {
    list_ForEach(ipsListEntry, post_website_buy_ip_request->ips) {
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

post_website_buy_ip_request_t *post_website_buy_ip_request_parseFromJSON(cJSON *post_website_buy_ip_requestJSON){

    post_website_buy_ip_request_t *post_website_buy_ip_request_local_var = NULL;

    // define the local map for post_website_buy_ip_request->ips
    list_t *ipsList = NULL;

    // post_website_buy_ip_request->ips
    cJSON *ips = cJSON_GetObjectItemCaseSensitive(post_website_buy_ip_requestJSON, "ips");
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


    post_website_buy_ip_request_local_var = post_website_buy_ip_request_create_internal (
        ips ? ipsList : NULL
        );

    return post_website_buy_ip_request_local_var;
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
