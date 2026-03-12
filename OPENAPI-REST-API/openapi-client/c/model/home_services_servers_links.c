#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "home_services_servers_links.h"



static home_services_servers_links_t *home_services_servers_links_create_internal(
    char *_16058
    ) {
    home_services_servers_links_t *home_services_servers_links_local_var = malloc(sizeof(home_services_servers_links_t));
    if (!home_services_servers_links_local_var) {
        return NULL;
    }
    home_services_servers_links_local_var->_16058 = _16058;

    home_services_servers_links_local_var->_library_owned = 1;
    return home_services_servers_links_local_var;
}

__attribute__((deprecated)) home_services_servers_links_t *home_services_servers_links_create(
    char *_16058
    ) {
    return home_services_servers_links_create_internal (
        _16058
        );
}

void home_services_servers_links_free(home_services_servers_links_t *home_services_servers_links) {
    if(NULL == home_services_servers_links){
        return ;
    }
    if(home_services_servers_links->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "home_services_servers_links_free");
        return ;
    }
    listEntry_t *listEntry;
    if (home_services_servers_links->_16058) {
        free(home_services_servers_links->_16058);
        home_services_servers_links->_16058 = NULL;
    }
    free(home_services_servers_links);
}

cJSON *home_services_servers_links_convertToJSON(home_services_servers_links_t *home_services_servers_links) {
    cJSON *item = cJSON_CreateObject();

    // home_services_servers_links->_16058
    if(home_services_servers_links->_16058) {
    if(cJSON_AddStringToObject(item, "16058", home_services_servers_links->_16058) == NULL) {
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

home_services_servers_links_t *home_services_servers_links_parseFromJSON(cJSON *home_services_servers_linksJSON){

    home_services_servers_links_t *home_services_servers_links_local_var = NULL;

    // home_services_servers_links->_16058
    cJSON *_16058 = cJSON_GetObjectItemCaseSensitive(home_services_servers_linksJSON, "16058");
    if (cJSON_IsNull(_16058)) {
        _16058 = NULL;
    }
    if (_16058) { 
    if(!cJSON_IsString(_16058) && !cJSON_IsNull(_16058))
    {
    goto end; //String
    }
    }


    home_services_servers_links_local_var = home_services_servers_links_create_internal (
        _16058 && !cJSON_IsNull(_16058) ? strdup(_16058->valuestring) : NULL
        );

    return home_services_servers_links_local_var;
end:
    return NULL;

}
