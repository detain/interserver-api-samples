
package org.openapitools.client.model


case class PostOauthCallback200Response (
    /* Whether the user was logged in to an existing account. */
    _login: Option[Boolean],
    /* Whether a new account was created. */
    _signup: Option[Boolean],
    /* Whether the OAuth provider was linked to an existing account. */
    _linked: Option[Boolean],
    /* The account ID associated with the OAuth login. */
    _account_id: Option[Integer],
    /* Error code if additional verification is needed (e.g. `2fa_required`). */
    _error_code: Option[String]
)
object PostOauthCallback200Response {
    def toStringBody(var_login: Object, var_signup: Object, var_linked: Object, var_account_id: Object, var_error_code: Object) =
        s"""
        | {
        | "login":$var_login,"signup":$var_signup,"linked":$var_linked,"account_id":$var_account_id,"error_code":$var_error_code
        | }
        """.stripMargin
}
