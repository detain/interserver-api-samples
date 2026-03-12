/*
 * home_services.h
 *
 * Users services.
 */

#ifndef _home_services_H_
#define _home_services_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct home_services_t home_services_t;

#include "home_services_backups.h"
#include "home_services_domains.h"
#include "home_services_licenses.h"
#include "home_services_servers.h"
#include "home_services_vps.h"
#include "home_services_webhosting.h"



typedef struct home_services_t {
    struct home_services_domains_t *domains; //model
    struct home_services_webhosting_t *webhosting; //model
    struct home_services_vps_t *vps; //model
    struct home_services_licenses_t *licenses; //model
    struct home_services_servers_t *servers; //model
    struct home_services_backups_t *backups; //model

    int _library_owned; // Is the library responsible for freeing this object?
} home_services_t;

__attribute__((deprecated)) home_services_t *home_services_create(
    home_services_domains_t *domains,
    home_services_webhosting_t *webhosting,
    home_services_vps_t *vps,
    home_services_licenses_t *licenses,
    home_services_servers_t *servers,
    home_services_backups_t *backups
);

void home_services_free(home_services_t *home_services);

home_services_t *home_services_parseFromJSON(cJSON *home_servicesJSON);

cJSON *home_services_convertToJSON(home_services_t *home_services);

#endif /* _home_services_H_ */

