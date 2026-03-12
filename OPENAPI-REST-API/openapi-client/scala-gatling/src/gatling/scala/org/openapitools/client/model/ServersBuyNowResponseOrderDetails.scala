
package org.openapitools.client.model


case class ServersBuyNowResponseOrderDetails (
    /* The newly created service ID for the ordered server. */
    _service_id: Option[Number],
    /* The invoice ID generated for the order. */
    _invoice_id: Option[Number]
)
object ServersBuyNowResponseOrderDetails {
    def toStringBody(var_service_id: Object, var_invoice_id: Object) =
        s"""
        | {
        | "service_id":$var_service_id,"invoice_id":$var_invoice_id
        | }
        """.stripMargin
}
