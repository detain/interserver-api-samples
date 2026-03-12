
package org.openapitools.client.model


case class CaptchaResponse (
    /* The base64 encoded captcha image. */
    _captcha: String
)
object CaptchaResponse {
    def toStringBody(var_captcha: Object) =
        s"""
        | {
        | "captcha":$var_captcha
        | }
        """.stripMargin
}
