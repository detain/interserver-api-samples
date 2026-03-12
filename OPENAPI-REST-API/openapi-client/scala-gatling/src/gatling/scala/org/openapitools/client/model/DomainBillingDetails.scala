
package org.openapitools.client.model


case class DomainBillingDetails (
    /* Date of the last invoice for the domain. */
    _service_last_invoice_date: Option[String],
    /* Current payment status (e.g., Paid, Unpaid). */
    _service_payment_status: Option[String],
    /* Billing frequency (e.g., Yearly, Monthly). */
    _service_frequency: Option[String],
    /* Next billing date (ISO 8601). */
    _next_date: Option[String],
    /* Human-readable next invoice date. */
    _service_next_invoice_date: Option[String],
    /* Billing currency code. */
    _service_currency: Option[String],
    /* Billing currency symbol. */
    _service_currency_symbol: Option[String],
    /* Cost breakdown information. */
    _service_cost_info: Option[String],
    _service_extra: Option[DomainBillingExtra],
    /* Raw JSON string of extra billing data. */
    _service_extra_json: Option[String]
)
object DomainBillingDetails {
    def toStringBody(var_service_last_invoice_date: Object, var_service_payment_status: Object, var_service_frequency: Object, var_next_date: Object, var_service_next_invoice_date: Object, var_service_currency: Object, var_service_currency_symbol: Object, var_service_cost_info: Object, var_service_extra: Object, var_service_extra_json: Object) =
        s"""
        | {
        | "service_last_invoice_date":$var_service_last_invoice_date,"service_payment_status":$var_service_payment_status,"service_frequency":$var_service_frequency,"next_date":$var_next_date,"service_next_invoice_date":$var_service_next_invoice_date,"service_currency":$var_service_currency,"service_currency_symbol":$var_service_currency_symbol,"service_cost_info":$var_service_cost_info,"service_extra":$var_service_extra,"service_extra_json":$var_service_extra_json
        | }
        """.stripMargin
}
