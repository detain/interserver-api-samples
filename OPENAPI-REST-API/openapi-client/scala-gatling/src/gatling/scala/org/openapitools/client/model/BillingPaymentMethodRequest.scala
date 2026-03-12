
package org.openapitools.client.model


case class BillingPaymentMethodRequest (
    /* Payment method identifier (cc, paypal, or cc{index}). */
    _payment_method: Option[String],
    /* Whether automatic credit card payments are enabled. */
    _cc_auto: Option[String]
)
object BillingPaymentMethodRequest {
    def toStringBody(var_payment_method: Object, var_cc_auto: Object) =
        s"""
        | {
        | "payment_method":$var_payment_method,"cc_auto":$var_cc_auto
        | }
        """.stripMargin
}
