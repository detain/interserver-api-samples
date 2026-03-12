/*
 * services.h
 *
 * The list of service packages.
 */

#ifndef _services_H_
#define _services_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct services_t services_t;

#include "service.h"



typedef struct services_t {

    int _library_owned; // Is the library responsible for freeing this object?
} services_t;

__attribute__((deprecated)) services_t *services_create(
);

void services_free(services_t *services);

services_t *services_parseFromJSON(cJSON *servicesJSON);

cJSON *services_convertToJSON(services_t *services);

#endif /* _services_H_ */

