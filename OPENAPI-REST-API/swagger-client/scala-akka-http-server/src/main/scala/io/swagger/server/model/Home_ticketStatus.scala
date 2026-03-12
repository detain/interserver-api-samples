package io.swagger.server.model


/**
 * Ticket statuses.
 *
 * @param Open Count of open tickets. for example: ''4''
 * @param On Hold Count of tickets on hold. for example: ''5''
 */
case class Home_ticketStatus (
  Open: Option[Int],
  On Hold: Option[Int]
)

