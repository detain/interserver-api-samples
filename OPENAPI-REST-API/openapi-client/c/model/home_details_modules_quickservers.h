/*
 * home_details_modules_quickservers.h
 *
 * Dashboard module configuration for QuickServer services.
 */

#ifndef _home_details_modules_quickservers_H_
#define _home_details_modules_quickservers_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct home_details_modules_quickservers_t home_details_modules_quickservers_t;




typedef struct home_details_modules_quickservers_t {
    char *icon; // string
    char *view_link; // string
    char *heading; // string
    char *buy_link; // string
    char *list_link; // string

    int _library_owned; // Is the library responsible for freeing this object?
} home_details_modules_quickservers_t;

__attribute__((deprecated)) home_details_modules_quickservers_t *home_details_modules_quickservers_create(
    char *icon,
    char *view_link,
    char *heading,
    char *buy_link,
    char *list_link
);

void home_details_modules_quickservers_free(home_details_modules_quickservers_t *home_details_modules_quickservers);

home_details_modules_quickservers_t *home_details_modules_quickservers_parseFromJSON(cJSON *home_details_modules_quickserversJSON);

cJSON *home_details_modules_quickservers_convertToJSON(home_details_modules_quickservers_t *home_details_modules_quickservers);

#endif /* _home_details_modules_quickservers_H_ */

