/*
 * license_client_link.h
 *
 * 
 */

#ifndef _license_client_link_H_
#define _license_client_link_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct license_client_link_t license_client_link_t;




typedef struct license_client_link_t {
    char *label; // string
    char *link; // string
    char *icon; // string
    char *help_text; // string
    char *icon_text; // string
    char *other_attr; // string

    int _library_owned; // Is the library responsible for freeing this object?
} license_client_link_t;

__attribute__((deprecated)) license_client_link_t *license_client_link_create(
    char *label,
    char *link,
    char *icon,
    char *help_text,
    char *icon_text,
    char *other_attr
);

void license_client_link_free(license_client_link_t *license_client_link);

license_client_link_t *license_client_link_parseFromJSON(cJSON *license_client_linkJSON);

cJSON *license_client_link_convertToJSON(license_client_link_t *license_client_link);

#endif /* _license_client_link_H_ */

