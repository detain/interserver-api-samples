#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "server_lease.h"



static server_lease_t *server_lease_create_internal(
    char *mac,
    int *authenticated,
    char *group
    ) {
    server_lease_t *server_lease_local_var = malloc(sizeof(server_lease_t));
    if (!server_lease_local_var) {
        return NULL;
    }
    memset(server_lease_local_var, 0, sizeof(server_lease_t));
    server_lease_local_var->_library_owned = 1;
    server_lease_local_var->mac = mac;
    server_lease_local_var->authenticated = authenticated;
    server_lease_local_var->group = group;
    return server_lease_local_var;
}

__attribute__((deprecated)) server_lease_t *server_lease_create(
    char *mac,
    int *authenticated,
    char *group
    ) {
    int *authenticated_copy = NULL;
    if (authenticated) {
        authenticated_copy = malloc(sizeof(int));
        if (authenticated_copy) *authenticated_copy = *authenticated;
    }
    server_lease_t *result = server_lease_create_internal (
        mac,
        authenticated_copy,
        group
        );
    if (!result) {
        free(authenticated_copy);
    }
    return result;
}

void server_lease_free(server_lease_t *server_lease) {
    if(NULL == server_lease){
        return ;
    }
    if(server_lease->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "server_lease_free");
        return ;
    }
    listEntry_t *listEntry;
    if (server_lease->mac) {
        free(server_lease->mac);
        server_lease->mac = NULL;
    }
    if (server_lease->authenticated) {
        free(server_lease->authenticated);
        server_lease->authenticated = NULL;
    }
    if (server_lease->group) {
        free(server_lease->group);
        server_lease->group = NULL;
    }
    free(server_lease);
}

cJSON *server_lease_convertToJSON(server_lease_t *server_lease) {
    cJSON *item = cJSON_CreateObject();

    // server_lease->mac
    if (!server_lease->mac) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "mac", server_lease->mac) == NULL) {
    goto fail; //String
    }


    // server_lease->authenticated
    if (!server_lease->authenticated) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "authenticated", *server_lease->authenticated) == NULL) {
    goto fail; //Bool
    }


    // server_lease->group
    if (!server_lease->group) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "group", server_lease->group) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

server_lease_t *server_lease_parseFromJSON(cJSON *server_leaseJSON){

    server_lease_t *server_lease_local_var = NULL;

    char *mac_local_str = NULL;

    // define the local variable for server_lease->authenticated
    int *authenticated_local_var = NULL;

    char *group_local_str = NULL;

    // server_lease->mac
    cJSON *mac = cJSON_GetObjectItemCaseSensitive(server_leaseJSON, "mac");
    if (cJSON_IsNull(mac)) {
        mac = NULL;
    }
    if (!mac) {
        goto end;
    }

    
    if(!cJSON_IsString(mac))
    {
    goto end; //String
    }

    // server_lease->authenticated
    cJSON *authenticated = cJSON_GetObjectItemCaseSensitive(server_leaseJSON, "authenticated");
    if (cJSON_IsNull(authenticated)) {
        authenticated = NULL;
    }
    if (!authenticated) {
        goto end;
    }

    
    if(!cJSON_IsBool(authenticated))
    {
    goto end; //Bool
    }
    authenticated_local_var = malloc(sizeof(int));
    if(!authenticated_local_var)
    {
        goto end;
    }
    *authenticated_local_var = authenticated->valueint;

    // server_lease->group
    cJSON *group = cJSON_GetObjectItemCaseSensitive(server_leaseJSON, "group");
    if (cJSON_IsNull(group)) {
        group = NULL;
    }
    if (!group) {
        goto end;
    }

    
    if(!cJSON_IsString(group))
    {
    goto end; //String
    }


    if (mac && !cJSON_IsNull(mac)) mac_local_str = strdup(mac->valuestring);
    if (group && !cJSON_IsNull(group)) group_local_str = strdup(group->valuestring);

    server_lease_local_var = server_lease_create_internal (
        mac_local_str,
        authenticated_local_var,
        group_local_str
        );

    if (!server_lease_local_var) {
        goto end;
    }

    return server_lease_local_var;
end:
    if (mac_local_str) {
        free(mac_local_str);
        mac_local_str = NULL;
    }
    if (authenticated_local_var) {
        free(authenticated_local_var);
        authenticated_local_var = NULL;
    }
    if (group_local_str) {
        free(group_local_str);
        group_local_str = NULL;
    }
    return NULL;

}
