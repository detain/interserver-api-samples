package io.swagger.server.model


/**
 * = BillingInvoiceList =
 *
 * Summary list of invoices for the account.
 *
 * @param rows Invoice rows returned for the account.
 * @param summary Totals and summary data for the invoices list.
 */
case class BillingInvoiceList (
  rows: Option[List[Object]],
  summary: Option[Object]
)

