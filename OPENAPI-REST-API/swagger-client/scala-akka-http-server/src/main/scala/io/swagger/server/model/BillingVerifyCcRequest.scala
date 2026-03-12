package io.swagger.server.model


/**
 * = BillingVerifyCcRequest =
 *
 * Payload for verifying a credit card through the verification flow.
 *
 * @param idx Card index to verify.
 * @param cc_ccv2 CVV code for verification.
 * @param cc_amount1 First micro-charge amount for verification.
 * @param cc_amount2 Second micro-charge amount for verification.
 * @param terms Whether terms were accepted for verification.
 */
case class BillingVerifyCcRequest (
  idx: Option[Int],
  cc_ccv2: Option[String],
  cc_amount1: Option[String],
  cc_amount2: Option[String],
  terms: Option[Boolean]
)

