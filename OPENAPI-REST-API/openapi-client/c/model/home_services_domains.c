#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "home_services_domains.h"



static home_services_domains_t *home_services_domains_create_internal(
    home_services_domains_links_t *links,
    int count
    ) {
    home_services_domains_t *home_services_domains_local_var = malloc(sizeof(home_services_domains_t));
    if (!home_services_domains_local_var) {
        return NULL;
    }
    home_services_domains_local_var->links = links;
    home_services_domains_local_var->count = count;

    home_services_domains_local_var->_library_owned = 1;
    return home_services_domains_local_var;
}

__attribute__((deprecated)) home_services_domains_t *home_services_domains_create(
    home_services_domains_links_t *links,
    int count
    ) {
    return home_services_domains_create_internal (
        links,
        count
        );
}

void home_services_domains_free(home_services_domains_t *home_services_domains) {
    if(NULL == home_services_domains){
        return ;
    }
    if(home_services_domains->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "home_services_domains_free");
        return ;
    }
    listEntry_t *listEntry;
    if (home_services_domains->links) {
        home_services_domains_links_free(home_services_domains->links);
        home_services_domains->links = NULL;
    }
    free(home_services_domains);
}

cJSON *home_services_domains_convertToJSON(home_services_domains_t *home_services_domains) {
    cJSON *item = cJSON_CreateObject();

    // home_services_domains->links
    if(home_services_domains->links) {
    cJSON *links_local_JSON = home_services_domains_links_convertToJSON(home_services_domains->links);
    if(links_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "links", links_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // home_services_domains->count
    if(home_services_domains->count) {
    if(cJSON_AddNumberToObject(item, "count", home_services_domains->count) == NULL) {
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

home_services_domains_t *home_services_domains_parseFromJSON(cJSON *home_services_domainsJSON){

    home_services_domains_t *home_services_domains_local_var = NULL;

    // define the local variable for home_services_domains->links
    home_services_domains_links_t *links_local_nonprim = NULL;

    // home_services_domains->links
    cJSON *links = cJSON_GetObjectItemCaseSensitive(home_services_domainsJSON, "links");
    if (cJSON_IsNull(links)) {
        links = NULL;
    }
    if (links) { 
    links_local_nonprim = home_services_domains_links_parseFromJSON(links); //nonprimitive
    }

    // home_services_domains->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(home_services_domainsJSON, "count");
    if (cJSON_IsNull(count)) {
        count = NULL;
    }
    if (count) { 
    if(!cJSON_IsNumber(count))
    {
    goto end; //Numeric
    }
    }


    home_services_domains_local_var = home_services_domains_create_internal (
        links ? links_local_nonprim : NULL,
        count ? count->valuedouble : 0
        );

    return home_services_domains_local_var;
end:
    if (links_local_nonprim) {
        home_services_domains_links_free(links_local_nonprim);
        links_local_nonprim = NULL;
    }
    return NULL;

}
