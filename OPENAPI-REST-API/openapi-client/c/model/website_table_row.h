/*
 * website_table_row.h
 *
 * 
 */

#ifndef _website_table_row_H_
#define _website_table_row_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct website_table_row_t website_table_row_t;




typedef struct website_table_row_t {
    char *desc; // string
    char *value; // string

    int _library_owned; // Is the library responsible for freeing this object?
} website_table_row_t;

__attribute__((deprecated)) website_table_row_t *website_table_row_create(
    char *desc,
    char *value
);

void website_table_row_free(website_table_row_t *website_table_row);

website_table_row_t *website_table_row_parseFromJSON(cJSON *website_table_rowJSON);

cJSON *website_table_row_convertToJSON(website_table_row_t *website_table_row);

#endif /* _website_table_row_H_ */

