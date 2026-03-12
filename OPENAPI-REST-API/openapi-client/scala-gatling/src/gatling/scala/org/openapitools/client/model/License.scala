
package org.openapitools.client.model


case class License (
    _serviceInfo: LicenseServiceInfo,
    _client_links: List[LicenseClientLink],
    _billingDetails: LicenseBillingDetails,
    /* Customer's currency */
    _custCurrency: String,
    /* Currency symbol for customer */
    _custCurrencySymbol: String,
    /* Package name */
    _package: String,
    /* Extra service information */
    _serviceExtra: List[String],
    _extraInfoTables: LicenseExtraInfoTables,
    /* Extra service overview information */
    _service_overview_extra: String,
    _serviceType: LicenseServiceType,
    /* License key */
    _license_key: String
)
object License {
    def toStringBody(var_serviceInfo: Object, var_client_links: Object, var_billingDetails: Object, var_custCurrency: Object, var_custCurrencySymbol: Object, var_package: Object, var_serviceExtra: Object, var_extraInfoTables: Object, var_service_overview_extra: Object, var_serviceType: Object, var_license_key: Object) =
        s"""
        | {
        | "serviceInfo":$var_serviceInfo,"client_links":$var_client_links,"billingDetails":$var_billingDetails,"custCurrency":$var_custCurrency,"custCurrencySymbol":$var_custCurrencySymbol,"package":$var_package,"serviceExtra":$var_serviceExtra,"extraInfoTables":$var_extraInfoTables,"service_overview_extra":$var_service_overview_extra,"serviceType":$var_serviceType,"license_key":$var_license_key
        | }
        """.stripMargin
}
