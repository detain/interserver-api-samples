
package org.openapitools.client.model


case class GetAccountTfaSetup200Response (
    /* Base64-encoded secret key for TOTP setup. */
    _2fa_google_key: Option[String],
    /* Human-readable formatted key (chunks of 4 characters). */
    _2fa_google_split: Option[String]
)
object GetAccountTfaSetup200Response {
    def toStringBody(var_2fa_google_key: Object, var_2fa_google_split: Object) =
        s"""
        | {
        | "2fa_google_key":$var_2fa_google_key,"2fa_google_split":$var_2fa_google_split
        | }
        """.stripMargin
}
