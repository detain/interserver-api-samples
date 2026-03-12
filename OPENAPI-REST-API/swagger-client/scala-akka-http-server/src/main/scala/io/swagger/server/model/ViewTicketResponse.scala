package io.swagger.server.model


/**
 * = Root type for ViewTicketResponse =
 *
 * Ticket details
 *
 * @param success 
 * @param ticket 
 * @param ticket_custom_fields 
 * @param ticket_posts 
 */
case class ViewTicketResponse (
  success: Boolean,
  ticket: TicketDetails,
  ticket_custom_fields: Option[TicketCustomFieldDetails],
  ticket_posts: Option[TicketPostDetails]
)

