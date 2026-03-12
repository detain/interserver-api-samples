package io.swagger.server.model

import java.math.BigDecimal

/**
 * An operating system option available for server provisioning.
 *
 * @param id 
 * @param short_desc 
 * @param monthly_price 
 */
case class OperatingSystem (
  id: Option[Int],
  short_desc: Option[String],
  monthly_price: Option[BigDecimal]
)

