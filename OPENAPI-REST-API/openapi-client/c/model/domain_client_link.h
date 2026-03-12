/*
 * domain_client_link.h
 *
 * Links and labels for domain-related UI actions.
 */

#ifndef _domain_client_link_H_
#define _domain_client_link_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_client_link_t domain_client_link_t;




typedef struct domain_client_link_t {
    char *label; // string
    char *link; // string
    char *icon; // string
    char *icon_text; // string
    char *help_text; // string

    int _library_owned; // Is the library responsible for freeing this object?
} domain_client_link_t;

__attribute__((deprecated)) domain_client_link_t *domain_client_link_create(
    char *label,
    char *link,
    char *icon,
    char *icon_text,
    char *help_text
);

void domain_client_link_free(domain_client_link_t *domain_client_link);

domain_client_link_t *domain_client_link_parseFromJSON(cJSON *domain_client_linkJSON);

cJSON *domain_client_link_convertToJSON(domain_client_link_t *domain_client_link);

#endif /* _domain_client_link_H_ */

