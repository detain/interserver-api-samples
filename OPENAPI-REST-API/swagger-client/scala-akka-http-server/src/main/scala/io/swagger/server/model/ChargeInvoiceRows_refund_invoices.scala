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
 */
case class ChargeInvoiceRows_refund_invoices (
  invoices_id: Option[BigDecimal],
  invoices_description: Option[String],
  invoices_amount: Option[BigDecimal],
  invoices_date: Option[String],
  invoices_currency: Option[String],
  currency_symbol: Option[String],
  invoices_date_formatted: Option[String]
)

