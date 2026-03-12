package io.swagger.server.model


/**
 * @param success  for example: ''false''
 * @param text  for example: ''Bad Request''
 * @param errors 
 */
case class Inline_response_400_4 (
  success: Option[Boolean],
  text: Option[String],
  errors: Option[List[String]]
)

