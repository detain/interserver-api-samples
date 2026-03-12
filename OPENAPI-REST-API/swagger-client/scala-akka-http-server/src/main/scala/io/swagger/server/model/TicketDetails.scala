package io.swagger.server.model


/**
 * = Ticket Information =
 *
 * Detailed ticket information
 *
 * @param ticketid 
 * @param ticketmaskid 
 * @param department 
 * @param status 
 * @param priority 
 * @param subject 
 * @param created_on 
 * @param updated_on 
 */
case class TicketDetails (
  ticketid: Option[Int],
  ticketmaskid: Option[String],
  department: Option[String],
  status: Option[String],
  priority: Option[String],
  subject: Option[String],
  created_on: Option[String],
  updated_on: Option[String]
)

