#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "home_services_licenses_links.h"



static home_services_licenses_links_t *home_services_licenses_links_create_internal(
    char *_386522
    ) {
    home_services_licenses_links_t *home_services_licenses_links_local_var = malloc(sizeof(home_services_licenses_links_t));
    if (!home_services_licenses_links_local_var) {
        return NULL;
    }
    home_services_licenses_links_local_var->_386522 = _386522;

    home_services_licenses_links_local_var->_library_owned = 1;
    return home_services_licenses_links_local_var;
}

__attribute__((deprecated)) home_services_licenses_links_t *home_services_licenses_links_create(
    char *_386522
    ) {
    return home_services_licenses_links_create_internal (
        _386522
        );
}

void home_services_licenses_links_free(home_services_licenses_links_t *home_services_licenses_links) {
    if(NULL == home_services_licenses_links){
        return ;
    }
    if(home_services_licenses_links->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "home_services_licenses_links_free");
        return ;
    }
    listEntry_t *listEntry;
    if (home_services_licenses_links->_386522) {
        free(home_services_licenses_links->_386522);
        home_services_licenses_links->_386522 = NULL;
    }
    free(home_services_licenses_links);
}

cJSON *home_services_licenses_links_convertToJSON(home_services_licenses_links_t *home_services_licenses_links) {
    cJSON *item = cJSON_CreateObject();

    // home_services_licenses_links->_386522
    if(home_services_licenses_links->_386522) {
    if(cJSON_AddStringToObject(item, "386522", home_services_licenses_links->_386522) == NULL) {
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

home_services_licenses_links_t *home_services_licenses_links_parseFromJSON(cJSON *home_services_licenses_linksJSON){

    home_services_licenses_links_t *home_services_licenses_links_local_var = NULL;

    // home_services_licenses_links->_386522
    cJSON *_386522 = cJSON_GetObjectItemCaseSensitive(home_services_licenses_linksJSON, "386522");
    if (cJSON_IsNull(_386522)) {
        _386522 = NULL;
    }
    if (_386522) { 
    if(!cJSON_IsString(_386522) && !cJSON_IsNull(_386522))
    {
    goto end; //String
    }
    }


    home_services_licenses_links_local_var = home_services_licenses_links_create_internal (
        _386522 && !cJSON_IsNull(_386522) ? strdup(_386522->valuestring) : NULL
        );

    return home_services_licenses_links_local_var;
end:
    return NULL;

}
