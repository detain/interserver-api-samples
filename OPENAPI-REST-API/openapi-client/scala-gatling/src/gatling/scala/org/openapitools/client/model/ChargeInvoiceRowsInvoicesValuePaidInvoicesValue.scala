
package org.openapitools.client.model


case class ChargeInvoiceRowsInvoicesValuePaidInvoicesValue (
    _invoices_id: Option[String],
    _invoices_description: Option[String],
    _invoices_amount: Option[Number],
    _invoices_date: Option[String],
    _invoices_currency: Option[String],
    _currency_symbol: Option[String],
    _invoices_date_formatted: Option[String],
    _payment_type: Option[String],
    /* This is optional when refund is present this will show */
    _refund_invoices: Option[Map[String, ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue]]
)
object ChargeInvoiceRowsInvoicesValuePaidInvoicesValue {
    def toStringBody(var_invoices_id: Object, var_invoices_description: Object, var_invoices_amount: Object, var_invoices_date: Object, var_invoices_currency: Object, var_currency_symbol: Object, var_invoices_date_formatted: Object, var_payment_type: Object, var_refund_invoices: Object) =
        s"""
        | {
        | "invoices_id":$var_invoices_id,"invoices_description":$var_invoices_description,"invoices_amount":$var_invoices_amount,"invoices_date":$var_invoices_date,"invoices_currency":$var_invoices_currency,"currency_symbol":$var_currency_symbol,"invoices_date_formatted":$var_invoices_date_formatted,"payment_type":$var_payment_type,"refund_invoices":$var_refund_invoices
        | }
        """.stripMargin
}
