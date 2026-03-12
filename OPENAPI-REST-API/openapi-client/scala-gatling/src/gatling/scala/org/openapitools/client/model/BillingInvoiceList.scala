
package org.openapitools.client.model


case class BillingInvoiceList (
    /* Invoice rows returned for the account. */
    _rows: Option[List[Any]],
    /* Totals and summary data for the invoices list. */
    _summary: Option[Any]
)
object BillingInvoiceList {
    def toStringBody(var_rows: Object, var_summary: Object) =
        s"""
        | {
        | "rows":$var_rows,"summary":$var_summary
        | }
        """.stripMargin
}
