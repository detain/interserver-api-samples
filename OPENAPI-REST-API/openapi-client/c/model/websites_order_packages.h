/*
 * websites_order_packages.h
 *
 * Schema for the packages field in WebsitesOrder
 */

#ifndef _websites_order_packages_H_
#define _websites_order_packages_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct websites_order_packages_t websites_order_packages_t;




typedef struct websites_order_packages_t {
    char *_11447; // string

    int _library_owned; // Is the library responsible for freeing this object?
} websites_order_packages_t;

__attribute__((deprecated)) websites_order_packages_t *websites_order_packages_create(
    char *_11447
);

void websites_order_packages_free(websites_order_packages_t *websites_order_packages);

websites_order_packages_t *websites_order_packages_parseFromJSON(cJSON *websites_order_packagesJSON);

cJSON *websites_order_packages_convertToJSON(websites_order_packages_t *websites_order_packages);

#endif /* _websites_order_packages_H_ */

