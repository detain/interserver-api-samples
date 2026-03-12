package io.swagger.server.model

import java.math.BigDecimal

/**
 * = BillingPrepayRequest =
 *
 * Request payload for creating a new prepay balance.
 *
 * @param module Module the prepay should be applied to (for example `default`).
 * @param amount Amount to add to prepay balance. Minimum is $10.
 * @param automatic_use Whether the prepay balance should be used automatically. for example: ''1''
 */
case class BillingPrepayRequest (
  module: Option[String],
  amount: Option[BigDecimal],
  automatic_use: Option[String]
)

