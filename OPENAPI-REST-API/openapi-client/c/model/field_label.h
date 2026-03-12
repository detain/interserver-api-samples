/*
 * field_label.h
 *
 * A display label for a server order form field.
 */

#ifndef _field_label_H_
#define _field_label_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_label_t field_label_t;




typedef struct field_label_t {
    char *name; // string
    int active; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} field_label_t;

__attribute__((deprecated)) field_label_t *field_label_create(
    char *name,
    int active
);

void field_label_free(field_label_t *field_label);

field_label_t *field_label_parseFromJSON(cJSON *field_labelJSON);

cJSON *field_label_convertToJSON(field_label_t *field_label);

#endif /* _field_label_H_ */

