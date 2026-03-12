package io.swagger.server.model


/**
 * = LoginErrorResponse =
 *
 * Error resposne during login indicating further action.
 *
 * @param message 
 * @param field 
 */
case class LoginErrorResponse (
  message: Option[String],
  field: Option[String]
)

