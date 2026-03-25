/*
 * home_services_licenses.h
 *
 * 
 */

#ifndef _home_services_licenses_H_
#define _home_services_licenses_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct home_services_licenses_t home_services_licenses_t;

#include "home_services_licenses_links.h"



typedef struct home_services_licenses_t {
    struct home_services_licenses_links_t *links; //model
    int *count; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} home_services_licenses_t;

__attribute__((deprecated)) home_services_licenses_t *home_services_licenses_create(
    home_services_licenses_links_t *links,
    int *count
);

void home_services_licenses_free(home_services_licenses_t *home_services_licenses);

home_services_licenses_t *home_services_licenses_parseFromJSON(cJSON *home_services_licensesJSON);

cJSON *home_services_licenses_convertToJSON(home_services_licenses_t *home_services_licenses);

#endif /* _home_services_licenses_H_ */

