#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "home_services.h"



static home_services_t *home_services_create_internal(
    home_services_domains_t *domains,
    home_services_webhosting_t *webhosting,
    home_services_vps_t *vps,
    home_services_licenses_t *licenses,
    home_services_servers_t *servers,
    home_services_backups_t *backups
    ) {
    home_services_t *home_services_local_var = malloc(sizeof(home_services_t));
    if (!home_services_local_var) {
        return NULL;
    }
    memset(home_services_local_var, 0, sizeof(home_services_t));
    home_services_local_var->_library_owned = 1;
    home_services_local_var->domains = domains;
    home_services_local_var->webhosting = webhosting;
    home_services_local_var->vps = vps;
    home_services_local_var->licenses = licenses;
    home_services_local_var->servers = servers;
    home_services_local_var->backups = backups;
    return home_services_local_var;
}

__attribute__((deprecated)) home_services_t *home_services_create(
    home_services_domains_t *domains,
    home_services_webhosting_t *webhosting,
    home_services_vps_t *vps,
    home_services_licenses_t *licenses,
    home_services_servers_t *servers,
    home_services_backups_t *backups
    ) {
    home_services_t *result = home_services_create_internal (
        domains,
        webhosting,
        vps,
        licenses,
        servers,
        backups
        );
    if (!result) {
    }
    return result;
}

void home_services_free(home_services_t *home_services) {
    if(NULL == home_services){
        return ;
    }
    if(home_services->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "home_services_free");
        return ;
    }
    listEntry_t *listEntry;
    if (home_services->domains) {
        home_services_domains_free(home_services->domains);
        home_services->domains = NULL;
    }
    if (home_services->webhosting) {
        home_services_webhosting_free(home_services->webhosting);
        home_services->webhosting = NULL;
    }
    if (home_services->vps) {
        home_services_vps_free(home_services->vps);
        home_services->vps = NULL;
    }
    if (home_services->licenses) {
        home_services_licenses_free(home_services->licenses);
        home_services->licenses = NULL;
    }
    if (home_services->servers) {
        home_services_servers_free(home_services->servers);
        home_services->servers = NULL;
    }
    if (home_services->backups) {
        home_services_backups_free(home_services->backups);
        home_services->backups = NULL;
    }
    free(home_services);
}

