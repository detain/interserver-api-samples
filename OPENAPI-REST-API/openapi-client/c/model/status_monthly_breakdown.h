/*
 * status_monthly_breakdown.h
 *
 * Monthly mail delivery status breakdown, showing counts per status category.
 */

#ifndef _status_monthly_breakdown_H_
#define _status_monthly_breakdown_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct status_monthly_breakdown_t status_monthly_breakdown_t;

#include "monthly_counts.h"



typedef struct status_monthly_breakdown_t {
    monthly_counts_t *_default; // custom
    monthly_counts_t *failed; // custom
    monthly_counts_t *rejected; // custom
    monthly_counts_t *pending; // custom
    monthly_counts_t *locked; // custom
    monthly_counts_t *paid; // custom

    int _library_owned; // Is the library responsible for freeing this object?
} status_monthly_breakdown_t;

__attribute__((deprecated)) status_monthly_breakdown_t *status_monthly_breakdown_create(
    monthly_counts_t *_default,
    monthly_counts_t *failed,
    monthly_counts_t *rejected,
    monthly_counts_t *pending,
    monthly_counts_t *locked,
    monthly_counts_t *paid
);

void status_monthly_breakdown_free(status_monthly_breakdown_t *status_monthly_breakdown);

status_monthly_breakdown_t *status_monthly_breakdown_parseFromJSON(cJSON *status_monthly_breakdownJSON);

cJSON *status_monthly_breakdown_convertToJSON(status_monthly_breakdown_t *status_monthly_breakdown);

#endif /* _status_monthly_breakdown_H_ */

