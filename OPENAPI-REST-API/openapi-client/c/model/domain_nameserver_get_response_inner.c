#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_nameserver_get_response_inner.h"


char* domain_nameserver_get_response_inner_can_delete_ToString(interserver_management_api_domain_nameserver_get_response_inner_CANDELETE_e can_delete) {
    char* can_deleteArray[] =  { "NULL", "0", "1" };
    return can_deleteArray[can_delete];
}

interserver_management_api_domain_nameserver_get_response_inner_CANDELETE_e domain_nameserver_get_response_inner_can_delete_FromString(char* can_delete){
    int stringToReturn = 0;
    char *can_deleteArray[] =  { "NULL", "0", "1" };
    size_t sizeofArray = sizeof(can_deleteArray) / sizeof(can_deleteArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(can_delete, can_deleteArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static domain_nameserver_get_response_inner_t *domain_nameserver_get_response_inner_create_internal(
    char *name,
    char *ipaddress,
    interserver_management_api_domain_nameserver_get_response_inner_CANDELETE_e can_delete
    ) {
    domain_nameserver_get_response_inner_t *domain_nameserver_get_response_inner_local_var = malloc(sizeof(domain_nameserver_get_response_inner_t));
    if (!domain_nameserver_get_response_inner_local_var) {
        return NULL;
    }
    memset(domain_nameserver_get_response_inner_local_var, 0, sizeof(domain_nameserver_get_response_inner_t));
    domain_nameserver_get_response_inner_local_var->_library_owned = 1;
    domain_nameserver_get_response_inner_local_var->name = name;
    domain_nameserver_get_response_inner_local_var->ipaddress = ipaddress;
    domain_nameserver_get_response_inner_local_var->can_delete = can_delete;
    return domain_nameserver_get_response_inner_local_var;
}

__attribute__((deprecated)) domain_nameserver_get_response_inner_t *domain_nameserver_get_response_inner_create(
    char *name,
    char *ipaddress,
    interserver_management_api_domain_nameserver_get_response_inner_CANDELETE_e can_delete
    ) {
    domain_nameserver_get_response_inner_t *result = domain_nameserver_get_response_inner_create_internal (
        name,
        ipaddress,
        can_delete
        );
    if (!result) {
    }
    return result;
}

void domain_nameserver_get_response_inner_free(domain_nameserver_get_response_inner_t *domain_nameserver_get_response_inner) {
    if(NULL == domain_nameserver_get_response_inner){
        return ;
    }
    if(domain_nameserver_get_response_inner->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_nameserver_get_response_inner_free");
        return ;
    }
    listEntry_t *listEntry;
    if (domain_nameserver_get_response_inner->name) {
        free(domain_nameserver_get_response_inner->name);
        domain_nameserver_get_response_inner->name = NULL;
    }
    if (domain_nameserver_get_response_inner->ipaddress) {
        free(domain_nameserver_get_response_inner->ipaddress);
        domain_nameserver_get_response_inner->ipaddress = NULL;
    }
    free(domain_nameserver_get_response_inner);
}

cJSON *domain_nameserver_get_response_inner_convertToJSON(domain_nameserver_get_response_inner_t *domain_nameserver_get_response_inner) {
    cJSON *item = cJSON_CreateObject();

    // domain_nameserver_get_response_inner->name
    if (!domain_nameserver_get_response_inner->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", domain_nameserver_get_response_inner->name) == NULL) {
    goto fail; //String
    }


    // domain_nameserver_get_response_inner->ipaddress
    if (!domain_nameserver_get_response_inner->ipaddress) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "ipaddress", domain_nameserver_get_response_inner->ipaddress) == NULL) {
    goto fail; //String
    }


    // domain_nameserver_get_response_inner->can_delete
    if (interserver_management_api_domain_nameserver_get_response_inner_CANDELETE_NULL == domain_nameserver_get_response_inner->can_delete) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "can_delete", domain_nameserver_get_response_inner_can_delete_ToString(domain_nameserver_get_response_inner->can_delete)) == NULL)
    {
    goto fail; //Enum
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

domain_nameserver_get_response_inner_t *domain_nameserver_get_response_inner_parseFromJSON(cJSON *domain_nameserver_get_response_innerJSON){

    domain_nameserver_get_response_inner_t *domain_nameserver_get_response_inner_local_var = NULL;

    char *name_local_str = NULL;

    char *ipaddress_local_str = NULL;

    // domain_nameserver_get_response_inner->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(domain_nameserver_get_response_innerJSON, "name");
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

    // domain_nameserver_get_response_inner->ipaddress
    cJSON *ipaddress = cJSON_GetObjectItemCaseSensitive(domain_nameserver_get_response_innerJSON, "ipaddress");
    if (cJSON_IsNull(ipaddress)) {
        ipaddress = NULL;
    }
    if (!ipaddress) {
        goto end;
    }

    
    if(!cJSON_IsString(ipaddress))
    {
    goto end; //String
    }

    // domain_nameserver_get_response_inner->can_delete
    cJSON *can_delete = cJSON_GetObjectItemCaseSensitive(domain_nameserver_get_response_innerJSON, "can_delete");
    if (cJSON_IsNull(can_delete)) {
        can_delete = NULL;
    }
    if (!can_delete) {
        goto end;
    }

    interserver_management_api_domain_nameserver_get_response_inner_CANDELETE_e can_deleteVariable;
    
    if(!cJSON_IsString(can_delete))
    {
    goto end; //Enum
    }
    can_deleteVariable = domain_nameserver_get_response_inner_can_delete_FromString(can_delete->valuestring);


    if (name && !cJSON_IsNull(name)) name_local_str = strdup(name->valuestring);
    if (ipaddress && !cJSON_IsNull(ipaddress)) ipaddress_local_str = strdup(ipaddress->valuestring);

    domain_nameserver_get_response_inner_local_var = domain_nameserver_get_response_inner_create_internal (
        name_local_str,
        ipaddress_local_str,
        can_deleteVariable
        );

    if (!domain_nameserver_get_response_inner_local_var) {
        goto end;
    }

    return domain_nameserver_get_response_inner_local_var;
end:
    if (name_local_str) {
        free(name_local_str);
        name_local_str = NULL;
    }
    if (ipaddress_local_str) {
        free(ipaddress_local_str);
        ipaddress_local_str = NULL;
    }
    return NULL;

}
