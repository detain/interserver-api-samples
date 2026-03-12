/*
 * home_details_modules_webhosting.h
 *
 * Dashboard module configuration for webhosting services.
 */

#ifndef _home_details_modules_webhosting_H_
#define _home_details_modules_webhosting_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct home_details_modules_webhosting_t home_details_modules_webhosting_t;




typedef struct home_details_modules_webhosting_t {
    char *icon; // string
    char *view_link; // string
    char *heading; // string
    char *buy_link; // string
    char *list_link; // string

    int _library_owned; // Is the library responsible for freeing this object?
} home_details_modules_webhosting_t;

__attribute__((deprecated)) home_details_modules_webhosting_t *home_details_modules_webhosting_create(
    char *icon,
    char *view_link,
    char *heading,
    char *buy_link,
    char *list_link
);

void home_details_modules_webhosting_free(home_details_modules_webhosting_t *home_details_modules_webhosting);

home_details_modules_webhosting_t *home_details_modules_webhosting_parseFromJSON(cJSON *home_details_modules_webhostingJSON);

cJSON *home_details_modules_webhosting_convertToJSON(home_details_modules_webhosting_t *home_details_modules_webhosting);

#endif /* _home_details_modules_webhosting_H_ */

