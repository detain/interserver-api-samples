
package org.openapitools.client.model


case class BillingVerifyCcRequest (
    /* Card index to verify. */
    _idx: Option[Integer],
    /* CVV code for verification. */
    _cc_ccv2: Option[String],
    /* First micro-charge amount for verification. */
    _cc_amount1: Option[String],
    /* Second micro-charge amount for verification. */
    _cc_amount2: Option[String],
    /* Whether terms were accepted for verification. */
    _terms: Option[Boolean]
)
object BillingVerifyCcRequest {
    def toStringBody(var_idx: Object, var_cc_ccv2: Object, var_cc_amount1: Object, var_cc_amount2: Object, var_terms: Object) =
        s"""
        | {
        | "idx":$var_idx,"cc_ccv2":$var_cc_ccv2,"cc_amount1":$var_cc_amount1,"cc_amount2":$var_cc_amount2,"terms":$var_terms
        | }
        """.stripMargin
}
