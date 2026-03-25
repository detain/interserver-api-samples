/*
 * dns_new_record.h
 *
 * Request data for a new DNS record.
 */

#ifndef _dns_new_record_H_
#define _dns_new_record_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dns_new_record_t dns_new_record_t;

#include "dns_record_type.h"



typedef struct dns_new_record_t {
    char *name; // string
    interserver_management_api_dns_record_type__e type; //referenced enum
    char *content; // string
    int *ttl; //numeric
    int *prio; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} dns_new_record_t;

__attribute__((deprecated)) dns_new_record_t *dns_new_record_create(
    char *name,
    interserver_management_api_dns_record_type__e type,
    char *content,
    int *ttl,
    int *prio
);

void dns_new_record_free(dns_new_record_t *dns_new_record);

dns_new_record_t *dns_new_record_parseFromJSON(cJSON *dns_new_recordJSON);

cJSON *dns_new_record_convertToJSON(dns_new_record_t *dns_new_record);

#endif /* _dns_new_record_H_ */

