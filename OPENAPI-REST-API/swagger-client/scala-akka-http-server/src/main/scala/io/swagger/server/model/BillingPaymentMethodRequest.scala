package io.swagger.server.model


/**
 * = BillingPaymentMethodRequest =
 *
 * Payload for updating the default account payment method.
 *
 * @param payment_method Payment method identifier (cc, paypal, or cc{index}).
 * @param cc_auto Whether automatic credit card payments are enabled.
 */
case class BillingPaymentMethodRequest (
  payment_method: Option[String],
  cc_auto: Option[String]
)

