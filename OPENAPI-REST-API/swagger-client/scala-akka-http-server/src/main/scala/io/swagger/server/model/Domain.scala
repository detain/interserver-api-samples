package io.swagger.server.model


/**
 * Full detail view of a domain service including billing, contacts, DNS, and configuration.
 *
 * @param serviceInfo 
 * @param serviceTypes 
 * @param client_links 
 * @param billingDetails 
 * @param custCurrency 
 * @param custCurrencySymbol 
 * @param serviceExtra 
 * @param extraInfoTables 
 * @param serviceType 
 * @param contact_details 
 * @param pwarning 
 * @param transfer_info 
 * @param errors 
 * @param domain_logs 
 * @param allInfo 
 * @param registrarStatus 
 * @param locked 
 * @param whoisPrivacy 
 * @param autoRenew 
 */
case class Domain (
  serviceInfo: Option[DomainServiceInfo],
  serviceTypes: Option[Map[String, DomainServiceType]],
  client_links: Option[List[DomainClientLink]],
  billingDetails: Option[DomainBillingDetails],
  custCurrency: Option[String],
  custCurrencySymbol: Option[String],
  serviceExtra: Option[DomainBillingExtra],
  extraInfoTables: Option[BackupExtraInfoTables],
  serviceType: Option[DomainServiceType],
  contact_details: Option[DomainContactDetails],
  pwarning: Option[String],
  transfer_info: Option[String],
  errors: Option[Boolean],
  domain_logs: Option[List[String]],
  allInfo: Option[DomainAllInfo],
  registrarStatus: Option[String],
  locked: Option[String],
  whoisPrivacy: Option[String],
  autoRenew: Option[String]
)

