package io.swagger.server.model


/**
 * = LoginInfo =
 *
 * Basic information useful for rendering a login page.
 *
 * @param logo A logo image url. for example: ''//my.interserver.net/images/logos/mystaging.png''
 * @param captcha A base64 encoded image to use for rendering the alternateive captcha. for example: ''data:image/jpeg;base64,/9j/''
 * @param language The desired langauge to render the site with. for example: ''en-US''
 * @param counts 
 */
case class LoginInfo (
  logo: Option[String],
  captcha: String,
  language: Option[String],
  counts: LoginServiceCounts
)

