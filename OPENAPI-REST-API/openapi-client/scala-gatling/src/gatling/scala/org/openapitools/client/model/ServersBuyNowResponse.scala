
package org.openapitools.client.model


case class ServersBuyNowResponse (
    /* Whether the order was placed successfully. */
    _success: Option[Boolean],
    /* Human-readable status message. */
    _text: Option[String],
    _order_details: Option[ServersBuyNowResponseOrderDetails]
)
object ServersBuyNowResponse {
    def toStringBody(var_success: Object, var_text: Object, var_order_details: Object) =
        s"""
        | {
        | "success":$var_success,"text":$var_text,"order_details":$var_order_details
        | }
        """.stripMargin
}
