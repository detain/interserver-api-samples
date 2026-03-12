/*
 * websites_order_service_types.h
 *
 * The service types data.
 */

#ifndef _websites_order_service_types_H_
#define _websites_order_service_types_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct websites_order_service_types_t websites_order_service_types_t;




typedef struct websites_order_service_types_t {
    struct websites_order_service_types_t *_11447; //model

    int _library_owned; // Is the library responsible for freeing this object?
} websites_order_service_types_t;

__attribute__((deprecated)) websites_order_service_types_t *websites_order_service_types_create(
    websites_order_service_types_t *_11447
);

void websites_order_service_types_free(websites_order_service_types_t *websites_order_service_types);

websites_order_service_types_t *websites_order_service_types_parseFromJSON(cJSON *websites_order_service_typesJSON);

cJSON *websites_order_service_types_convertToJSON(websites_order_service_types_t *websites_order_service_types);

#endif /* _websites_order_service_types_H_ */

