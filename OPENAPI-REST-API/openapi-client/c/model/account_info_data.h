/*
 * account_info_data.h
 *
 * Detailed account profile data including contact info, billing, API keys, and security settings.
 */

#ifndef _account_info_data_H_
#define _account_info_data_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct account_info_data_t account_info_data_t;

#include "account_info_data_ccs.h"
#include "account_info_data_email_settings.h"
#include "account_info_data_extra.h"
#include "account_info_data_fraudrecord.h"
#include "account_info_max_mind_response.h"



typedef struct account_info_data_t {
    char *group; // string
    char *address; // string
    char *city; // string
    char *country; // string
    char *disable_cc; // string
    char *fraudrecord_score; // string
    char *ima; // string
    char *name; // string
    char *payment_method; // string
    char *phone; // string
    char *pin; // string
    char *state; // string
    char *status; // string
    char *zip; // string
    char *account_id; // string
    char *account_lid; // string
    char *address2; // string
    char *affiliate_dock_description; // string
    char *affiliate_dock_title; // string
    char *affiliate_payment_method; // string
    char *affiliate_paypal; // string
    char *cc; // string
    char *cc_auto; // string
    char *cc_exp; // string
    char *cc_type; // string
    char *cc_whitelist; // string
    account_info_data_ccs_t *ccs; // custom
    char *ccs_added; // string
    char *company; // string
    char *currency; // string
    char *disable_reinstall; // string
    char *disable_reset; // string
    char *email; // string
    char *email_abuse; // string
    struct account_info_data_email_settings_t *email_settings; //model
    struct account_info_data_extra_t *extra; //model
    char *facebook_id; // string
    char *facebook_url; // string
    char *firstname; // string
    struct account_info_data_fraudrecord_t *fraudrecord; //model
    char *github_id; // string
    char *github_url; // string
    char *google_id; // string
    char *google_url; // string
    char *innertell_id; // string
    char *lastname; // string
    char *locale; // string
    struct account_info_max_mind_response_t *maxmind; //model
    char *maxmind_score; // string
    char *mb_id; // string
    char *modernbill_id; // string
    char *picture; // string
    char *referrer_coupon; // string
    char *reseller_markup; // string
    char *username; // string
    char *ssh_key; // string
    char *ssh_key_wrapped; // string
    char *api_key; // string
    char *api_key_wrapped; // string
    char *_2fa_google_key; // string
    int *_2fa_google_enabled; //boolean
    int *_2fa_google; //numeric
    char *_2fa_google_split; // string
    char *_2fa_google_qr; // string

    int _library_owned; // Is the library responsible for freeing this object?
} account_info_data_t;

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
);

void account_info_data_free(account_info_data_t *account_info_data);

account_info_data_t *account_info_data_parseFromJSON(cJSON *account_info_dataJSON);

cJSON *account_info_data_convertToJSON(account_info_data_t *account_info_data);

#endif /* _account_info_data_H_ */

