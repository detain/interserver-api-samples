#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "home_services_webhosting_links.h"



static home_services_webhosting_links_t *home_services_webhosting_links_create_internal(
    char *_376359,
    char *_376473,
    char *_386218
    ) {
    home_services_webhosting_links_t *home_services_webhosting_links_local_var = malloc(sizeof(home_services_webhosting_links_t));
    if (!home_services_webhosting_links_local_var) {
        return NULL;
    }
    home_services_webhosting_links_local_var->_376359 = _376359;
    home_services_webhosting_links_local_var->_376473 = _376473;
    home_services_webhosting_links_local_var->_386218 = _386218;

    home_services_webhosting_links_local_var->_library_owned = 1;
    return home_services_webhosting_links_local_var;
}

__attribute__((deprecated)) home_services_webhosting_links_t *home_services_webhosting_links_create(
    char *_376359,
    char *_376473,
    char *_386218
    ) {
    return home_services_webhosting_links_create_internal (
        _376359,
        _376473,
        _386218
        );
}

void home_services_webhosting_links_free(home_services_webhosting_links_t *home_services_webhosting_links) {
    if(NULL == home_services_webhosting_links){
        return ;
    }
    if(home_services_webhosting_links->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "home_services_webhosting_links_free");
        return ;
    }
    listEntry_t *listEntry;
    if (home_services_webhosting_links->_376359) {
        free(home_services_webhosting_links->_376359);
        home_services_webhosting_links->_376359 = NULL;
    }
    if (home_services_webhosting_links->_376473) {
        free(home_services_webhosting_links->_376473);
        home_services_webhosting_links->_376473 = NULL;
    }
    if (home_services_webhosting_links->_386218) {
        free(home_services_webhosting_links->_386218);
        home_services_webhosting_links->_386218 = NULL;
    }
    free(home_services_webhosting_links);
}

cJSON *home_services_webhosting_links_convertToJSON(home_services_webhosting_links_t *home_services_webhosting_links) {
    cJSON *item = cJSON_CreateObject();

    // home_services_webhosting_links->_376359
    if(home_services_webhosting_links->_376359) {
    if(cJSON_AddStringToObject(item, "376359", home_services_webhosting_links->_376359) == NULL) {
    goto fail; //String
    }
    }


    // home_services_webhosting_links->_376473
    if(home_services_webhosting_links->_376473) {
    if(cJSON_AddStringToObject(item, "376473", home_services_webhosting_links->_376473) == NULL) {
    goto fail; //String
    }
    }


    // home_services_webhosting_links->_386218
    if(home_services_webhosting_links->_386218) {
    if(cJSON_AddStringToObject(item, "386218", home_services_webhosting_links->_386218) == NULL) {
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

home_services_webhosting_links_t *home_services_webhosting_links_parseFromJSON(cJSON *home_services_webhosting_linksJSON){

    home_services_webhosting_links_t *home_services_webhosting_links_local_var = NULL;

    // home_services_webhosting_links->_376359
    cJSON *_376359 = cJSON_GetObjectItemCaseSensitive(home_services_webhosting_linksJSON, "376359");
    if (cJSON_IsNull(_376359)) {
        _376359 = NULL;
    }
    if (_376359) { 
    if(!cJSON_IsString(_376359) && !cJSON_IsNull(_376359))
    {
    goto end; //String
    }
    }

    // home_services_webhosting_links->_376473
    cJSON *_376473 = cJSON_GetObjectItemCaseSensitive(home_services_webhosting_linksJSON, "376473");
    if (cJSON_IsNull(_376473)) {
        _376473 = NULL;
    }
    if (_376473) { 
    if(!cJSON_IsString(_376473) && !cJSON_IsNull(_376473))
    {
    goto end; //String
    }
    }

    // home_services_webhosting_links->_386218
    cJSON *_386218 = cJSON_GetObjectItemCaseSensitive(home_services_webhosting_linksJSON, "386218");
    if (cJSON_IsNull(_386218)) {
        _386218 = NULL;
    }
    if (_386218) { 
    if(!cJSON_IsString(_386218) && !cJSON_IsNull(_386218))
    {
    goto end; //String
    }
    }


    home_services_webhosting_links_local_var = home_services_webhosting_links_create_internal (
        _376359 && !cJSON_IsNull(_376359) ? strdup(_376359->valuestring) : NULL,
        _376473 && !cJSON_IsNull(_376473) ? strdup(_376473->valuestring) : NULL,
        _386218 && !cJSON_IsNull(_386218) ? strdup(_386218->valuestring) : NULL
        );

    return home_services_webhosting_links_local_var;
end:
    return NULL;

}
