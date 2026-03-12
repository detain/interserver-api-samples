
package org.openapitools.client.model


case class PlaceScrubOrder201ResponseOrderDetails (
    _total_cost: Option[Integer],
    _service_id: Option[Integer],
    _invoice_id: Option[Integer],
    _invoice_description: Option[String],
    _cj_params: Option[PlaceScrubOrder201ResponseOrderDetailsCjParams]
)
object PlaceScrubOrder201ResponseOrderDetails {
    def toStringBody(var_total_cost: Object, var_service_id: Object, var_invoice_id: Object, var_invoice_description: Object, var_cj_params: Object) =
        s"""
        | {
        | "total_cost":$var_total_cost,"service_id":$var_service_id,"invoice_id":$var_invoice_id,"invoice_description":$var_invoice_description,"cj_params":$var_cj_params
        | }
        """.stripMargin
}
