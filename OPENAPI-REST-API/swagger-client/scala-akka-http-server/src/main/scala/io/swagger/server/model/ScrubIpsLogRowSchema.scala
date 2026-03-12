package io.swagger.server.model

import java.math.BigDecimal

/**
 * = Scrub Ips logs =
 *
 * @param date 
 * @param filter 
 * @param blocked_ip 
 * @param target_ip 
 * @param target_port 
 * @param protocol 
 * @param byte_count 
 * @param xdp_action 
 */
case class ScrubIpsLogRowSchema (
  date: Option[String],
  filter: Option[String],
  blocked_ip: Option[String],
  target_ip: Option[String],
  target_port: Option[BigDecimal],
  protocol: Option[String],
  byte_count: Option[BigDecimal],
  xdp_action: Option[String]
)

