package io.swagger.server.model


/**
 * @param serviceInfo 
 * @param client_links 
 * @param billingDetails 
 * @param custCurrency Customer's currency for example: ''USD''
 * @param custCurrencySymbol Currency symbol for customer for example: ''$''
 * @param `package` Package name for example: ''KernelCare License''
 * @param serviceExtra Extra service information
 * @param extraInfoTables 
 * @param service_overview_extra Extra service overview information
 * @param serviceType 
 * @param license_key License key
 */
case class License (
  serviceInfo: LicenseServiceInfo,
  client_links: List[LicenseClientLink],
  billingDetails: LicenseBillingDetails,
  custCurrency: String,
  custCurrencySymbol: String,
  `package`: String,
  serviceExtra: List[String],
  extraInfoTables: License_extraInfoTables,
  service_overview_extra: String,
  serviceType: LicenseServiceType,
  license_key: String
)

