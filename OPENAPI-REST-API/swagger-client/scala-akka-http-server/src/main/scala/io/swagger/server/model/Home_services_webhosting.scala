package io.swagger.server.model


/**
 * @param links 
 * @param count Number of web hosting services. for example: ''8''
 */
case class Home_services_webhosting (
  links: Option[HomeServicesWebhostingLinks],
  count: Option[Int]
)

