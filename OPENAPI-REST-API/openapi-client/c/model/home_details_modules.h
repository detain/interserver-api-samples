/*
 * home_details_modules.h
 *
 * 
 */

#ifndef _home_details_modules_H_
#define _home_details_modules_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct home_details_modules_t home_details_modules_t;

#include "home_details_modules_backups.h"
#include "home_details_modules_domains.h"
#include "home_details_modules_licenses.h"
#include "home_details_modules_quickservers.h"
#include "home_details_modules_servers.h"
#include "home_details_modules_vps.h"
#include "home_details_modules_webhosting.h"



typedef struct home_details_modules_t {
    struct home_details_modules_domains_t *domains; //model
    struct home_details_modules_webhosting_t *webhosting; //model
    struct home_details_modules_vps_t *vps; //model
    struct home_details_modules_licenses_t *licenses; //model
    struct home_details_modules_backups_t *backups; //model
    struct home_details_modules_servers_t *servers; //model
    struct home_details_modules_quickservers_t *quickservers; //model

    int _library_owned; // Is the library responsible for freeing this object?
} home_details_modules_t;

__attribute__((deprecated)) home_details_modules_t *home_details_modules_create(
    home_details_modules_domains_t *domains,
    home_details_modules_webhosting_t *webhosting,
    home_details_modules_vps_t *vps,
    home_details_modules_licenses_t *licenses,
    home_details_modules_backups_t *backups,
    home_details_modules_servers_t *servers,
    home_details_modules_quickservers_t *quickservers
);

void home_details_modules_free(home_details_modules_t *home_details_modules);

home_details_modules_t *home_details_modules_parseFromJSON(cJSON *home_details_modulesJSON);

cJSON *home_details_modules_convertToJSON(home_details_modules_t *home_details_modules);

#endif /* _home_details_modules_H_ */

