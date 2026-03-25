/*
 * tickets_count_array.h
 *
 * 
 */

#ifndef _tickets_count_array_H_
#define _tickets_count_array_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tickets_count_array_t tickets_count_array_t;




typedef struct tickets_count_array_t {
    int *open; //numeric
    int *on_hold; //numeric
    int *closed; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} tickets_count_array_t;

__attribute__((deprecated)) tickets_count_array_t *tickets_count_array_create(
    int *open,
    int *on_hold,
    int *closed
);

void tickets_count_array_free(tickets_count_array_t *tickets_count_array);

tickets_count_array_t *tickets_count_array_parseFromJSON(cJSON *tickets_count_arrayJSON);

cJSON *tickets_count_array_convertToJSON(tickets_count_array_t *tickets_count_array);

#endif /* _tickets_count_array_H_ */

