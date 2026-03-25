#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "home_services_licenses.h"



static home_services_licenses_t *home_services_licenses_create_internal(
    home_services_licenses_links_t *links,
    int *count
    ) {
    home_services_licenses_t *home_services_licenses_local_var = malloc(sizeof(home_services_licenses_t));
    if (!home_services_licenses_local_var) {
        return NULL;
    }
    memset(home_services_licenses_local_var, 0, sizeof(home_services_licenses_t));
    home_services_licenses_local_var->_library_owned = 1;
    home_services_licenses_local_var->links = links;
    home_services_licenses_local_var->count = count;
    return home_services_licenses_local_var;
}

__attribute__((deprecated)) home_services_licenses_t *home_services_licenses_create(
    home_services_licenses_links_t *links,
    int *count
    ) {
    int *count_copy = NULL;
    if (count) {
        count_copy = malloc(sizeof(int));
        if (count_copy) *count_copy = *count;
    }
    home_services_licenses_t *result = home_services_licenses_create_internal (
        links,
        count_copy
        );
    if (!result) {
        free(count_copy);
    }
    return result;
}

void home_services_licenses_free(home_services_licenses_t *home_services_licenses) {
    if(NULL == home_services_licenses){
        return ;
    }
    if(home_services_licenses->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "home_services_licenses_free");
        return ;
    }
    listEntry_t *listEntry;
    if (home_services_licenses->links) {
        home_services_licenses_links_free(home_services_licenses->links);
        home_services_licenses->links = NULL;
    }
    if (home_services_licenses->count) {
        free(home_services_licenses->count);
        home_services_licenses->count = NULL;
    }
    free(home_services_licenses);
}

cJSON *home_services_licenses_convertToJSON(home_services_licenses_t *home_services_licenses) {
    cJSON *item = cJSON_CreateObject();

    // home_services_licenses->links
    if(home_services_licenses->links) {
    cJSON *links_local_JSON = home_services_licenses_links_convertToJSON(home_services_licenses->links);
    if(links_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "links", links_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // home_services_licenses->count
    if(home_services_licenses->count) {
    if(cJSON_AddNumberToObject(item, "count", *home_services_licenses->count) == NULL) {
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

home_services_licenses_t *home_services_licenses_parseFromJSON(cJSON *home_services_licensesJSON){

    home_services_licenses_t *home_services_licenses_local_var = NULL;

    // define the local variable for home_services_licenses->links
    home_services_licenses_links_t *links_local_nonprim = NULL;

    // define the local variable for home_services_licenses->count
    int *count_local_var = NULL;

    // home_services_licenses->links
    cJSON *links = cJSON_GetObjectItemCaseSensitive(home_services_licensesJSON, "links");
    if (cJSON_IsNull(links)) {
        links = NULL;
    }
    if (links) { 
    links_local_nonprim = home_services_licenses_links_parseFromJSON(links); //nonprimitive
    }

    // home_services_licenses->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(home_services_licensesJSON, "count");
    if (cJSON_IsNull(count)) {
        count = NULL;
    }
    if (count) { 
    if(!cJSON_IsNumber(count))
    {
    goto end; //Numeric
    }
    count_local_var = malloc(sizeof(int));
    if(!count_local_var)
    {
        goto end;
    }
    *count_local_var = count->valuedouble;
    }



    home_services_licenses_local_var = home_services_licenses_create_internal (
        links ? links_local_nonprim : NULL,
        count_local_var
        );

    if (!home_services_licenses_local_var) {
        goto end;
    }

    return home_services_licenses_local_var;
end:
    if (links_local_nonprim) {
        home_services_licenses_links_free(links_local_nonprim);
        links_local_nonprim = NULL;
    }
    if (count_local_var) {
        free(count_local_var);
        count_local_var = NULL;
    }
    return NULL;

}
