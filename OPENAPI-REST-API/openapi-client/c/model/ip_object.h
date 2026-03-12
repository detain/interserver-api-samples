/*
 * ip_object.h
 *
 * IP Address
 */

#ifndef _ip_object_H_
#define _ip_object_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ip_object_t ip_object_t;




typedef struct ip_object_t {
    char *ip; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ip_object_t;

__attribute__((deprecated)) ip_object_t *ip_object_create(
    char *ip
);

void ip_object_free(ip_object_t *ip_object);

ip_object_t *ip_object_parseFromJSON(cJSON *ip_objectJSON);

cJSON *ip_object_convertToJSON(ip_object_t *ip_object);

#endif /* _ip_object_H_ */

