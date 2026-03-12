#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_info_data_email_settings.h"



static account_info_data_email_settings_t *account_info_data_email_settings_create_internal(
    char *admin_cc_bad_response,
    char *admin_mass_communications_tpl
    ) {
    account_info_data_email_settings_t *account_info_data_email_settings_local_var = malloc(sizeof(account_info_data_email_settings_t));
    if (!account_info_data_email_settings_local_var) {
        return NULL;
    }
    account_info_data_email_settings_local_var->admin_cc_bad_response = admin_cc_bad_response;
    account_info_data_email_settings_local_var->admin_mass_communications_tpl = admin_mass_communications_tpl;

    account_info_data_email_settings_local_var->_library_owned = 1;
    return account_info_data_email_settings_local_var;
}

__attribute__((deprecated)) account_info_data_email_settings_t *account_info_data_email_settings_create(
    char *admin_cc_bad_response,
    char *admin_mass_communications_tpl
    ) {
    return account_info_data_email_settings_create_internal (
        admin_cc_bad_response,
        admin_mass_communications_tpl
        );
}

void account_info_data_email_settings_free(account_info_data_email_settings_t *account_info_data_email_settings) {
    if(NULL == account_info_data_email_settings){
        return ;
    }
    if(account_info_data_email_settings->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "account_info_data_email_settings_free");
        return ;
    }
    listEntry_t *listEntry;
    if (account_info_data_email_settings->admin_cc_bad_response) {
        free(account_info_data_email_settings->admin_cc_bad_response);
        account_info_data_email_settings->admin_cc_bad_response = NULL;
    }
    if (account_info_data_email_settings->admin_mass_communications_tpl) {
        free(account_info_data_email_settings->admin_mass_communications_tpl);
        account_info_data_email_settings->admin_mass_communications_tpl = NULL;
    }
    free(account_info_data_email_settings);
}

cJSON *account_info_data_email_settings_convertToJSON(account_info_data_email_settings_t *account_info_data_email_settings) {
    cJSON *item = cJSON_CreateObject();

    // account_info_data_email_settings->admin_cc_bad_response
    if(account_info_data_email_settings->admin_cc_bad_response) {
    if(cJSON_AddStringToObject(item, "admin/cc_bad_response", account_info_data_email_settings->admin_cc_bad_response) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data_email_settings->admin_mass_communications_tpl
    if(account_info_data_email_settings->admin_mass_communications_tpl) {
    if(cJSON_AddStringToObject(item, "admin/mass_communications.tpl", account_info_data_email_settings->admin_mass_communications_tpl) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

account_info_data_email_settings_t *account_info_data_email_settings_parseFromJSON(cJSON *account_info_data_email_settingsJSON){

    account_info_data_email_settings_t *account_info_data_email_settings_local_var = NULL;

    // account_info_data_email_settings->admin_cc_bad_response
    cJSON *admin_cc_bad_response = cJSON_GetObjectItemCaseSensitive(account_info_data_email_settingsJSON, "admin/cc_bad_response");
    if (cJSON_IsNull(admin_cc_bad_response)) {
        admin_cc_bad_response = NULL;
    }
    if (admin_cc_bad_response) { 
    if(!cJSON_IsString(admin_cc_bad_response) && !cJSON_IsNull(admin_cc_bad_response))
    {
    goto end; //String
    }
    }

    // account_info_data_email_settings->admin_mass_communications_tpl
    cJSON *admin_mass_communications_tpl = cJSON_GetObjectItemCaseSensitive(account_info_data_email_settingsJSON, "admin/mass_communications.tpl");
    if (cJSON_IsNull(admin_mass_communications_tpl)) {
        admin_mass_communications_tpl = NULL;
    }
    if (admin_mass_communications_tpl) { 
    if(!cJSON_IsString(admin_mass_communications_tpl) && !cJSON_IsNull(admin_mass_communications_tpl))
    {
    goto end; //String
    }
    }


    account_info_data_email_settings_local_var = account_info_data_email_settings_create_internal (
        admin_cc_bad_response && !cJSON_IsNull(admin_cc_bad_response) ? strdup(admin_cc_bad_response->valuestring) : NULL,
        admin_mass_communications_tpl && !cJSON_IsNull(admin_mass_communications_tpl) ? strdup(admin_mass_communications_tpl->valuestring) : NULL
        );

    return account_info_data_email_settings_local_var;
end:
    return NULL;

}
