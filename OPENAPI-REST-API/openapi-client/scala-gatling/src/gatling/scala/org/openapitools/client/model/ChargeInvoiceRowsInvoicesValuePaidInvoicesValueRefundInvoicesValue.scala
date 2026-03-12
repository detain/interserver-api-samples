
package org.openapitools.client.model


case class ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue (
    _invoices_id: Option[Number],
    _invoices_description: Option[String],
    _invoices_amount: Option[Number],
    _invoices_date: Option[String],
    _invoices_currency: Option[String],
    _currency_symbol: Option[String],
    _invoices_date_formatted: Option[String]
)
object ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue {
    def toStringBody(var_invoices_id: Object, var_invoices_description: Object, var_invoices_amount: Object, var_invoices_date: Object, var_invoices_currency: Object, var_currency_symbol: Object, var_invoices_date_formatted: Object) =
        s"""
        | {
        | "invoices_id":$var_invoices_id,"invoices_description":$var_invoices_description,"invoices_amount":$var_invoices_amount,"invoices_date":$var_invoices_date,"invoices_currency":$var_invoices_currency,"currency_symbol":$var_currency_symbol,"invoices_date_formatted":$var_invoices_date_formatted
        | }
        """.stripMargin
}
