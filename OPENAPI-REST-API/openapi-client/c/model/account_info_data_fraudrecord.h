/*
 * account_info_data_fraudrecord.h
 *
 * 
 */

#ifndef _account_info_data_fraudrecord_H_
#define _account_info_data_fraudrecord_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_info_data_fraudrecord_t account_info_data_fraudrecord_t;




typedef struct account_info_data_fraudrecord_t {
    char *score; // string
    char *count; // string
    char *reliability; // string
    char *code; // string

    int _library_owned; // Is the library responsible for freeing this object?
} account_info_data_fraudrecord_t;

__attribute__((deprecated)) account_info_data_fraudrecord_t *account_info_data_fraudrecord_create(
    char *score,
    char *count,
    char *reliability,
    char *code
);

void account_info_data_fraudrecord_free(account_info_data_fraudrecord_t *account_info_data_fraudrecord);

account_info_data_fraudrecord_t *account_info_data_fraudrecord_parseFromJSON(cJSON *account_info_data_fraudrecordJSON);

cJSON *account_info_data_fraudrecord_convertToJSON(account_info_data_fraudrecord_t *account_info_data_fraudrecord);

#endif /* _account_info_data_fraudrecord_H_ */

