/*
 * mail_client_link.h
 *
 * A navigation link for mail service actions in the client portal.
 */

#ifndef _mail_client_link_H_
#define _mail_client_link_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mail_client_link_t mail_client_link_t;




typedef struct mail_client_link_t {
    char *label; // string
    char *link; // string
    char *icon; // string
    char *icon_text; // string
    char *help_text; // string
    char *other_attr; // string

    int _library_owned; // Is the library responsible for freeing this object?
} mail_client_link_t;

__attribute__((deprecated)) mail_client_link_t *mail_client_link_create(
    char *label,
    char *link,
    char *icon,
    char *icon_text,
    char *help_text,
    char *other_attr
);

void mail_client_link_free(mail_client_link_t *mail_client_link);

mail_client_link_t *mail_client_link_parseFromJSON(cJSON *mail_client_linkJSON);

cJSON *mail_client_link_convertToJSON(mail_client_link_t *mail_client_link);

#endif /* _mail_client_link_H_ */

