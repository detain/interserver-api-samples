/*
 * bandwidth.h
 *
 * A bandwidth option available for a dedicated server configuration.
 */

#ifndef _bandwidth_H_
#define _bandwidth_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct bandwidth_t bandwidth_t;




typedef struct bandwidth_t {
    int *id; //numeric
    char *short_desc; // string
    double *monthly_price; //numeric
    char *monthly_price_display; // string

    int _library_owned; // Is the library responsible for freeing this object?
} bandwidth_t;

__attribute__((deprecated)) bandwidth_t *bandwidth_create(
    int *id,
    char *short_desc,
    double *monthly_price,
    char *monthly_price_display
);

void bandwidth_free(bandwidth_t *bandwidth);

bandwidth_t *bandwidth_parseFromJSON(cJSON *bandwidthJSON);

cJSON *bandwidth_convertToJSON(bandwidth_t *bandwidth);

#endif /* _bandwidth_H_ */

