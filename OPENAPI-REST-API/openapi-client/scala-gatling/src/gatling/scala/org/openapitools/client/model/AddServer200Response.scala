
package org.openapitools.client.model


case class AddServer200Response (
    /* Status message. */
    _text: Option[String],
    /* Invoice ID for payment. */
    _invoice: Option[Integer],
    /* Server order ID. */
    _order: Option[Integer]
)
object AddServer200Response {
    def toStringBody(var_text: Object, var_invoice: Object, var_order: Object) =
        s"""
        | {
        | "text":$var_text,"invoice":$var_invoice,"order":$var_order
        | }
        """.stripMargin
}
