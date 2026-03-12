/*
 * vps_client_link.h
 *
 * A navigation link for VPS-related actions in the client portal.
 */

#ifndef _vps_client_link_H_
#define _vps_client_link_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct vps_client_link_t vps_client_link_t;




typedef struct vps_client_link_t {
    char *label; // string
    char *link; // string
    char *icon; // string
    char *icon_text; // string
    char *help_text; // string

    int _library_owned; // Is the library responsible for freeing this object?
} vps_client_link_t;

__attribute__((deprecated)) vps_client_link_t *vps_client_link_create(
    char *label,
    char *link,
    char *icon,
    char *icon_text,
    char *help_text
);

void vps_client_link_free(vps_client_link_t *vps_client_link);

vps_client_link_t *vps_client_link_parseFromJSON(cJSON *vps_client_linkJSON);

cJSON *vps_client_link_convertToJSON(vps_client_link_t *vps_client_link);

#endif /* _vps_client_link_H_ */

