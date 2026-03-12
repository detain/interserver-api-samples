/*
 * affiliate_traffic_row.h
 *
 * Affiliate Web Traffic Entry
 */

#ifndef _affiliate_traffic_row_H_
#define _affiliate_traffic_row_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct affiliate_traffic_row_t affiliate_traffic_row_t;




typedef struct affiliate_traffic_row_t {
    char *traffic_id; // string
    char *traffic_ip; // string
    char *traffic_url; // string
    char *traffic_affiliate; // string
    char *traffic_referrer; // string
    char *traffic_timestamp; // string

    int _library_owned; // Is the library responsible for freeing this object?
} affiliate_traffic_row_t;

__attribute__((deprecated)) affiliate_traffic_row_t *affiliate_traffic_row_create(
    char *traffic_id,
    char *traffic_ip,
    char *traffic_url,
    char *traffic_affiliate,
    char *traffic_referrer,
    char *traffic_timestamp
);

void affiliate_traffic_row_free(affiliate_traffic_row_t *affiliate_traffic_row);

affiliate_traffic_row_t *affiliate_traffic_row_parseFromJSON(cJSON *affiliate_traffic_rowJSON);

cJSON *affiliate_traffic_row_convertToJSON(affiliate_traffic_row_t *affiliate_traffic_row);

#endif /* _affiliate_traffic_row_H_ */