cJSON *home_services_convertToJSON(home_services_t *home_services) {
    cJSON *item = cJSON_CreateObject();

    // home_services->domains
    if(home_services->domains) {
    cJSON *domains_local_JSON = home_services_domains_convertToJSON(home_services->domains);
    if(domains_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "domains", domains_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // home_services->webhosting
    if(home_services->webhosting) {
    cJSON *webhosting_local_JSON = home_services_webhosting_convertToJSON(home_services->webhosting);
    if(webhosting_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "webhosting", webhosting_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // home_services->vps
    if(home_services->vps) {
    cJSON *vps_local_JSON = home_services_vps_convertToJSON(home_services->vps);
    if(vps_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "vps", vps_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // home_services->licenses
    if(home_services->licenses) {
    cJSON *licenses_local_JSON = home_services_licenses_convertToJSON(home_services->licenses);
    if(licenses_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "licenses", licenses_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // home_services->servers
    if(home_services->servers) {
    cJSON *servers_local_JSON = home_services_servers_convertToJSON(home_services->servers);
    if(servers_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "servers", servers_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // home_services->backups
    if(home_services->backups) {
    cJSON *backups_local_JSON = home_services_backups_convertToJSON(home_services->backups);
    if(backups_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "backups", backups_local_JSON);
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

home_services_t *home_services_parseFromJSON(cJSON *home_servicesJSON){

    home_services_t *home_services_local_var = NULL;

    // define the local variable for home_services->domains
    home_services_domains_t *domains_local_nonprim = NULL;

    // define the local variable for home_services->webhosting
    home_services_webhosting_t *webhosting_local_nonprim = NULL;

    // define the local variable for home_services->vps
    home_services_vps_t *vps_local_nonprim = NULL;

    // define the local variable for home_services->licenses
    home_services_licenses_t *licenses_local_nonprim = NULL;

    // define the local variable for home_services->servers
    home_services_servers_t *servers_local_nonprim = NULL;

    // define the local variable for home_services->backups
    home_services_backups_t *backups_local_nonprim = NULL;

    // home_services->domains
    cJSON *domains = cJSON_GetObjectItemCaseSensitive(home_servicesJSON, "domains");
    if (cJSON_IsNull(domains)) {
        domains = NULL;
    }
    if (domains) { 
    domains_local_nonprim = home_services_domains_parseFromJSON(domains); //nonprimitive
    }

    // home_services->webhosting
    cJSON *webhosting = cJSON_GetObjectItemCaseSensitive(home_servicesJSON, "webhosting");
    if (cJSON_IsNull(webhosting)) {
        webhosting = NULL;
    }
    if (webhosting) { 
    webhosting_local_nonprim = home_services_webhosting_parseFromJSON(webhosting); //nonprimitive
    }

    // home_services->vps
    cJSON *vps = cJSON_GetObjectItemCaseSensitive(home_servicesJSON, "vps");
    if (cJSON_IsNull(vps)) {
        vps = NULL;
    }
    if (vps) { 
    vps_local_nonprim = home_services_vps_parseFromJSON(vps); //nonprimitive
    }

    // home_services->licenses
    cJSON *licenses = cJSON_GetObjectItemCaseSensitive(home_servicesJSON, "licenses");
    if (cJSON_IsNull(licenses)) {
        licenses = NULL;
    }
    if (licenses) { 
    licenses_local_nonprim = home_services_licenses_parseFromJSON(licenses); //nonprimitive
    }

    // home_services->servers
    cJSON *servers = cJSON_GetObjectItemCaseSensitive(home_servicesJSON, "servers");
    if (cJSON_IsNull(servers)) {
        servers = NULL;
    }
    if (servers) { 
    servers_local_nonprim = home_services_servers_parseFromJSON(servers); //nonprimitive
    }

    // home_services->backups
    cJSON *backups = cJSON_GetObjectItemCaseSensitive(home_servicesJSON, "backups");
    if (cJSON_IsNull(backups)) {
        backups = NULL;
    }
    if (backups) { 
    backups_local_nonprim = home_services_backups_parseFromJSON(backups); //nonprimitive
    }



    home_services_local_var = home_services_create_internal (
        domains ? domains_local_nonprim : NULL,
        webhosting ? webhosting_local_nonprim : NULL,
        vps ? vps_local_nonprim : NULL,
        licenses ? licenses_local_nonprim : NULL,
        servers ? servers_local_nonprim : NULL,
        backups ? backups_local_nonprim : NULL
        );

    if (!home_services_local_var) {
        goto end;
    }

    return home_services_local_var;
end:
    if (domains_local_nonprim) {
        home_services_domains_free(domains_local_nonprim);
        domains_local_nonprim = NULL;
    }
    if (webhosting_local_nonprim) {
        home_services_webhosting_free(webhosting_local_nonprim);
        webhosting_local_nonprim = NULL;
    }
    if (vps_local_nonprim) {
        home_services_vps_free(vps_local_nonprim);
        vps_local_nonprim = NULL;
    }
    if (licenses_local_nonprim) {
        home_services_licenses_free(licenses_local_nonprim);
        licenses_local_nonprim = NULL;
    }
    if (servers_local_nonprim) {
        home_services_servers_free(servers_local_nonprim);
        servers_local_nonprim = NULL;
    }
    if (backups_local_nonprim) {
        home_services_backups_free(backups_local_nonprim);
        backups_local_nonprim = NULL;
    }
    return NULL;

}
