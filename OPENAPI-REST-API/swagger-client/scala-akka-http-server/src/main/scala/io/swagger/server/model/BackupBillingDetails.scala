package io.swagger.server.model


/**
 * @param service_last_invoice_date Last invoice date of the service. for example: ''December 29, 2021''
 * @param service_payment_status Payment status of the service. for example: ''Paid''
 * @param service_frequency Billing frequency of the service. for example: ''Monthly''
 * @param next_date Next billing date of the service. for example: ''2022-01-29T14:09:57.000Z''
 * @param service_next_invoice_date Next invoice date of the service. for example: ''January 29, 2022''
 * @param service_currency Currency of the service. for example: ''USD''
 * @param service_currency_symbol Currency symbol of the service. for example: ''$''
 * @param service_cost_info Cost information of the service. for example: ''3''
 * @param service_extra Service Extra Info for example: ''[]''
 * @param service_extra_json JSON representation of extra service information. for example: ''[]''
 */
case class BackupBillingDetails (
  service_last_invoice_date: Option[String],
  service_payment_status: Option[String],
  service_frequency: Option[String],
  next_date: Option[String],
  service_next_invoice_date: Option[String],
  service_currency: Option[String],
  service_currency_symbol: Option[String],
  service_cost_info: Option[String],
  service_extra: Option[String],
  service_extra_json: Option[String]
)

