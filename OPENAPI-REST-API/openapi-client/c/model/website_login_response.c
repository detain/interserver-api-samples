#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "website_login_response.h"



static website_login_response_t *website_login_response_create_internal(
    char *type,
    char *location
    ) {
    website_login_response_t *website_login_response_local_var = malloc(sizeof(website_login_response_t));
    if (!website_login_response_local_var) {
        return NULL;
    }
    memset(website_login_response_local_var, 0, sizeof(website_login_response_t));
    website_login_response_local_var->_library_owned = 1;
    website_login_response_local_var->type = type;
    website_login_response_local_var->location = location;
    return website_login_response_local_var;
}

__attribute__((deprecated)) website_login_response_t *website_login_response_create(
    char *type,
    char *location
    ) {
    website_login_response_t *result = website_login_response_create_internal (
        type,
        location
        );
    if (!result) {
    }
    return result;
}

void website_login_response_free(website_login_response_t *website_login_response) {
    if(NULL == website_login_response){
        return ;
    }
    if(website_login_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "website_login_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (website_login_response->type) {
        free(website_login_response->type);
        website_login_response->type = NULL;
    }
    if (website_login_response->location) {
        free(website_login_response->location);
        website_login_response->location = NULL;
    }
    free(website_login_response);
}

cJSON *website_login_response_convertToJSON(website_login_response_t *website_login_response) {
    cJSON *item = cJSON_CreateObject();

    // website_login_response->type
    if(website_login_response->type) {
    if(cJSON_AddStringToObject(item, "type", website_login_response->type) == NULL) {
    goto fail; //String
    }
    }


    // website_login_response->location
    if(website_login_response->location) {
    if(cJSON_AddStringToObject(item, "location", website_login_response->location) == NULL) {
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

website_login_response_t *website_login_response_parseFromJSON(cJSON *website_login_responseJSON){

    website_login_response_t *website_login_response_local_var = NULL;

    char *type_local_str = NULL;

    char *location_local_str = NULL;

    // website_login_response->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(website_login_responseJSON, "type");
    if (cJSON_IsNull(type)) {
        type = NULL;
    }
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // website_login_response->location
    cJSON *location = cJSON_GetObjectItemCaseSensitive(website_login_responseJSON, "location");
    if (cJSON_IsNull(location)) {
        location = NULL;
    }
    if (location) { 
    if(!cJSON_IsString(location) && !cJSON_IsNull(location))
    {
    goto end; //String
    }
    }


    if (type && !cJSON_IsNull(type)) type_local_str = strdup(type->valuestring);
    if (location && !cJSON_IsNull(location)) location_local_str = strdup(location->valuestring);

    website_login_response_local_var = website_login_response_create_internal (
        type_local_str,
        location_local_str
        );

    if (!website_login_response_local_var) {
        goto end;
    }

    return website_login_response_local_var;
end:
    if (type_local_str) {
        free(type_local_str);
        type_local_str = NULL;
    }
    if (location_local_str) {
        free(location_local_str);
        location_local_str = NULL;
    }
    return NULL;

}
