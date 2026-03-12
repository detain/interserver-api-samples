package io.swagger.server.model


/**
 * Users services.
 *
 * @param domains 
 * @param webhosting 
 * @param vps 
 * @param licenses 
 * @param servers 
 * @param backups 
 */
case class Home_services (
  domains: Option[Home_services_domains],
  webhosting: Option[Home_services_webhosting],
  vps: Option[Home_services_vps],
  licenses: Option[Home_services_licenses],
  servers: Option[Home_services_servers],
  backups: Option[Home_services_backups]
)

