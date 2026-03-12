/*
 * quickserver_addons_row.h
 *
 * A single add-on item associated with a QuickServer service.
 */

#ifndef _quickserver_addons_row_H_
#define _quickserver_addons_row_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct quickserver_addons_row_t quickserver_addons_row_t;




typedef struct quickserver_addons_row_t {
    char *desc; // string
    char *value; // string

    int _library_owned; // Is the library responsible for freeing this object?
} quickserver_addons_row_t;

__attribute__((deprecated)) quickserver_addons_row_t *quickserver_addons_row_create(
    char *desc,
    char *value
);

void quickserver_addons_row_free(quickserver_addons_row_t *quickserver_addons_row);

quickserver_addons_row_t *quickserver_addons_row_parseFromJSON(cJSON *quickserver_addons_rowJSON);

cJSON *quickserver_addons_row_convertToJSON(quickserver_addons_row_t *quickserver_addons_row);

#endif /* _quickserver_addons_row_H_ */

