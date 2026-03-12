package io.swagger.server.model


/**
 * = Update Ticket =
 *
 * Update custom fields of the ticket
 *
 * @param ip 
 * @param ip_address 
 * @param customer_server_access 
 * @param root_password 
 * @param sudo_username 
 * @param sudo_password 
 * @param port 
 */
case class UpdateTicket (
  ip: Option[String],
  ip_address: Option[String],
  customer_server_access: Option[String],
  root_password: Option[String],
  sudo_username: Option[String],
  sudo_password: Option[String],
  port: Option[Int]
)

