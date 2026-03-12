package io.swagger.server.model


/**
 * @param serviceInfo 
 * @param client_links 
 * @param billingDetails 
 * @param custCurrency 
 * @param custCurrencySymbol 
 * @param serviceMaster 
 * @param `package` 
 * @param os_template 
 * @param serviceExtra 
 * @param extraInfoTables 
 * @param cpu_graph_data 
 * @param module 
 * @param token 
 * @param da_link 
 * @param sr_link 
 * @param cp_data 
 * @param da_data 
 * @param plesk12_data 
 * @param serviceAddons 
 */
case class Vps (
  serviceInfo: VpsServiceInfo,
  client_links: List[VpsClientLink],
  billingDetails: VpsBillingDetails,
  custCurrency: String,
  custCurrencySymbol: String,
  serviceMaster: VpsServiceMaster,
  `package`: String,
  os_template: Option[String],
  serviceExtra: VpsServiceExtra,
  extraInfoTables: VpsExtraInfoTables,
  cpu_graph_data: Option[],
  module: String,
  token: String,
  da_link: Int,
  sr_link: Int,
  cp_data: VpsCPData,
  da_data: VpsDAData,
  plesk12_data: VpsPlesk12Data,
  serviceAddons: VpsServiceAddons
)

