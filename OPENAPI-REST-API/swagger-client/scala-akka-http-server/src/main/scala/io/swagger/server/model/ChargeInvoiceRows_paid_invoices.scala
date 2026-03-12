package io.swagger.server.model

import java.math.BigDecimal

/**
 * @param invoices_id 
 * @param invoices_description 
 * @param invoices_amount 
 * @param invoices_date 
 * @param invoices_currency 
 * @param currency_symbol 
 * @param invoices_date_formatted 
 * @param payment_type 
 * @param refund_invoices This is optional when refund is present this will show
 */
case class ChargeInvoiceRows_paid_invoices (
  invoices_id: Option[String],
  invoices_description: Option[String],
  invoices_amount: Option[BigDecimal],
  invoices_date: Option[String],
  invoices_currency: Option[String],
  currency_symbol: Option[String],
  invoices_date_formatted: Option[String],
  payment_type: Option[String],
  refund_invoices: Option[Map[String, ChargeInvoiceRows_refund_invoices]]
)

