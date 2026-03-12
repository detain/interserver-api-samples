package io.swagger.server.model


/**
 * @param links 
 * @param count Number of servers. for example: ''1''
 */
case class Home_services_servers (
  links: Option[HomeServicesServersLinks],
  count: Option[Int]
)

