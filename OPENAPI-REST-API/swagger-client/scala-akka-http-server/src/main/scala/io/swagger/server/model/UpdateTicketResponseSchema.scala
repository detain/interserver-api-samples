package io.swagger.server.model


/**
 * = Update ticket response =
 *
 * @param success 
 * @param message 
 */
case class UpdateTicketResponseSchema (
  success: Option[Boolean],
  message: Option[String]
)

