package io.swagger.server.model


/**
 * = Ticket custom field values =
 *
 * Optional fields providing additional info in ticket
 *
 * @param Customer Server Access 
 * @param Ip Address 
 * @param Root Password 
 * @param Sudo User 
 * @param Sudo Password 
 * @param Port 
 */
case class TicketCustomFieldDetails (
  Customer Server Access: Option[String],
  Ip Address: Option[String],
  Root Password: Option[String],
  Sudo User: Option[String],
  Sudo Password: Option[Int],
  Port: Option[Int]
)

