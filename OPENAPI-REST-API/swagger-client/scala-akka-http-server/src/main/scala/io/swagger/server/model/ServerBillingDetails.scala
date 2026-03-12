package io.swagger.server.model


/**
 * Billing information for a dedicated server service including payment status, billing cycle, and cost.
 *
 * @param service_last_invoice_date 
 * @param service_payment_status 
 * @param service_frequency 
 * @param next_date 
 * @param service_next_invoice_date 
 * @param service_currency 
 * @param service_currency_symbol 
 * @param service_cost_info 
 * @param service_extra 
 * @param service_extra_json 
 */
case class ServerBillingDetails (
  service_last_invoice_date: Option[String],
  service_payment_status: Option[String],
  service_frequency: Option[String],
  next_date: Option[String],
  service_next_invoice_date: Option[String],
  service_currency: Option[String],
  service_currency_symbol: Option[String],
  service_cost_info: Option[String],
  service_extra: Option[List[String]],
  service_extra_json: Option[String]
)

