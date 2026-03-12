/*
 * reverse_dns_entries.h
 *
 * The Reverse DNS entries.
 */

#ifndef _reverse_dns_entries_H_
#define _reverse_dns_entries_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct reverse_dns_entries_t reverse_dns_entries_t;

#include "any_type.h"



typedef struct reverse_dns_entries_t {
    list_t* ips; //map

    int _library_owned; // Is the library responsible for freeing this object?
} reverse_dns_entries_t;

__attribute__((deprecated)) reverse_dns_entries_t *reverse_dns_entries_create(
    list_t* ips
);

void reverse_dns_entries_free(reverse_dns_entries_t *reverse_dns_entries);

reverse_dns_entries_t *reverse_dns_entries_parseFromJSON(cJSON *reverse_dns_entriesJSON);

cJSON *reverse_dns_entries_convertToJSON(reverse_dns_entries_t *reverse_dns_entries);

#endif /* _reverse_dns_entries_H_ */

