-module(openapi_account_info_data).

-include("openapi.hrl").

-export([openapi_account_info_data/0]).

-export([openapi_account_info_data/1]).

-export_type([openapi_account_info_data/0]).

-type openapi_account_info_data() ::
  [ {'group', binary() }
  | {'address', binary() }
  | {'city', binary() }
  | {'country', binary() }
  | {'disable_cc', binary() }
  | {'fraudrecord_score', binary() }
  | {'ima', binary() }
  | {'name', binary() }
  | {'payment_method', binary() }
  | {'phone', binary() }
  | {'pin', binary() }
  | {'state', binary() }
  | {'status', binary() }
  | {'zip', binary() }
  | {'account_id', binary() }
  | {'account_lid', binary() }
  | {'address2', binary() }
  | {'affiliate_dock_description', binary() }
  | {'affiliate_dock_title', binary() }
  | {'affiliate_payment_method', binary() }
  | {'affiliate_paypal', binary() }
  | {'cc', binary() }
  | {'cc_auto', binary() }
  | {'cc_exp', binary() }
  | {'cc_type', binary() }
  | {'cc_whitelist', binary() }
  | {'ccs', openapi_account_info_data_ccs:openapi_account_info_data_ccs() }
  | {'ccs_added', binary() }
  | {'company', binary() }
  | {'currency', binary() }
  | {'disable_reinstall', binary() }
  | {'disable_reset', binary() }
  | {'email', binary() }
  | {'email_abuse', binary() }
  | {'email_settings', openapi_account_info_data_email_settings:openapi_account_info_data_email_settings() }
  | {'extra', openapi_account_info_data_extra:openapi_account_info_data_extra() }
  | {'facebook_id', binary() }
  | {'facebook_url', binary() }
  | {'firstname', binary() }
  | {'fraudrecord', openapi_account_info_data_fraudrecord:openapi_account_info_data_fraudrecord() }
  | {'github_id', binary() }
  | {'github_url', binary() }
  | {'google_id', binary() }
  | {'google_url', binary() }
  | {'innertell_id', binary() }
  | {'lastname', binary() }
  | {'locale', binary() }
  | {'maxmind', openapi_account_info_max_mind_response:openapi_account_info_max_mind_response() }
  | {'maxmind_score', binary() }
  | {'mb_id', binary() }
  | {'modernbill_id', binary() }
  | {'picture', binary() }
  | {'referrer_coupon', binary() }
  | {'reseller_markup', binary() }
  | {'username', binary() }
  | {'ssh_key', binary() }
  | {'ssh_key_wrapped', binary() }
  | {'api_key', binary() }
  | {'api_key_wrapped', binary() }
  | {'2fa_google_key', binary() }
  | {'2fa_google_enabled', boolean() }
  | {'2fa_google', integer() }
  | {'2fa_google_split', binary() }
  | {'2fa_google_qr', binary() }
  ].


openapi_account_info_data() ->
    openapi_account_info_data([]).

openapi_account_info_data(Fields) ->
  Default = [ {'group', binary() }
            , {'address', binary() }
            , {'city', binary() }
            , {'country', binary() }
            , {'disable_cc', binary() }
            , {'fraudrecord_score', binary() }
            , {'ima', binary() }
            , {'name', binary() }
            , {'payment_method', binary() }
            , {'phone', binary() }
            , {'pin', binary() }
            , {'state', binary() }
            , {'status', binary() }
            , {'zip', binary() }
            , {'account_id', binary() }
            , {'account_lid', binary() }
            , {'address2', binary() }
            , {'affiliate_dock_description', binary() }
            , {'affiliate_dock_title', binary() }
            , {'affiliate_payment_method', binary() }
            , {'affiliate_paypal', binary() }
            , {'cc', binary() }
            , {'cc_auto', binary() }
            , {'cc_exp', binary() }
            , {'cc_type', binary() }
            , {'cc_whitelist', binary() }
            , {'ccs', openapi_account_info_data_ccs:openapi_account_info_data_ccs() }
            , {'ccs_added', binary() }
            , {'company', binary() }
            , {'currency', binary() }
            , {'disable_reinstall', binary() }
            , {'disable_reset', binary() }
            , {'email', binary() }
            , {'email_abuse', binary() }
            , {'email_settings', openapi_account_info_data_email_settings:openapi_account_info_data_email_settings() }
            , {'extra', openapi_account_info_data_extra:openapi_account_info_data_extra() }
            , {'facebook_id', binary() }
            , {'facebook_url', binary() }
            , {'firstname', binary() }
            , {'fraudrecord', openapi_account_info_data_fraudrecord:openapi_account_info_data_fraudrecord() }
            , {'github_id', binary() }
            , {'github_url', binary() }
            , {'google_id', binary() }
            , {'google_url', binary() }
            , {'innertell_id', binary() }
            , {'lastname', binary() }
            , {'locale', binary() }
            , {'maxmind', openapi_account_info_max_mind_response:openapi_account_info_max_mind_response() }
            , {'maxmind_score', binary() }
            , {'mb_id', binary() }
            , {'modernbill_id', binary() }
            , {'picture', binary() }
            , {'referrer_coupon', binary() }
            , {'reseller_markup', binary() }
            , {'username', binary() }
            , {'ssh_key', binary() }
            , {'ssh_key_wrapped', binary() }
            , {'api_key', binary() }
            , {'api_key_wrapped', binary() }
            , {'2fa_google_key', binary() }
            , {'2fa_google_enabled', boolean() }
            , {'2fa_google', integer() }
            , {'2fa_google_split', binary() }
            , {'2fa_google_qr', binary() }
            ],
  lists:ukeymerge(1, lists:sort(Fields), lists:sort(Default)).

