package io.swagger.server.model


/**
 * = Root Type for TicketNewSuccess =
 *
 * Response returned after creating a new support ticket.
 *
 * @param ticket_id 
 * @param text 
 * @param success 
 */
case class TicketNewResponse (
  ticket_id: Option[Int],
  text: String,
  success: Boolean
)

