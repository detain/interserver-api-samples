package io.swagger.server.model


/**
 * @param domains 
 * @param webhosting 
 * @param vps 
 * @param licenses 
 * @param backups 
 * @param servers 
 * @param quickservers 
 */
case class Home_details_modules (
  domains: Option[HomeDetailsModulesDomains],
  webhosting: Option[HomeDetailsModulesWebhosting],
  vps: Option[HomeDetailsModulesVps],
  licenses: Option[HomeDetailsModulesLicenses],
  backups: Option[HomeDetailsModulesBackups],
  servers: Option[HomeDetailsModulesServers],
  quickservers: Option[HomeDetailsModulesQuickservers]
)

