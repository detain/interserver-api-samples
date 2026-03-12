package io.swagger.server.model

import java.util.Date

/**
 * @param license_id License ID for example: ''386522''
 * @param license_type License type for example: ''5034''
 * @param license_currency License currency for example: ''USD''
 * @param license_order_date License order date for example: ''2020-01-14T10:48:14Z''
 * @param license_custid Customer ID for example: ''771282''
 * @param license_ip License IP for example: ''1.2.3.4''
 * @param license_status License status for example: ''active''
 * @param license_hostname License hostname
 * @param license_key License key
 * @param license_invoice License invoice for example: ''18704419''
 * @param license_coupon License coupon for example: ''1836''
 * @param license_extra Additional license information
 */
case class LicenseServiceInfo (
  license_id: String,
  license_type: String,
  license_currency: String,
  license_order_date: Date,
  license_custid: String,
  license_ip: String,
  license_status: String,
  license_hostname: Option[String],
  license_key: Option[String],
  license_invoice: String,
  license_coupon: String,
  license_extra: Option[String]
)

