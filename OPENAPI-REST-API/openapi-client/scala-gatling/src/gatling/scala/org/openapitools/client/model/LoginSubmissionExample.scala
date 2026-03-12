
package org.openapitools.client.model


case class LoginSubmissionExample (
    _login: String,
    _passwd: String,
    _remember: Option[String],
    _g_recaptcha_response: Option[LoginSubmissionExampleGRecaptchaResponse],
    /* Two Factor Authentication Response. */
    _tfa: Option[String]
)
object LoginSubmissionExample {
    def toStringBody(var_login: Object, var_passwd: Object, var_remember: Object, var_g_recaptcha_response: Object, var_tfa: Object) =
        s"""
        | {
        | "login":$var_login,"passwd":$var_passwd,"remember":$var_remember,"g_recaptcha_response":$var_g_recaptcha_response,"tfa":$var_tfa
        | }
        """.stripMargin
}
