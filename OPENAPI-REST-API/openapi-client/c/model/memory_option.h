/*
 * memory_option.h
 *
 * A memory (RAM) upgrade option available for a dedicated server configuration.
 */

#ifndef _memory_option_H_
#define _memory_option_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct memory_option_t memory_option_t;




typedef struct memory_option_t {
    int *id; //numeric
    char *short_desc; // string
    double *monthly_price; //numeric
    char *monthly_price_display; // string

    int _library_owned; // Is the library responsible for freeing this object?
} memory_option_t;

__attribute__((deprecated)) memory_option_t *memory_option_create(
    int *id,
    char *short_desc,
    double *monthly_price,
    char *monthly_price_display
);

void memory_option_free(memory_option_t *memory_option);

memory_option_t *memory_option_parseFromJSON(cJSON *memory_optionJSON);

cJSON *memory_option_convertToJSON(memory_option_t *memory_option);

#endif /* _memory_option_H_ */

