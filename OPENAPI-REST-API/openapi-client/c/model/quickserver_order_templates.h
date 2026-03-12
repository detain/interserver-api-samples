/*
 * quickserver_order_templates.h
 *
 * Templates details.
 */

#ifndef _quickserver_order_templates_H_
#define _quickserver_order_templates_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct quickserver_order_templates_t quickserver_order_templates_t;

#include "quickserver_order_templates_ubuntu64.h"



typedef struct quickserver_order_templates_t {
    quickserver_order_templates_ubuntu64_t *ubuntu; // custom

    int _library_owned; // Is the library responsible for freeing this object?
} quickserver_order_templates_t;

__attribute__((deprecated)) quickserver_order_templates_t *quickserver_order_templates_create(
    quickserver_order_templates_ubuntu64_t *ubuntu
);

void quickserver_order_templates_free(quickserver_order_templates_t *quickserver_order_templates);

quickserver_order_templates_t *quickserver_order_templates_parseFromJSON(cJSON *quickserver_order_templatesJSON);

cJSON *quickserver_order_templates_convertToJSON(quickserver_order_templates_t *quickserver_order_templates);

#endif /* _quickserver_order_templates_H_ */

