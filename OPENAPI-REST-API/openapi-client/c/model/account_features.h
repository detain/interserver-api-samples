/*
 * account_features.h
 *
 * Account Features data.
 */

#ifndef _account_features_H_
#define _account_features_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_features_t account_features_t;




typedef struct account_features_t {
    int *disable_reset; //numeric
    int *disable_reinstall; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} account_features_t;

__attribute__((deprecated)) account_features_t *account_features_create(
    int *disable_reset,
    int *disable_reinstall
);

void account_features_free(account_features_t *account_features);

account_features_t *account_features_parseFromJSON(cJSON *account_featuresJSON);

cJSON *account_features_convertToJSON(account_features_t *account_features);

#endif /* _account_features_H_ */

