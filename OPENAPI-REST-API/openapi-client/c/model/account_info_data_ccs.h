/*
 * account_info_data_ccs.h
 *
 * Collection of credit cards on the account, keyed by card ID.
 */

#ifndef _account_info_data_ccs_H_
#define _account_info_data_ccs_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_info_data_ccs_t account_info_data_ccs_t;

#include "account_info_data_cc.h"



typedef struct account_info_data_ccs_t {

    int _library_owned; // Is the library responsible for freeing this object?
} account_info_data_ccs_t;

__attribute__((deprecated)) account_info_data_ccs_t *account_info_data_ccs_create(
);

void account_info_data_ccs_free(account_info_data_ccs_t *account_info_data_ccs);

account_info_data_ccs_t *account_info_data_ccs_parseFromJSON(cJSON *account_info_data_ccsJSON);

cJSON *account_info_data_ccs_convertToJSON(account_info_data_ccs_t *account_info_data_ccs);

#endif /* _account_info_data_ccs_H_ */

