#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_search_response.h"



static domain_search_response_t *domain_search_response_create_internal(
    int success,
    char *response_text,
    char *response_time,
    list_t *lookup,
    list_t *suggest,
    list_t *tlds
    ) {
    domain_search_response_t *domain_search_response_local_var = malloc(sizeof(domain_search_response_t));
    if (!domain_search_response_local_var) {
        return NULL;
    }
    domain_search_response_local_var->success = success;
    domain_search_response_local_var->response_text = response_text;
    domain_search_response_local_var->response_time = response_time;
    domain_search_response_local_var->lookup = lookup;
    domain_search_response_local_var->suggest = suggest;
    domain_search_response_local_var->tlds = tlds;

    domain_search_response_local_var->_library_owned = 1;
    return domain_search_response_local_var;
}

__attribute__((deprecated)) domain_search_response_t *domain_search_response_create(
    int success,
    char *response_text,
    char *response_time,
    list_t *lookup,
    list_t *suggest,
    list_t *tlds
    ) {
    return domain_search_response_create_internal (
        success,
        response_text,
        response_time,
        lookup,
        suggest,
        tlds
        );
}

void domain_search_response_free(domain_search_response_t *domain_search_response) {
    if(NULL == domain_search_response){
        return ;
    }
    if(domain_search_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_search_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (domain_search_response->response_text) {
        free(domain_search_response->response_text);
        domain_search_response->response_text = NULL;
    }
    if (domain_search_response->response_time) {
        free(domain_search_response->response_time);
        domain_search_response->response_time = NULL;
    }
    if (domain_search_response->lookup) {
        list_ForEach(listEntry, domain_search_response->lookup) {
            object_free(listEntry->data);
        }
        list_freeList(domain_search_response->lookup);
        domain_search_response->lookup = NULL;
    }
    if (domain_search_response->suggest) {
        list_ForEach(listEntry, domain_search_response->suggest) {
            object_free(listEntry->data);
        }
        list_freeList(domain_search_response->suggest);
        domain_search_response->suggest = NULL;
    }
    if (domain_search_response->tlds) {
        list_ForEach(listEntry, domain_search_response->tlds) {
            free(listEntry->data);
        }
        list_freeList(domain_search_response->tlds);
        domain_search_response->tlds = NULL;
    }
    free(domain_search_response);
}

cJSON *domain_search_response_convertToJSON(domain_search_response_t *domain_search_response) {
    cJSON *item = cJSON_CreateObject();

    // domain_search_response->success
    if(domain_search_response->success) {
    if(cJSON_AddBoolToObject(item, "success", domain_search_response->success) == NULL) {
    goto fail; //Bool
    }
    }


    // domain_search_response->response_text
    if(domain_search_response->response_text) {
    if(cJSON_AddStringToObject(item, "response_text", domain_search_response->response_text) == NULL) {
    goto fail; //String
    }
    }


    // domain_search_response->response_time
    if(domain_search_response->response_time) {
    if(cJSON_AddStringToObject(item, "response_time", domain_search_response->response_time) == NULL) {
    goto fail; //String
    }
    }


    // domain_search_response->lookup
    if(domain_search_response->lookup) {
    cJSON *lookup = cJSON_AddArrayToObject(item, "lookup");
    if(lookup == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *lookupListEntry;
    if (domain_search_response->lookup) {
    list_ForEach(lookupListEntry, domain_search_response->lookup) {
    cJSON *itemLocal = object_convertToJSON(lookupListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(lookup, itemLocal);
    }
    }
    }


    // domain_search_response->suggest
    if(domain_search_response->suggest) {
    cJSON *suggest = cJSON_AddArrayToObject(item, "suggest");
    if(suggest == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *suggestListEntry;
    if (domain_search_response->suggest) {
    list_ForEach(suggestListEntry, domain_search_response->suggest) {
    cJSON *itemLocal = object_convertToJSON(suggestListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(suggest, itemLocal);
    }
    }
    }


    // domain_search_response->tlds
    if(domain_search_response->tlds) {
    cJSON *tlds = cJSON_AddArrayToObject(item, "tlds");
    if(tlds == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *tldsListEntry;
    list_ForEach(tldsListEntry, domain_search_response->tlds) {
    if(cJSON_AddStringToObject(tlds, "", tldsListEntry->data) == NULL)
    {
        goto fail;
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

domain_search_response_t *domain_search_response_parseFromJSON(cJSON *domain_search_responseJSON){

    domain_search_response_t *domain_search_response_local_var = NULL;

    // define the local list for domain_search_response->lookup
    list_t *lookupList = NULL;

    // define the local list for domain_search_response->suggest
    list_t *suggestList = NULL;

    // define the local list for domain_search_response->tlds
    list_t *tldsList = NULL;

    // domain_search_response->success
    cJSON *success = cJSON_GetObjectItemCaseSensitive(domain_search_responseJSON, "success");
    if (cJSON_IsNull(success)) {
        success = NULL;
    }
    if (success) { 
    if(!cJSON_IsBool(success))
    {
    goto end; //Bool
    }
    }

    // domain_search_response->response_text
    cJSON *response_text = cJSON_GetObjectItemCaseSensitive(domain_search_responseJSON, "response_text");
    if (cJSON_IsNull(response_text)) {
        response_text = NULL;
    }
    if (response_text) { 
    if(!cJSON_IsString(response_text) && !cJSON_IsNull(response_text))
    {
    goto end; //String
    }
    }

    // domain_search_response->response_time
    cJSON *response_time = cJSON_GetObjectItemCaseSensitive(domain_search_responseJSON, "response_time");
    if (cJSON_IsNull(response_time)) {
        response_time = NULL;
    }
    if (response_time) { 
    if(!cJSON_IsString(response_time) && !cJSON_IsNull(response_time))
    {
    goto end; //String
    }
    }

    // domain_search_response->lookup
    cJSON *lookup = cJSON_GetObjectItemCaseSensitive(domain_search_responseJSON, "lookup");
    if (cJSON_IsNull(lookup)) {
        lookup = NULL;
    }
    if (lookup) { 
    cJSON *lookup_local_nonprimitive = NULL;
    if(!cJSON_IsArray(lookup)){
        goto end; //nonprimitive container
    }

    lookupList = list_createList();

    cJSON_ArrayForEach(lookup_local_nonprimitive,lookup )
    {
        if(!cJSON_IsObject(lookup_local_nonprimitive)){
            goto end;
        }
        object_t *lookupItem = object_parseFromJSON(lookup_local_nonprimitive);

        list_addElement(lookupList, lookupItem);
    }
    }

    // domain_search_response->suggest
    cJSON *suggest = cJSON_GetObjectItemCaseSensitive(domain_search_responseJSON, "suggest");
    if (cJSON_IsNull(suggest)) {
        suggest = NULL;
    }
    if (suggest) { 
    cJSON *suggest_local_nonprimitive = NULL;
    if(!cJSON_IsArray(suggest)){
        goto end; //nonprimitive container
    }

    suggestList = list_createList();

    cJSON_ArrayForEach(suggest_local_nonprimitive,suggest )
    {
        if(!cJSON_IsObject(suggest_local_nonprimitive)){
            goto end;
        }
        object_t *suggestItem = object_parseFromJSON(suggest_local_nonprimitive);

        list_addElement(suggestList, suggestItem);
    }
    }

    // domain_search_response->tlds
    cJSON *tlds = cJSON_GetObjectItemCaseSensitive(domain_search_responseJSON, "tlds");
    if (cJSON_IsNull(tlds)) {
        tlds = NULL;
    }
    if (tlds) { 
    cJSON *tlds_local = NULL;
    if(!cJSON_IsArray(tlds)) {
        goto end;//primitive container
    }
    tldsList = list_createList();

    cJSON_ArrayForEach(tlds_local, tlds)
    {
        if(!cJSON_IsString(tlds_local))
        {
            goto end;
        }
        list_addElement(tldsList , strdup(tlds_local->valuestring));
    }
    }


    domain_search_response_local_var = domain_search_response_create_internal (
        success ? success->valueint : 0,
        response_text && !cJSON_IsNull(response_text) ? strdup(response_text->valuestring) : NULL,
        response_time && !cJSON_IsNull(response_time) ? strdup(response_time->valuestring) : NULL,
        lookup ? lookupList : NULL,
        suggest ? suggestList : NULL,
        tlds ? tldsList : NULL
        );

    return domain_search_response_local_var;
end:
    if (lookupList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, lookupList) {
            object_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(lookupList);
        lookupList = NULL;
    }
    if (suggestList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, suggestList) {
            object_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(suggestList);
        suggestList = NULL;
    }
    if (tldsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, tldsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(tldsList);
        tldsList = NULL;
    }
    return NULL;

}
