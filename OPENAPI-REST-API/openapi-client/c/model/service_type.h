/*
 * service_type.h
 *
 * A general grouping of services within a category.
 */

#ifndef _service_type_H_
#define _service_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct service_type_t service_type_t;




typedef struct service_type_t {
    int st_id; //numeric
    char *st_name; // string
    int st_category; //numeric
    char *st_module; // string

    int _library_owned; // Is the library responsible for freeing this object?
} service_type_t;

__attribute__((deprecated)) service_type_t *service_type_create(
    int st_id,
    char *st_name,
    int st_category,
    char *st_module
);

void service_type_free(service_type_t *service_type);

service_type_t *service_type_parseFromJSON(cJSON *service_typeJSON);

cJSON *service_type_convertToJSON(service_type_t *service_type);

#endif /* _service_type_H_ */

