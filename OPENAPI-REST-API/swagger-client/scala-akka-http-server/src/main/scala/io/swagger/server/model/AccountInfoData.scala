package io.swagger.server.model


/**
 * = AccountInfoData =
 *
 * Detailed account profile data including contact info, billing, API keys, and security settings.
 *
 * @param group 
 * @param address 
 * @param city 
 * @param country 
 * @param disable_cc 
 * @param fraudrecord_score 
 * @param ima 
 * @param name 
 * @param payment_method 
 * @param phone 
 * @param pin 
 * @param state 
 * @param status 
 * @param zip 
 * @param account_id 
 * @param account_lid 
 * @param address2 
 * @param affiliate_dock_description 
 * @param affiliate_dock_title 
 * @param affiliate_payment_method 
 * @param affiliate_paypal 
 * @param cc 
 * @param cc_auto 
 * @param cc_exp 
 * @param cc_type 
 * @param cc_whitelist 
 * @param ccs 
 * @param ccs_added 
 * @param company 
 * @param currency 
 * @param disable_reinstall 
 * @param disable_reset 
 * @param email 
 * @param email_abuse 
 * @param email_settings 
 * @param extra 
 * @param facebook_id 
 * @param facebook_url 
 * @param firstname 
 * @param fraudrecord 
 * @param github_id 
 * @param github_url 
 * @param google_id 
 * @param google_url 
 * @param innertell_id 
 * @param lastname 
 * @param locale 
 * @param maxmind 
 * @param maxmind_score 
 * @param mb_id 
 * @param modernbill_id 
 * @param picture 
 * @param referrer_coupon 
 * @param reseller_markup 
 * @param username 
 * @param ssh_key 
 * @param ssh_key_wrapped 
 * @param api_key 
 * @param api_key_wrapped 
 * @param 2fa_google_key 
 * @param 2fa_google_enabled 
 * @param 2fa_google 
 * @param 2fa_google_split 
 * @param 2fa_google_qr 
 */
case class AccountInfoData (
  group: Option[String],
  address: Option[String],
  city: Option[String],
  country: Option[String],
  disable_cc: Option[String],
  fraudrecord_score: Option[String],
  ima: Option[String],
  name: Option[String],
  payment_method: Option[String],
  phone: Option[String],
  pin: Option[String],
  state: Option[String],
  status: Option[String],
  zip: Option[String],
  account_id: Option[String],
  account_lid: Option[String],
  address2: Option[String],
  affiliate_dock_description: Option[String],
  affiliate_dock_title: Option[String],
  affiliate_payment_method: Option[String],
  affiliate_paypal: Option[String],
  cc: Option[String],
  cc_auto: Option[String],
  cc_exp: Option[String],
  cc_type: Option[String],
  cc_whitelist: Option[String],
  ccs: Option[AccountInfoDataCcs],
  ccs_added: Option[String],
  company: Option[String],
  currency: Option[String],
  disable_reinstall: Option[String],
  disable_reset: Option[String],
  email: Option[String],
  email_abuse: Option[String],
  email_settings: Option[AccountInfoData_email_settings],
  extra: Option[AccountInfoData_extra],
  facebook_id: Option[String],
  facebook_url: Option[String],
  firstname: Option[String],
  fraudrecord: Option[AccountInfoData_fraudrecord],
  github_id: Option[String],
  github_url: Option[String],
  google_id: Option[String],
  google_url: Option[String],
  innertell_id: Option[String],
  lastname: Option[String],
  locale: Option[String],
  maxmind: Option[AccountInfoMaxMindResponse],
  maxmind_score: Option[String],
  mb_id: Option[String],
  modernbill_id: Option[String],
  picture: Option[String],
  referrer_coupon: Option[String],
  reseller_markup: Option[String],
  username: Option[String],
  ssh_key: Option[String],
  ssh_key_wrapped: Option[String],
  api_key: Option[String],
  api_key_wrapped: Option[String],
  2fa_google_key: Option[String],
  2fa_google_enabled: Option[Boolean],
  2fa_google: Option[Int],
  2fa_google_split: Option[String],
  2fa_google_qr: Option[String]
)

