package io.swagger.server.model

import java.math.BigDecimal

/**
 * A hard drive option available for a dedicated server configuration.
 *
 * @param id 
 * @param short_desc 
 * @param size 
 * @param drive_type 
 * @param monthly_price 
 * @param monthly_price_display 
 */
case class HardDrive (
  id: Option[Int],
  short_desc: Option[String],
  size: Option[String],
  drive_type: Option[String],
  monthly_price: Option[BigDecimal],
  monthly_price_display: Option[String]
)

