package io.swagger.server.model


/**
 * = Root Type for AffiliatePaymentSetup =
 *
 * Affiliate Payment Setup.  Here you can set if you want the payments to go to `prepay` or `paypal` and the PayPal email address.
 *
 * @param affiliate_paypal 
 * @param affiliate_payment_method 
 */
case class AffiliatePaymentSetup (
  affiliate_paypal: Option[String],
  affiliate_payment_method: Option[String]
)

