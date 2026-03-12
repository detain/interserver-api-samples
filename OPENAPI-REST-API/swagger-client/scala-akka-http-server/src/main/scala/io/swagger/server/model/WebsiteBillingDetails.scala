package io.swagger.server.model


/**
 * Billing information for a webhosting service including payment status, billing cycle, and cost.
 *
 * @param service_last_invoice_date Last invoice date for the service
 * @param service_payment_status Payment status for the service
 * @param service_frequency Frequency of the service
 * @param next_date Next date for the service
 * @param service_next_invoice_date Next invoice date for the service
 * @param service_currency Currency for the service for example: ''USD''
 * @param service_currency_symbol Currency symbol for the service for example: ''$''
 * @param service_coupon Coupon for the service
 * @param service_cost_info Cost information for the service
 * @param service_extra 
 * @param service_extra_json Extra information in JSON format for the service
 */
case class WebsiteBillingDetails (
  service_last_invoice_date: Option[String],
  service_payment_status: Option[String],
  service_frequency: Option[String],
  next_date: Option[String],
  service_next_invoice_date: Option[String],
  service_currency: Option[String],
  service_currency_symbol: Option[String],
  service_coupon: Option[String],
  service_cost_info: Option[String],
  service_extra: Option[WebsiteServiceExtra],
  service_extra_json: Option[String]
)

