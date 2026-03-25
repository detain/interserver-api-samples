/*
 * server_ipmi_live_request.h
 *
 * Request body to setup an IPMI Live connection.
 */

#ifndef _server_ipmi_live_request_H_
#define _server_ipmi_live_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct server_ipmi_live_request_t server_ipmi_live_request_t;




typedef struct server_ipmi_live_request_t {
    char *ip; // string
    int *asset; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} server_ipmi_live_request_t;

__attribute__((deprecated)) server_ipmi_live_request_t *server_ipmi_live_request_create(
    char *ip,
    int *asset
);

void server_ipmi_live_request_free(server_ipmi_live_request_t *server_ipmi_live_request);

server_ipmi_live_request_t *server_ipmi_live_request_parseFromJSON(cJSON *server_ipmi_live_requestJSON);

cJSON *server_ipmi_live_request_convertToJSON(server_ipmi_live_request_t *server_ipmi_live_request);

#endif /* _server_ipmi_live_request_H_ */

