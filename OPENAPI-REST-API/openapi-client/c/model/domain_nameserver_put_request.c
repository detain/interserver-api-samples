#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_nameserver_put_request.h"



static domain_nameserver_put_request_t *domain_nameserver_put_request_create_internal(
    list_t *nameserver
    ) {
    domain_nameserver_put_request_t *domain_nameserver_put_request_local_var = malloc(sizeof(domain_nameserver_put_request_t));
    if (!domain_nameserver_put_request_local_var) {
        return NULL;
    }
    memset(domain_nameserver_put_request_local_var, 0, sizeof(domain_nameserver_put_request_t));
    domain_nameserver_put_request_local_var->_library_owned = 1;
    domain_nameserver_put_request_local_var->nameserver = nameserver;
    return domain_nameserver_put_request_local_var;
}

__attribute__((deprecated)) domain_nameserver_put_request_t *domain_nameserver_put_request_create(
    list_t *nameserver
    ) {
    domain_nameserver_put_request_t *result = domain_nameserver_put_request_create_internal (
        nameserver
        );
    if (!result) {
    }
    return result;
}

void domain_nameserver_put_request_free(domain_nameserver_put_request_t *domain_nameserver_put_request) {
    if(NULL == domain_nameserver_put_request){
        return ;
    }
    if(domain_nameserver_put_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_nameserver_put_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (domain_nameserver_put_request->nameserver) {
        list_ForEach(listEntry, domain_nameserver_put_request->nameserver) {
            free(listEntry->data);
        }
        list_freeList(domain_nameserver_put_request->nameserver);
        domain_nameserver_put_request->nameserver = NULL;
    }
    free(domain_nameserver_put_request);
}

cJSON *domain_nameserver_put_request_convertToJSON(domain_nameserver_put_request_t *domain_nameserver_put_request) {
    cJSON *item = cJSON_CreateObject();

    // domain_nameserver_put_request->nameserver
    if (!domain_nameserver_put_request->nameserver) {
        goto fail;
    }
    cJSON *nameserver = cJSON_AddArrayToObject(item, "nameserver");
    if(nameserver == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *nameserverListEntry;
    list_ForEach(nameserverListEntry, domain_nameserver_put_request->nameserver) {
    if(cJSON_AddStringToObject(nameserver, "", nameserverListEntry->data) == NULL)
    {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

domain_nameserver_put_request_t *domain_nameserver_put_request_parseFromJSON(cJSON *domain_nameserver_put_requestJSON){

    domain_nameserver_put_request_t *domain_nameserver_put_request_local_var = NULL;

    // define the local list for domain_nameserver_put_request->nameserver
    list_t *nameserverList = NULL;

    // domain_nameserver_put_request->nameserver
    cJSON *nameserver = cJSON_GetObjectItemCaseSensitive(domain_nameserver_put_requestJSON, "nameserver");
    if (cJSON_IsNull(nameserver)) {
        nameserver = NULL;
    }
    if (!nameserver) {
        goto end;
    }

    
    cJSON *nameserver_local = NULL;
    if(!cJSON_IsArray(nameserver)) {
        goto end;//primitive container
    }
    nameserverList = list_createList();

    cJSON_ArrayForEach(nameserver_local, nameserver)
    {
        if(!cJSON_IsString(nameserver_local))
        {
            goto end;
        }
        list_addElement(nameserverList , strdup(nameserver_local->valuestring));
    }



    domain_nameserver_put_request_local_var = domain_nameserver_put_request_create_internal (
        nameserverList
        );

    if (!domain_nameserver_put_request_local_var) {
        goto end;
    }

    return domain_nameserver_put_request_local_var;
end:
    if (nameserverList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, nameserverList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(nameserverList);
        nameserverList = NULL;
    }
    return NULL;

}
