/*
 * quickserver_service_extra.h
 *
 * 
 */

#ifndef _quickserver_service_extra_H_
#define _quickserver_service_extra_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct quickserver_service_extra_t quickserver_service_extra_t;




typedef struct quickserver_service_extra_t {
    char *platform; // string

    int _library_owned; // Is the library responsible for freeing this object?
} quickserver_service_extra_t;

__attribute__((deprecated)) quickserver_service_extra_t *quickserver_service_extra_create(
    char *platform
);

void quickserver_service_extra_free(quickserver_service_extra_t *quickserver_service_extra);

quickserver_service_extra_t *quickserver_service_extra_parseFromJSON(cJSON *quickserver_service_extraJSON);

cJSON *quickserver_service_extra_convertToJSON(quickserver_service_extra_t *quickserver_service_extra);

#endif /* _quickserver_service_extra_H_ */

