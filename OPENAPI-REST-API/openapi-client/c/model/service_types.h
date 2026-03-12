/*
 * service_types.h
 *
 * The listing of service types
 */

#ifndef _service_types_H_
#define _service_types_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct service_types_t service_types_t;

#include "service_type.h"



typedef struct service_types_t {

    int _library_owned; // Is the library responsible for freeing this object?
} service_types_t;

__attribute__((deprecated)) service_types_t *service_types_create(
);

void service_types_free(service_types_t *service_types);

service_types_t *service_types_parseFromJSON(cJSON *service_typesJSON);

cJSON *service_types_convertToJSON(service_types_t *service_types);

#endif /* _service_types_H_ */

