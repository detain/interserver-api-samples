
package org.openapitools.client.model


case class ChargeInvoiceRowsInvoicesValue (
    /* Unique invoice ID. */
    _invoices_id: Option[Number],
    /* Description of the invoice charge. */
    _invoices_description: Option[String],
    /* Invoice amount. */
    _invoices_amount: Option[Number],
    /* Invoice date. */
    _invoices_date: Option[String],
    _invoices_paid: Option[Number],
    _invoices_due_date: Option[String],
    _invoices_currency: Option[String],
    _currency_symbol: Option[String],
    _invoices_date_formatted: Option[String],
    /* This is optional when invoices_paid = 1 this array will show */
    _paid_invoices: Option[Map[String, ChargeInvoiceRowsInvoicesValuePaidInvoicesValue]]
)
object ChargeInvoiceRowsInvoicesValue {
    def toStringBody(var_invoices_id: Object, var_invoices_description: Object, var_invoices_amount: Object, var_invoices_date: Object, var_invoices_paid: Object, var_invoices_due_date: Object, var_invoices_currency: Object, var_currency_symbol: Object, var_invoices_date_formatted: Object, var_paid_invoices: Object) =
        s"""
        | {
        | "invoices_id":$var_invoices_id,"invoices_description":$var_invoices_description,"invoices_amount":$var_invoices_amount,"invoices_date":$var_invoices_date,"invoices_paid":$var_invoices_paid,"invoices_due_date":$var_invoices_due_date,"invoices_currency":$var_invoices_currency,"currency_symbol":$var_currency_symbol,"invoices_date_formatted":$var_invoices_date_formatted,"paid_invoices":$var_paid_invoices
        | }
        """.stripMargin
}
