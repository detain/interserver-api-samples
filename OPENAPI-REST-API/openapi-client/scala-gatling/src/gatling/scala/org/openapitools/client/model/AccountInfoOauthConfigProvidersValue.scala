
package org.openapitools.client.model


case class AccountInfoOauthConfigProvidersValue (
    _enabled: Option[Boolean],
    _linked: Option[Boolean],
    _account: Option[String],
    _url: Option[String]
)
object AccountInfoOauthConfigProvidersValue {
    def toStringBody(var_enabled: Object, var_linked: Object, var_account: Object, var_url: Object) =
        s"""
        | {
        | "enabled":$var_enabled,"linked":$var_linked,"account":$var_account,"url":$var_url
        | }
        """.stripMargin
}
