/*
 * account_info_data_extra.h
 *
 * 
 */

#ifndef _account_info_data_extra_H_
#define _account_info_data_extra_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_info_data_extra_t account_info_data_extra_t;




typedef struct account_info_data_extra_t {
    char *private_whois; // string

    int _library_owned; // Is the library responsible for freeing this object?
} account_info_data_extra_t;

__attribute__((deprecated)) account_info_data_extra_t *account_info_data_extra_create(
    char *private_whois
);

void account_info_data_extra_free(account_info_data_extra_t *account_info_data_extra);

account_info_data_extra_t *account_info_data_extra_parseFromJSON(cJSON *account_info_data_extraJSON);

cJSON *account_info_data_extra_convertToJSON(account_info_data_extra_t *account_info_data_extra);

#endif /* _account_info_data_extra_H_ */

