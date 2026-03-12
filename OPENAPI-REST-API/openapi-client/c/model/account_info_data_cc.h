/*
 * account_info_data_cc.h
 *
 * Credit card information stored on the account.
 */

#ifndef _account_info_data_cc_H_
#define _account_info_data_cc_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_info_data_cc_t account_info_data_cc_t;

#include "account_info_max_mind_response.h"



typedef struct account_info_data_cc_t {
    char *cc; // string
    char *cc_exp; // string
    char *name; // string
    char *address; // string
    char *city; // string
    char *state; // string
    char *zip; // string
    char *country; // string
    char *maxmind_riskscore; // string
    struct account_info_max_mind_response_t *maxmind; //model
    int verified; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} account_info_data_cc_t;

__attribute__((deprecated)) account_info_data_cc_t *account_info_data_cc_create(
    char *cc,
    char *cc_exp,
    char *name,
    char *address,
    char *city,
    char *state,
    char *zip,
    char *country,
    char *maxmind_riskscore,
    account_info_max_mind_response_t *maxmind,
    int verified
);

void account_info_data_cc_free(account_info_data_cc_t *account_info_data_cc);

account_info_data_cc_t *account_info_data_cc_parseFromJSON(cJSON *account_info_data_ccJSON);

cJSON *account_info_data_cc_convertToJSON(account_info_data_cc_t *account_info_data_cc);

#endif /* _account_info_data_cc_H_ */

