/*
 * home_services_webhosting.h
 *
 * 
 */

#ifndef _home_services_webhosting_H_
#define _home_services_webhosting_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct home_services_webhosting_t home_services_webhosting_t;

#include "home_services_webhosting_links.h"



typedef struct home_services_webhosting_t {
    struct home_services_webhosting_links_t *links; //model
    int *count; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} home_services_webhosting_t;

__attribute__((deprecated)) home_services_webhosting_t *home_services_webhosting_create(
    home_services_webhosting_links_t *links,
    int *count
);

void home_services_webhosting_free(home_services_webhosting_t *home_services_webhosting);

home_services_webhosting_t *home_services_webhosting_parseFromJSON(cJSON *home_services_webhostingJSON);

cJSON *home_services_webhosting_convertToJSON(home_services_webhosting_t *home_services_webhosting);

#endif /* _home_services_webhosting_H_ */

