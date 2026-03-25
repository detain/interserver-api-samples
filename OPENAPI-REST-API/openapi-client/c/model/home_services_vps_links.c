#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "home_services_vps_links.h"



static home_services_vps_links_t *home_services_vps_links_create_internal(
    char *_465503,
    char *_2500081,
    char *_2578866
    ) {
    home_services_vps_links_t *home_services_vps_links_local_var = malloc(sizeof(home_services_vps_links_t));
    if (!home_services_vps_links_local_var) {
        return NULL;
    }
    memset(home_services_vps_links_local_var, 0, sizeof(home_services_vps_links_t));
    home_services_vps_links_local_var->_library_owned = 1;
    home_services_vps_links_local_var->_465503 = _465503;
    home_services_vps_links_local_var->_2500081 = _2500081;
    home_services_vps_links_local_var->_2578866 = _2578866;
    return home_services_vps_links_local_var;
}

__attribute__((deprecated)) home_services_vps_links_t *home_services_vps_links_create(
    char *_465503,
    char *_2500081,
    char *_2578866
    ) {
    home_services_vps_links_t *result = home_services_vps_links_create_internal (
        _465503,
        _2500081,
        _2578866
        );
    if (!result) {
    }
    return result;
}

void home_services_vps_links_free(home_services_vps_links_t *home_services_vps_links) {
    if(NULL == home_services_vps_links){
        return ;
    }
    if(home_services_vps_links->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "home_services_vps_links_free");
        return ;
    }
    listEntry_t *listEntry;
    if (home_services_vps_links->_465503) {
        free(home_services_vps_links->_465503);
        home_services_vps_links->_465503 = NULL;
    }
    if (home_services_vps_links->_2500081) {
        free(home_services_vps_links->_2500081);
        home_services_vps_links->_2500081 = NULL;
    }
    if (home_services_vps_links->_2578866) {
        free(home_services_vps_links->_2578866);
        home_services_vps_links->_2578866 = NULL;
    }
    free(home_services_vps_links);
}

cJSON *home_services_vps_links_convertToJSON(home_services_vps_links_t *home_services_vps_links) {
    cJSON *item = cJSON_CreateObject();

    // home_services_vps_links->_465503
    if(home_services_vps_links->_465503) {
    if(cJSON_AddStringToObject(item, "465503", home_services_vps_links->_465503) == NULL) {
    goto fail; //String
    }
    }


    // home_services_vps_links->_2500081
    if(home_services_vps_links->_2500081) {
    if(cJSON_AddStringToObject(item, "2500081", home_services_vps_links->_2500081) == NULL) {
    goto fail; //String
    }
    }


    // home_services_vps_links->_2578866
    if(home_services_vps_links->_2578866) {
    if(cJSON_AddStringToObject(item, "2578866", home_services_vps_links->_2578866) == NULL) {
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

home_services_vps_links_t *home_services_vps_links_parseFromJSON(cJSON *home_services_vps_linksJSON){

    home_services_vps_links_t *home_services_vps_links_local_var = NULL;

    char *_465503_local_str = NULL;

    char *_2500081_local_str = NULL;

    char *_2578866_local_str = NULL;

    // home_services_vps_links->_465503
    cJSON *_465503 = cJSON_GetObjectItemCaseSensitive(home_services_vps_linksJSON, "465503");
    if (cJSON_IsNull(_465503)) {
        _465503 = NULL;
    }
    if (_465503) { 
    if(!cJSON_IsString(_465503) && !cJSON_IsNull(_465503))
    {
    goto end; //String
    }
    }

    // home_services_vps_links->_2500081
    cJSON *_2500081 = cJSON_GetObjectItemCaseSensitive(home_services_vps_linksJSON, "2500081");
    if (cJSON_IsNull(_2500081)) {
        _2500081 = NULL;
    }
    if (_2500081) { 
    if(!cJSON_IsString(_2500081) && !cJSON_IsNull(_2500081))
    {
    goto end; //String
    }
    }

    // home_services_vps_links->_2578866
    cJSON *_2578866 = cJSON_GetObjectItemCaseSensitive(home_services_vps_linksJSON, "2578866");
    if (cJSON_IsNull(_2578866)) {
        _2578866 = NULL;
    }
    if (_2578866) { 
    if(!cJSON_IsString(_2578866) && !cJSON_IsNull(_2578866))
    {
    goto end; //String
    }
    }


    if (_465503 && !cJSON_IsNull(_465503)) _465503_local_str = strdup(_465503->valuestring);
    if (_2500081 && !cJSON_IsNull(_2500081)) _2500081_local_str = strdup(_2500081->valuestring);
    if (_2578866 && !cJSON_IsNull(_2578866)) _2578866_local_str = strdup(_2578866->valuestring);

    home_services_vps_links_local_var = home_services_vps_links_create_internal (
        _465503_local_str,
        _2500081_local_str,
        _2578866_local_str
        );

    if (!home_services_vps_links_local_var) {
        goto end;
    }

    return home_services_vps_links_local_var;
end:
    if (_465503_local_str) {
        free(_465503_local_str);
        _465503_local_str = NULL;
    }
    if (_2500081_local_str) {
        free(_2500081_local_str);
        _2500081_local_str = NULL;
    }
    if (_2578866_local_str) {
        free(_2578866_local_str);
        _2578866_local_str = NULL;
    }
    return NULL;

}
