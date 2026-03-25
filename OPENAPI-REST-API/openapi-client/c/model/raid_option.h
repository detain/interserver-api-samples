/*
 * raid_option.h
 *
 * A RAID configuration option available for a dedicated server.
 */

#ifndef _raid_option_H_
#define _raid_option_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct raid_option_t raid_option_t;




typedef struct raid_option_t {
    int *id; //numeric
    char *short_desc; // string
    double *monthly_price; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} raid_option_t;

__attribute__((deprecated)) raid_option_t *raid_option_create(
    int *id,
    char *short_desc,
    double *monthly_price
);

void raid_option_free(raid_option_t *raid_option);

raid_option_t *raid_option_parseFromJSON(cJSON *raid_optionJSON);

cJSON *raid_option_convertToJSON(raid_option_t *raid_option);

#endif /* _raid_option_H_ */

