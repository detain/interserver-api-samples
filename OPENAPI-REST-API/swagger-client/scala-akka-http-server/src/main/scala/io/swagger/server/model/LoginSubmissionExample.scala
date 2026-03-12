package io.swagger.server.model


/**
 * = LoginSubmissionExample =
 *
 * The data to submit in the login request.
 *
 * @param login 
 * @param passwd 
 * @param remember 
 * @param g-recaptcha-response 
 * @param tfa Two Factor Authentication Response.
 */
case class LoginSubmissionExample (
  login: String,
  passwd: String,
  remember: Option[String],
  g-recaptcha-response: Option[LoginSubmissionExample_grecaptcharesponse],
  tfa: Option[String]
)

