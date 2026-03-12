/*
 * dns_update_record.h
 *
 * The request data to update a dns record.
 */

#ifndef _dns_update_record_H_
#define _dns_update_record_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dns_update_record_t dns_update_record_t;

#include "dns_record_type.h"



typedef struct dns_update_record_t {
    char *name; // string
    interserver_management_api_dns_record_type__e type; //referenced enum
    char *content; // string
    char *ttl; // string
    char *prio; // string
    char *disabled; // string
    char *ordername; // string
    char *auth; // string

    int _library_owned; // Is the library responsible for freeing this object?
} dns_update_record_t;

__attribute__((deprecated)) dns_update_record_t *dns_update_record_create(
    char *name,
    interserver_management_api_dns_record_type__e type,
    char *content,
    char *ttl,
    char *prio,
    char *disabled,
    char *ordername,
    char *auth
);

void dns_update_record_free(dns_update_record_t *dns_update_record);

dns_update_record_t *dns_update_record_parseFromJSON(cJSON *dns_update_recordJSON);

cJSON *dns_update_record_convertToJSON(dns_update_record_t *dns_update_record);

#endif /* _dns_update_record_H_ */

