package io.swagger.server.model


/**
 * = Close ticket =
 *
 * @param success 
 * @param text 
 */
case class CloseTicketResponseSchema (
  success: Option[Boolean],
  text: Option[String]
)

