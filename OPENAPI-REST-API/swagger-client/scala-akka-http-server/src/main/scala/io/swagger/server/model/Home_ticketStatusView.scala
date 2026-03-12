package io.swagger.server.model


/**
 * Ticket statuses with view numbers.
 *
 * @param 4 Status corresponding to view number 4. for example: ''Open''
 * @param 5 Status corresponding to view number 5. for example: ''On Hold''
 * @param 6 Status corresponding to view number 6. for example: ''Closed''
 */
case class Home_ticketStatusView (
  4: Option[String],
  5: Option[String],
  6: Option[String]
)

