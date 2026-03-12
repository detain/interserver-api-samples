package io.swagger.server.model


/**
 * @param links 
 * @param count Number of VPS services. for example: ''20''
 */
case class Home_services_vps (
  links: Option[HomeServicesVpsLinks],
  count: Option[Int]
)

