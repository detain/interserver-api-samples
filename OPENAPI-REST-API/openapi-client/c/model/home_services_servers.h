/*
 * home_services_servers.h
 *
 * 
 */

#ifndef _home_services_servers_H_
#define _home_services_servers_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct home_services_servers_t home_services_servers_t;

#include "home_services_servers_links.h"



typedef struct home_services_servers_t {
    struct home_services_servers_links_t *links; //model
    int *count; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} home_services_servers_t;

__attribute__((deprecated)) home_services_servers_t *home_services_servers_create(
    home_services_servers_links_t *links,
    int *count
);

void home_services_servers_free(home_services_servers_t *home_services_servers);

home_services_servers_t *home_services_servers_parseFromJSON(cJSON *home_services_serversJSON);

cJSON *home_services_servers_convertToJSON(home_services_servers_t *home_services_servers);

#endif /* _home_services_servers_H_ */

