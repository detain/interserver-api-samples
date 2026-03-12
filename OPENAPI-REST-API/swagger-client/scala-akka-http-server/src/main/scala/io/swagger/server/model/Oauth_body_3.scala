package io.swagger.server.model


/**
 * @param account_id The account ID returned from the POST callback.
 * @param code The 6-digit two-factor authentication code.
 */
case class Oauth_body_3 (
  account_id: Int,
  code: String
)

