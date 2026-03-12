/*
 * service_categories.h
 *
 * The listing of the categories for the services.
 */

#ifndef _service_categories_H_
#define _service_categories_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct service_categories_t service_categories_t;

#include "service_category.h"



typedef struct service_categories_t {

    int _library_owned; // Is the library responsible for freeing this object?
} service_categories_t;

__attribute__((deprecated)) service_categories_t *service_categories_create(
);

void service_categories_free(service_categories_t *service_categories);

service_categories_t *service_categories_parseFromJSON(cJSON *service_categoriesJSON);

cJSON *service_categories_convertToJSON(service_categories_t *service_categories);

#endif /* _service_categories_H_ */

