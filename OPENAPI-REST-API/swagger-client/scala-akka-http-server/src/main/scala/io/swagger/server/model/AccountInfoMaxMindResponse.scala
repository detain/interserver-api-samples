package io.swagger.server.model


/**
 * = AccountInfoMaxMindResponse =
 *
 * MaxMind fraud detection scoring data for a credit card transaction.
 *
 * @param distance 
 * @param countryMatch 
 * @param countryCode 
 * @param freeMail 
 * @param anonymousProxy 
 * @param score 
 * @param binMatch 
 * @param binCountry 
 * @param err 
 * @param proxyScore 
 * @param ip_region 
 * @param ip_city 
 * @param ip_latitude 
 * @param ip_longitude 
 * @param binName 
 * @param ip_isp 
 * @param ip_org 
 * @param binNameMatch 
 * @param binPhoneMatch 
 * @param binPhone 
 * @param custPhoneInBillingLoc 
 * @param highRiskCountry 
 * @param queriesRemaining 
 * @param cityPostalMatch 
 * @param shipCityPostalMatch 
 * @param maxmindID 
 * @param ip_asnum 
 * @param ip_userType 
 * @param ip_countryConf 
 * @param ip_regionConf 
 * @param ip_cityConf 
 * @param ip_postalCode 
 * @param ip_postalConf 
 * @param ip_accuracyRadius 
 * @param ip_netSpeedCell 
 * @param ip_metroCode 
 * @param ip_areaCode 
 * @param ip_timeZone 
 * @param ip_regionName 
 * @param ip_domain 
 * @param ip_countryName 
 * @param ip_continentCode 
 * @param ip_corporateProxy 
 * @param carderEmail 
 * @param highRiskUsername 
 * @param highRiskPassword 
 * @param riskScore 
 * @param isTransProxy 
 * @param prepaid 
 * @param minfraud_version 
 * @param service_level 
 * @param explanation 
 * @param female_name 
 */
case class AccountInfoMaxMindResponse (
  distance: Option[String],
  countryMatch: Option[String],
  countryCode: Option[String],
  freeMail: Option[String],
  anonymousProxy: Option[String],
  score: Option[String],
  binMatch: Option[String],
  binCountry: Option[String],
  err: Option[String],
  proxyScore: Option[String],
  ip_region: Option[String],
  ip_city: Option[String],
  ip_latitude: Option[String],
  ip_longitude: Option[String],
  binName: Option[String],
  ip_isp: Option[String],
  ip_org: Option[String],
  binNameMatch: Option[String],
  binPhoneMatch: Option[String],
  binPhone: Option[String],
  custPhoneInBillingLoc: Option[String],
  highRiskCountry: Option[String],
  queriesRemaining: Option[String],
  cityPostalMatch: Option[String],
  shipCityPostalMatch: Option[String],
  maxmindID: Option[String],
  ip_asnum: Option[String],
  ip_userType: Option[String],
  ip_countryConf: Option[String],
  ip_regionConf: Option[String],
  ip_cityConf: Option[String],
  ip_postalCode: Option[String],
  ip_postalConf: Option[String],
  ip_accuracyRadius: Option[String],
  ip_netSpeedCell: Option[String],
  ip_metroCode: Option[String],
  ip_areaCode: Option[String],
  ip_timeZone: Option[String],
  ip_regionName: Option[String],
  ip_domain: Option[String],
  ip_countryName: Option[String],
  ip_continentCode: Option[String],
  ip_corporateProxy: Option[String],
  carderEmail: Option[String],
  highRiskUsername: Option[String],
  highRiskPassword: Option[String],
  riskScore: Option[OneOfAccountInfoMaxMindResponseRiskScore],
  isTransProxy: Option[String],
  prepaid: Option[String],
  minfraud_version: Option[String],
  service_level: Option[String],
  explanation: Option[String],
  female_name: Option[String]
)

