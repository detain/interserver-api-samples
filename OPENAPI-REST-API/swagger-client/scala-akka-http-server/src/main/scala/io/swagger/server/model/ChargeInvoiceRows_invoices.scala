package io.swagger.server.model

import java.math.BigDecimal

/**
 * @param invoices_id Unique invoice ID.
 * @param invoices_description Description of the invoice charge.
 * @param invoices_amount Invoice amount.
 * @param invoices_date Invoice date.
 * @param invoices_paid 
 * @param invoices_due_date 
 * @param invoices_currency 
 * @param currency_symbol 
 * @param invoices_date_formatted 
 * @param paid_invoices This is optional when invoices_paid = 1 this array will show
 */
case class ChargeInvoiceRows_invoices (
  invoices_id: Option[BigDecimal],
  invoices_description: Option[String],
  invoices_amount: Option[BigDecimal],
  invoices_date: Option[String],
  invoices_paid: Option[BigDecimal],
  invoices_due_date: Option[String],
  invoices_currency: Option[String],
  currency_symbol: Option[String],
  invoices_date_formatted: Option[String],
  paid_invoices: Option[Map[String, ChargeInvoiceRows_paid_invoices]]
)

