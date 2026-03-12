package io.swagger.server.model


/**
 * = SuccessTextResponse =
 *
 * Response with success flag and text description.
 *
 * @param success Indicates whether or not the command was successful or not.
 * @param text Text associated with the response.
 * @param action Optional Action relating to the response.
 */
case class SuccessTextResponse (
  success: Boolean,
  text: Option[String],
  action: Option[String]
)

