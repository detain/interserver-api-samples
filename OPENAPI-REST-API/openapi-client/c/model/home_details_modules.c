#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "home_details_modules.h"



static home_details_modules_t *home_details_modules_create_internal(
    home_details_modules_domains_t *domains,
    home_details_modules_webhosting_t *webhosting,
    home_details_modules_vps_t *vps,
    home_details_modules_licenses_t *licenses,
    home_details_modules_backups_t *backups,
    home_details_modules_servers_t *servers,
    home_details_modules_quickservers_t *quickservers
    ) {
    home_details_modules_t *home_details_modules_local_var = malloc(sizeof(home_details_modules_t));
    if (!home_details_modules_local_var) {
        return NULL;
    }
    home_details_modules_local_var->domains = domains;
    home_details_modules_local_var->webhosting = webhosting;
    home_details_modules_local_var->vps = vps;
    home_details_modules_local_var->licenses = licenses;
    home_details_modules_local_var->backups = backups;
    home_details_modules_local_var->servers = servers;
    home_details_modules_local_var->quickservers = quickservers;

    home_details_modules_local_var->_library_owned = 1;
    return home_details_modules_local_var;
}

__attribute__((deprecated)) home_details_modules_t *home_details_modules_create(
    home_details_modules_domains_t *domains,
    home_details_modules_webhosting_t *webhosting,
    home_details_modules_vps_t *vps,
    home_details_modules_licenses_t *licenses,
    home_details_modules_backups_t *backups,
    home_details_modules_servers_t *servers,
    home_details_modules_quickservers_t *quickservers
    ) {
    return home_details_modules_create_internal (
        domains,
        webhosting,
        vps,
        licenses,
        backups,
        servers,
        quickservers
        );
}

void home_details_modules_free(home_details_modules_t *home_details_modules) {
    if(NULL == home_details_modules){
        return ;
    }
    if(home_details_modules->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "home_details_modules_free");
        return ;
    }
    listEntry_t *listEntry;
    if (home_details_modules->domains) {
        home_details_modules_domains_free(home_details_modules->domains);
        home_details_modules->domains = NULL;
    }
    if (home_details_modules->webhosting) {
        home_details_modules_webhosting_free(home_details_modules->webhosting);
        home_details_modules->webhosting = NULL;
    }
    if (home_details_modules->vps) {
        home_details_modules_vps_free(home_details_modules->vps);
        home_details_modules->vps = NULL;
    }
    if (home_details_modules->licenses) {
        home_details_modules_licenses_free(home_details_modules->licenses);
        home_details_modules->licenses = NULL;
    }
    if (home_details_modules->backups) {
        home_details_modules_backups_free(home_details_modules->backups);
        home_details_modules->backups = NULL;
    }
    if (home_details_modules->servers) {
        home_details_modules_servers_free(home_details_modules->servers);
        home_details_modules->servers = NULL;
    }
    if (home_details_modules->quickservers) {
        home_details_modules_quickservers_free(home_details_modules->quickservers);
        home_details_modules->quickservers = NULL;
    }
    free(home_details_modules);
}

