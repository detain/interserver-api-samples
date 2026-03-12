
package org.openapitools.client.model


case class AccountInfoData (
    _group: Option[String],
    _address: Option[String],
    _city: Option[String],
    _country: Option[String],
    _disable_cc: Option[String],
    _fraudrecord_score: Option[String],
    _ima: Option[String],
    _name: Option[String],
    _payment_method: Option[String],
    _phone: Option[String],
    _pin: Option[String],
    _state: Option[String],
    _status: Option[String],
    _zip: Option[String],
    _account_id: Option[String],
    _account_lid: Option[String],
    _address2: Option[String],
    _affiliate_dock_description: Option[String],
    _affiliate_dock_title: Option[String],
    _affiliate_payment_method: Option[String],
    _affiliate_paypal: Option[String],
    _cc: Option[String],
    _cc_auto: Option[String],
    _cc_exp: Option[String],
    _cc_type: Option[String],
    _cc_whitelist: Option[String],
    _ccs: Option[AccountInfoDataCcs],
    _ccs_added: Option[String],
    _company: Option[String],
    _currency: Option[String],
    _disable_reinstall: Option[String],
    _disable_reset: Option[String],
    _email: Option[String],
    _email_abuse: Option[String],
    _email_settings: Option[AccountInfoDataEmailSettings],
    _extra: Option[AccountInfoDataExtra],
    _facebook_id: Option[String],
    _facebook_url: Option[String],
    _firstname: Option[String],
    _fraudrecord: Option[AccountInfoDataFraudrecord],
    _github_id: Option[String],
    _github_url: Option[String],
    _google_id: Option[String],
    _google_url: Option[String],
    _innertell_id: Option[String],
    _lastname: Option[String],
    _locale: Option[String],
    _maxmind: Option[AccountInfoMaxMindResponse],
    _maxmind_score: Option[String],
    _mb_id: Option[String],
    _modernbill_id: Option[String],
    _picture: Option[String],
    _referrer_coupon: Option[String],
    _reseller_markup: Option[String],
    _username: Option[String],
    _ssh_key: Option[String],
    _ssh_key_wrapped: Option[String],
    _api_key: Option[String],
    _api_key_wrapped: Option[String],
    _2fa_google_key: Option[String],
    _2fa_google_enabled: Option[Boolean],
    _2fa_google: Option[Integer],
    _2fa_google_split: Option[String],
    _2fa_google_qr: Option[String]
)
object AccountInfoData {
    def toStringBody(var_group: Object, var_address: Object, var_city: Object, var_country: Object, var_disable_cc: Object, var_fraudrecord_score: Object, var_ima: Object, var_name: Object, var_payment_method: Object, var_phone: Object, var_pin: Object, var_state: Object, var_status: Object, var_zip: Object, var_account_id: Object, var_account_lid: Object, var_address2: Object, var_affiliate_dock_description: Object, var_affiliate_dock_title: Object, var_affiliate_payment_method: Object, var_affiliate_paypal: Object, var_cc: Object, var_cc_auto: Object, var_cc_exp: Object, var_cc_type: Object, var_cc_whitelist: Object, var_ccs: Object, var_ccs_added: Object, var_company: Object, var_currency: Object, var_disable_reinstall: Object, var_disable_reset: Object, var_email: Object, var_email_abuse: Object, var_email_settings: Object, var_extra: Object, var_facebook_id: Object, var_facebook_url: Object, var_firstname: Object, var_fraudrecord: Object, var_github_id: Object, var_github_url: Object, var_google_id: Object, var_google_url: Object, var_innertell_id: Object, var_lastname: Object, var_locale: Object, var_maxmind: Object, var_maxmind_score: Object, var_mb_id: Object, var_modernbill_id: Object, var_picture: Object, var_referrer_coupon: Object, var_reseller_markup: Object, var_username: Object, var_ssh_key: Object, var_ssh_key_wrapped: Object, var_api_key: Object, var_api_key_wrapped: Object, var_2fa_google_key: Object, var_2fa_google_enabled: Object, var_2fa_google: Object, var_2fa_google_split: Object, var_2fa_google_qr: Object) =
        s"""
        | {
        | "group":$var_group,"address":$var_address,"city":$var_city,"country":$var_country,"disable_cc":$var_disable_cc,"fraudrecord_score":$var_fraudrecord_score,"ima":$var_ima,"name":$var_name,"payment_method":$var_payment_method,"phone":$var_phone,"pin":$var_pin,"state":$var_state,"status":$var_status,"zip":$var_zip,"account_id":$var_account_id,"account_lid":$var_account_lid,"address2":$var_address2,"affiliate_dock_description":$var_affiliate_dock_description,"affiliate_dock_title":$var_affiliate_dock_title,"affiliate_payment_method":$var_affiliate_payment_method,"affiliate_paypal":$var_affiliate_paypal,"cc":$var_cc,"cc_auto":$var_cc_auto,"cc_exp":$var_cc_exp,"cc_type":$var_cc_type,"cc_whitelist":$var_cc_whitelist,"ccs":$var_ccs,"ccs_added":$var_ccs_added,"company":$var_company,"currency":$var_currency,"disable_reinstall":$var_disable_reinstall,"disable_reset":$var_disable_reset,"email":$var_email,"email_abuse":$var_email_abuse,"email_settings":$var_email_settings,"extra":$var_extra,"facebook_id":$var_facebook_id,"facebook_url":$var_facebook_url,"firstname":$var_firstname,"fraudrecord":$var_fraudrecord,"github_id":$var_github_id,"github_url":$var_github_url,"google_id":$var_google_id,"google_url":$var_google_url,"innertell_id":$var_innertell_id,"lastname":$var_lastname,"locale":$var_locale,"maxmind":$var_maxmind,"maxmind_score":$var_maxmind_score,"mb_id":$var_mb_id,"modernbill_id":$var_modernbill_id,"picture":$var_picture,"referrer_coupon":$var_referrer_coupon,"reseller_markup":$var_reseller_markup,"username":$var_username,"ssh_key":$var_ssh_key,"ssh_key_wrapped":$var_ssh_key_wrapped,"api_key":$var_api_key,"api_key_wrapped":$var_api_key_wrapped,"2fa_google_key":$var_2fa_google_key,"2fa_google_enabled":$var_2fa_google_enabled,"2fa_google":$var_2fa_google,"2fa_google_split":$var_2fa_google_split,"2fa_google_qr":$var_2fa_google_qr
        | }
        """.stripMargin
}
