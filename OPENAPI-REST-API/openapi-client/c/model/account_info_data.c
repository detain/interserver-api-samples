#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "account_info_data.h"



static account_info_data_t *account_info_data_create_internal(
    char *group,
    char *address,
    char *city,
    char *country,
    char *disable_cc,
    char *fraudrecord_score,
    char *ima,
    char *name,
    char *payment_method,
    char *phone,
    char *pin,
    char *state,
    char *status,
    char *zip,
    char *account_id,
    char *account_lid,
    char *address2,
    char *affiliate_dock_description,
    char *affiliate_dock_title,
    char *affiliate_payment_method,
    char *affiliate_paypal,
    char *cc,
    char *cc_auto,
    char *cc_exp,
    char *cc_type,
    char *cc_whitelist,
    account_info_data_ccs_t *ccs,
    char *ccs_added,
    char *company,
    char *currency,
    char *disable_reinstall,
    char *disable_reset,
    char *email,
    char *email_abuse,
    account_info_data_email_settings_t *email_settings,
    account_info_data_extra_t *extra,
    char *facebook_id,
    char *facebook_url,
    char *firstname,
    account_info_data_fraudrecord_t *fraudrecord,
    char *github_id,
    char *github_url,
    char *google_id,
    char *google_url,
    char *innertell_id,
    char *lastname,
    char *locale,
    account_info_max_mind_response_t *maxmind,
    char *maxmind_score,
    char *mb_id,
    char *modernbill_id,
    char *picture,
    char *referrer_coupon,
    char *reseller_markup,
    char *username,
    char *ssh_key,
    char *ssh_key_wrapped,
    char *api_key,
    char *api_key_wrapped,
    char *_2fa_google_key,
    int *_2fa_google_enabled,
    int *_2fa_google,
    char *_2fa_google_split,
    char *_2fa_google_qr
    ) {
    account_info_data_t *account_info_data_local_var = malloc(sizeof(account_info_data_t));
    if (!account_info_data_local_var) {
        return NULL;
    }
    memset(account_info_data_local_var, 0, sizeof(account_info_data_t));
    account_info_data_local_var->_library_owned = 1;
    account_info_data_local_var->group = group;
    account_info_data_local_var->address = address;
    account_info_data_local_var->city = city;
    account_info_data_local_var->country = country;
    account_info_data_local_var->disable_cc = disable_cc;
    account_info_data_local_var->fraudrecord_score = fraudrecord_score;
    account_info_data_local_var->ima = ima;
    account_info_data_local_var->name = name;
    account_info_data_local_var->payment_method = payment_method;
    account_info_data_local_var->phone = phone;
    account_info_data_local_var->pin = pin;
    account_info_data_local_var->state = state;
    account_info_data_local_var->status = status;
    account_info_data_local_var->zip = zip;
    account_info_data_local_var->account_id = account_id;
    account_info_data_local_var->account_lid = account_lid;
    account_info_data_local_var->address2 = address2;
    account_info_data_local_var->affiliate_dock_description = affiliate_dock_description;
    account_info_data_local_var->affiliate_dock_title = affiliate_dock_title;
    account_info_data_local_var->affiliate_payment_method = affiliate_payment_method;
    account_info_data_local_var->affiliate_paypal = affiliate_paypal;
    account_info_data_local_var->cc = cc;
    account_info_data_local_var->cc_auto = cc_auto;
    account_info_data_local_var->cc_exp = cc_exp;
    account_info_data_local_var->cc_type = cc_type;
    account_info_data_local_var->cc_whitelist = cc_whitelist;
    account_info_data_local_var->ccs = ccs;
    account_info_data_local_var->ccs_added = ccs_added;
    account_info_data_local_var->company = company;
    account_info_data_local_var->currency = currency;
    account_info_data_local_var->disable_reinstall = disable_reinstall;
    account_info_data_local_var->disable_reset = disable_reset;
    account_info_data_local_var->email = email;
    account_info_data_local_var->email_abuse = email_abuse;
    account_info_data_local_var->email_settings = email_settings;
    account_info_data_local_var->extra = extra;
    account_info_data_local_var->facebook_id = facebook_id;
    account_info_data_local_var->facebook_url = facebook_url;
    account_info_data_local_var->firstname = firstname;
    account_info_data_local_var->fraudrecord = fraudrecord;
    account_info_data_local_var->github_id = github_id;
    account_info_data_local_var->github_url = github_url;
    account_info_data_local_var->google_id = google_id;
    account_info_data_local_var->google_url = google_url;
    account_info_data_local_var->innertell_id = innertell_id;
    account_info_data_local_var->lastname = lastname;
    account_info_data_local_var->locale = locale;
    account_info_data_local_var->maxmind = maxmind;
    account_info_data_local_var->maxmind_score = maxmind_score;
    account_info_data_local_var->mb_id = mb_id;
    account_info_data_local_var->modernbill_id = modernbill_id;
    account_info_data_local_var->picture = picture;
    account_info_data_local_var->referrer_coupon = referrer_coupon;
    account_info_data_local_var->reseller_markup = reseller_markup;
    account_info_data_local_var->username = username;
    account_info_data_local_var->ssh_key = ssh_key;
    account_info_data_local_var->ssh_key_wrapped = ssh_key_wrapped;
    account_info_data_local_var->api_key = api_key;
    account_info_data_local_var->api_key_wrapped = api_key_wrapped;
    account_info_data_local_var->_2fa_google_key = _2fa_google_key;
    account_info_data_local_var->_2fa_google_enabled = _2fa_google_enabled;
    account_info_data_local_var->_2fa_google = _2fa_google;
    account_info_data_local_var->_2fa_google_split = _2fa_google_split;
    account_info_data_local_var->_2fa_google_qr = _2fa_google_qr;
    return account_info_data_local_var;
}

__attribute__((deprecated)) account_info_data_t *account_info_data_create(
    char *group,
    char *address,
    char *city,
    char *country,
    char *disable_cc,
    char *fraudrecord_score,
    char *ima,
    char *name,
    char *payment_method,
    char *phone,
    char *pin,
    char *state,
    char *status,
    char *zip,
    char *account_id,
    char *account_lid,
    char *address2,
    char *affiliate_dock_description,
    char *affiliate_dock_title,
    char *affiliate_payment_method,
    char *affiliate_paypal,
    char *cc,
    char *cc_auto,
    char *cc_exp,
    char *cc_type,
    char *cc_whitelist,
    account_info_data_ccs_t *ccs,
    char *ccs_added,
    char *company,
    char *currency,
    char *disable_reinstall,
    char *disable_reset,
    char *email,
    char *email_abuse,
    account_info_data_email_settings_t *email_settings,
    account_info_data_extra_t *extra,
    char *facebook_id,
    char *facebook_url,
    char *firstname,
    account_info_data_fraudrecord_t *fraudrecord,
    char *github_id,
    char *github_url,
    char *google_id,
    char *google_url,
    char *innertell_id,
    char *lastname,
    char *locale,
    account_info_max_mind_response_t *maxmind,
    char *maxmind_score,
    char *mb_id,
    char *modernbill_id,
    char *picture,
    char *referrer_coupon,
    char *reseller_markup,
    char *username,
    char *ssh_key,
    char *ssh_key_wrapped,
    char *api_key,
    char *api_key_wrapped,
    char *_2fa_google_key,
    int *_2fa_google_enabled,
    int *_2fa_google,
    char *_2fa_google_split,
    char *_2fa_google_qr
    ) {
    int *_2fa_google_enabled_copy = NULL;
    if (_2fa_google_enabled) {
        _2fa_google_enabled_copy = malloc(sizeof(int));
        if (_2fa_google_enabled_copy) *_2fa_google_enabled_copy = *_2fa_google_enabled;
    }
    int *_2fa_google_copy = NULL;
    if (_2fa_google) {
        _2fa_google_copy = malloc(sizeof(int));
        if (_2fa_google_copy) *_2fa_google_copy = *_2fa_google;
    }
    account_info_data_t *result = account_info_data_create_internal (
        group,
        address,
        city,
        country,
        disable_cc,
        fraudrecord_score,
        ima,
        name,
        payment_method,
        phone,
        pin,
        state,
        status,
        zip,
        account_id,
        account_lid,
        address2,
        affiliate_dock_description,
        affiliate_dock_title,
        affiliate_payment_method,
        affiliate_paypal,
        cc,
        cc_auto,
        cc_exp,
        cc_type,
        cc_whitelist,
        ccs,
        ccs_added,
        company,
        currency,
        disable_reinstall,
        disable_reset,
        email,
        email_abuse,
        email_settings,
        extra,
        facebook_id,
        facebook_url,
        firstname,
        fraudrecord,
        github_id,
        github_url,
        google_id,
        google_url,
        innertell_id,
        lastname,
        locale,
        maxmind,
        maxmind_score,
        mb_id,
        modernbill_id,
        picture,
        referrer_coupon,
        reseller_markup,
        username,
        ssh_key,
        ssh_key_wrapped,
        api_key,
        api_key_wrapped,
        _2fa_google_key,
        _2fa_google_enabled_copy,
        _2fa_google_copy,
        _2fa_google_split,
        _2fa_google_qr
        );
    if (!result) {
        free(_2fa_google_enabled_copy);
        free(_2fa_google_copy);
    }
    return result;
}

