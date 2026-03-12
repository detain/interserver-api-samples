package io.swagger.server.model

import java.math.BigDecimal

/**
 * @param serviceInfo 
 * @param client_links 
 * @param billingDetails 
 * @param custCurrency Currency of the customer for example: ''USD''
 * @param custCurrencySymbol Currency symbol of the customer for example: ''$''
 * @param serviceMaster 
 * @param `package` Package name for example: ''Rapid Deploy Server''
 * @param os_template Operating system template for example: ''Ubuntu 22.04''
 * @param serviceExtra 
 * @param extraInfoTables 
 * @param cpu_graph_data CPU graph data for example: ''{"labels":[],"value":[]}''
 * @param bandwidth_xaxis Bandwidth x-axis data for example: ''[]''
 * @param bandwidth_yaxis Bandwidth y-axis data for example: ''[]''
 * @param module Module information for example: ''quickservers''
 * @param token Authentication token for example: ''%3Ftoken%3DAKLFIJOAQIRFOPIEWQRURQOIURWQOI''
 * @param service_disk_used Used disk space for example: ''0.00 GB''
 * @param service_disk_total Total disk space for example: ''0.00 GB''
 * @param disk_percentage Disk usage percentage for example: ''32.27''
 * @param memory Memory information for example: ''0GB''
 * @param hdd HDD information for example: ''0GB''
 * @param service_overview_extra 
 */
case class Quickserver (
  serviceInfo: QuickserverServiceInfo,
  client_links: List[QuickserverClientLink],
  billingDetails: QuickserverBillingDetails,
  custCurrency: String,
  custCurrencySymbol: String,
  serviceMaster: QuickserverServiceMaster,
  `package`: String,
  os_template: String,
  serviceExtra: Quickserver_serviceExtra,
  extraInfoTables: Quickserver_extraInfoTables,
  cpu_graph_data: String,
  bandwidth_xaxis: String,
  bandwidth_yaxis: String,
  module: String,
  token: String,
  service_disk_used: String,
  service_disk_total: String,
  disk_percentage: BigDecimal,
  memory: String,
  hdd: String,
  service_overview_extra: List[String]
)

