/*
 * operating_system.h
 *
 * An operating system option available for server provisioning.
 */

#ifndef _operating_system_H_
#define _operating_system_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct operating_system_t operating_system_t;




typedef struct operating_system_t {
    int *id; //numeric
    char *short_desc; // string
    double *monthly_price; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} operating_system_t;

__attribute__((deprecated)) operating_system_t *operating_system_create(
    int *id,
    char *short_desc,
    double *monthly_price
);

void operating_system_free(operating_system_t *operating_system);

operating_system_t *operating_system_parseFromJSON(cJSON *operating_systemJSON);

cJSON *operating_system_convertToJSON(operating_system_t *operating_system);

#endif /* _operating_system_H_ */

