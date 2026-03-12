
package org.openapitools.client.model


case class PatchOauthTwoFactor200Response (
    /* Whether the 2FA verification succeeded and the user is now logged in. */
    _login: Option[Boolean]
)
object PatchOauthTwoFactor200Response {
    def toStringBody(var_login: Object) =
        s"""
        | {
        | "login":$var_login
        | }
        """.stripMargin
}
