#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "login_service_counts.h"



static login_service_counts_t *login_service_counts_create_internal(
    int *vps,
    int *websites,
    int *servers
    ) {
    login_service_counts_t *login_service_counts_local_var = malloc(sizeof(login_service_counts_t));
    if (!login_service_counts_local_var) {
        return NULL;
    }
    memset(login_service_counts_local_var, 0, sizeof(login_service_counts_t));
    login_service_counts_local_var->_library_owned = 1;
    login_service_counts_local_var->vps = vps;
    login_service_counts_local_var->websites = websites;
    login_service_counts_local_var->servers = servers;
    return login_service_counts_local_var;
}

__attribute__((deprecated)) login_service_counts_t *login_service_counts_create(
    int *vps,
    int *websites,
    int *servers
    ) {
    int *vps_copy = NULL;
    if (vps) {
        vps_copy = malloc(sizeof(int));
        if (vps_copy) *vps_copy = *vps;
    }
    int *websites_copy = NULL;
    if (websites) {
        websites_copy = malloc(sizeof(int));
        if (websites_copy) *websites_copy = *websites;
    }
    int *servers_copy = NULL;
    if (servers) {
        servers_copy = malloc(sizeof(int));
        if (servers_copy) *servers_copy = *servers;
    }
    login_service_counts_t *result = login_service_counts_create_internal (
        vps_copy,
        websites_copy,
        servers_copy
        );
    if (!result) {
        free(vps_copy);
        free(websites_copy);
        free(servers_copy);
    }
    return result;
}

void login_service_counts_free(login_service_counts_t *login_service_counts) {
    if(NULL == login_service_counts){
        return ;
    }
    if(login_service_counts->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "login_service_counts_free");
        return ;
    }
    listEntry_t *listEntry;
    if (login_service_counts->vps) {
        free(login_service_counts->vps);
        login_service_counts->vps = NULL;
    }
    if (login_service_counts->websites) {
        free(login_service_counts->websites);
        login_service_counts->websites = NULL;
    }
    if (login_service_counts->servers) {
        free(login_service_counts->servers);
        login_service_counts->servers = NULL;
    }
    free(login_service_counts);
}

cJSON *login_service_counts_convertToJSON(login_service_counts_t *login_service_counts) {
    cJSON *item = cJSON_CreateObject();

    // login_service_counts->vps
    if (!login_service_counts->vps) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "vps", *login_service_counts->vps) == NULL) {
    goto fail; //Numeric
    }


    // login_service_counts->websites
    if (!login_service_counts->websites) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "websites", *login_service_counts->websites) == NULL) {
    goto fail; //Numeric
    }


    // login_service_counts->servers
    if (!login_service_counts->servers) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "servers", *login_service_counts->servers) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

login_service_counts_t *login_service_counts_parseFromJSON(cJSON *login_service_countsJSON){

    login_service_counts_t *login_service_counts_local_var = NULL;

    // define the local variable for login_service_counts->vps
    int *vps_local_var = NULL;

    // define the local variable for login_service_counts->websites
    int *websites_local_var = NULL;

    // define the local variable for login_service_counts->servers
    int *servers_local_var = NULL;

    // login_service_counts->vps
    cJSON *vps = cJSON_GetObjectItemCaseSensitive(login_service_countsJSON, "vps");
    if (cJSON_IsNull(vps)) {
        vps = NULL;
    }
    if (!vps) {
        goto end;
    }

    
    if(!cJSON_IsNumber(vps))
    {
    goto end; //Numeric
    }
    vps_local_var = malloc(sizeof(int));
    if(!vps_local_var)
    {
        goto end;
    }
    *vps_local_var = vps->valuedouble;

    // login_service_counts->websites
    cJSON *websites = cJSON_GetObjectItemCaseSensitive(login_service_countsJSON, "websites");
    if (cJSON_IsNull(websites)) {
        websites = NULL;
    }
    if (!websites) {
        goto end;
    }

    
    if(!cJSON_IsNumber(websites))
    {
    goto end; //Numeric
    }
    websites_local_var = malloc(sizeof(int));
    if(!websites_local_var)
    {
        goto end;
    }
    *websites_local_var = websites->valuedouble;

    // login_service_counts->servers
    cJSON *servers = cJSON_GetObjectItemCaseSensitive(login_service_countsJSON, "servers");
    if (cJSON_IsNull(servers)) {
        servers = NULL;
    }
    if (!servers) {
        goto end;
    }

    
    if(!cJSON_IsNumber(servers))
    {
    goto end; //Numeric
    }
    servers_local_var = malloc(sizeof(int));
    if(!servers_local_var)
    {
        goto end;
    }
    *servers_local_var = servers->valuedouble;



    login_service_counts_local_var = login_service_counts_create_internal (
        vps_local_var,
        websites_local_var,
        servers_local_var
        );

    if (!login_service_counts_local_var) {
        goto end;
    }

    return login_service_counts_local_var;
end:
    if (vps_local_var) {
        free(vps_local_var);
        vps_local_var = NULL;
    }
    if (websites_local_var) {
        free(websites_local_var);
        websites_local_var = NULL;
    }
    if (servers_local_var) {
        free(servers_local_var);
        servers_local_var = NULL;
    }
    return NULL;

}
