/*
 * account_info_limits_inner.h
 *
 * 
 */

#ifndef _account_info_limits_inner_H_
#define _account_info_limits_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_info_limits_inner_t account_info_limits_inner_t;




typedef struct account_info_limits_inner_t {
    char *start; // string
    char *end; // string

    int _library_owned; // Is the library responsible for freeing this object?
} account_info_limits_inner_t;

__attribute__((deprecated)) account_info_limits_inner_t *account_info_limits_inner_create(
    char *start,
    char *end
);

void account_info_limits_inner_free(account_info_limits_inner_t *account_info_limits_inner);

account_info_limits_inner_t *account_info_limits_inner_parseFromJSON(cJSON *account_info_limits_innerJSON);

cJSON *account_info_limits_inner_convertToJSON(account_info_limits_inner_t *account_info_limits_inner);

#endif /* _account_info_limits_inner_H_ */

