/*
 * quickserver_addons.h
 *
 * 
 */

#ifndef _quickserver_addons_H_
#define _quickserver_addons_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct quickserver_addons_t quickserver_addons_t;

#include "quickserver_addons_row.h"



typedef struct quickserver_addons_t {
    char *title; // string
    list_t *rows; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} quickserver_addons_t;

__attribute__((deprecated)) quickserver_addons_t *quickserver_addons_create(
    char *title,
    list_t *rows
);

void quickserver_addons_free(quickserver_addons_t *quickserver_addons);

quickserver_addons_t *quickserver_addons_parseFromJSON(cJSON *quickserver_addonsJSON);

cJSON *quickserver_addons_convertToJSON(quickserver_addons_t *quickserver_addons);

#endif /* _quickserver_addons_H_ */