void account_info_data_free(account_info_data_t *account_info_data) {
    if(NULL == account_info_data){
        return ;
    }
    if(account_info_data->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "account_info_data_free");
        return ;
    }
    listEntry_t *listEntry;
    if (account_info_data->group) {
        free(account_info_data->group);
        account_info_data->group = NULL;
    }
    if (account_info_data->address) {
        free(account_info_data->address);
        account_info_data->address = NULL;
    }
    if (account_info_data->city) {
        free(account_info_data->city);
        account_info_data->city = NULL;
    }
    if (account_info_data->country) {
        free(account_info_data->country);
        account_info_data->country = NULL;
    }
    if (account_info_data->disable_cc) {
        free(account_info_data->disable_cc);
        account_info_data->disable_cc = NULL;
    }
    if (account_info_data->fraudrecord_score) {
        free(account_info_data->fraudrecord_score);
        account_info_data->fraudrecord_score = NULL;
    }
    if (account_info_data->ima) {
        free(account_info_data->ima);
        account_info_data->ima = NULL;
    }
    if (account_info_data->name) {
        free(account_info_data->name);
        account_info_data->name = NULL;
    }
    if (account_info_data->payment_method) {
        free(account_info_data->payment_method);
        account_info_data->payment_method = NULL;
    }
    if (account_info_data->phone) {
        free(account_info_data->phone);
        account_info_data->phone = NULL;
    }
    if (account_info_data->pin) {
        free(account_info_data->pin);
        account_info_data->pin = NULL;
    }
    if (account_info_data->state) {
        free(account_info_data->state);
        account_info_data->state = NULL;
    }
    if (account_info_data->status) {
        free(account_info_data->status);
        account_info_data->status = NULL;
    }
    if (account_info_data->zip) {
        free(account_info_data->zip);
        account_info_data->zip = NULL;
    }
    if (account_info_data->account_id) {
        free(account_info_data->account_id);
        account_info_data->account_id = NULL;
    }
    if (account_info_data->account_lid) {
        free(account_info_data->account_lid);
        account_info_data->account_lid = NULL;
    }
    if (account_info_data->address2) {
        free(account_info_data->address2);
        account_info_data->address2 = NULL;
    }
    if (account_info_data->affiliate_dock_description) {
        free(account_info_data->affiliate_dock_description);
        account_info_data->affiliate_dock_description = NULL;
    }
    if (account_info_data->affiliate_dock_title) {
        free(account_info_data->affiliate_dock_title);
        account_info_data->affiliate_dock_title = NULL;
    }
    if (account_info_data->affiliate_payment_method) {
        free(account_info_data->affiliate_payment_method);
        account_info_data->affiliate_payment_method = NULL;
    }
    if (account_info_data->affiliate_paypal) {
        free(account_info_data->affiliate_paypal);
        account_info_data->affiliate_paypal = NULL;
    }
    if (account_info_data->cc) {
        free(account_info_data->cc);
        account_info_data->cc = NULL;
    }
    if (account_info_data->cc_auto) {
        free(account_info_data->cc_auto);
        account_info_data->cc_auto = NULL;
    }
    if (account_info_data->cc_exp) {
        free(account_info_data->cc_exp);
        account_info_data->cc_exp = NULL;
    }
    if (account_info_data->cc_type) {
        free(account_info_data->cc_type);
        account_info_data->cc_type = NULL;
    }
    if (account_info_data->cc_whitelist) {
        free(account_info_data->cc_whitelist);
        account_info_data->cc_whitelist = NULL;
    }
    if (account_info_data->ccs) {
        account_info_data_ccs_free(account_info_data->ccs);
        account_info_data->ccs = NULL;
    }
    if (account_info_data->ccs_added) {
        free(account_info_data->ccs_added);
        account_info_data->ccs_added = NULL;
    }
    if (account_info_data->company) {
        free(account_info_data->company);
        account_info_data->company = NULL;
    }
    if (account_info_data->currency) {
        free(account_info_data->currency);
        account_info_data->currency = NULL;
    }
    if (account_info_data->disable_reinstall) {
        free(account_info_data->disable_reinstall);
        account_info_data->disable_reinstall = NULL;
    }
    if (account_info_data->disable_reset) {
        free(account_info_data->disable_reset);
        account_info_data->disable_reset = NULL;
    }
    if (account_info_data->email) {
        free(account_info_data->email);
        account_info_data->email = NULL;
    }
    if (account_info_data->email_abuse) {
        free(account_info_data->email_abuse);
        account_info_data->email_abuse = NULL;
    }
    if (account_info_data->email_settings) {
        account_info_data_email_settings_free(account_info_data->email_settings);
        account_info_data->email_settings = NULL;
    }
    if (account_info_data->extra) {
        account_info_data_extra_free(account_info_data->extra);
        account_info_data->extra = NULL;
    }
    if (account_info_data->facebook_id) {
        free(account_info_data->facebook_id);
        account_info_data->facebook_id = NULL;
    }
    if (account_info_data->facebook_url) {
        free(account_info_data->facebook_url);
        account_info_data->facebook_url = NULL;
    }
    if (account_info_data->firstname) {
        free(account_info_data->firstname);
        account_info_data->firstname = NULL;
    }
    if (account_info_data->fraudrecord) {
        account_info_data_fraudrecord_free(account_info_data->fraudrecord);
        account_info_data->fraudrecord = NULL;
    }
    if (account_info_data->github_id) {
        free(account_info_data->github_id);
        account_info_data->github_id = NULL;
    }
    if (account_info_data->github_url) {
        free(account_info_data->github_url);
        account_info_data->github_url = NULL;
    }
    if (account_info_data->google_id) {
        free(account_info_data->google_id);
        account_info_data->google_id = NULL;
    }
    if (account_info_data->google_url) {
        free(account_info_data->google_url);
        account_info_data->google_url = NULL;
    }
    if (account_info_data->innertell_id) {
        free(account_info_data->innertell_id);
        account_info_data->innertell_id = NULL;
    }
    if (account_info_data->lastname) {
        free(account_info_data->lastname);
        account_info_data->lastname = NULL;
    }
    if (account_info_data->locale) {
        free(account_info_data->locale);
        account_info_data->locale = NULL;
    }
    if (account_info_data->maxmind) {
        account_info_max_mind_response_free(account_info_data->maxmind);
        account_info_data->maxmind = NULL;
    }
    if (account_info_data->maxmind_score) {
        free(account_info_data->maxmind_score);
        account_info_data->maxmind_score = NULL;
    }
    if (account_info_data->mb_id) {
        free(account_info_data->mb_id);
        account_info_data->mb_id = NULL;
    }
    if (account_info_data->modernbill_id) {
        free(account_info_data->modernbill_id);
        account_info_data->modernbill_id = NULL;
    }
    if (account_info_data->picture) {
        free(account_info_data->picture);
        account_info_data->picture = NULL;
    }
    if (account_info_data->referrer_coupon) {
        free(account_info_data->referrer_coupon);
        account_info_data->referrer_coupon = NULL;
    }
    if (account_info_data->reseller_markup) {
        free(account_info_data->reseller_markup);
        account_info_data->reseller_markup = NULL;
    }
    if (account_info_data->username) {
        free(account_info_data->username);
        account_info_data->username = NULL;
    }
    if (account_info_data->ssh_key) {
        free(account_info_data->ssh_key);
        account_info_data->ssh_key = NULL;
    }
    if (account_info_data->ssh_key_wrapped) {
        free(account_info_data->ssh_key_wrapped);
        account_info_data->ssh_key_wrapped = NULL;
    }
    if (account_info_data->api_key) {
        free(account_info_data->api_key);
        account_info_data->api_key = NULL;
    }
    if (account_info_data->api_key_wrapped) {
        free(account_info_data->api_key_wrapped);
        account_info_data->api_key_wrapped = NULL;
    }
    if (account_info_data->_2fa_google_key) {
        free(account_info_data->_2fa_google_key);
        account_info_data->_2fa_google_key = NULL;
    }
    if (account_info_data->_2fa_google_enabled) {
        free(account_info_data->_2fa_google_enabled);
        account_info_data->_2fa_google_enabled = NULL;
    }
    if (account_info_data->_2fa_google) {
        free(account_info_data->_2fa_google);
        account_info_data->_2fa_google = NULL;
    }
    if (account_info_data->_2fa_google_split) {
        free(account_info_data->_2fa_google_split);
        account_info_data->_2fa_google_split = NULL;
    }
    if (account_info_data->_2fa_google_qr) {
        free(account_info_data->_2fa_google_qr);
        account_info_data->_2fa_google_qr = NULL;
    }
    free(account_info_data);
}

