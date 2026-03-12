
package org.openapitools.client.model


case class AccountInfo (
    _custid: Option[String],
    _ima: Option[String],
    _data: Option[AccountInfoData],
    _ip: Option[String],
    _oauthproviders: Option[AccountInfoOauthproviders],
    _oauthconfig: Option[AccountInfoOauthConfig],
    _oauthadapters: Option[List[String]],
    _limits: Option[AccountInfoLimits],
    _language: Option[String],
    _countryCurrencies: Option[AccountInfoCountryCurrencies],
    _enableLocales: Option[Boolean],
    _enableCurrencies: Option[Boolean],
    _gravatar: Option[String]
)
object AccountInfo {
    def toStringBody(var_custid: Object, var_ima: Object, var_data: Object, var_ip: Object, var_oauthproviders: Object, var_oauthconfig: Object, var_oauthadapters: Object, var_limits: Object, var_language: Object, var_countryCurrencies: Object, var_enableLocales: Object, var_enableCurrencies: Object, var_gravatar: Object) =
        s"""
        | {
        | "custid":$var_custid,"ima":$var_ima,"data":$var_data,"ip":$var_ip,"oauthproviders":$var_oauthproviders,"oauthconfig":$var_oauthconfig,"oauthadapters":$var_oauthadapters,"limits":$var_limits,"language":$var_language,"countryCurrencies":$var_countryCurrencies,"enableLocales":$var_enableLocales,"enableCurrencies":$var_enableCurrencies,"gravatar":$var_gravatar
        | }
        """.stripMargin
}
