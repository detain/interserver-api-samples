
package org.openapitools.client.model


case class GetScrubIpDetails200Response (
    _serviceInfo: Option[GetScrubIpDetails200ResponseServiceInfo],
    _client_links: Option[List[GetScrubIpDetails200ResponseClientLinksInner]],
    _billingDetails: Option[GetScrubIpDetails200ResponseBillingDetails],
    _custCurrency: Option[String],
    _custCurrencySymbol: Option[String],
    _package: Option[String],
    _extraInfoTables: Option[GetScrubIpDetails200ResponseExtraInfoTables],
    _filter_firewall: Option[GetScrubIpDetails200ResponseFilterFirewall]
)
object GetScrubIpDetails200Response {
    def toStringBody(var_serviceInfo: Object, var_client_links: Object, var_billingDetails: Object, var_custCurrency: Object, var_custCurrencySymbol: Object, var_package: Object, var_extraInfoTables: Object, var_filter_firewall: Object) =
        s"""
        | {
        | "serviceInfo":$var_serviceInfo,"client_links":$var_client_links,"billingDetails":$var_billingDetails,"custCurrency":$var_custCurrency,"custCurrencySymbol":$var_custCurrencySymbol,"package":$var_package,"extraInfoTables":$var_extraInfoTables,"filter_firewall":$var_filter_firewall
        | }
        """.stripMargin
}
