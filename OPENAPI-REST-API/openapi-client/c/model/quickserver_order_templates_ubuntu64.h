/*
 * quickserver_order_templates_ubuntu64.h
 *
 * Ubuntu template details.
 */

#ifndef _quickserver_order_templates_ubuntu64_H_
#define _quickserver_order_templates_ubuntu64_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct quickserver_order_templates_ubuntu64_t quickserver_order_templates_ubuntu64_t;




typedef struct quickserver_order_templates_ubuntu64_t {

    int _library_owned; // Is the library responsible for freeing this object?
} quickserver_order_templates_ubuntu64_t;

__attribute__((deprecated)) quickserver_order_templates_ubuntu64_t *quickserver_order_templates_ubuntu64_create(
);

void quickserver_order_templates_ubuntu64_free(quickserver_order_templates_ubuntu64_t *quickserver_order_templates_ubuntu64);

quickserver_order_templates_ubuntu64_t *quickserver_order_templates_ubuntu64_parseFromJSON(cJSON *quickserver_order_templates_ubuntu64JSON);

cJSON *quickserver_order_templates_ubuntu64_convertToJSON(quickserver_order_templates_ubuntu64_t *quickserver_order_templates_ubuntu64);

#endif /* _quickserver_order_templates_ubuntu64_H_ */

