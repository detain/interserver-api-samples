/*
 * server_ipmi_live_info.h
 *
 * Information about the IPMI connection.
 */

#ifndef _server_ipmi_live_info_H_
#define _server_ipmi_live_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct server_ipmi_live_info_t server_ipmi_live_info_t;




typedef struct server_ipmi_live_info_t {
    char *text; // string
    char *public_ip; // string
    char *allowed_ip; // string
    char *client_username; // string
    char *client_password; // string

    int _library_owned; // Is the library responsible for freeing this object?
} server_ipmi_live_info_t;

__attribute__((deprecated)) server_ipmi_live_info_t *server_ipmi_live_info_create(
    char *text,
    char *public_ip,
    char *allowed_ip,
    char *client_username,
    char *client_password
);

void server_ipmi_live_info_free(server_ipmi_live_info_t *server_ipmi_live_info);

server_ipmi_live_info_t *server_ipmi_live_info_parseFromJSON(cJSON *server_ipmi_live_infoJSON);

cJSON *server_ipmi_live_info_convertToJSON(server_ipmi_live_info_t *server_ipmi_live_info);

#endif /* _server_ipmi_live_info_H_ */

