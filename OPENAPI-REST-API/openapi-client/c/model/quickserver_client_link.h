/*
 * quickserver_client_link.h
 *
 * A navigation link for QuickServer-related actions in the client portal.
 */

#ifndef _quickserver_client_link_H_
#define _quickserver_client_link_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct quickserver_client_link_t quickserver_client_link_t;




typedef struct quickserver_client_link_t {
    char *label; // string
    char *link; // string
    char *icon; // string
    char *icon_text; // string
    char *help_text; // string
    char *other_attr; // string

    int _library_owned; // Is the library responsible for freeing this object?
} quickserver_client_link_t;

__attribute__((deprecated)) quickserver_client_link_t *quickserver_client_link_create(
    char *label,
    char *link,
    char *icon,
    char *icon_text,
    char *help_text,
    char *other_attr
);

void quickserver_client_link_free(quickserver_client_link_t *quickserver_client_link);

quickserver_client_link_t *quickserver_client_link_parseFromJSON(cJSON *quickserver_client_linkJSON);

cJSON *quickserver_client_link_convertToJSON(quickserver_client_link_t *quickserver_client_link);

#endif /* _quickserver_client_link_H_ */

