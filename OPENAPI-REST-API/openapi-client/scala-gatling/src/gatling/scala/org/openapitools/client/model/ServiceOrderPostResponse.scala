
package org.openapitools.client.model


case class ServiceOrderPostResponse (
    /* Whether the order was accepted and can proceed to payment. */
    _continue: Option[Boolean],
    /* List of validation errors (empty on success). */
    _errors: Option[List[String]],
    /* Total cost of the order. */
    _total_cost: Option[String],
    /* Primary invoice ID for payment. */
    _iid: Option[String],
    /* All invoice identifiers associated with the order. */
    _iids: Option[List[String]],
    /* Numeric invoice IDs for use with billing endpoints. */
    _real_iids: Option[List[String]],
    /* The new service ID created by the order. */
    _serviceId: Option[Integer],
    /* Human-readable description of the invoice. */
    _invoice_description: Option[String]
)
object ServiceOrderPostResponse {
    def toStringBody(var_continue: Object, var_errors: Object, var_total_cost: Object, var_iid: Object, var_iids: Object, var_real_iids: Object, var_serviceId: Object, var_invoice_description: Object) =
        s"""
        | {
        | "continue":$var_continue,"errors":$var_errors,"total_cost":$var_total_cost,"iid":$var_iid,"iids":$var_iids,"real_iids":$var_real_iids,"serviceId":$var_serviceId,"invoice_description":$var_invoice_description
        | }
        """.stripMargin
}
