#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "login_service_counts.h"



static login_service_counts_t *login_service_counts_create_internal(
    int vps,
    int websites,
    int servers
    ) {
    login_service_counts_t *login_service_counts_local_var = malloc(sizeof(login_service_counts_t));
    if (!login_service_counts_local_var) {
        return NULL;
    }
    login_service_counts_local_var->vps = vps;
    login_service_counts_local_var->websites = websites;
    login_service_counts_local_var->servers = servers;

    login_service_counts_local_var->_library_owned = 1;
    return login_service_counts_local_var;
}

__attribute__((deprecated)) login_service_counts_t *login_service_counts_create(
    int vps,
    int websites,
    int servers
    ) {
    return login_service_counts_create_internal (
        vps,
        websites,
        servers
        );
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
    free(login_service_counts);
}

cJSON *login_service_counts_convertToJSON(login_service_counts_t *login_service_counts) {
    cJSON *item = cJSON_CreateObject();

    // login_service_counts->vps
    if (!login_service_counts->vps) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "vps", login_service_counts->vps) == NULL) {
    goto fail; //Numeric
    }


    // login_service_counts->websites
    if (!login_service_counts->websites) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "websites", login_service_counts->websites) == NULL) {
    goto fail; //Numeric
    }


    // login_service_counts->servers
    if (!login_service_counts->servers) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "servers", login_service_counts->servers) == NULL) {
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


    login_service_counts_local_var = login_service_counts_create_internal (
        vps->valuedouble,
        websites->valuedouble,
        servers->valuedouble
        );

    return login_service_counts_local_var;
end:
    return NULL;

}
