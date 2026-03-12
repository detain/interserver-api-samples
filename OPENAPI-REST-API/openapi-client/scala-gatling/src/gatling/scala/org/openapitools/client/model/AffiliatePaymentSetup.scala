
package org.openapitools.client.model


case class AffiliatePaymentSetup (
    _affiliate_paypal: Option[String],
    _affiliate_payment_method: Option[String]
)
object AffiliatePaymentSetup {
    def toStringBody(var_affiliate_paypal: Object, var_affiliate_payment_method: Object) =
        s"""
        | {
        | "affiliate_paypal":$var_affiliate_paypal,"affiliate_payment_method":$var_affiliate_payment_method
        | }
        """.stripMargin
}
