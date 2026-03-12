package io.swagger.server.model

import java.math.BigDecimal

/**
 * An IP address block option available for a dedicated server configuration.
 *
 * @param id 
 * @param short_desc 
 * @param qty 
 * @param monthly_price 
 */
case class IpBlock (
  id: Option[Int],
  short_desc: Option[String],
  qty: Option[String],
  monthly_price: Option[BigDecimal]
)

