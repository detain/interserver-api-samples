#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "home_services_domains_links.h"



static home_services_domains_links_t *home_services_domains_links_create_internal(
    char *_376114,
    char *_376503,
    char *_592337
    ) {
    home_services_domains_links_t *home_services_domains_links_local_var = malloc(sizeof(home_services_domains_links_t));
    if (!home_services_domains_links_local_var) {
        return NULL;
    }
    memset(home_services_domains_links_local_var, 0, sizeof(home_services_domains_links_t));
    home_services_domains_links_local_var->_library_owned = 1;
    home_services_domains_links_local_var->_376114 = _376114;
    home_services_domains_links_local_var->_376503 = _376503;
    home_services_domains_links_local_var->_592337 = _592337;
    return home_services_domains_links_local_var;
}

__attribute__((deprecated)) home_services_domains_links_t *home_services_domains_links_create(
    char *_376114,
    char *_376503,
    char *_592337
    ) {
    home_services_domains_links_t *result = home_services_domains_links_create_internal (
        _376114,
        _376503,
        _592337
        );
    if (!result) {
    }
    return result;
}

void home_services_domains_links_free(home_services_domains_links_t *home_services_domains_links) {
    if(NULL == home_services_domains_links){
        return ;
    }
    if(home_services_domains_links->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "home_services_domains_links_free");
        return ;
    }
    listEntry_t *listEntry;
    if (home_services_domains_links->_376114) {
        free(home_services_domains_links->_376114);
        home_services_domains_links->_376114 = NULL;
    }
    if (home_services_domains_links->_376503) {
        free(home_services_domains_links->_376503);
        home_services_domains_links->_376503 = NULL;
    }
    if (home_services_domains_links->_592337) {
        free(home_services_domains_links->_592337);
        home_services_domains_links->_592337 = NULL;
    }
    free(home_services_domains_links);
}

cJSON *home_services_domains_links_convertToJSON(home_services_domains_links_t *home_services_domains_links) {
    cJSON *item = cJSON_CreateObject();

    // home_services_domains_links->_376114
    if(home_services_domains_links->_376114) {
    if(cJSON_AddStringToObject(item, "376114", home_services_domains_links->_376114) == NULL) {
    goto fail; //String
    }
    }


    // home_services_domains_links->_376503
    if(home_services_domains_links->_376503) {
    if(cJSON_AddStringToObject(item, "376503", home_services_domains_links->_376503) == NULL) {
    goto fail; //String
    }
    }


    // home_services_domains_links->_592337
    if(home_services_domains_links->_592337) {
    if(cJSON_AddStringToObject(item, "592337", home_services_domains_links->_592337) == NULL) {
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

home_services_domains_links_t *home_services_domains_links_parseFromJSON(cJSON *home_services_domains_linksJSON){

    home_services_domains_links_t *home_services_domains_links_local_var = NULL;

    char *_376114_local_str = NULL;

    char *_376503_local_str = NULL;

    char *_592337_local_str = NULL;

    // home_services_domains_links->_376114
    cJSON *_376114 = cJSON_GetObjectItemCaseSensitive(home_services_domains_linksJSON, "376114");
    if (cJSON_IsNull(_376114)) {
        _376114 = NULL;
    }
    if (_376114) { 
    if(!cJSON_IsString(_376114) && !cJSON_IsNull(_376114))
    {
    goto end; //String
    }
    }

    // home_services_domains_links->_376503
    cJSON *_376503 = cJSON_GetObjectItemCaseSensitive(home_services_domains_linksJSON, "376503");
    if (cJSON_IsNull(_376503)) {
        _376503 = NULL;
    }
    if (_376503) { 
    if(!cJSON_IsString(_376503) && !cJSON_IsNull(_376503))
    {
    goto end; //String
    }
    }

    // home_services_domains_links->_592337
    cJSON *_592337 = cJSON_GetObjectItemCaseSensitive(home_services_domains_linksJSON, "592337");
    if (cJSON_IsNull(_592337)) {
        _592337 = NULL;
    }
    if (_592337) { 
    if(!cJSON_IsString(_592337) && !cJSON_IsNull(_592337))
    {
    goto end; //String
    }
    }


    if (_376114 && !cJSON_IsNull(_376114)) _376114_local_str = strdup(_376114->valuestring);
    if (_376503 && !cJSON_IsNull(_376503)) _376503_local_str = strdup(_376503->valuestring);
    if (_592337 && !cJSON_IsNull(_592337)) _592337_local_str = strdup(_592337->valuestring);

    home_services_domains_links_local_var = home_services_domains_links_create_internal (
        _376114_local_str,
        _376503_local_str,
        _592337_local_str
        );

    if (!home_services_domains_links_local_var) {
        goto end;
    }

    return home_services_domains_links_local_var;
end:
    if (_376114_local_str) {
        free(_376114_local_str);
        _376114_local_str = NULL;
    }
    if (_376503_local_str) {
        free(_376503_local_str);
        _376503_local_str = NULL;
    }
    if (_592337_local_str) {
        free(_592337_local_str);
        _592337_local_str = NULL;
    }
    return NULL;

}
