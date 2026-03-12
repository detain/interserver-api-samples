package io.swagger.server.model


/**
 * = WebsiteLoginResponse =
 *
 * Response from a website login request.
 *
 * @param `type` 
 * @param location 
 */
case class WebsiteLoginResponse (
  `type`: Option[String],
  location: Option[String]
)

