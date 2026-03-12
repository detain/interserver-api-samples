package io.swagger.server.model


/**
 * = TextResponse =
 *
 * Text Response Object
 *
 * @param text Response text for example: ''"You were successfull."''
 * @param message Response message
 */
case class TextResponse (
  text: Option[String],
  message: Option[String]
)

