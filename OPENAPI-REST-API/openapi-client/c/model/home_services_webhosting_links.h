/*
 * home_services_webhosting_links.h
 *
 * Map of webhosting service IDs to their hostnames for the account dashboard.
 */

#ifndef _home_services_webhosting_links_H_
#define _home_services_webhosting_links_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct home_services_webhosting_links_t home_services_webhosting_links_t;




typedef struct home_services_webhosting_links_t {
    char *_376359; // string
    char *_376473; // string
    char *_386218; // string

    int _library_owned; // Is the library responsible for freeing this object?
} home_services_webhosting_links_t;

__attribute__((deprecated)) home_services_webhosting_links_t *home_services_webhosting_links_create(
    char *_376359,
    char *_376473,
    char *_386218
);

void home_services_webhosting_links_free(home_services_webhosting_links_t *home_services_webhosting_links);

home_services_webhosting_links_t *home_services_webhosting_links_parseFromJSON(cJSON *home_services_webhosting_linksJSON);

cJSON *home_services_webhosting_links_convertToJSON(home_services_webhosting_links_t *home_services_webhosting_links);

#endif /* _home_services_webhosting_links_H_ */

