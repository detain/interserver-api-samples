package io.swagger.server.model


/**
 * @param serviceInfo 
 * @param client_links Links related to the mail service for clients.
 * @param billingDetails 
 * @param custCurrency The customer's currency. for example: ''USD''
 * @param custCurrencySymbol The currency symbol for the customer. for example: ''$''
 * @param `package` The package of the mail service. for example: ''MailBaby Mail''
 * @param serviceExtra Extra information for the mail service. for example: ''[]''
 * @param extraInfoTables 
 * @param serviceType 
 * @param usage_count The usage count of the mail service. for example: ''0''
 */
case class MailSchema (
  serviceInfo: MailServiceInfo,
  client_links: List[MailClientLink],
  billingDetails: MailBillingDetails,
  custCurrency: String,
  custCurrencySymbol: String,
  `package`: String,
  serviceExtra: Option[List[String]],
  extraInfoTables: MailSchema_extraInfoTables,
  serviceType: MailServiceType,
  usage_count: String
)

