
package org.openapitools.client.model


case class LoginInfo (
    /* A base64 encoded image to use for rendering the alternateive captcha. */
    _captcha: String,
    _counts: LoginServiceCounts,
    /* A logo image url. */
    _logo: Option[String],
    /* The desired langauge to render the site with. */
    _language: Option[String]
)
object LoginInfo {
    def toStringBody(var_captcha: Object, var_counts: Object, var_logo: Object, var_language: Object) =
        s"""
        | {
        | "captcha":$var_captcha,"counts":$var_counts,"logo":$var_logo,"language":$var_language
        | }
        """.stripMargin
}
