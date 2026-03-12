
package org.openapitools.client.model


case class UpdateAccountTfaRequest (
    /* The 6-digit verification code from your authenticator app. */
    _2fa_google_code: String
)
object UpdateAccountTfaRequest {
    def toStringBody(var_2fa_google_code: Object) =
        s"""
        | {
        | "2fa_google_code":$var_2fa_google_code
        | }
        """.stripMargin
}
