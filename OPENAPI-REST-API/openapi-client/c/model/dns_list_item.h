/*
 * dns_list_item.h
 *
 * A DNS zone entry with its ID, domain name, and record content.
 */

#ifndef _dns_list_item_H_
#define _dns_list_item_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dns_list_item_t dns_list_item_t;




typedef struct dns_list_item_t {
    int id; //numeric
    char *name; // string
    char *content; // string

    int _library_owned; // Is the library responsible for freeing this object?
} dns_list_item_t;

__attribute__((deprecated)) dns_list_item_t *dns_list_item_create(
    int id,
    char *name,
    char *content
);

void dns_list_item_free(dns_list_item_t *dns_list_item);

dns_list_item_t *dns_list_item_parseFromJSON(cJSON *dns_list_itemJSON);

cJSON *dns_list_item_convertToJSON(dns_list_item_t *dns_list_item);

#endif /* _dns_list_item_H_ */

