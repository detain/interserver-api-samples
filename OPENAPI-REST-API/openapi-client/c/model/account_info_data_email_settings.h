/*
 * account_info_data_email_settings.h
 *
 * 
 */

#ifndef _account_info_data_email_settings_H_
#define _account_info_data_email_settings_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_info_data_email_settings_t account_info_data_email_settings_t;




typedef struct account_info_data_email_settings_t {
    char *admin_cc_bad_response; // string
    char *admin_mass_communications_tpl; // string

    int _library_owned; // Is the library responsible for freeing this object?
} account_info_data_email_settings_t;

__attribute__((deprecated)) account_info_data_email_settings_t *account_info_data_email_settings_create(
    char *admin_cc_bad_response,
    char *admin_mass_communications_tpl
);

void account_info_data_email_settings_free(account_info_data_email_settings_t *account_info_data_email_settings);

account_info_data_email_settings_t *account_info_data_email_settings_parseFromJSON(cJSON *account_info_data_email_settingsJSON);

cJSON *account_info_data_email_settings_convertToJSON(account_info_data_email_settings_t *account_info_data_email_settings);

#endif /* _account_info_data_email_settings_H_ */

