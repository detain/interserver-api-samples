package io.swagger.server.model


/**
 * @param links 
 * @param count Number of licenses. for example: ''1''
 */
case class Home_services_licenses (
  links: Option[HomeServicesLicensesLinks],
  count: Option[Int]
)

