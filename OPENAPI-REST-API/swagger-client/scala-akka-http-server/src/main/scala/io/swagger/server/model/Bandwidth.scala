package io.swagger.server.model

import java.math.BigDecimal

/**
 * A bandwidth option available for a dedicated server configuration.
 *
 * @param id 
 * @param short_desc 
 * @param monthly_price 
 * @param monthly_price_display 
 */
case class Bandwidth (
  id: Option[Int],
  short_desc: Option[String],
  monthly_price: Option[BigDecimal],
  monthly_price_display: Option[String]
)

