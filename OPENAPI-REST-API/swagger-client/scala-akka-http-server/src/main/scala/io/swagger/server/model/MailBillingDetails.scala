package io.swagger.server.model


/**
 * Billing information for a mail service including payment status, billing cycle, and cost.
 *
 * @param service_last_invoice_date The last invoice date of the service. for example: ''July 16, 2023''
 * @param service_payment_status The payment status of the service. for example: ''Unpaid''
 * @param service_frequency The frequency of the service payment. for example: ''Monthly''
 * @param next_date The next payment date of the service. for example: ''2023-08-16T00:55:05.000Z''
 * @param service_next_invoice_date The next invoice date of the service. for example: ''August 16, 2023''
 * @param service_currency The currency of the service. for example: ''USD''
 * @param service_currency_symbol The currency symbol of the service. for example: ''$''
 * @param service_cost_info The cost information of the service. for example: ''1.00''
 * @param service_extra Extra information for the service. for example: ''[]''
 * @param service_extra_json Extra JSON information for the service. for example: ''[]''
 */
case class MailBillingDetails (
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

