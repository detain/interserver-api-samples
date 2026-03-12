/*
 * modules.h
 *
 * The modules and settings.
 */

#ifndef _modules_H_
#define _modules_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct modules_t modules_t;

#include "module_settings.h"



typedef struct modules_t {

    int _library_owned; // Is the library responsible for freeing this object?
} modules_t;

__attribute__((deprecated)) modules_t *modules_create(
);

void modules_free(modules_t *modules);

modules_t *modules_parseFromJSON(cJSON *modulesJSON);

cJSON *modules_convertToJSON(modules_t *modules);

#endif /* _modules_H_ */

