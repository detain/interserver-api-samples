package io.swagger.server.model


/**
 * Supplementary information tables displayed for a webhosting service (links, DNS, preview).
 *
 * @param links 
 * @param preview 
 * @param dns 
 */
case class WebsiteExtraInfoTables (
  links: Option[WebsiteTable],
  preview: Option[WebsiteTable],
  dns: Option[WebsiteTable]
)

