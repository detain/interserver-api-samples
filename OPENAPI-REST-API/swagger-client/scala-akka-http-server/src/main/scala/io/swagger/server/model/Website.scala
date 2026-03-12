package io.swagger.server.model


/**
 * Full detail view of a webhosting service including billing, service configuration, and panel access links.
 *
 * @param serviceInfo 
 * @param client_links 
 * @param billingDetails 
 * @param custCurrency Customer's currency for example: ''USD''
 * @param custCurrencySymbol Customer currency symbol for example: ''$''
 * @param serviceMaster 
 * @param `package` Package information for example: ''Web Hosting Direct Admin''
 * @param serviceExtra 
 * @param extraInfoTables 
 */
case class Website (
  serviceInfo: Option[WebsiteServiceInfo],
  client_links: Option[List[WebsiteClientLink]],
  billingDetails: Option[WebsiteBillingDetails],
  custCurrency: Option[String],
  custCurrencySymbol: Option[String],
  serviceMaster: Option[WebsiteServiceMaster],
  `package`: Option[String],
  serviceExtra: Option[List[WebsiteServiceExtra]],
  extraInfoTables: Option[WebsiteExtraInfoTables]
)

