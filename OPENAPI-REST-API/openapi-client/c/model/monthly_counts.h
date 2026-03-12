/*
 * monthly_counts.h
 *
 * A map of month labels (e.g., \&quot;2024-01\&quot;) to counts for a specific mail status.
 */

#ifndef _monthly_counts_H_
#define _monthly_counts_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct monthly_counts_t monthly_counts_t;




typedef struct monthly_counts_t {

    int _library_owned; // Is the library responsible for freeing this object?
} monthly_counts_t;

__attribute__((deprecated)) monthly_counts_t *monthly_counts_create(
);

void monthly_counts_free(monthly_counts_t *monthly_counts);

monthly_counts_t *monthly_counts_parseFromJSON(cJSON *monthly_countsJSON);

cJSON *monthly_counts_convertToJSON(monthly_counts_t *monthly_counts);

#endif /* _monthly_counts_H_ */

