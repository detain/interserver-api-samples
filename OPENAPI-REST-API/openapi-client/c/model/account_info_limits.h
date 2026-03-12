/*
 * account_info_limits.h
 *
 * IP address ranges used to restrict account access to specific IPs.
 */

#ifndef _account_info_limits_H_
#define _account_info_limits_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_info_limits_t account_info_limits_t;

#include "account_info_limits_inner.h"



typedef struct account_info_limits_t {

    int _library_owned; // Is the library responsible for freeing this object?
} account_info_limits_t;

__attribute__((deprecated)) account_info_limits_t *account_info_limits_create(
);

void account_info_limits_free(account_info_limits_t *account_info_limits);

account_info_limits_t *account_info_limits_parseFromJSON(cJSON *account_info_limitsJSON);

cJSON *account_info_limits_convertToJSON(account_info_limits_t *account_info_limits);

#endif /* _account_info_limits_H_ */

