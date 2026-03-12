/*
 * services_info.h
 *
 * Contains the complete catalog of available modules, services, service types, and service categories.
 */

#ifndef _services_info_H_
#define _services_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct services_info_t services_info_t;

#include "modules.h"
#include "service_categories.h"
#include "service_types.h"
#include "services.h"



typedef struct services_info_t {
    modules_t *modules; // custom
    services_t *services; // custom
    service_types_t *service_types; // custom
    service_categories_t *service_categories; // custom

    int _library_owned; // Is the library responsible for freeing this object?
} services_info_t;

__attribute__((deprecated)) services_info_t *services_info_create(
    modules_t *modules,
    services_t *services,
    service_types_t *service_types,
    service_categories_t *service_categories
);

void services_info_free(services_info_t *services_info);

services_info_t *services_info_parseFromJSON(cJSON *services_infoJSON);

cJSON *services_info_convertToJSON(services_info_t *services_info);

#endif /* _services_info_H_ */

