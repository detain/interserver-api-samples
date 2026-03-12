/*
 * websites_order_packges.h
 *
 * The packages data.
 */

#ifndef _websites_order_packges_H_
#define _websites_order_packges_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct websites_order_packges_t websites_order_packges_t;

#include "websites_order_packages_info.h"



typedef struct websites_order_packges_t {
    struct websites_order_packages_info_t *_11440; //model

    int _library_owned; // Is the library responsible for freeing this object?
} websites_order_packges_t;

__attribute__((deprecated)) websites_order_packges_t *websites_order_packges_create(
    websites_order_packages_info_t *_11440
);

void websites_order_packges_free(websites_order_packges_t *websites_order_packges);

websites_order_packges_t *websites_order_packges_parseFromJSON(cJSON *websites_order_packgesJSON);

cJSON *websites_order_packges_convertToJSON(websites_order_packges_t *websites_order_packges);

#endif /* _websites_order_packges_H_ */

