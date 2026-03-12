package io.swagger.server.model


/**
 * = Root Type for TicketNew =
 *
 * New helpdesk ticket request.  
 *
 * @param subject 
 * @param body 
 * @param service_id 
 * @param service_module 
 */
case class TicketNew (
  subject: String,
  body: String,
  service_id: Option[Int],
  service_module: Option[String]
)

