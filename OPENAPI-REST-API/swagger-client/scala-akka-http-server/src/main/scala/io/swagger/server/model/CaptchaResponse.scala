package io.swagger.server.model


/**
 * = CaptchaResponse =
 *
 * A base-64 encoded captcha image.
 *
 * @param captcha The base64 encoded captcha image. for example: ''data:image/jpeg;base64,/9j/4AAQ''
 */
case class CaptchaResponse (
  captcha: String
)

