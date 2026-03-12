/*
 * backup_client_link.h
 *
 * A navigation link for backup service actions in the client portal.
 */

#ifndef _backup_client_link_H_
#define _backup_client_link_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct backup_client_link_t backup_client_link_t;




typedef struct backup_client_link_t {
    char *label; // string
    char *link; // string
    char *icon; // string
    char *icon_text; // string
    char *help_text; // string
    char *other_attr; // string

    int _library_owned; // Is the library responsible for freeing this object?
} backup_client_link_t;

__attribute__((deprecated)) backup_client_link_t *backup_client_link_create(
    char *label,
    char *link,
    char *icon,
    char *icon_text,
    char *help_text,
    char *other_attr
);

void backup_client_link_free(backup_client_link_t *backup_client_link);

backup_client_link_t *backup_client_link_parseFromJSON(cJSON *backup_client_linkJSON);

cJSON *backup_client_link_convertToJSON(backup_client_link_t *backup_client_link);

#endif /* _backup_client_link_H_ */

