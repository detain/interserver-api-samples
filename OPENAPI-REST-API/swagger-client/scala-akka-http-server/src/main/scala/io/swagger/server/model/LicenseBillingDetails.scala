package io.swagger.server.model

import java.util.Date

/**
 * Billing information for a software license including payment status, billing cycle, and cost.
 *
 * @param service_last_invoice_date Last invoice date for example: ''August 14, 2023''
 * @param service_payment_status Payment status for example: ''Paid''
 * @param service_frequency Service frequency for example: ''Monthly''
 * @param next_date Next date for example: ''2023-09-14T09:39:46Z''
 * @param service_next_invoice_date Next invoice date for example: ''September 14, 2023''
 * @param service_currency Service currency for example: ''USD''
 * @param service_currency_symbol Service currency symbol for example: ''$''
 * @param service_coupon Service coupon for example: ''ACOUPONFORLICENSES''
 * @param service_cost_info Service cost information for example: ''0.00''
 * @param service_extra Additional service information
 * @param service_extra_json Additional service information in JSON format for example: ''[""]''
 */
case class LicenseBillingDetails (
  service_last_invoice_date: Option[String],
  service_payment_status: Option[String],
  service_frequency: Option[String],
  next_date: Option[Date],
  service_next_invoice_date: Option[String],
  service_currency: Option[String],
  service_currency_symbol: Option[String],
  service_coupon: Option[String],
  service_cost_info: Option[String],
  service_extra: Option[List[String]],
  service_extra_json: Option[String]
)

