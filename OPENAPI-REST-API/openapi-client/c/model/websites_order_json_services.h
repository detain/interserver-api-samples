/*
 * websites_order_json_services.h
 *
 * Schema for the jsonServices field in WebsitesOrder
 */

#ifndef _websites_order_json_services_H_
#define _websites_order_json_services_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct websites_order_json_services_t websites_order_json_services_t;




typedef struct websites_order_json_services_t {
    char *_11447; // string

    int _library_owned; // Is the library responsible for freeing this object?
} websites_order_json_services_t;

__attribute__((deprecated)) websites_order_json_services_t *websites_order_json_services_create(
    char *_11447
);

void websites_order_json_services_free(websites_order_json_services_t *websites_order_json_services);

websites_order_json_services_t *websites_order_json_services_parseFromJSON(cJSON *websites_order_json_servicesJSON);

cJSON *websites_order_json_services_convertToJSON(websites_order_json_services_t *websites_order_json_services);

#endif /* _websites_order_json_services_H_ */

