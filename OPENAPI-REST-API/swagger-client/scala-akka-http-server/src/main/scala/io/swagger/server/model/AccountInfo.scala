package io.swagger.server.model


/**
 * = AccountInfo =
 *
 * Contains the full account profile including personal info, billing details, OAuth connections, and security settings.
 *
 * @param custid 
 * @param ima 
 * @param data 
 * @param ip 
 * @param oauthproviders 
 * @param oauthconfig 
 * @param oauthadapters 
 * @param limits 
 * @param language 
 * @param countryCurrencies 
 * @param enableLocales 
 * @param enableCurrencies 
 * @param gravatar 
 */
case class AccountInfo (
  custid: Option[String],
  ima: Option[String],
  data: Option[AccountInfoData],
  ip: Option[String],
  oauthproviders: Option[OneOfAccountInfoOauthproviders],
  oauthconfig: Option[AccountInfoOauthConfig],
  oauthadapters: Option[List[String]],
  limits: Option[AccountInfoLimits],
  language: Option[String],
  countryCurrencies: Option[AccountInfoCountryCurrencies],
  enableLocales: Option[Boolean],
  enableCurrencies: Option[Boolean],
  gravatar: Option[String]
)

