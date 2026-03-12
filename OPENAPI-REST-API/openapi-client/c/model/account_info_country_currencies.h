/*
 * account_info_country_currencies.h
 *
 * Maps country codes to their available currency options.
 */

#ifndef _account_info_country_currencies_H_
#define _account_info_country_currencies_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_info_country_currencies_t account_info_country_currencies_t;




typedef struct account_info_country_currencies_t {

    int _library_owned; // Is the library responsible for freeing this object?
} account_info_country_currencies_t;

__attribute__((deprecated)) account_info_country_currencies_t *account_info_country_currencies_create(
);

void account_info_country_currencies_free(account_info_country_currencies_t *account_info_country_currencies);

account_info_country_currencies_t *account_info_country_currencies_parseFromJSON(cJSON *account_info_country_currenciesJSON);

cJSON *account_info_country_currencies_convertToJSON(account_info_country_currencies_t *account_info_country_currencies);

#endif /* _account_info_country_currencies_H_ */

