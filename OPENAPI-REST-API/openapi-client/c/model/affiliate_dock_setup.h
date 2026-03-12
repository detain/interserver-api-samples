/*
 * affiliate_dock_setup.h
 *
 * Affiliate Landing Page information.
 */

#ifndef _affiliate_dock_setup_H_
#define _affiliate_dock_setup_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct affiliate_dock_setup_t affiliate_dock_setup_t;




typedef struct affiliate_dock_setup_t {
    char *affiliate_dock_title; // string
    char *affiliate_dock_description; // string
    char *referrer_coupon; // string

    int _library_owned; // Is the library responsible for freeing this object?
} affiliate_dock_setup_t;

__attribute__((deprecated)) affiliate_dock_setup_t *affiliate_dock_setup_create(
    char *affiliate_dock_title,
    char *affiliate_dock_description,
    char *referrer_coupon
);

void affiliate_dock_setup_free(affiliate_dock_setup_t *affiliate_dock_setup);

affiliate_dock_setup_t *affiliate_dock_setup_parseFromJSON(cJSON *affiliate_dock_setupJSON);

cJSON *affiliate_dock_setup_convertToJSON(affiliate_dock_setup_t *affiliate_dock_setup);

#endif /* _affiliate_dock_setup_H_ */

