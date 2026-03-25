/*
 * service_category.h
 *
 * A Category of Services.  This is the broadest grouping within a module.
 */

#ifndef _service_category_H_
#define _service_category_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct service_category_t service_category_t;




typedef struct service_category_t {
    int *category_id; //numeric
    char *category_name; // string
    char *category_tag; // string
    char *category_module; // string

    int _library_owned; // Is the library responsible for freeing this object?
} service_category_t;

__attribute__((deprecated)) service_category_t *service_category_create(
    int *category_id,
    char *category_name,
    char *category_tag,
    char *category_module
);

void service_category_free(service_category_t *service_category);

service_category_t *service_category_parseFromJSON(cJSON *service_categoryJSON);

cJSON *service_category_convertToJSON(service_category_t *service_category);

#endif /* _service_category_H_ */