cJSON *account_info_data_convertToJSON(account_info_data_t *account_info_data) {
    cJSON *item = cJSON_CreateObject();

    // account_info_data->group
    if(account_info_data->group) {
    if(cJSON_AddStringToObject(item, "group", account_info_data->group) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->address
    if(account_info_data->address) {
    if(cJSON_AddStringToObject(item, "address", account_info_data->address) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->city
    if(account_info_data->city) {
    if(cJSON_AddStringToObject(item, "city", account_info_data->city) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->country
    if(account_info_data->country) {
    if(cJSON_AddStringToObject(item, "country", account_info_data->country) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->disable_cc
    if(account_info_data->disable_cc) {
    if(cJSON_AddStringToObject(item, "disable_cc", account_info_data->disable_cc) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->fraudrecord_score
    if(account_info_data->fraudrecord_score) {
    if(cJSON_AddStringToObject(item, "fraudrecord_score", account_info_data->fraudrecord_score) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->ima
    if(account_info_data->ima) {
    if(cJSON_AddStringToObject(item, "ima", account_info_data->ima) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->name
    if(account_info_data->name) {
    if(cJSON_AddStringToObject(item, "name", account_info_data->name) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->payment_method
    if(account_info_data->payment_method) {
    if(cJSON_AddStringToObject(item, "payment_method", account_info_data->payment_method) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->phone
    if(account_info_data->phone) {
    if(cJSON_AddStringToObject(item, "phone", account_info_data->phone) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->pin
    if(account_info_data->pin) {
    if(cJSON_AddStringToObject(item, "pin", account_info_data->pin) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->state
    if(account_info_data->state) {
    if(cJSON_AddStringToObject(item, "state", account_info_data->state) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->status
    if(account_info_data->status) {
    if(cJSON_AddStringToObject(item, "status", account_info_data->status) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->zip
    if(account_info_data->zip) {
    if(cJSON_AddStringToObject(item, "zip", account_info_data->zip) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->account_id
    if(account_info_data->account_id) {
    if(cJSON_AddStringToObject(item, "account_id", account_info_data->account_id) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->account_lid
    if(account_info_data->account_lid) {
    if(cJSON_AddStringToObject(item, "account_lid", account_info_data->account_lid) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->address2
    if(account_info_data->address2) {
    if(cJSON_AddStringToObject(item, "address2", account_info_data->address2) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->affiliate_dock_description
    if(account_info_data->affiliate_dock_description) {
    if(cJSON_AddStringToObject(item, "affiliate_dock_description", account_info_data->affiliate_dock_description) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->affiliate_dock_title
    if(account_info_data->affiliate_dock_title) {
    if(cJSON_AddStringToObject(item, "affiliate_dock_title", account_info_data->affiliate_dock_title) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->affiliate_payment_method
    if(account_info_data->affiliate_payment_method) {
    if(cJSON_AddStringToObject(item, "affiliate_payment_method", account_info_data->affiliate_payment_method) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->affiliate_paypal
    if(account_info_data->affiliate_paypal) {
    if(cJSON_AddStringToObject(item, "affiliate_paypal", account_info_data->affiliate_paypal) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->cc
    if(account_info_data->cc) {
    if(cJSON_AddStringToObject(item, "cc", account_info_data->cc) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->cc_auto
    if(account_info_data->cc_auto) {
    if(cJSON_AddStringToObject(item, "cc_auto", account_info_data->cc_auto) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->cc_exp
    if(account_info_data->cc_exp) {
    if(cJSON_AddStringToObject(item, "cc_exp", account_info_data->cc_exp) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->cc_type
    if(account_info_data->cc_type) {
    if(cJSON_AddStringToObject(item, "cc_type", account_info_data->cc_type) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->cc_whitelist
    if(account_info_data->cc_whitelist) {
    if(cJSON_AddStringToObject(item, "cc_whitelist", account_info_data->cc_whitelist) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->ccs
    if(account_info_data->ccs) {
    cJSON *ccs_local_JSON = account_info_data_ccs_convertToJSON(account_info_data->ccs);
    if(ccs_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "ccs", ccs_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // account_info_data->ccs_added
    if(account_info_data->ccs_added) {
    if(cJSON_AddStringToObject(item, "ccs_added", account_info_data->ccs_added) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->company
    if(account_info_data->company) {
    if(cJSON_AddStringToObject(item, "company", account_info_data->company) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->currency
    if(account_info_data->currency) {
    if(cJSON_AddStringToObject(item, "currency", account_info_data->currency) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->disable_reinstall
    if(account_info_data->disable_reinstall) {
    if(cJSON_AddStringToObject(item, "disable_reinstall", account_info_data->disable_reinstall) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->disable_reset
    if(account_info_data->disable_reset) {
    if(cJSON_AddStringToObject(item, "disable_reset", account_info_data->disable_reset) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->email
    if(account_info_data->email) {
    if(cJSON_AddStringToObject(item, "email", account_info_data->email) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->email_abuse
    if(account_info_data->email_abuse) {
    if(cJSON_AddStringToObject(item, "email_abuse", account_info_data->email_abuse) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->email_settings
    if(account_info_data->email_settings) {
    cJSON *email_settings_local_JSON = account_info_data_email_settings_convertToJSON(account_info_data->email_settings);
    if(email_settings_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "email_settings", email_settings_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // account_info_data->extra
    if(account_info_data->extra) {
    cJSON *extra_local_JSON = account_info_data_extra_convertToJSON(account_info_data->extra);
    if(extra_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "extra", extra_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // account_info_data->facebook_id
    if(account_info_data->facebook_id) {
    if(cJSON_AddStringToObject(item, "facebook_id", account_info_data->facebook_id) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->facebook_url
    if(account_info_data->facebook_url) {
    if(cJSON_AddStringToObject(item, "facebook_url", account_info_data->facebook_url) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->firstname
    if(account_info_data->firstname) {
    if(cJSON_AddStringToObject(item, "firstname", account_info_data->firstname) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->fraudrecord
    if(account_info_data->fraudrecord) {
    cJSON *fraudrecord_local_JSON = account_info_data_fraudrecord_convertToJSON(account_info_data->fraudrecord);
    if(fraudrecord_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "fraudrecord", fraudrecord_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // account_info_data->github_id
    if(account_info_data->github_id) {
    if(cJSON_AddStringToObject(item, "github_id", account_info_data->github_id) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->github_url
    if(account_info_data->github_url) {
    if(cJSON_AddStringToObject(item, "github_url", account_info_data->github_url) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->google_id
    if(account_info_data->google_id) {
    if(cJSON_AddStringToObject(item, "google_id", account_info_data->google_id) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->google_url
    if(account_info_data->google_url) {
    if(cJSON_AddStringToObject(item, "google_url", account_info_data->google_url) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->innertell_id
    if(account_info_data->innertell_id) {
    if(cJSON_AddStringToObject(item, "innertell_id", account_info_data->innertell_id) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->lastname
    if(account_info_data->lastname) {
    if(cJSON_AddStringToObject(item, "lastname", account_info_data->lastname) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->locale
    if(account_info_data->locale) {
    if(cJSON_AddStringToObject(item, "locale", account_info_data->locale) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->maxmind
    if(account_info_data->maxmind) {
    cJSON *maxmind_local_JSON = account_info_max_mind_response_convertToJSON(account_info_data->maxmind);
    if(maxmind_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "maxmind", maxmind_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // account_info_data->maxmind_score
    if(account_info_data->maxmind_score) {
    if(cJSON_AddStringToObject(item, "maxmind_score", account_info_data->maxmind_score) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->mb_id
    if(account_info_data->mb_id) {
    if(cJSON_AddStringToObject(item, "mb_id", account_info_data->mb_id) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->modernbill_id
    if(account_info_data->modernbill_id) {
    if(cJSON_AddStringToObject(item, "modernbill_id", account_info_data->modernbill_id) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->picture
    if(account_info_data->picture) {
    if(cJSON_AddStringToObject(item, "picture", account_info_data->picture) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->referrer_coupon
    if(account_info_data->referrer_coupon) {
    if(cJSON_AddStringToObject(item, "referrer_coupon", account_info_data->referrer_coupon) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->reseller_markup
    if(account_info_data->reseller_markup) {
    if(cJSON_AddStringToObject(item, "reseller_markup", account_info_data->reseller_markup) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->username
    if(account_info_data->username) {
    if(cJSON_AddStringToObject(item, "username", account_info_data->username) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->ssh_key
    if(account_info_data->ssh_key) {
    if(cJSON_AddStringToObject(item, "ssh_key", account_info_data->ssh_key) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->ssh_key_wrapped
    if(account_info_data->ssh_key_wrapped) {
    if(cJSON_AddStringToObject(item, "ssh_key_wrapped", account_info_data->ssh_key_wrapped) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->api_key
    if(account_info_data->api_key) {
    if(cJSON_AddStringToObject(item, "api_key", account_info_data->api_key) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->api_key_wrapped
    if(account_info_data->api_key_wrapped) {
    if(cJSON_AddStringToObject(item, "api_key_wrapped", account_info_data->api_key_wrapped) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->_2fa_google_key
    if(account_info_data->_2fa_google_key) {
    if(cJSON_AddStringToObject(item, "2fa_google_key", account_info_data->_2fa_google_key) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->_2fa_google_enabled
    if(account_info_data->_2fa_google_enabled) {
    if(cJSON_AddBoolToObject(item, "2fa_google_enabled", *account_info_data->_2fa_google_enabled) == NULL) {
    goto fail; //Bool
    }
    }


    // account_info_data->_2fa_google
    if(account_info_data->_2fa_google) {
    if(cJSON_AddNumberToObject(item, "2fa_google", *account_info_data->_2fa_google) == NULL) {
    goto fail; //Numeric
    }
    }


    // account_info_data->_2fa_google_split
    if(account_info_data->_2fa_google_split) {
    if(cJSON_AddStringToObject(item, "2fa_google_split", account_info_data->_2fa_google_split) == NULL) {
    goto fail; //String
    }
    }


    // account_info_data->_2fa_google_qr
    if(account_info_data->_2fa_google_qr) {
    if(cJSON_AddStringToObject(item, "2fa_google_qr", account_info_data->_2fa_google_qr) == NULL) {
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

account_info_data_t *account_info_data_parseFromJSON(cJSON *account_info_dataJSON){

    account_info_data_t *account_info_data_local_var = NULL;

    char *group_local_str = NULL;

    char *address_local_str = NULL;

    char *city_local_str = NULL;

    char *country_local_str = NULL;

    char *disable_cc_local_str = NULL;

    char *fraudrecord_score_local_str = NULL;

    char *ima_local_str = NULL;

    char *name_local_str = NULL;

    char *payment_method_local_str = NULL;

    char *phone_local_str = NULL;

    char *pin_local_str = NULL;

    char *state_local_str = NULL;

    char *status_local_str = NULL;

    char *zip_local_str = NULL;

    char *account_id_local_str = NULL;

    char *account_lid_local_str = NULL;

    char *address2_local_str = NULL;

    char *affiliate_dock_description_local_str = NULL;

    char *affiliate_dock_title_local_str = NULL;

    char *affiliate_payment_method_local_str = NULL;

    char *affiliate_paypal_local_str = NULL;

    char *cc_local_str = NULL;

    char *cc_auto_local_str = NULL;

    char *cc_exp_local_str = NULL;

    char *cc_type_local_str = NULL;

    char *cc_whitelist_local_str = NULL;

    // define the local variable for account_info_data->ccs
    account_info_data_ccs_t *ccs_local_nonprim = NULL;

    char *ccs_added_local_str = NULL;

    char *company_local_str = NULL;

    char *currency_local_str = NULL;

    char *disable_reinstall_local_str = NULL;

    char *disable_reset_local_str = NULL;

    char *email_local_str = NULL;

    char *email_abuse_local_str = NULL;

    // define the local variable for account_info_data->email_settings
    account_info_data_email_settings_t *email_settings_local_nonprim = NULL;

    // define the local variable for account_info_data->extra
    account_info_data_extra_t *extra_local_nonprim = NULL;

    char *facebook_id_local_str = NULL;

    char *facebook_url_local_str = NULL;

    char *firstname_local_str = NULL;

    // define the local variable for account_info_data->fraudrecord
    account_info_data_fraudrecord_t *fraudrecord_local_nonprim = NULL;

    char *github_id_local_str = NULL;

    char *github_url_local_str = NULL;

    char *google_id_local_str = NULL;

    char *google_url_local_str = NULL;

    char *innertell_id_local_str = NULL;

    char *lastname_local_str = NULL;

    char *locale_local_str = NULL;

    // define the local variable for account_info_data->maxmind
    account_info_max_mind_response_t *maxmind_local_nonprim = NULL;

    char *maxmind_score_local_str = NULL;

    char *mb_id_local_str = NULL;

    char *modernbill_id_local_str = NULL;

    char *picture_local_str = NULL;

    char *referrer_coupon_local_str = NULL;

    char *reseller_markup_local_str = NULL;

    char *username_local_str = NULL;

    char *ssh_key_local_str = NULL;

    char *ssh_key_wrapped_local_str = NULL;

    char *api_key_local_str = NULL;

    char *api_key_wrapped_local_str = NULL;

    char *_2fa_google_key_local_str = NULL;

    // define the local variable for account_info_data->_2fa_google_enabled
    int *_2fa_google_enabled_local_var = NULL;

    // define the local variable for account_info_data->_2fa_google
    int *_2fa_google_local_var = NULL;

    char *_2fa_google_split_local_str = NULL;

    char *_2fa_google_qr_local_str = NULL;

    // account_info_data->group
    cJSON *group = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "group");
    if (cJSON_IsNull(group)) {
        group = NULL;
    }
    if (group) { 
    if(!cJSON_IsString(group) && !cJSON_IsNull(group))
    {
    goto end; //String
    }
    }

    // account_info_data->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "address");
    if (cJSON_IsNull(address)) {
        address = NULL;
    }
    if (address) { 
    if(!cJSON_IsString(address) && !cJSON_IsNull(address))
    {
    goto end; //String
    }
    }

    // account_info_data->city
    cJSON *city = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "city");
    if (cJSON_IsNull(city)) {
        city = NULL;
    }
    if (city) { 
    if(!cJSON_IsString(city) && !cJSON_IsNull(city))
    {
    goto end; //String
    }
    }

    // account_info_data->country
    cJSON *country = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "country");
    if (cJSON_IsNull(country)) {
        country = NULL;
    }
    if (country) { 
    if(!cJSON_IsString(country) && !cJSON_IsNull(country))
    {
    goto end; //String
    }
    }

    // account_info_data->disable_cc
    cJSON *disable_cc = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "disable_cc");
    if (cJSON_IsNull(disable_cc)) {
        disable_cc = NULL;
    }
    if (disable_cc) { 
    if(!cJSON_IsString(disable_cc) && !cJSON_IsNull(disable_cc))
    {
    goto end; //String
    }
    }

    // account_info_data->fraudrecord_score
    cJSON *fraudrecord_score = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "fraudrecord_score");
    if (cJSON_IsNull(fraudrecord_score)) {
        fraudrecord_score = NULL;
    }
    if (fraudrecord_score) { 
    if(!cJSON_IsString(fraudrecord_score) && !cJSON_IsNull(fraudrecord_score))
    {
    goto end; //String
    }
    }

    // account_info_data->ima
    cJSON *ima = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "ima");
    if (cJSON_IsNull(ima)) {
        ima = NULL;
    }
    if (ima) { 
    if(!cJSON_IsString(ima) && !cJSON_IsNull(ima))
    {
    goto end; //String
    }
    }

    // account_info_data->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "name");
    if (cJSON_IsNull(name)) {
        name = NULL;
    }
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // account_info_data->payment_method
    cJSON *payment_method = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "payment_method");
    if (cJSON_IsNull(payment_method)) {
        payment_method = NULL;
    }
    if (payment_method) { 
    if(!cJSON_IsString(payment_method) && !cJSON_IsNull(payment_method))
    {
    goto end; //String
    }
    }

    // account_info_data->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "phone");
    if (cJSON_IsNull(phone)) {
        phone = NULL;
    }
    if (phone) { 
    if(!cJSON_IsString(phone) && !cJSON_IsNull(phone))
    {
    goto end; //String
    }
    }

    // account_info_data->pin
    cJSON *pin = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "pin");
    if (cJSON_IsNull(pin)) {
        pin = NULL;
    }
    if (pin) { 
    if(!cJSON_IsString(pin) && !cJSON_IsNull(pin))
    {
    goto end; //String
    }
    }

    // account_info_data->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "state");
    if (cJSON_IsNull(state)) {
        state = NULL;
    }
    if (state) { 
    if(!cJSON_IsString(state) && !cJSON_IsNull(state))
    {
    goto end; //String
    }
    }

    // account_info_data->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "status");
    if (cJSON_IsNull(status)) {
        status = NULL;
    }
    if (status) { 
    if(!cJSON_IsString(status) && !cJSON_IsNull(status))
    {
    goto end; //String
    }
    }

    // account_info_data->zip
    cJSON *zip = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "zip");
    if (cJSON_IsNull(zip)) {
        zip = NULL;
    }
    if (zip) { 
    if(!cJSON_IsString(zip) && !cJSON_IsNull(zip))
    {
    goto end; //String
    }
    }

    // account_info_data->account_id
    cJSON *account_id = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "account_id");
    if (cJSON_IsNull(account_id)) {
        account_id = NULL;
    }
    if (account_id) { 
    if(!cJSON_IsString(account_id) && !cJSON_IsNull(account_id))
    {
    goto end; //String
    }
    }

    // account_info_data->account_lid
    cJSON *account_lid = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "account_lid");
    if (cJSON_IsNull(account_lid)) {
        account_lid = NULL;
    }
    if (account_lid) { 
    if(!cJSON_IsString(account_lid) && !cJSON_IsNull(account_lid))
    {
    goto end; //String
    }
    }

    // account_info_data->address2
    cJSON *address2 = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "address2");
    if (cJSON_IsNull(address2)) {
        address2 = NULL;
    }
    if (address2) { 
    if(!cJSON_IsString(address2) && !cJSON_IsNull(address2))
    {
    goto end; //String
    }
    }

    // account_info_data->affiliate_dock_description
    cJSON *affiliate_dock_description = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "affiliate_dock_description");
    if (cJSON_IsNull(affiliate_dock_description)) {
        affiliate_dock_description = NULL;
    }
    if (affiliate_dock_description) { 
    if(!cJSON_IsString(affiliate_dock_description) && !cJSON_IsNull(affiliate_dock_description))
    {
    goto end; //String
    }
    }

    // account_info_data->affiliate_dock_title
    cJSON *affiliate_dock_title = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "affiliate_dock_title");
    if (cJSON_IsNull(affiliate_dock_title)) {
        affiliate_dock_title = NULL;
    }
    if (affiliate_dock_title) { 
    if(!cJSON_IsString(affiliate_dock_title) && !cJSON_IsNull(affiliate_dock_title))
    {
    goto end; //String
    }
    }

    // account_info_data->affiliate_payment_method
    cJSON *affiliate_payment_method = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "affiliate_payment_method");
    if (cJSON_IsNull(affiliate_payment_method)) {
        affiliate_payment_method = NULL;
    }
    if (affiliate_payment_method) { 
    if(!cJSON_IsString(affiliate_payment_method) && !cJSON_IsNull(affiliate_payment_method))
    {
    goto end; //String
    }
    }

    // account_info_data->affiliate_paypal
    cJSON *affiliate_paypal = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "affiliate_paypal");
    if (cJSON_IsNull(affiliate_paypal)) {
        affiliate_paypal = NULL;
    }
    if (affiliate_paypal) { 
    if(!cJSON_IsString(affiliate_paypal) && !cJSON_IsNull(affiliate_paypal))
    {
    goto end; //String
    }
    }

    // account_info_data->cc
    cJSON *cc = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "cc");
    if (cJSON_IsNull(cc)) {
        cc = NULL;
    }
    if (cc) { 
    if(!cJSON_IsString(cc) && !cJSON_IsNull(cc))
    {
    goto end; //String
    }
    }

    // account_info_data->cc_auto
    cJSON *cc_auto = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "cc_auto");
    if (cJSON_IsNull(cc_auto)) {
        cc_auto = NULL;
    }
    if (cc_auto) { 
    if(!cJSON_IsString(cc_auto) && !cJSON_IsNull(cc_auto))
    {
    goto end; //String
    }
    }

    // account_info_data->cc_exp
    cJSON *cc_exp = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "cc_exp");
    if (cJSON_IsNull(cc_exp)) {
        cc_exp = NULL;
    }
    if (cc_exp) { 
    if(!cJSON_IsString(cc_exp) && !cJSON_IsNull(cc_exp))
    {
    goto end; //String
    }
    }

    // account_info_data->cc_type
    cJSON *cc_type = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "cc_type");
    if (cJSON_IsNull(cc_type)) {
        cc_type = NULL;
    }
    if (cc_type) { 
    if(!cJSON_IsString(cc_type) && !cJSON_IsNull(cc_type))
    {
    goto end; //String
    }
    }

    // account_info_data->cc_whitelist
    cJSON *cc_whitelist = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "cc_whitelist");
    if (cJSON_IsNull(cc_whitelist)) {
        cc_whitelist = NULL;
    }
    if (cc_whitelist) { 
    if(!cJSON_IsString(cc_whitelist) && !cJSON_IsNull(cc_whitelist))
    {
    goto end; //String
    }
    }

    // account_info_data->ccs
    cJSON *ccs = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "ccs");
    if (cJSON_IsNull(ccs)) {
        ccs = NULL;
    }
    if (ccs) { 
    ccs_local_nonprim = account_info_data_ccs_parseFromJSON(ccs); //custom
    }

    // account_info_data->ccs_added
    cJSON *ccs_added = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "ccs_added");
    if (cJSON_IsNull(ccs_added)) {
        ccs_added = NULL;
    }
    if (ccs_added) { 
    if(!cJSON_IsString(ccs_added) && !cJSON_IsNull(ccs_added))
    {
    goto end; //String
    }
    }

    // account_info_data->company
    cJSON *company = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "company");
    if (cJSON_IsNull(company)) {
        company = NULL;
    }
    if (company) { 
    if(!cJSON_IsString(company) && !cJSON_IsNull(company))
    {
    goto end; //String
    }
    }

    // account_info_data->currency
    cJSON *currency = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "currency");
    if (cJSON_IsNull(currency)) {
        currency = NULL;
    }
    if (currency) { 
    if(!cJSON_IsString(currency) && !cJSON_IsNull(currency))
    {
    goto end; //String
    }
    }

    // account_info_data->disable_reinstall
    cJSON *disable_reinstall = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "disable_reinstall");
    if (cJSON_IsNull(disable_reinstall)) {
        disable_reinstall = NULL;
    }
    if (disable_reinstall) { 
    if(!cJSON_IsString(disable_reinstall) && !cJSON_IsNull(disable_reinstall))
    {
    goto end; //String
    }
    }

    // account_info_data->disable_reset
    cJSON *disable_reset = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "disable_reset");
    if (cJSON_IsNull(disable_reset)) {
        disable_reset = NULL;
    }
    if (disable_reset) { 
    if(!cJSON_IsString(disable_reset) && !cJSON_IsNull(disable_reset))
    {
    goto end; //String
    }
    }

    // account_info_data->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "email");
    if (cJSON_IsNull(email)) {
        email = NULL;
    }
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // account_info_data->email_abuse
    cJSON *email_abuse = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "email_abuse");
    if (cJSON_IsNull(email_abuse)) {
        email_abuse = NULL;
    }
    if (email_abuse) { 
    if(!cJSON_IsString(email_abuse) && !cJSON_IsNull(email_abuse))
    {
    goto end; //String
    }
    }

    // account_info_data->email_settings
    cJSON *email_settings = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "email_settings");
    if (cJSON_IsNull(email_settings)) {
        email_settings = NULL;
    }
    if (email_settings) { 
    email_settings_local_nonprim = account_info_data_email_settings_parseFromJSON(email_settings); //nonprimitive
    }

    // account_info_data->extra
    cJSON *extra = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "extra");
    if (cJSON_IsNull(extra)) {
        extra = NULL;
    }
    if (extra) { 
    extra_local_nonprim = account_info_data_extra_parseFromJSON(extra); //nonprimitive
    }

    // account_info_data->facebook_id
    cJSON *facebook_id = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "facebook_id");
    if (cJSON_IsNull(facebook_id)) {
        facebook_id = NULL;
    }
    if (facebook_id) { 
    if(!cJSON_IsString(facebook_id) && !cJSON_IsNull(facebook_id))
    {
    goto end; //String
    }
    }

    // account_info_data->facebook_url
    cJSON *facebook_url = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "facebook_url");
    if (cJSON_IsNull(facebook_url)) {
        facebook_url = NULL;
    }
    if (facebook_url) { 
    if(!cJSON_IsString(facebook_url) && !cJSON_IsNull(facebook_url))
    {
    goto end; //String
    }
    }

    // account_info_data->firstname
    cJSON *firstname = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "firstname");
    if (cJSON_IsNull(firstname)) {
        firstname = NULL;
    }
    if (firstname) { 
    if(!cJSON_IsString(firstname) && !cJSON_IsNull(firstname))
    {
    goto end; //String
    }
    }

    // account_info_data->fraudrecord
    cJSON *fraudrecord = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "fraudrecord");
    if (cJSON_IsNull(fraudrecord)) {
        fraudrecord = NULL;
    }
    if (fraudrecord) { 
    fraudrecord_local_nonprim = account_info_data_fraudrecord_parseFromJSON(fraudrecord); //nonprimitive
    }

    // account_info_data->github_id
    cJSON *github_id = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "github_id");
    if (cJSON_IsNull(github_id)) {
        github_id = NULL;
    }
    if (github_id) { 
    if(!cJSON_IsString(github_id) && !cJSON_IsNull(github_id))
    {
    goto end; //String
    }
    }

    // account_info_data->github_url
    cJSON *github_url = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "github_url");
    if (cJSON_IsNull(github_url)) {
        github_url = NULL;
    }
    if (github_url) { 
    if(!cJSON_IsString(github_url) && !cJSON_IsNull(github_url))
    {
    goto end; //String
    }
    }

    // account_info_data->google_id
    cJSON *google_id = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "google_id");
    if (cJSON_IsNull(google_id)) {
        google_id = NULL;
    }
    if (google_id) { 
    if(!cJSON_IsString(google_id) && !cJSON_IsNull(google_id))
    {
    goto end; //String
    }
    }

    // account_info_data->google_url
    cJSON *google_url = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "google_url");
    if (cJSON_IsNull(google_url)) {
        google_url = NULL;
    }
    if (google_url) { 
    if(!cJSON_IsString(google_url) && !cJSON_IsNull(google_url))
    {
    goto end; //String
    }
    }

    // account_info_data->innertell_id
    cJSON *innertell_id = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "innertell_id");
    if (cJSON_IsNull(innertell_id)) {
        innertell_id = NULL;
    }
    if (innertell_id) { 
    if(!cJSON_IsString(innertell_id) && !cJSON_IsNull(innertell_id))
    {
    goto end; //String
    }
    }

    // account_info_data->lastname
    cJSON *lastname = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "lastname");
    if (cJSON_IsNull(lastname)) {
        lastname = NULL;
    }
    if (lastname) { 
    if(!cJSON_IsString(lastname) && !cJSON_IsNull(lastname))
    {
    goto end; //String
    }
    }

    // account_info_data->locale
    cJSON *locale = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "locale");
    if (cJSON_IsNull(locale)) {
        locale = NULL;
    }
    if (locale) { 
    if(!cJSON_IsString(locale) && !cJSON_IsNull(locale))
    {
    goto end; //String
    }
    }

    // account_info_data->maxmind
    cJSON *maxmind = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "maxmind");
    if (cJSON_IsNull(maxmind)) {
        maxmind = NULL;
    }
    if (maxmind) { 
    maxmind_local_nonprim = account_info_max_mind_response_parseFromJSON(maxmind); //nonprimitive
    }

    // account_info_data->maxmind_score
    cJSON *maxmind_score = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "maxmind_score");
    if (cJSON_IsNull(maxmind_score)) {
        maxmind_score = NULL;
    }
    if (maxmind_score) { 
    if(!cJSON_IsString(maxmind_score) && !cJSON_IsNull(maxmind_score))
    {
    goto end; //String
    }
    }

    // account_info_data->mb_id
    cJSON *mb_id = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "mb_id");
    if (cJSON_IsNull(mb_id)) {
        mb_id = NULL;
    }
    if (mb_id) { 
    if(!cJSON_IsString(mb_id) && !cJSON_IsNull(mb_id))
    {
    goto end; //String
    }
    }

    // account_info_data->modernbill_id
    cJSON *modernbill_id = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "modernbill_id");
    if (cJSON_IsNull(modernbill_id)) {
        modernbill_id = NULL;
    }
    if (modernbill_id) { 
    if(!cJSON_IsString(modernbill_id) && !cJSON_IsNull(modernbill_id))
    {
    goto end; //String
    }
    }

    // account_info_data->picture
    cJSON *picture = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "picture");
    if (cJSON_IsNull(picture)) {
        picture = NULL;
    }
    if (picture) { 
    if(!cJSON_IsString(picture) && !cJSON_IsNull(picture))
    {
    goto end; //String
    }
    }

    // account_info_data->referrer_coupon
    cJSON *referrer_coupon = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "referrer_coupon");
    if (cJSON_IsNull(referrer_coupon)) {
        referrer_coupon = NULL;
    }
    if (referrer_coupon) { 
    if(!cJSON_IsString(referrer_coupon) && !cJSON_IsNull(referrer_coupon))
    {
    goto end; //String
    }
    }

    // account_info_data->reseller_markup
    cJSON *reseller_markup = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "reseller_markup");
    if (cJSON_IsNull(reseller_markup)) {
        reseller_markup = NULL;
    }
    if (reseller_markup) { 
    if(!cJSON_IsString(reseller_markup) && !cJSON_IsNull(reseller_markup))
    {
    goto end; //String
    }
    }

    // account_info_data->username
    cJSON *username = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "username");
    if (cJSON_IsNull(username)) {
        username = NULL;
    }
    if (username) { 
    if(!cJSON_IsString(username) && !cJSON_IsNull(username))
    {
    goto end; //String
    }
    }

    // account_info_data->ssh_key
    cJSON *ssh_key = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "ssh_key");
    if (cJSON_IsNull(ssh_key)) {
        ssh_key = NULL;
    }
    if (ssh_key) { 
    if(!cJSON_IsString(ssh_key) && !cJSON_IsNull(ssh_key))
    {
    goto end; //String
    }
    }

    // account_info_data->ssh_key_wrapped
    cJSON *ssh_key_wrapped = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "ssh_key_wrapped");
    if (cJSON_IsNull(ssh_key_wrapped)) {
        ssh_key_wrapped = NULL;
    }
    if (ssh_key_wrapped) { 
    if(!cJSON_IsString(ssh_key_wrapped) && !cJSON_IsNull(ssh_key_wrapped))
    {
    goto end; //String
    }
    }

    // account_info_data->api_key
    cJSON *api_key = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "api_key");
    if (cJSON_IsNull(api_key)) {
        api_key = NULL;
    }
    if (api_key) { 
    if(!cJSON_IsString(api_key) && !cJSON_IsNull(api_key))
    {
    goto end; //String
    }
    }

    // account_info_data->api_key_wrapped
    cJSON *api_key_wrapped = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "api_key_wrapped");
    if (cJSON_IsNull(api_key_wrapped)) {
        api_key_wrapped = NULL;
    }
    if (api_key_wrapped) { 
    if(!cJSON_IsString(api_key_wrapped) && !cJSON_IsNull(api_key_wrapped))
    {
    goto end; //String
    }
    }

    // account_info_data->_2fa_google_key
    cJSON *_2fa_google_key = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "2fa_google_key");
    if (cJSON_IsNull(_2fa_google_key)) {
        _2fa_google_key = NULL;
    }
    if (_2fa_google_key) { 
    if(!cJSON_IsString(_2fa_google_key) && !cJSON_IsNull(_2fa_google_key))
    {
    goto end; //String
    }
    }

    // account_info_data->_2fa_google_enabled
    cJSON *_2fa_google_enabled = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "2fa_google_enabled");
    if (cJSON_IsNull(_2fa_google_enabled)) {
        _2fa_google_enabled = NULL;
    }
    if (_2fa_google_enabled) { 
    if(!cJSON_IsBool(_2fa_google_enabled))
    {
    goto end; //Bool
    }
    _2fa_google_enabled_local_var = malloc(sizeof(int));
    if(!_2fa_google_enabled_local_var)
    {
        goto end;
    }
    *_2fa_google_enabled_local_var = _2fa_google_enabled->valueint;
    }

    // account_info_data->_2fa_google
    cJSON *_2fa_google = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "2fa_google");
    if (cJSON_IsNull(_2fa_google)) {
        _2fa_google = NULL;
    }
    if (_2fa_google) { 
    if(!cJSON_IsNumber(_2fa_google))
    {
    goto end; //Numeric
    }
    _2fa_google_local_var = malloc(sizeof(int));
    if(!_2fa_google_local_var)
    {
        goto end;
    }
    *_2fa_google_local_var = _2fa_google->valuedouble;
    }

    // account_info_data->_2fa_google_split
    cJSON *_2fa_google_split = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "2fa_google_split");
    if (cJSON_IsNull(_2fa_google_split)) {
        _2fa_google_split = NULL;
    }
    if (_2fa_google_split) { 
    if(!cJSON_IsString(_2fa_google_split) && !cJSON_IsNull(_2fa_google_split))
    {
    goto end; //String
    }
    }

    // account_info_data->_2fa_google_qr
    cJSON *_2fa_google_qr = cJSON_GetObjectItemCaseSensitive(account_info_dataJSON, "2fa_google_qr");
    if (cJSON_IsNull(_2fa_google_qr)) {
        _2fa_google_qr = NULL;
    }
    if (_2fa_google_qr) { 
    if(!cJSON_IsString(_2fa_google_qr) && !cJSON_IsNull(_2fa_google_qr))
    {
    goto end; //String
    }
    }


    if (group && !cJSON_IsNull(group)) group_local_str = strdup(group->valuestring);
    if (address && !cJSON_IsNull(address)) address_local_str = strdup(address->valuestring);
    if (city && !cJSON_IsNull(city)) city_local_str = strdup(city->valuestring);
    if (country && !cJSON_IsNull(country)) country_local_str = strdup(country->valuestring);
    if (disable_cc && !cJSON_IsNull(disable_cc)) disable_cc_local_str = strdup(disable_cc->valuestring);
    if (fraudrecord_score && !cJSON_IsNull(fraudrecord_score)) fraudrecord_score_local_str = strdup(fraudrecord_score->valuestring);
    if (ima && !cJSON_IsNull(ima)) ima_local_str = strdup(ima->valuestring);
    if (name && !cJSON_IsNull(name)) name_local_str = strdup(name->valuestring);
    if (payment_method && !cJSON_IsNull(payment_method)) payment_method_local_str = strdup(payment_method->valuestring);
    if (phone && !cJSON_IsNull(phone)) phone_local_str = strdup(phone->valuestring);
    if (pin && !cJSON_IsNull(pin)) pin_local_str = strdup(pin->valuestring);
    if (state && !cJSON_IsNull(state)) state_local_str = strdup(state->valuestring);
    if (status && !cJSON_IsNull(status)) status_local_str = strdup(status->valuestring);
    if (zip && !cJSON_IsNull(zip)) zip_local_str = strdup(zip->valuestring);
    if (account_id && !cJSON_IsNull(account_id)) account_id_local_str = strdup(account_id->valuestring);
    if (account_lid && !cJSON_IsNull(account_lid)) account_lid_local_str = strdup(account_lid->valuestring);
    if (address2 && !cJSON_IsNull(address2)) address2_local_str = strdup(address2->valuestring);
    if (affiliate_dock_description && !cJSON_IsNull(affiliate_dock_description)) affiliate_dock_description_local_str = strdup(affiliate_dock_description->valuestring);
    if (affiliate_dock_title && !cJSON_IsNull(affiliate_dock_title)) affiliate_dock_title_local_str = strdup(affiliate_dock_title->valuestring);
    if (affiliate_payment_method && !cJSON_IsNull(affiliate_payment_method)) affiliate_payment_method_local_str = strdup(affiliate_payment_method->valuestring);
    if (affiliate_paypal && !cJSON_IsNull(affiliate_paypal)) affiliate_paypal_local_str = strdup(affiliate_paypal->valuestring);
    if (cc && !cJSON_IsNull(cc)) cc_local_str = strdup(cc->valuestring);
    if (cc_auto && !cJSON_IsNull(cc_auto)) cc_auto_local_str = strdup(cc_auto->valuestring);
    if (cc_exp && !cJSON_IsNull(cc_exp)) cc_exp_local_str = strdup(cc_exp->valuestring);
    if (cc_type && !cJSON_IsNull(cc_type)) cc_type_local_str = strdup(cc_type->valuestring);
    if (cc_whitelist && !cJSON_IsNull(cc_whitelist)) cc_whitelist_local_str = strdup(cc_whitelist->valuestring);
    if (ccs_added && !cJSON_IsNull(ccs_added)) ccs_added_local_str = strdup(ccs_added->valuestring);
    if (company && !cJSON_IsNull(company)) company_local_str = strdup(company->valuestring);
    if (currency && !cJSON_IsNull(currency)) currency_local_str = strdup(currency->valuestring);
    if (disable_reinstall && !cJSON_IsNull(disable_reinstall)) disable_reinstall_local_str = strdup(disable_reinstall->valuestring);
    if (disable_reset && !cJSON_IsNull(disable_reset)) disable_reset_local_str = strdup(disable_reset->valuestring);
    if (email && !cJSON_IsNull(email)) email_local_str = strdup(email->valuestring);
    if (email_abuse && !cJSON_IsNull(email_abuse)) email_abuse_local_str = strdup(email_abuse->valuestring);
    if (facebook_id && !cJSON_IsNull(facebook_id)) facebook_id_local_str = strdup(facebook_id->valuestring);
    if (facebook_url && !cJSON_IsNull(facebook_url)) facebook_url_local_str = strdup(facebook_url->valuestring);
    if (firstname && !cJSON_IsNull(firstname)) firstname_local_str = strdup(firstname->valuestring);
    if (github_id && !cJSON_IsNull(github_id)) github_id_local_str = strdup(github_id->valuestring);
    if (github_url && !cJSON_IsNull(github_url)) github_url_local_str = strdup(github_url->valuestring);
    if (google_id && !cJSON_IsNull(google_id)) google_id_local_str = strdup(google_id->valuestring);
    if (google_url && !cJSON_IsNull(google_url)) google_url_local_str = strdup(google_url->valuestring);
    if (innertell_id && !cJSON_IsNull(innertell_id)) innertell_id_local_str = strdup(innertell_id->valuestring);
    if (lastname && !cJSON_IsNull(lastname)) lastname_local_str = strdup(lastname->valuestring);
    if (locale && !cJSON_IsNull(locale)) locale_local_str = strdup(locale->valuestring);
    if (maxmind_score && !cJSON_IsNull(maxmind_score)) maxmind_score_local_str = strdup(maxmind_score->valuestring);
    if (mb_id && !cJSON_IsNull(mb_id)) mb_id_local_str = strdup(mb_id->valuestring);
    if (modernbill_id && !cJSON_IsNull(modernbill_id)) modernbill_id_local_str = strdup(modernbill_id->valuestring);
    if (picture && !cJSON_IsNull(picture)) picture_local_str = strdup(picture->valuestring);
    if (referrer_coupon && !cJSON_IsNull(referrer_coupon)) referrer_coupon_local_str = strdup(referrer_coupon->valuestring);
    if (reseller_markup && !cJSON_IsNull(reseller_markup)) reseller_markup_local_str = strdup(reseller_markup->valuestring);
    if (username && !cJSON_IsNull(username)) username_local_str = strdup(username->valuestring);
    if (ssh_key && !cJSON_IsNull(ssh_key)) ssh_key_local_str = strdup(ssh_key->valuestring);
    if (ssh_key_wrapped && !cJSON_IsNull(ssh_key_wrapped)) ssh_key_wrapped_local_str = strdup(ssh_key_wrapped->valuestring);
    if (api_key && !cJSON_IsNull(api_key)) api_key_local_str = strdup(api_key->valuestring);
    if (api_key_wrapped && !cJSON_IsNull(api_key_wrapped)) api_key_wrapped_local_str = strdup(api_key_wrapped->valuestring);
    if (_2fa_google_key && !cJSON_IsNull(_2fa_google_key)) _2fa_google_key_local_str = strdup(_2fa_google_key->valuestring);
    if (_2fa_google_split && !cJSON_IsNull(_2fa_google_split)) _2fa_google_split_local_str = strdup(_2fa_google_split->valuestring);
    if (_2fa_google_qr && !cJSON_IsNull(_2fa_google_qr)) _2fa_google_qr_local_str = strdup(_2fa_google_qr->valuestring);

    account_info_data_local_var = account_info_data_create_internal (
        group_local_str,
        address_local_str,
        city_local_str,
        country_local_str,
        disable_cc_local_str,
        fraudrecord_score_local_str,
        ima_local_str,
        name_local_str,
        payment_method_local_str,
        phone_local_str,
        pin_local_str,
        state_local_str,
        status_local_str,
        zip_local_str,
        account_id_local_str,
        account_lid_local_str,
        address2_local_str,
        affiliate_dock_description_local_str,
        affiliate_dock_title_local_str,
        affiliate_payment_method_local_str,
        affiliate_paypal_local_str,
        cc_local_str,
        cc_auto_local_str,
        cc_exp_local_str,
        cc_type_local_str,
        cc_whitelist_local_str,
        ccs ? ccs_local_nonprim : NULL,
        ccs_added_local_str,
        company_local_str,
        currency_local_str,
        disable_reinstall_local_str,
        disable_reset_local_str,
        email_local_str,
        email_abuse_local_str,
        email_settings ? email_settings_local_nonprim : NULL,
        extra ? extra_local_nonprim : NULL,
        facebook_id_local_str,
        facebook_url_local_str,
        firstname_local_str,
        fraudrecord ? fraudrecord_local_nonprim : NULL,
        github_id_local_str,
        github_url_local_str,
        google_id_local_str,
        google_url_local_str,
        innertell_id_local_str,
        lastname_local_str,
        locale_local_str,
        maxmind ? maxmind_local_nonprim : NULL,
        maxmind_score_local_str,
        mb_id_local_str,
        modernbill_id_local_str,
        picture_local_str,
        referrer_coupon_local_str,
        reseller_markup_local_str,
        username_local_str,
        ssh_key_local_str,
        ssh_key_wrapped_local_str,
        api_key_local_str,
        api_key_wrapped_local_str,
        _2fa_google_key_local_str,
        _2fa_google_enabled_local_var,
        _2fa_google_local_var,
        _2fa_google_split_local_str,
        _2fa_google_qr_local_str
        );

    if (!account_info_data_local_var) {
        goto end;
    }

    return account_info_data_local_var;
end:
    if (group_local_str) {
        free(group_local_str);
        group_local_str = NULL;
    }
    if (address_local_str) {
        free(address_local_str);
        address_local_str = NULL;
    }
    if (city_local_str) {
        free(city_local_str);
        city_local_str = NULL;
    }
    if (country_local_str) {
        free(country_local_str);
        country_local_str = NULL;
    }
    if (disable_cc_local_str) {
        free(disable_cc_local_str);
        disable_cc_local_str = NULL;
    }
    if (fraudrecord_score_local_str) {
        free(fraudrecord_score_local_str);
        fraudrecord_score_local_str = NULL;
    }
    if (ima_local_str) {
        free(ima_local_str);
        ima_local_str = NULL;
    }
    if (name_local_str) {
        free(name_local_str);
        name_local_str = NULL;
    }
    if (payment_method_local_str) {
        free(payment_method_local_str);
        payment_method_local_str = NULL;
    }
    if (phone_local_str) {
        free(phone_local_str);
        phone_local_str = NULL;
    }
    if (pin_local_str) {
        free(pin_local_str);
        pin_local_str = NULL;
    }
    if (state_local_str) {
        free(state_local_str);
        state_local_str = NULL;
    }
    if (status_local_str) {
        free(status_local_str);
        status_local_str = NULL;
    }
    if (zip_local_str) {
        free(zip_local_str);
        zip_local_str = NULL;
    }
    if (account_id_local_str) {
        free(account_id_local_str);
        account_id_local_str = NULL;
    }
    if (account_lid_local_str) {
        free(account_lid_local_str);
        account_lid_local_str = NULL;
    }
    if (address2_local_str) {
        free(address2_local_str);
        address2_local_str = NULL;
    }
    if (affiliate_dock_description_local_str) {
        free(affiliate_dock_description_local_str);
        affiliate_dock_description_local_str = NULL;
    }
    if (affiliate_dock_title_local_str) {
        free(affiliate_dock_title_local_str);
        affiliate_dock_title_local_str = NULL;
    }
    if (affiliate_payment_method_local_str) {
        free(affiliate_payment_method_local_str);
        affiliate_payment_method_local_str = NULL;
    }
    if (affiliate_paypal_local_str) {
        free(affiliate_paypal_local_str);
        affiliate_paypal_local_str = NULL;
    }
    if (cc_local_str) {
        free(cc_local_str);
        cc_local_str = NULL;
    }
    if (cc_auto_local_str) {
        free(cc_auto_local_str);
        cc_auto_local_str = NULL;
    }
    if (cc_exp_local_str) {
        free(cc_exp_local_str);
        cc_exp_local_str = NULL;
    }
    if (cc_type_local_str) {
        free(cc_type_local_str);
        cc_type_local_str = NULL;
    }
    if (cc_whitelist_local_str) {
        free(cc_whitelist_local_str);
        cc_whitelist_local_str = NULL;
    }
    if (ccs_local_nonprim) {
        account_info_data_ccs_free(ccs_local_nonprim);
        ccs_local_nonprim = NULL;
    }
    if (ccs_added_local_str) {
        free(ccs_added_local_str);
        ccs_added_local_str = NULL;
    }
    if (company_local_str) {
        free(company_local_str);
        company_local_str = NULL;
    }
    if (currency_local_str) {
        free(currency_local_str);
        currency_local_str = NULL;
    }
    if (disable_reinstall_local_str) {
        free(disable_reinstall_local_str);
        disable_reinstall_local_str = NULL;
    }
    if (disable_reset_local_str) {
        free(disable_reset_local_str);
        disable_reset_local_str = NULL;
    }
    if (email_local_str) {
        free(email_local_str);
        email_local_str = NULL;
    }
    if (email_abuse_local_str) {
        free(email_abuse_local_str);
        email_abuse_local_str = NULL;
    }
    if (email_settings_local_nonprim) {
        account_info_data_email_settings_free(email_settings_local_nonprim);
        email_settings_local_nonprim = NULL;
    }
    if (extra_local_nonprim) {
        account_info_data_extra_free(extra_local_nonprim);
        extra_local_nonprim = NULL;
    }
    if (facebook_id_local_str) {
        free(facebook_id_local_str);
        facebook_id_local_str = NULL;
    }
    if (facebook_url_local_str) {
        free(facebook_url_local_str);
        facebook_url_local_str = NULL;
    }
    if (firstname_local_str) {
        free(firstname_local_str);
        firstname_local_str = NULL;
    }
    if (fraudrecord_local_nonprim) {
        account_info_data_fraudrecord_free(fraudrecord_local_nonprim);
        fraudrecord_local_nonprim = NULL;
    }
    if (github_id_local_str) {
        free(github_id_local_str);
        github_id_local_str = NULL;
    }
    if (github_url_local_str) {
        free(github_url_local_str);
        github_url_local_str = NULL;
    }
    if (google_id_local_str) {
        free(google_id_local_str);
        google_id_local_str = NULL;
    }
    if (google_url_local_str) {
        free(google_url_local_str);
        google_url_local_str = NULL;
    }
    if (innertell_id_local_str) {
        free(innertell_id_local_str);
        innertell_id_local_str = NULL;
    }
    if (lastname_local_str) {
        free(lastname_local_str);
        lastname_local_str = NULL;
    }
    if (locale_local_str) {
        free(locale_local_str);
        locale_local_str = NULL;
    }
    if (maxmind_local_nonprim) {
        account_info_max_mind_response_free(maxmind_local_nonprim);
        maxmind_local_nonprim = NULL;
    }
    if (maxmind_score_local_str) {
        free(maxmind_score_local_str);
        maxmind_score_local_str = NULL;
    }
    if (mb_id_local_str) {
        free(mb_id_local_str);
        mb_id_local_str = NULL;
    }
    if (modernbill_id_local_str) {
        free(modernbill_id_local_str);
        modernbill_id_local_str = NULL;
    }
    if (picture_local_str) {
        free(picture_local_str);
        picture_local_str = NULL;
    }
    if (referrer_coupon_local_str) {
        free(referrer_coupon_local_str);
        referrer_coupon_local_str = NULL;
    }
    if (reseller_markup_local_str) {
        free(reseller_markup_local_str);
        reseller_markup_local_str = NULL;
    }
    if (username_local_str) {
        free(username_local_str);
        username_local_str = NULL;
    }
    if (ssh_key_local_str) {
        free(ssh_key_local_str);
        ssh_key_local_str = NULL;
    }
    if (ssh_key_wrapped_local_str) {
        free(ssh_key_wrapped_local_str);
        ssh_key_wrapped_local_str = NULL;
    }
    if (api_key_local_str) {
        free(api_key_local_str);
        api_key_local_str = NULL;
    }
    if (api_key_wrapped_local_str) {
        free(api_key_wrapped_local_str);
        api_key_wrapped_local_str = NULL;
    }
    if (_2fa_google_key_local_str) {
        free(_2fa_google_key_local_str);
        _2fa_google_key_local_str = NULL;
    }
    if (_2fa_google_enabled_local_var) {
        free(_2fa_google_enabled_local_var);
        _2fa_google_enabled_local_var = NULL;
    }
    if (_2fa_google_local_var) {
        free(_2fa_google_local_var);
        _2fa_google_local_var = NULL;
    }
    if (_2fa_google_split_local_str) {
        free(_2fa_google_split_local_str);
        _2fa_google_split_local_str = NULL;
    }
    if (_2fa_google_qr_local_str) {
        free(_2fa_google_qr_local_str);
        _2fa_google_qr_local_str = NULL;
    }
    return NULL;

}