cJSON *home_details_modules_convertToJSON(home_details_modules_t *home_details_modules) {
    cJSON *item = cJSON_CreateObject();

    // home_details_modules->domains
    if(home_details_modules->domains) {
    cJSON *domains_local_JSON = home_details_modules_domains_convertToJSON(home_details_modules->domains);
    if(domains_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "domains", domains_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // home_details_modules->webhosting
    if(home_details_modules->webhosting) {
    cJSON *webhosting_local_JSON = home_details_modules_webhosting_convertToJSON(home_details_modules->webhosting);
    if(webhosting_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "webhosting", webhosting_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // home_details_modules->vps
    if(home_details_modules->vps) {
    cJSON *vps_local_JSON = home_details_modules_vps_convertToJSON(home_details_modules->vps);
    if(vps_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "vps", vps_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // home_details_modules->licenses
    if(home_details_modules->licenses) {
    cJSON *licenses_local_JSON = home_details_modules_licenses_convertToJSON(home_details_modules->licenses);
    if(licenses_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "licenses", licenses_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // home_details_modules->backups
    if(home_details_modules->backups) {
    cJSON *backups_local_JSON = home_details_modules_backups_convertToJSON(home_details_modules->backups);
    if(backups_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "backups", backups_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // home_details_modules->servers
    if(home_details_modules->servers) {
    cJSON *servers_local_JSON = home_details_modules_servers_convertToJSON(home_details_modules->servers);
    if(servers_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "servers", servers_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // home_details_modules->quickservers
    if(home_details_modules->quickservers) {
    cJSON *quickservers_local_JSON = home_details_modules_quickservers_convertToJSON(home_details_modules->quickservers);
    if(quickservers_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "quickservers", quickservers_local_JSON);
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

home_details_modules_t *home_details_modules_parseFromJSON(cJSON *home_details_modulesJSON){

    home_details_modules_t *home_details_modules_local_var = NULL;

    // define the local variable for home_details_modules->domains
    home_details_modules_domains_t *domains_local_nonprim = NULL;

    // define the local variable for home_details_modules->webhosting
    home_details_modules_webhosting_t *webhosting_local_nonprim = NULL;

    // define the local variable for home_details_modules->vps
    home_details_modules_vps_t *vps_local_nonprim = NULL;

    // define the local variable for home_details_modules->licenses
    home_details_modules_licenses_t *licenses_local_nonprim = NULL;

    // define the local variable for home_details_modules->backups
    home_details_modules_backups_t *backups_local_nonprim = NULL;

    // define the local variable for home_details_modules->servers
    home_details_modules_servers_t *servers_local_nonprim = NULL;

    // define the local variable for home_details_modules->quickservers
    home_details_modules_quickservers_t *quickservers_local_nonprim = NULL;

    // home_details_modules->domains
    cJSON *domains = cJSON_GetObjectItemCaseSensitive(home_details_modulesJSON, "domains");
    if (cJSON_IsNull(domains)) {
        domains = NULL;
    }
    if (domains) { 
    domains_local_nonprim = home_details_modules_domains_parseFromJSON(domains); //nonprimitive
    }

    // home_details_modules->webhosting
    cJSON *webhosting = cJSON_GetObjectItemCaseSensitive(home_details_modulesJSON, "webhosting");
    if (cJSON_IsNull(webhosting)) {
        webhosting = NULL;
    }
    if (webhosting) { 
    webhosting_local_nonprim = home_details_modules_webhosting_parseFromJSON(webhosting); //nonprimitive
    }

    // home_details_modules->vps
    cJSON *vps = cJSON_GetObjectItemCaseSensitive(home_details_modulesJSON, "vps");
    if (cJSON_IsNull(vps)) {
        vps = NULL;
    }
    if (vps) { 
    vps_local_nonprim = home_details_modules_vps_parseFromJSON(vps); //nonprimitive
    }

    // home_details_modules->licenses
    cJSON *licenses = cJSON_GetObjectItemCaseSensitive(home_details_modulesJSON, "licenses");
    if (cJSON_IsNull(licenses)) {
        licenses = NULL;
    }
    if (licenses) { 
    licenses_local_nonprim = home_details_modules_licenses_parseFromJSON(licenses); //nonprimitive
    }

    // home_details_modules->backups
    cJSON *backups = cJSON_GetObjectItemCaseSensitive(home_details_modulesJSON, "backups");
    if (cJSON_IsNull(backups)) {
        backups = NULL;
    }
    if (backups) { 
    backups_local_nonprim = home_details_modules_backups_parseFromJSON(backups); //nonprimitive
    }

    // home_details_modules->servers
    cJSON *servers = cJSON_GetObjectItemCaseSensitive(home_details_modulesJSON, "servers");
    if (cJSON_IsNull(servers)) {
        servers = NULL;
    }
    if (servers) { 
    servers_local_nonprim = home_details_modules_servers_parseFromJSON(servers); //nonprimitive
    }

    // home_details_modules->quickservers
    cJSON *quickservers = cJSON_GetObjectItemCaseSensitive(home_details_modulesJSON, "quickservers");
    if (cJSON_IsNull(quickservers)) {
        quickservers = NULL;
    }
    if (quickservers) { 
    quickservers_local_nonprim = home_details_modules_quickservers_parseFromJSON(quickservers); //nonprimitive
    }


    home_details_modules_local_var = home_details_modules_create_internal (
        domains ? domains_local_nonprim : NULL,
        webhosting ? webhosting_local_nonprim : NULL,
        vps ? vps_local_nonprim : NULL,
        licenses ? licenses_local_nonprim : NULL,
        backups ? backups_local_nonprim : NULL,
        servers ? servers_local_nonprim : NULL,
        quickservers ? quickservers_local_nonprim : NULL
        );

    return home_details_modules_local_var;
end:
    if (domains_local_nonprim) {
        home_details_modules_domains_free(domains_local_nonprim);
        domains_local_nonprim = NULL;
    }
    if (webhosting_local_nonprim) {
        home_details_modules_webhosting_free(webhosting_local_nonprim);
        webhosting_local_nonprim = NULL;
    }
    if (vps_local_nonprim) {
        home_details_modules_vps_free(vps_local_nonprim);
        vps_local_nonprim = NULL;
    }
    if (licenses_local_nonprim) {
        home_details_modules_licenses_free(licenses_local_nonprim);
        licenses_local_nonprim = NULL;
    }
    if (backups_local_nonprim) {
        home_details_modules_backups_free(backups_local_nonprim);
        backups_local_nonprim = NULL;
    }
    if (servers_local_nonprim) {
        home_details_modules_servers_free(servers_local_nonprim);
        servers_local_nonprim = NULL;
    }
    if (quickservers_local_nonprim) {
        home_details_modules_quickservers_free(quickservers_local_nonprim);
        quickservers_local_nonprim = NULL;
    }
    return NULL;

}
