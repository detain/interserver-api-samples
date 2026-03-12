/*
 * server_client_link.h
 *
 * 
 */

#ifndef _server_client_link_H_
#define _server_client_link_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct server_client_link_t server_client_link_t;




typedef struct server_client_link_t {
    char *label; // string
    char *link; // string
    char *icon; // string
    char *icon_text; // string
    char *help_text; // string

    int _library_owned; // Is the library responsible for freeing this object?
} server_client_link_t;

__attribute__((deprecated)) server_client_link_t *server_client_link_create(
    char *label,
    char *link,
    char *icon,
    char *icon_text,
    char *help_text
);

void server_client_link_free(server_client_link_t *server_client_link);

server_client_link_t *server_client_link_parseFromJSON(cJSON *server_client_linkJSON);

cJSON *server_client_link_convertToJSON(server_client_link_t *server_client_link);

#endif /* _server_client_link_H_ */

