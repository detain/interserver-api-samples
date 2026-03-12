
package org.openapitools.client.model


case class ChargeInvoiceRows (
    /* Whether the invoice retrieval was successful. */
    _success: Option[Boolean],
    /* List of invoices for the service. */
    _invoices: Option[Map[String, ChargeInvoiceRowsInvoicesValue]]
)
object ChargeInvoiceRows {
    def toStringBody(var_success: Object, var_invoices: Object) =
        s"""
        | {
        | "success":$var_success,"invoices":$var_invoices
        | }
        """.stripMargin
}
