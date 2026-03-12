#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "domain_name_server.h"



static domain_name_server_t *domain_name_server_create_internal(
    char *sortorder,
    char *name,
    char *ipaddress
    ) {
    domain_name_server_t *domain_name_server_local_var = malloc(sizeof(domain_name_server_t));
    if (!domain_name_server_local_var) {
        return NULL;
    }
    domain_name_server_local_var->sortorder = sortorder;
    domain_name_server_local_var->name = name;
    domain_name_server_local_var->ipaddress = ipaddress;

    domain_name_server_local_var->_library_owned = 1;
    return domain_name_server_local_var;
}

__attribute__((deprecated)) domain_name_server_t *domain_name_server_create(
    char *sortorder,
    char *name,
    char *ipaddress
    ) {
    return domain_name_server_create_internal (
        sortorder,
        name,
        ipaddress
        );
}

void domain_name_server_free(domain_name_server_t *domain_name_server) {
    if(NULL == domain_name_server){
        return ;
    }
    if(domain_name_server->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "domain_name_server_free");
        return ;
    }
    listEntry_t *listEntry;
    if (domain_name_server->sortorder) {
        free(domain_name_server->sortorder);
        domain_name_server->sortorder = NULL;
    }
    if (domain_name_server->name) {
        free(domain_name_server->name);
        domain_name_server->name = NULL;
    }
    if (domain_name_server->ipaddress) {
        free(domain_name_server->ipaddress);
        domain_name_server->ipaddress = NULL;
    }
    free(domain_name_server);
}

cJSON *domain_name_server_convertToJSON(domain_name_server_t *domain_name_server) {
    cJSON *item = cJSON_CreateObject();

    // domain_name_server->sortorder
    if(domain_name_server->sortorder) {
    if(cJSON_AddStringToObject(item, "sortorder", domain_name_server->sortorder) == NULL) {
    goto fail; //String
    }
    }


    // domain_name_server->name
    if(domain_name_server->name) {
    if(cJSON_AddStringToObject(item, "name", domain_name_server->name) == NULL) {
    goto fail; //String
    }
    }


    // domain_name_server->ipaddress
    if(domain_name_server->ipaddress) {
    if(cJSON_AddStringToObject(item, "ipaddress", domain_name_server->ipaddress) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

domain_name_server_t *domain_name_server_parseFromJSON(cJSON *domain_name_serverJSON){

    domain_name_server_t *domain_name_server_local_var = NULL;

    // domain_name_server->sortorder
    cJSON *sortorder = cJSON_GetObjectItemCaseSensitive(domain_name_serverJSON, "sortorder");
    if (cJSON_IsNull(sortorder)) {
        sortorder = NULL;
    }
    if (sortorder) { 
    if(!cJSON_IsString(sortorder) && !cJSON_IsNull(sortorder))
    {
    goto end; //String
    }
    }

    // domain_name_server->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(domain_name_serverJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // domain_name_server->ipaddress
    cJSON *ipaddress = cJSON_GetObjectItemCaseSensitive(domain_name_serverJSON, "ipaddress");
    if (cJSON_IsNull(ipaddress)) {
        ipaddress = NULL;
    }
    if (ipaddress) { 
    if(!cJSON_IsString(ipaddress) && !cJSON_IsNull(ipaddress))
    {
    goto end; //String
    }
    }


    domain_name_server_local_var = domain_name_server_create_internal (
        sortorder && !cJSON_IsNull(sortorder) ? strdup(sortorder->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        ipaddress && !cJSON_IsNull(ipaddress) ? strdup(ipaddress->valuestring) : NULL
        );

    return domain_name_server_local_var;
end:
    return NULL;

}
