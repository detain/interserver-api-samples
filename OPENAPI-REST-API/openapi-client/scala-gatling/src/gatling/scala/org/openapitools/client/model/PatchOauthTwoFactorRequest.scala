
package org.openapitools.client.model


case class PatchOauthTwoFactorRequest (
    /* The account ID returned from the POST callback. */
    _account_id: Integer,
    /* The 6-digit two-factor authentication code. */
    _code: String
)
object PatchOauthTwoFactorRequest {
    def toStringBody(var_account_id: Object, var_code: Object) =
        s"""
        | {
        | "account_id":$var_account_id,"code":$var_code
        | }
        """.stripMargin
}
