/*
 * dns_record.h
 *
 * A single DNS Record row for a Domain
 */

#ifndef _dns_record_H_
#define _dns_record_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dns_record_t dns_record_t;

#include "dns_record_type.h"



typedef struct dns_record_t {
    char *id; // string
    char *domain_id; // string
    char *name; // string
    interserver_management_api_dns_record_type__e type; //referenced enum
    char *content; // string
    char *ttl; // string
    char *prio; // string
    char *disabled; // string
    char *ordername; // string
    char *auth; // string

    int _library_owned; // Is the library responsible for freeing this object?
} dns_record_t;

__attribute__((deprecated)) dns_record_t *dns_record_create(
    char *id,
    char *domain_id,
    char *name,
    interserver_management_api_dns_record_type__e type,
    char *content,
    char *ttl,
    char *prio,
    char *disabled,
    char *ordername,
    char *auth
);

void dns_record_free(dns_record_t *dns_record);

dns_record_t *dns_record_parseFromJSON(cJSON *dns_recordJSON);

cJSON *dns_record_convertToJSON(dns_record_t *dns_record);

#endif /* _dns_record_H_ */

