#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "home_services_webhosting.h"



static home_services_webhosting_t *home_services_webhosting_create_internal(
    home_services_webhosting_links_t *links,
    int count
    ) {
    home_services_webhosting_t *home_services_webhosting_local_var = malloc(sizeof(home_services_webhosting_t));
    if (!home_services_webhosting_local_var) {
        return NULL;
    }
    home_services_webhosting_local_var->links = links;
    home_services_webhosting_local_var->count = count;

    home_services_webhosting_local_var->_library_owned = 1;
    return home_services_webhosting_local_var;
}

__attribute__((deprecated)) home_services_webhosting_t *home_services_webhosting_create(
    home_services_webhosting_links_t *links,
    int count
    ) {
    return home_services_webhosting_create_internal (
        links,
        count
        );
}

void home_services_webhosting_free(home_services_webhosting_t *home_services_webhosting) {
    if(NULL == home_services_webhosting){
        return ;
    }
    if(home_services_webhosting->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "home_services_webhosting_free");
        return ;
    }
    listEntry_t *listEntry;
    if (home_services_webhosting->links) {
        home_services_webhosting_links_free(home_services_webhosting->links);
        home_services_webhosting->links = NULL;
    }
    free(home_services_webhosting);
}

cJSON *home_services_webhosting_convertToJSON(home_services_webhosting_t *home_services_webhosting) {
    cJSON *item = cJSON_CreateObject();

    // home_services_webhosting->links
    if(home_services_webhosting->links) {
    cJSON *links_local_JSON = home_services_webhosting_links_convertToJSON(home_services_webhosting->links);
    if(links_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "links", links_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // home_services_webhosting->count
    if(home_services_webhosting->count) {
    if(cJSON_AddNumberToObject(item, "count", home_services_webhosting->count) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

home_services_webhosting_t *home_services_webhosting_parseFromJSON(cJSON *home_services_webhostingJSON){

    home_services_webhosting_t *home_services_webhosting_local_var = NULL;

    // define the local variable for home_services_webhosting->links
    home_services_webhosting_links_t *links_local_nonprim = NULL;

    // home_services_webhosting->links
    cJSON *links = cJSON_GetObjectItemCaseSensitive(home_services_webhostingJSON, "links");
    if (cJSON_IsNull(links)) {
        links = NULL;
    }
    if (links) { 
    links_local_nonprim = home_services_webhosting_links_parseFromJSON(links); //nonprimitive
    }

    // home_services_webhosting->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(home_services_webhostingJSON, "count");
    if (cJSON_IsNull(count)) {
        count = NULL;
    }
    if (count) { 
    if(!cJSON_IsNumber(count))
    {
    goto end; //Numeric
    }
    }


    home_services_webhosting_local_var = home_services_webhosting_create_internal (
        links ? links_local_nonprim : NULL,
        count ? count->valuedouble : 0
        );

    return home_services_webhosting_local_var;
end:
    if (links_local_nonprim) {
        home_services_webhosting_links_free(links_local_nonprim);
        links_local_nonprim = NULL;
    }
    return NULL;

}
