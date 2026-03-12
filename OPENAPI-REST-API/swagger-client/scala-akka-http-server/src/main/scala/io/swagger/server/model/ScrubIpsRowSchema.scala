package io.swagger.server.model

import java.math.BigDecimal

/**
 * = Scrub Ips list =
 *
 * @param scrub_ip_id 
 * @param repeat_invoices_cost 
 * @param scrub_ip_ip 
 * @param scrub_ip_status 
 * @param services_name 
 */
case class ScrubIpsRowSchema (
  scrub_ip_id: Option[Int],
  repeat_invoices_cost: Option[BigDecimal],
  scrub_ip_ip: Option[String],
  scrub_ip_status: Option[String],
  services_name: Option[String]
)

