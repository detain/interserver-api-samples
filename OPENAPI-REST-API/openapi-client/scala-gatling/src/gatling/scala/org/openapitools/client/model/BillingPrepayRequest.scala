
package org.openapitools.client.model


case class BillingPrepayRequest (
    /* Module the prepay should be applied to (for example `default`). */
    _module: Option[String],
    /* Amount to add to prepay balance. Minimum is $10. */
    _amount: Option[Number],
    /* Whether the prepay balance should be used automatically. */
    _automatic_use: Option[String]
)
object BillingPrepayRequest {
    def toStringBody(var_module: Object, var_amount: Object, var_automatic_use: Object) =
        s"""
        | {
        | "module":$var_module,"amount":$var_amount,"automatic_use":$var_automatic_use
        | }
        """.stripMargin
}
