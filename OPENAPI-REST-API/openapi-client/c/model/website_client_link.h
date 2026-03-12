/*
 * website_client_link.h
 *
 * A navigation link for webhosting-related actions in the client portal.
 */

#ifndef _website_client_link_H_
#define _website_client_link_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct website_client_link_t website_client_link_t;




typedef struct website_client_link_t {
    char *label; // string
    char *link; // string
    char *icon; // string
    char *icon_text; // string
    char *help_text; // string
    char *other_attr; // string

    int _library_owned; // Is the library responsible for freeing this object?
} website_client_link_t;

__attribute__((deprecated)) website_client_link_t *website_client_link_create(
    char *label,
    char *link,
    char *icon,
    char *icon_text,
    char *help_text,
    char *other_attr
);

void website_client_link_free(website_client_link_t *website_client_link);

website_client_link_t *website_client_link_parseFromJSON(cJSON *website_client_linkJSON);

cJSON *website_client_link_convertToJSON(website_client_link_t *website_client_link);

#endif /* _website_client_link_H_ */

