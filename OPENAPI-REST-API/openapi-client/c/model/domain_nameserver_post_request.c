#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_nameserver_post_request.h"



static domain_nameserver_post_request_t *domain_nameserver_post_request_create_internal(
    char *name,
    char *ip_address
    ) {
    domain_nameserver_post_request_t *domain_nameserver_post_request_local_var = malloc(sizeof(domain_nameserver_post_request_t));
    if (!domain_nameserver_post_request_local_var) {
        return NULL;
    }
    memset(domain_nameserver_post_request_local_var, 0, sizeof(domain_nameserver_post_request_t));
    domain_nameserver_post_request_local_var->_library_owned = 1;
    domain_nameserver_post_request_local_var->name = name;
    domain_nameserver_post_request_local_var->ip_address = ip_address;
    return domain_nameserver_post_request_local_var;
}

__attribute__((deprecated)) domain_nameserver_post_request_t *domain_nameserver_post_request_create(
    char *name,
    char *ip_address
    ) {
    domain_nameserver_post_request_t *result = domain_nameserver_post_request_create_internal (
        name,
        ip_address
        );
    if (!result) {
    }
    return result;
}

void domain_nameserver_post_request_free(domain_nameserver_post_request_t *domain_nameserver_post_request) {
    if(NULL == domain_nameserver_post_request){
        return ;
    }
    if(domain_nameserver_post_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_nameserver_post_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (domain_nameserver_post_request->name) {
        free(domain_nameserver_post_request->name);
        domain_nameserver_post_request->name = NULL;
    }
    if (domain_nameserver_post_request->ip_address) {
        free(domain_nameserver_post_request->ip_address);
        domain_nameserver_post_request->ip_address = NULL;
    }
    free(domain_nameserver_post_request);
}

cJSON *domain_nameserver_post_request_convertToJSON(domain_nameserver_post_request_t *domain_nameserver_post_request) {
    cJSON *item = cJSON_CreateObject();

    // domain_nameserver_post_request->name
    if (!domain_nameserver_post_request->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", domain_nameserver_post_request->name) == NULL) {
    goto fail; //String
    }


    // domain_nameserver_post_request->ip_address
    if (!domain_nameserver_post_request->ip_address) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "ipAddress", domain_nameserver_post_request->ip_address) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

domain_nameserver_post_request_t *domain_nameserver_post_request_parseFromJSON(cJSON *domain_nameserver_post_requestJSON){

    domain_nameserver_post_request_t *domain_nameserver_post_request_local_var = NULL;

    char *name_local_str = NULL;

    char *ip_address_local_str = NULL;

    // domain_nameserver_post_request->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(domain_nameserver_post_requestJSON, "name");
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

    // domain_nameserver_post_request->ip_address
    cJSON *ip_address = cJSON_GetObjectItemCaseSensitive(domain_nameserver_post_requestJSON, "ipAddress");
    if (cJSON_IsNull(ip_address)) {
        ip_address = NULL;
    }
    if (!ip_address) {
        goto end;
    }

    
    if(!cJSON_IsString(ip_address))
    {
    goto end; //String
    }


    if (name && !cJSON_IsNull(name)) name_local_str = strdup(name->valuestring);
    if (ip_address && !cJSON_IsNull(ip_address)) ip_address_local_str = strdup(ip_address->valuestring);

    domain_nameserver_post_request_local_var = domain_nameserver_post_request_create_internal (
        name_local_str,
        ip_address_local_str
        );

    if (!domain_nameserver_post_request_local_var) {
        goto end;
    }

    return domain_nameserver_post_request_local_var;
end:
    if (name_local_str) {
        free(name_local_str);
        name_local_str = NULL;
    }
    if (ip_address_local_str) {
        free(ip_address_local_str);
        ip_address_local_str = NULL;
    }
    return NULL;

}
