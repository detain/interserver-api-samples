
package org.openapitools.client.model


case class AccountInfoOauthConfig (
    _callback: String,
    _providers: AccountInfoOauthConfigProviders
)
object AccountInfoOauthConfig {
    def toStringBody(var_callback: Object, var_providers: Object) =
        s"""
        | {
        | "callback":$var_callback,"providers":$var_providers
        | }
        """.stripMargin
}
