
package org.openapitools.client.model

import java.time.OffsetDateTime

case class LicenseBillingDetails (
    /* Last invoice date */
    _service_last_invoice_date: Option[String],
    /* Payment status */
    _service_payment_status: Option[String],
    /* Service frequency */
    _service_frequency: Option[String],
    /* Next date */
    _next_date: Option[OffsetDateTime],
    /* Next invoice date */
    _service_next_invoice_date: Option[String],
    /* Service currency */
    _service_currency: Option[String],
    /* Service currency symbol */
    _service_currency_symbol: Option[String],
    /* Service coupon */
    _service_coupon: Option[String],
    /* Service cost information */
    _service_cost_info: Option[String],
    /* Additional service information */
    _service_extra: Option[List[String]],
    /* Additional service information in JSON format */
    _service_extra_json: Option[String]
)
object LicenseBillingDetails {
    def toStringBody(var_service_last_invoice_date: Object, var_service_payment_status: Object, var_service_frequency: Object, var_next_date: Object, var_service_next_invoice_date: Object, var_service_currency: Object, var_service_currency_symbol: Object, var_service_coupon: Object, var_service_cost_info: Object, var_service_extra: Object, var_service_extra_json: Object) =
        s"""
        | {
        | "service_last_invoice_date":$var_service_last_invoice_date,"service_payment_status":$var_service_payment_status,"service_frequency":$var_service_frequency,"next_date":$var_next_date,"service_next_invoice_date":$var_service_next_invoice_date,"service_currency":$var_service_currency,"service_currency_symbol":$var_service_currency_symbol,"service_coupon":$var_service_coupon,"service_cost_info":$var_service_cost_info,"service_extra":$var_service_extra,"service_extra_json":$var_service_extra_json
        | }
        """.stripMargin
}
