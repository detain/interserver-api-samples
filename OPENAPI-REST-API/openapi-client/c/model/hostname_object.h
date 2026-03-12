/*
 * hostname_object.h
 *
 * Request specifying the hostname.
 */

#ifndef _hostname_object_H_
#define _hostname_object_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct hostname_object_t hostname_object_t;




typedef struct hostname_object_t {
    char *hostname; // string

    int _library_owned; // Is the library responsible for freeing this object?
} hostname_object_t;

__attribute__((deprecated)) hostname_object_t *hostname_object_create(
    char *hostname
);

void hostname_object_free(hostname_object_t *hostname_object);

hostname_object_t *hostname_object_parseFromJSON(cJSON *hostname_objectJSON);

cJSON *hostname_object_convertToJSON(hostname_object_t *hostname_object);

#endif /* _hostname_object_H_ */

