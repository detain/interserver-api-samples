
package org.openapitools.client.model


case class ServerBillingDetails (
    _service_last_invoice_date: Option[String],
    _service_payment_status: Option[String],
    _service_frequency: Option[String],
    _next_date: Option[String],
    _service_next_invoice_date: Option[String],
    _service_currency: Option[String],
    _service_currency_symbol: Option[String],
    _service_cost_info: Option[String],
    _service_extra: Option[List[String]],
    _service_extra_json: Option[String]
)
object ServerBillingDetails {
    def toStringBody(var_service_last_invoice_date: Object, var_service_payment_status: Object, var_service_frequency: Object, var_next_date: Object, var_service_next_invoice_date: Object, var_service_currency: Object, var_service_currency_symbol: Object, var_service_cost_info: Object, var_service_extra: Object, var_service_extra_json: Object) =
        s"""
        | {
        | "service_last_invoice_date":$var_service_last_invoice_date,"service_payment_status":$var_service_payment_status,"service_frequency":$var_service_frequency,"next_date":$var_next_date,"service_next_invoice_date":$var_service_next_invoice_date,"service_currency":$var_service_currency,"service_currency_symbol":$var_service_currency_symbol,"service_cost_info":$var_service_cost_info,"service_extra":$var_service_extra,"service_extra_json":$var_service_extra_json
        | }
        """.stripMargin
}
