package io.swagger.server.model


/**
 * Full detail view of a backup service including billing, service info, and configuration.
 *
 * @param serviceInfo 
 * @param client_links 
 * @param billingDetails 
 * @param custCurrency Customer's currency. for example: ''USD''
 * @param custCurrencySymbol Customer's currency symbol. for example: ''$''
 * @param serviceMaster 
 * @param `package` Package information.
 * @param serviceExtra 
 * @param extraInfoTables 
 */
case class Backup (
  serviceInfo: Option[BackupServiceInfo],
  client_links: Option[List[BackupClientLink]],
  billingDetails: Option[BackupBillingDetails],
  custCurrency: Option[String],
  custCurrencySymbol: Option[String],
  serviceMaster: Option[BackupServiceMaster],
  `package`: Option[String],
  serviceExtra: Option[BackupServiceExtra],
  extraInfoTables: Option[BackupExtraInfoTables]
)

