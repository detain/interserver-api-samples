/*
 * domain_name_server.h
 *
 * A single registered nameserver entry with glue IPs.
 */

#ifndef _domain_name_server_H_
#define _domain_name_server_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_name_server_t domain_name_server_t;




typedef struct domain_name_server_t {
    char *sortorder; // string
    char *name; // string
    char *ipaddress; // string

    int _library_owned; // Is the library responsible for freeing this object?
} domain_name_server_t;

__attribute__((deprecated)) domain_name_server_t *domain_name_server_create(
    char *sortorder,
    char *name,
    char *ipaddress
);

void domain_name_server_free(domain_name_server_t *domain_name_server);

domain_name_server_t *domain_name_server_parseFromJSON(cJSON *domain_name_serverJSON);

cJSON *domain_name_server_convertToJSON(domain_name_server_t *domain_name_server);

#endif /* _domain_name_server_H_ */

