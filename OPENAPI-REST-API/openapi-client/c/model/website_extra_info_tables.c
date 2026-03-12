#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "website_extra_info_tables.h"



static website_extra_info_tables_t *website_extra_info_tables_create_internal(
    website_table_t *links,
    website_table_t *preview,
    website_table_t *dns
    ) {
    website_extra_info_tables_t *website_extra_info_tables_local_var = malloc(sizeof(website_extra_info_tables_t));
    if (!website_extra_info_tables_local_var) {
        return NULL;
    }
    website_extra_info_tables_local_var->links = links;
    website_extra_info_tables_local_var->preview = preview;
    website_extra_info_tables_local_var->dns = dns;

    website_extra_info_tables_local_var->_library_owned = 1;
    return website_extra_info_tables_local_var;
}

__attribute__((deprecated)) website_extra_info_tables_t *website_extra_info_tables_create(
    website_table_t *links,
    website_table_t *preview,
    website_table_t *dns
    ) {
    return website_extra_info_tables_create_internal (
        links,
        preview,
        dns
        );
}

void website_extra_info_tables_free(website_extra_info_tables_t *website_extra_info_tables) {
    if(NULL == website_extra_info_tables){
        return ;
    }
    if(website_extra_info_tables->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "website_extra_info_tables_free");
        return ;
    }
    listEntry_t *listEntry;
    if (website_extra_info_tables->links) {
        website_table_free(website_extra_info_tables->links);
        website_extra_info_tables->links = NULL;
    }
    if (website_extra_info_tables->preview) {
        website_table_free(website_extra_info_tables->preview);
        website_extra_info_tables->preview = NULL;
    }
    if (website_extra_info_tables->dns) {
        website_table_free(website_extra_info_tables->dns);
        website_extra_info_tables->dns = NULL;
    }
    free(website_extra_info_tables);
}

cJSON *website_extra_info_tables_convertToJSON(website_extra_info_tables_t *website_extra_info_tables) {
    cJSON *item = cJSON_CreateObject();

    // website_extra_info_tables->links
    if(website_extra_info_tables->links) {
    cJSON *links_local_JSON = website_table_convertToJSON(website_extra_info_tables->links);
    if(links_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "links", links_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // website_extra_info_tables->preview
    if(website_extra_info_tables->preview) {
    cJSON *preview_local_JSON = website_table_convertToJSON(website_extra_info_tables->preview);
    if(preview_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "preview", preview_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // website_extra_info_tables->dns
    if(website_extra_info_tables->dns) {
    cJSON *dns_local_JSON = website_table_convertToJSON(website_extra_info_tables->dns);
    if(dns_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "dns", dns_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

website_extra_info_tables_t *website_extra_info_tables_parseFromJSON(cJSON *website_extra_info_tablesJSON){

    website_extra_info_tables_t *website_extra_info_tables_local_var = NULL;

    // define the local variable for website_extra_info_tables->links
    website_table_t *links_local_nonprim = NULL;

    // define the local variable for website_extra_info_tables->preview
    website_table_t *preview_local_nonprim = NULL;

    // define the local variable for website_extra_info_tables->dns
    website_table_t *dns_local_nonprim = NULL;

    // website_extra_info_tables->links
    cJSON *links = cJSON_GetObjectItemCaseSensitive(website_extra_info_tablesJSON, "links");
    if (cJSON_IsNull(links)) {
        links = NULL;
    }
    if (links) { 
    links_local_nonprim = website_table_parseFromJSON(links); //nonprimitive
    }

    // website_extra_info_tables->preview
    cJSON *preview = cJSON_GetObjectItemCaseSensitive(website_extra_info_tablesJSON, "preview");
    if (cJSON_IsNull(preview)) {
        preview = NULL;
    }
    if (preview) { 
    preview_local_nonprim = website_table_parseFromJSON(preview); //nonprimitive
    }

    // website_extra_info_tables->dns
    cJSON *dns = cJSON_GetObjectItemCaseSensitive(website_extra_info_tablesJSON, "dns");
    if (cJSON_IsNull(dns)) {
        dns = NULL;
    }
    if (dns) { 
    dns_local_nonprim = website_table_parseFromJSON(dns); //nonprimitive
    }


    website_extra_info_tables_local_var = website_extra_info_tables_create_internal (
        links ? links_local_nonprim : NULL,
        preview ? preview_local_nonprim : NULL,
        dns ? dns_local_nonprim : NULL
        );

    return website_extra_info_tables_local_var;
end:
    if (links_local_nonprim) {
        website_table_free(links_local_nonprim);
        links_local_nonprim = NULL;
    }
    if (preview_local_nonprim) {
        website_table_free(preview_local_nonprim);
        preview_local_nonprim = NULL;
    }
    if (dns_local_nonprim) {
        website_table_free(dns_local_nonprim);
        dns_local_nonprim = NULL;
    }
    return NULL;

}
