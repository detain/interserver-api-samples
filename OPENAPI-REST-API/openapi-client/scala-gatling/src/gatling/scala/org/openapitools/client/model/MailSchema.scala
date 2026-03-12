
package org.openapitools.client.model


case class MailSchema (
    _serviceInfo: MailServiceInfo,
    /* Links related to the mail service for clients. */
    _client_links: List[MailClientLink],
    _billingDetails: MailBillingDetails,
    /* The customer's currency. */
    _custCurrency: String,
    /* The currency symbol for the customer. */
    _custCurrencySymbol: String,
    /* The package of the mail service. */
    _package: String,
    _extraInfoTables: MailSchemaExtraInfoTables,
    _serviceType: MailServiceType,
    /* The usage count of the mail service. */
    _usage_count: String,
    /* Extra information for the mail service. */
    _serviceExtra: Option[List[String]]
)
object MailSchema {
    def toStringBody(var_serviceInfo: Object, var_client_links: Object, var_billingDetails: Object, var_custCurrency: Object, var_custCurrencySymbol: Object, var_package: Object, var_extraInfoTables: Object, var_serviceType: Object, var_usage_count: Object, var_serviceExtra: Object) =
        s"""
        | {
        | "serviceInfo":$var_serviceInfo,"client_links":$var_client_links,"billingDetails":$var_billingDetails,"custCurrency":$var_custCurrency,"custCurrencySymbol":$var_custCurrencySymbol,"package":$var_package,"extraInfoTables":$var_extraInfoTables,"serviceType":$var_serviceType,"usage_count":$var_usage_count,"serviceExtra":$var_serviceExtra
        | }
        """.stripMargin
}
