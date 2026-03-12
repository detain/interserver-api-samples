/*
 * home_services_servers_links.h
 *
 * Map of dedicated server service IDs to their hostnames for the account dashboard.
 */

#ifndef _home_services_servers_links_H_
#define _home_services_servers_links_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct home_services_servers_links_t home_services_servers_links_t;




typedef struct home_services_servers_links_t {
    char *_16058; // string

    int _library_owned; // Is the library responsible for freeing this object?
} home_services_servers_links_t;

__attribute__((deprecated)) home_services_servers_links_t *home_services_servers_links_create(
    char *_16058
);

void home_services_servers_links_free(home_services_servers_links_t *home_services_servers_links);

home_services_servers_links_t *home_services_servers_links_parseFromJSON(cJSON *home_services_servers_linksJSON);

cJSON *home_services_servers_links_convertToJSON(home_services_servers_links_t *home_services_servers_links);

#endif /* _home_services_servers_links_H_ */

