package io.swagger.server.model


/**
 * @param ipmiAuth 
 * @param client_links 
 * @param billingDetails 
 * @param custCurrency 
 * @param custCurrencySymbol 
 * @param `package` 
 * @param serviceExtra 
 * @param locations 
 * @param networkInfo 
 * @param extraInfoTables 
 * @param serviceInfo 
 */
case class Server (
  ipmiAuth: Boolean,
  client_links: List[ServerClientLink],
  billingDetails: ServerBillingDetails,
  custCurrency: String,
  custCurrencySymbol: String,
  `package`: String,
  serviceExtra: List[String],
  locations: Server_locations,
  networkInfo: ServerNetworkInfo,
  extraInfoTables: ServerExtraInfoTables,
  serviceInfo: ServerServiceInfo
)

