package io.swagger.server.model


/**
 * Billing information for a QuickServer service including payment status, billing cycle, and cost.
 *
 * @param service_last_invoice_date Last invoice date for example: ''April 11, 2023''
 * @param service_payment_status Payment status for example: ''Paid''
 * @param service_frequency Service frequency for example: ''Monthly''
 * @param next_date Next date for example: ''2023-05-11T20:00:06.000Z''
 * @param service_next_invoice_date Next invoice date for example: ''May 11, 2023''
 * @param service_currency Currency for example: ''USD''
 * @param service_currency_symbol Currency symbol for example: ''$''
 * @param service_cost_info Cost information for example: ''49.00''
 * @param service_extra 
 * @param service_extra_json Extra information (JSON format) for example: ''{"platform":"kvm"}''
 */
case class QuickserverBillingDetails (
  service_last_invoice_date: Option[String],
  service_payment_status: Option[String],
  service_frequency: Option[String],
  next_date: Option[String],
  service_next_invoice_date: Option[String],
  service_currency: Option[String],
  service_currency_symbol: Option[String],
  service_cost_info: Option[String],
  service_extra: Option[QuickserverServiceExtra],
  service_extra_json: Option[String]
)

