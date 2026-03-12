package io.swagger.server.model


/**
 * Billing information for a domain service including payment status, dates, and cost.
 *
 * @param service_last_invoice_date Date of the last invoice for the domain.
 * @param service_payment_status Current payment status (e.g., Paid, Unpaid).
 * @param service_frequency Billing frequency (e.g., Yearly, Monthly).
 * @param next_date Next billing date (ISO 8601).
 * @param service_next_invoice_date Human-readable next invoice date.
 * @param service_currency Billing currency code.
 * @param service_currency_symbol Billing currency symbol.
 * @param service_cost_info Cost breakdown information.
 * @param service_extra 
 * @param service_extra_json Raw JSON string of extra billing data.
 */
case class DomainBillingDetails (
  service_last_invoice_date: Option[String],
  service_payment_status: Option[String],
  service_frequency: Option[String],
  next_date: Option[String],
  service_next_invoice_date: Option[String],
  service_currency: Option[String],
  service_currency_symbol: Option[String],
  service_cost_info: Option[String],
  service_extra: Option[DomainBillingExtra],
  service_extra_json: Option[String]
)

