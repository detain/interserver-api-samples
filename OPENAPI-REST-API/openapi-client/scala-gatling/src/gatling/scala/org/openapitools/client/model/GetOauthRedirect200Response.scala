
package org.openapitools.client.model


case class GetOauthRedirect200Response (
    /* The URL to redirect the user to for OAuth authentication. */
    _redirect_url: Option[String]
)
object GetOauthRedirect200Response {
    def toStringBody(var_redirect_url: Object) =
        s"""
        | {
        | "redirect_url":$var_redirect_url
        | }
        """.stripMargin
}
