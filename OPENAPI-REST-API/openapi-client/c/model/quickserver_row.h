/*
 * quickserver_row.h
 *
 * A result row from the &#x60;Quickservers&#x60; &#x60;GET&#x60; request.
 */

#ifndef _quickserver_row_H_
#define _quickserver_row_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct quickserver_row_t quickserver_row_t;




typedef struct quickserver_row_t {
    char *qs_id; // string
    char *qs_name; // string
    char *cost; // string
    char *qs_hostname; // string
    char *qs_status; // string
    char *qs_comment; // string

    int _library_owned; // Is the library responsible for freeing this object?
} quickserver_row_t;

__attribute__((deprecated)) quickserver_row_t *quickserver_row_create(
    char *qs_id,
    char *qs_name,
    char *cost,
    char *qs_hostname,
    char *qs_status,
    char *qs_comment
);

void quickserver_row_free(quickserver_row_t *quickserver_row);

quickserver_row_t *quickserver_row_parseFromJSON(cJSON *quickserver_rowJSON);

cJSON *quickserver_row_convertToJSON(quickserver_row_t *quickserver_row);

#endif /* _quickserver_row_H_ */

