/*
 * website_table.h
 *
 * 
 */

#ifndef _website_table_H_
#define _website_table_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct website_table_t website_table_t;

#include "website_table_row.h"



typedef struct website_table_t {
    char *title; // string
    list_t *rows; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} website_table_t;

__attribute__((deprecated)) website_table_t *website_table_create(
    char *title,
    list_t *rows
);

void website_table_free(website_table_t *website_table);

website_table_t *website_table_parseFromJSON(cJSON *website_tableJSON);

cJSON *website_table_convertToJSON(website_table_t *website_table);

#endif /* _website_table_H_ */

