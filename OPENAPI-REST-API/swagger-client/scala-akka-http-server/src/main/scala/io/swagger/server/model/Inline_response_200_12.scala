package io.swagger.server.model


/**
 * @param serviceInfo 
 * @param client_links 
 * @param billingDetails 
 * @param custCurrency 
 * @param custCurrencySymbol 
 * @param `package` 
 * @param extraInfoTables 
 * @param filter_firewall 
 */
case class Inline_response_200_12 (
  serviceInfo: Option[inline_response_200_12_serviceInfo],
  client_links: Option[List[inline_response_200_12_client_links]],
  billingDetails: Option[inline_response_200_12_billingDetails],
  custCurrency: Option[String],
  custCurrencySymbol: Option[String],
  `package`: Option[String],
  extraInfoTables: Option[inline_response_200_12_extraInfoTables],
  filter_firewall: Option[inline_response_200_12_filter_firewall]
)

