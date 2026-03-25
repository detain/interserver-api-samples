/*
 * account_info.h
 *
 * Contains the full account profile including personal info, billing details, OAuth connections, and security settings.
 */

#ifndef _account_info_H_
#define _account_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_info_t account_info_t;

#include "account_info_country_currencies.h"
#include "account_info_data.h"
#include "account_info_limits.h"
#include "account_info_oauth_config.h"
#include "account_info_oauthproviders.h"



typedef struct account_info_t {
    char *custid; // string
    char *ima; // string
    struct account_info_data_t *data; //model
    char *ip; // string
    struct account_info_oauthproviders_t *oauthproviders; //model
    struct account_info_oauth_config_t *oauthconfig; //model
    list_t *oauthadapters; //primitive container
    account_info_limits_t *limits; // custom
    char *language; // string
    account_info_country_currencies_t *country_currencies; // custom
    int *enable_locales; //boolean
    int *enable_currencies; //boolean
    char *gravatar; // string

    int _library_owned; // Is the library responsible for freeing this object?
} account_info_t;

__attribute__((deprecated)) account_info_t *account_info_create(
    char *custid,
    char *ima,
    account_info_data_t *data,
    char *ip,
    account_info_oauthproviders_t *oauthproviders,
    account_info_oauth_config_t *oauthconfig,
    list_t *oauthadapters,
    account_info_limits_t *limits,
    char *language,
    account_info_country_currencies_t *country_currencies,
    int *enable_locales,
    int *enable_currencies,
    char *gravatar
);

void account_info_free(account_info_t *account_info);

account_info_t *account_info_parseFromJSON(cJSON *account_infoJSON);

cJSON *account_info_convertToJSON(account_info_t *account_info);

#endif /* _account_info_H_ */

