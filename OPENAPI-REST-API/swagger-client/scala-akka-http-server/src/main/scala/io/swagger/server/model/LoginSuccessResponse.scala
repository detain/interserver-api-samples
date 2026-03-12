package io.swagger.server.model


/**
 * = LoginSuccessResponse =
 *
 * The response from a successful login.
 *
 * @param sessionId 
 * @param account_id 
 * @param account_lid 
 * @param ima 
 * @param gravatar 
 */
case class LoginSuccessResponse (
  sessionId: Option[String],
  account_id: Option[Int],
  account_lid: Option[String],
  ima: Option[String],
  gravatar: Option[String]
)

