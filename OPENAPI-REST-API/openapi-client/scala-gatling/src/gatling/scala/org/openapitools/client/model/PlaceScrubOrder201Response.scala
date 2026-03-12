
package org.openapitools.client.model


case class PlaceScrubOrder201Response (
    _success: Option[Boolean],
    _text: Option[String],
    _order_details: Option[PlaceScrubOrder201ResponseOrderDetails]
)
object PlaceScrubOrder201Response {
    def toStringBody(var_success: Object, var_text: Object, var_order_details: Object) =
        s"""
        | {
        | "success":$var_success,"text":$var_text,"order_details":$var_order_details
        | }
        """.stripMargin
}
