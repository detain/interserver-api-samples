package io.swagger.server.model

import java.math.BigDecimal

/**
 * A hosting control panel option (e.g., cPanel, Plesk) available for server provisioning.
 *
 * @param id 
 * @param short_desc 
 * @param monthly_price 
 */
case class ControlPanel (
  id: Option[Int],
  short_desc: Option[String],
  monthly_price: Option[BigDecimal]
)

