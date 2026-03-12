/*
 * scrub_ip_place_order.h
 *
 * Place ScrubIP Order
 */

#ifndef _scrub_ip_place_order_H_
#define _scrub_ip_place_order_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct scrub_ip_place_order_t scrub_ip_place_order_t;




typedef struct scrub_ip_place_order_t {
    int service_type; //numeric
    char *ip; // string

    int _library_owned; // Is the library responsible for freeing this object?
} scrub_ip_place_order_t;

__attribute__((deprecated)) scrub_ip_place_order_t *scrub_ip_place_order_create(
    int service_type,
    char *ip
);

void scrub_ip_place_order_free(scrub_ip_place_order_t *scrub_ip_place_order);

scrub_ip_place_order_t *scrub_ip_place_order_parseFromJSON(cJSON *scrub_ip_place_orderJSON);

cJSON *scrub_ip_place_order_convertToJSON(scrub_ip_place_order_t *scrub_ip_place_order);

#endif /* _scrub_ip_place_order_H_ */

