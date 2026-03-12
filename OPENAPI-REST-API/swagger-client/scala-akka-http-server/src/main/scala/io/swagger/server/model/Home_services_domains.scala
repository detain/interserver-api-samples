package io.swagger.server.model


/**
 * @param links 
 * @param count Number of domains. for example: ''5''
 */
case class Home_services_domains (
  links: Option[HomeServicesDomainsLinks],
  count: Option[Int]
)

