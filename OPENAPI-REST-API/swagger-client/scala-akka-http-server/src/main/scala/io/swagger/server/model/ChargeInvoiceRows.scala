package io.swagger.server.model


/**
 * Billing invoices associated with a service, including invoice IDs, descriptions, amounts, and payment status.
 *
 * @param success Whether the invoice retrieval was successful.
 * @param invoices List of invoices for the service.
 */
case class ChargeInvoiceRows (
  success: Option[Boolean],
  invoices: Option[Map[String, ChargeInvoiceRows_invoices]]
)

