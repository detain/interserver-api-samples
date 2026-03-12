/*
 * ip_block.h
 *
 * An IP address block option available for a dedicated server configuration.
 */

#ifndef _ip_block_H_
#define _ip_block_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ip_block_t ip_block_t;




typedef struct ip_block_t {
    int id; //numeric
    char *short_desc; // string
    char *qty; // string
    double monthly_price; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} ip_block_t;

__attribute__((deprecated)) ip_block_t *ip_block_create(
    int id,
    char *short_desc,
    char *qty,
    double monthly_price
);

void ip_block_free(ip_block_t *ip_block);

ip_block_t *ip_block_parseFromJSON(cJSON *ip_blockJSON);

cJSON *ip_block_convertToJSON(ip_block_t *ip_block);

#endif /* _ip_block_H_ */

