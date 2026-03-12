/*
 * home_services_vps_links.h
 *
 * Map of VPS service IDs to their hostnames for the account dashboard.
 */

#ifndef _home_services_vps_links_H_
#define _home_services_vps_links_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct home_services_vps_links_t home_services_vps_links_t;




typedef struct home_services_vps_links_t {
    char *_465503; // string
    char *_2500081; // string
    char *_2578866; // string

    int _library_owned; // Is the library responsible for freeing this object?
} home_services_vps_links_t;

__attribute__((deprecated)) home_services_vps_links_t *home_services_vps_links_create(
    char *_465503,
    char *_2500081,
    char *_2578866
);

void home_services_vps_links_free(home_services_vps_links_t *home_services_vps_links);

home_services_vps_links_t *home_services_vps_links_parseFromJSON(cJSON *home_services_vps_linksJSON);

cJSON *home_services_vps_links_convertToJSON(home_services_vps_links_t *home_services_vps_links);

#endif /* _home_services_vps_links_H_ */

