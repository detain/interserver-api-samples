package io.swagger.server.model


/**
 * @param success  for example: ''true''
 * @param text  for example: ''New firewall Rule has been created.''
 */
case class Inline_response_201 (
  success: Option[Boolean],
  text: Option[String]
)

