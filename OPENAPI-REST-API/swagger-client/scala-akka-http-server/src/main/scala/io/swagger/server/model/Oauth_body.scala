package io.swagger.server.model


/**
 * @param provider The OAuth provider name (e.g. `Google`).
 */
case class Oauth_body (
  provider: Option[String]
)

