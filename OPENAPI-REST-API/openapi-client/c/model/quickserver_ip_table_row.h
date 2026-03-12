/*
 * quickserver_ip_table_row.h
 *
 * A single row in the QuickServer IP information table.
 */

#ifndef _quickserver_ip_table_row_H_
#define _quickserver_ip_table_row_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct quickserver_ip_table_row_t quickserver_ip_table_row_t;




typedef struct quickserver_ip_table_row_t {
    char *desc; // string
    char *value; // string

    int _library_owned; // Is the library responsible for freeing this object?
} quickserver_ip_table_row_t;

__attribute__((deprecated)) quickserver_ip_table_row_t *quickserver_ip_table_row_create(
    char *desc,
    char *value
);

void quickserver_ip_table_row_free(quickserver_ip_table_row_t *quickserver_ip_table_row);

quickserver_ip_table_row_t *quickserver_ip_table_row_parseFromJSON(cJSON *quickserver_ip_table_rowJSON);

cJSON *quickserver_ip_table_row_convertToJSON(quickserver_ip_table_row_t *quickserver_ip_table_row);

#endif /* _quickserver_ip_table_row_H_ */

