/*
 * form_values.h
 *
 * Currently selected configuration option IDs for a server order form.
 */

#ifndef _form_values_H_
#define _form_values_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct form_values_t form_values_t;




typedef struct form_values_t {
    int memory; //numeric
    int bandwidth; //numeric
    int ips; //numeric
    int os; //numeric
    int cp; //numeric
    int raid; //numeric
    int hd; //numeric
    int region; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} form_values_t;

__attribute__((deprecated)) form_values_t *form_values_create(
    int memory,
    int bandwidth,
    int ips,
    int os,
    int cp,
    int raid,
    int hd,
    int region
);

void form_values_free(form_values_t *form_values);

form_values_t *form_values_parseFromJSON(cJSON *form_valuesJSON);

cJSON *form_values_convertToJSON(form_values_t *form_values);

#endif /* _form_values_H_ */

