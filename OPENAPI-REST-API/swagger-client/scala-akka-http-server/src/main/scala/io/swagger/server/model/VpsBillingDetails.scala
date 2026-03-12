package io.swagger.server.model


/**
 * Billing information for a VPS service including payment status, billing cycle, and cost.
 *
 * @param service_last_invoice_date Last invoice date for example: ''July 26, 2023''
 * @param service_payment_status Payment status for example: ''Paid''
 * @param service_frequency Billing frequency for example: ''Monthly''
 * @param next_date Next billing date for example: ''2023-08-26T09:41:12.000Z''
 * @param service_next_invoice_date Next invoice date for example: ''August 26, 2023''
 * @param service_currency Currency used for billing for example: ''USD''
 * @param service_currency_symbol Currency symbol for example: ''$''
 * @param service_coupon Billing coupon code for example: ''TheCouponIUsed''
 * @param service_cost_info Cost information for example: ''0.00''
 * @param service_extra 
 * @param service_extra_json Additional information in JSON format for example: ''{"spice":5903,"snapshots":[{"name":"third","used":36490445,"date":1692095220},{"name":"second","used":40894464,"date":1692181620},{"name":"first","used":54735668,"date":1692268020}]}''
 */
case class VpsBillingDetails (
  service_last_invoice_date: Option[String],
  service_payment_status: Option[String],
  service_frequency: Option[String],
  next_date: Option[String],
  service_next_invoice_date: Option[String],
  service_currency: Option[String],
  service_currency_symbol: Option[String],
  service_coupon: Option[String],
  service_cost_info: Option[String],
  service_extra: Option[VpsServiceExtra],
  service_extra_json: Option[String]
)

