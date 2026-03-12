package io.swagger.server.model

import java.math.BigDecimal

/**
 * A RAID configuration option available for a dedicated server.
 *
 * @param id 
 * @param short_desc 
 * @param monthly_price 
 */
case class RaidOption (
  id: Option[Int],
  short_desc: Option[String],
  monthly_price: Option[BigDecimal]
)

